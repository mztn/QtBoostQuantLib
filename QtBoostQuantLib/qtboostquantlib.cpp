//#include "qtboostquantlib.h"
//
//QtBoostQuantLib::QtBoostQuantLib(QWidget *parent, Qt::WFlags flags)
//	: QMainWindow(parent, flags)
//{
//	ui.setupUi(this);
//}
//
//QtBoostQuantLib::~QtBoostQuantLib()
//{
//
//}

#include "qtboostquantlib.h"
#include "ui_mainwindow.h"
#include "qtswap.h"
#include <QtDebug>
#include <QFileDialog>
#include <QMessageBox>
#include <QPushButton>
#include <QSystemLocale>
#include <QDoubleSpinBox>

#include <boost/math/distributions.hpp>
#include <ql/quantlib.hpp>
#include <ql/methods/montecarlo/sample.hpp>
using namespace QuantLib;

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);

	// ファイルメニューの項目を作成する
	QAction* newAction = new QAction(tr("Create New File (&N)"), this);
	newAction->setStatusTip(tr("New file will be created."));

	QAction* saveAction = new QAction(tr("Save File (&S)"), this);
	saveAction->setStatusTip(tr("ファイルを保存します。"));

	QAction* quitAction = new QAction(tr("Close File (&Q)"), this);
	quitAction->setStatusTip(tr("アプリケーションを終了します。"));

	// 編集メニューの項目を作成する
	QAction* selectAllAction = new QAction(tr("Select All (&A)"), this);
	selectAllAction->setStatusTip(tr("全て選択します。"));

	QAction* selectPartAction = new QAction(tr("Select (&P)"), this);
	selectPartAction->setStatusTip(tr("部分選択します。"));

	// シグナルとスロットを接続する
	connect(newAction, SIGNAL(triggered()),
			this, SLOT(menuSelected()));
	connect(saveAction, SIGNAL(triggered()),
			this, SLOT(menuSelected()));
	connect(quitAction, SIGNAL(triggered()),
			this, SLOT(close()));

	connect(selectAllAction, SIGNAL(triggered()),
			this, SLOT(menuSelected()));
	connect(selectPartAction, SIGNAL(triggered()),
			this, SLOT(menuSelected()));

	// ファイルメニューを作成する
	QMenu* fileMenu = this->menuBar()->addMenu(tr("File (&F)"));
	fileMenu->addAction(newAction);
	fileMenu->addAction(saveAction);
	fileMenu->addSeparator();
	fileMenu->addAction(quitAction);

	// 編集メニューを作成する
	QMenu* editMenu = this->menuBar()->addMenu(tr("Edit (&E)"));
	QMenu* selectSubMenu = editMenu->addMenu(tr("Edit (&S)"));
	selectSubMenu->addAction(selectAllAction);
	selectSubMenu->addAction(selectPartAction);

	// Custom Button
	QPushButton *buttonShowSwapNPV = new QPushButton("Custom Button", this);
	buttonShowSwapNPV->setGeometry(850, 500, 100, 30);
	//connect(buttonShowSwapNPV, SIGNAL(clicked()), this, SLOT(showSwapNPV()));
	connect(buttonShowSwapNPV, SIGNAL(clicked()), this, SLOT(calcSwap()));

	ui->doubleSpinBox_Notional->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

	// Setting QTableWidget cells read only
	ui->tableWidget_RatesDeposites->setEditTriggers(QAbstractItemView::NoEditTriggers);
	ui->tableWidget_RatesFRAs->setEditTriggers(QAbstractItemView::NoEditTriggers);
	ui->tableWidget_RatesFutures->setEditTriggers(QAbstractItemView::NoEditTriggers);
	ui->tableWidget_RatesSwaps->setEditTriggers(QAbstractItemView::NoEditTriggers);

	//ui->statusBar->addWidget();

}

MainWindow::~MainWindow()
{
	delete ui;
}



void MainWindow::calcSwap()
{
	//ui->dateEdit_settlementDate->setDateTime(QDateTime::fromString("10/4/2008","d'/'M'/'yyyy"));
	//QDateTime dtcrt = QDateTime::currentDateTime();
	//qDebug("Current time is %d.", dtcrt.toString());	
	/*QString qsSettlementDate = ui->dateEdit_settlementDate->date().toString(QString("yyyyMMdd")); // QString 20040922 <- QString 2004/09/22
	QString qsSettlementDate_y = qsSettlementDate.left(4);
	QString qsSettlementDate_m = qsSettlementDate.mid(5,2);
	QString qsSettlementDate_d = qsSettlementDate.right(2);
	if(qsSettlementDate_m.right(1)==QChar('0'))
		qsSettlementDate_m = qsSettlementDate_m.mid(2);
	if(qsSettlementDate_d.right(1)==QChar('0'))
		qsSettlementDate_d = qsSettlementDate_d.mid(2);*/
	//QString qsSettlementDate_d = qsSettlementDate.right(2).remove(QChar('0'));
	//std::string qsSettlementDate_utf8 = qsSettlementDate.toUtf8().constData(); // string<-QDate	
	//QString qsSettlementDate = ui->dateEdit_settlementDate->date().toString(QString("yyyy-M-d"));
	//QStringList qsSettlementDateList = qsSettlementDate.split("-");
	//Date settlementDate__(ui->dateEdit_settlementDate->date().day(), QuantLib::September, ui->dateEdit_settlementDate->date().year());
	//Date settlementDate_(qsSettlementDateList.at(2).toInt(), QuantLib::September, qsSettlementDateList.at(0).toInt());
	//Date settlementDate(ui->dateEdit_settlementDate->date().day(), (Month)9, ui->dateEdit_settlementDate->date().year());	
	//int intYear = settlementDate.year(); // QString<-int QString::number(intYear)
	//int intMonth = settlementDate.month();
	//int intDay = settlementDate.dayOfMonth();
	//QString qsSettlementDateRecovered = QDate(intYear, intMonth, intDay).toString(QString("yyyy-M-d"));
	//Date settlementDate(ui->dateEdit_settlementDate->date().day(), (Month)(ui->dateEdit_settlementDate->date().month()), ui->dateEdit_settlementDate->date().year());
	//QString qsSettlementDateRecovered = QDate(settlementDate.year(), settlementDate.month(), settlementDate.dayOfMonth()).toString(QString("yyyy-M-d"));
	//QuantLib::Date settlementDate(qtFormSettlementDate.day(), (QuantLib::Month)(qtFormSettlementDate.month()), qtFormSettlementDate.year());

	

	//■　Date settlementDate(22, September, 2004);
	//ui->dateEdit_settlementDate->setDisplayFormat("yyyy'/'MM'/'dd");
	//QDate qtFormSettlementDate = ui->dateEdit_settlementDate->date();
	//QuantLib::Date settlementDate(22, September, 2004);
	//if(!qtFormSettlementDate.isNull() && qtFormSettlementDate.isValid()){
	//	QuantLib::Date settlementDate_(qtFormSettlementDate.day(), (QuantLib::Month)(qtFormSettlementDate.month()), qtFormSettlementDate.year());
	//	settlementDate = settlementDate_;
	//} // else{QMessageBox msgBoxTmp2(this); msgBoxTmp2.setText(tr("Default settlement date is used.")); msgBoxTmp2.exec();}	
	//QString qtFormSettlementDateRecovered = QDate(settlementDate.year(), settlementDate.month(), settlementDate.dayOfMonth()).toString(QString("yyyy-M-d"));

	/////■　Real nominal = 1000000.0;
	//Real nominal = static_cast<Real>(ui->doubleSpinBox_Notional->value());
	/*QString formatQtNumber(int number) {
		QLocale::setDefault(QLocale::English, QLocale::UnitedStates) ;
		return = QString("%L1").arg(number);
	}*/
	
	/////■　Rate fixedRate = 0.04;
	//Rate fixedRate = static_cast<Real>(ui->doubleSpinBox_fixedRate->value());

	/////■　Spread spread = 0.0;
	//Spread spread = static_cast<Spread>(ui->doubleSpinBox_spread->value());

	/////■　Integer lenghtInYears = 5;
	//Integer lenghtInYears =  (Integer)(ui->doubleSpinBox_lenghtInYears->value());

	/////■　VanillaSwap::Type swapType = VanillaSwap::Payer;
	//int comboBoxPayerReceiver = ui->comboBox_swapType->currentIndex();
	//VanillaSwap::Type swapType = VanillaSwap::Receiver; 
	//switch(comboBoxPayerReceiver){
	//	case 0: // Fix Payer
	//		swapType = VanillaSwap::Payer; break; // VanillaSwap::Payer=1
	//	case 1: // Fix Receiver
	//		swapType = VanillaSwap::Receiver; break; // VanillaSwap::Receiver=-1
	//}


	QString msgBosQString = ui->tableWidget_RatesDeposites->item(4,1)->text();
	int nRow = ui->tableWidget_RatesDeposites->rowCount();
	int nCol = ui->tableWidget_RatesDeposites->columnCount();
	msgBosQString.append(tr("(")).append(QString::number(nRow)).append(tr(",")).append(QString::number(nCol)).append(tr(")"));

	Rate d1wQuote = static_cast<Rate>(ui->tableWidget_RatesDeposites->item(-1,1)->text().toDouble());
	msgBosQString = QString::number(static_cast<double>(d1wQuote)); // d1wQuote=0.0382
	
	//QString msgBosQString = QString::number((int)swapType);
	//QString msgBosQString = QString::number(comboBoxPayerReceiver);
	//QString msgBosQString = QString::number(nominal);
	//QString msgBosQString = QString::number(3.141956945123789);
	QMessageBox msgBox(this);
	msgBox.setWindowTitle(tr("calcSwap()"));
	//msgBox.setText(tr("calcSwap()"));
	//msgBox.setText(dtcrt.toString());
	//msgBox.setText(qsSettlementDate);
	//msgBox.setText(qtFormSettlementDateRecovered);
	msgBox.setText(msgBosQString);
	msgBox.setStandardButtons(QMessageBox::Ok);
	msgBox.setIcon(QMessageBox::Warning);
	msgBox.resize(100, 70);
	msgBox.exec();

	//boost::shared_ptr<QtSwap> qtswp(new QtSwap());

}

void MainWindow::showSwapNPV()
{
	//ui->lineEdit_SwapNPV->setText(tr("1000000000"));
	//ui->lineEdit_SwapFairRate->setText(QString::number(3.141659));
	//ui->lineEdit_SwapFairSpread->setText(QString::number(2.68796451));


	/*********************
	***  MARKET DATA  ***
	*********************/

	Calendar calendar = TARGET();

	/////■ Date settlementDate(22, September, 2004);
	QDate qtFormSettlementDate = ui->dateEdit_settlementDate->date();
	QuantLib::Date settlementDate(22, September, 2004);
	if(!qtFormSettlementDate.isNull() && qtFormSettlementDate.isValid()){
		QuantLib::Date settlementDate_(qtFormSettlementDate.day(), (QuantLib::Month)(qtFormSettlementDate.month()), qtFormSettlementDate.year());
		settlementDate = settlementDate_;
	}

	// must be a business day
	settlementDate = calendar.adjust(settlementDate);

	Integer fixingDays = 2;
	Date todaysDate = calendar.advance(settlementDate, -fixingDays, Days);
	// nothing to do with Date::todaysDate
	Settings::instance().evaluationDate() = todaysDate;


	todaysDate = Settings::instance().evaluationDate();
	std::cout << "Today: " << todaysDate.weekday()
				<< ", " << todaysDate << std::endl;

	std::cout << "Settlement date: " << settlementDate.weekday()
				<< ", " << settlementDate << std::endl;

	// deposits
	Rate d1wQuote=0.0382; d1wQuote = static_cast<Rate>(ui->tableWidget_RatesDeposites->item(-1,1)->text().toDouble()*0.01);
	Rate d1mQuote=0.0372; d1mQuote = static_cast<Rate>(ui->tableWidget_RatesDeposites->item(0,1)->text().toDouble()*0.01);
	Rate d3mQuote=0.0363; d3mQuote = static_cast<Rate>(ui->tableWidget_RatesDeposites->item(1,1)->text().toDouble()*0.01);
	Rate d6mQuote=0.0353; d6mQuote = static_cast<Rate>(ui->tableWidget_RatesDeposites->item(2,1)->text().toDouble()*0.01);
	Rate d9mQuote=0.0348; d9mQuote = static_cast<Rate>(ui->tableWidget_RatesDeposites->item(3,1)->text().toDouble()*0.01);
	Rate d1yQuote=0.0345; d1yQuote = static_cast<Rate>(ui->tableWidget_RatesDeposites->item(4,1)->text().toDouble()*0.01);

	// FRAs
	Rate fra3x6Quote=0.037125; fra3x6Quote = static_cast<Rate>(ui->tableWidget_RatesFRAs->item(-1,1)->text().toDouble()*0.01);
	Rate fra6x9Quote=0.037125; fra6x9Quote = static_cast<Rate>(ui->tableWidget_RatesFRAs->item(0,1)->text().toDouble()*0.01);
	Rate fra6x12Quote=0.037125; fra6x12Quote = static_cast<Rate>(ui->tableWidget_RatesFRAs->item(1,1)->text().toDouble()*0.01);

	// futures
	Real fut1Quote=96.2875; fut1Quote = static_cast<Real>(ui->tableWidget_RatesFutures->item(-1,1)->text().toDouble());
	Real fut2Quote=96.7875; fut2Quote = static_cast<Real>(ui->tableWidget_RatesFutures->item(0,1)->text().toDouble());
	Real fut3Quote=96.9875; fut3Quote = static_cast<Real>(ui->tableWidget_RatesFutures->item(1,1)->text().toDouble());
	Real fut4Quote=96.6875; fut4Quote = static_cast<Real>(ui->tableWidget_RatesFutures->item(2,1)->text().toDouble());
	Real fut5Quote=96.4875; fut5Quote = static_cast<Real>(ui->tableWidget_RatesFutures->item(3,1)->text().toDouble());
	Real fut6Quote=96.3875; fut6Quote = static_cast<Real>(ui->tableWidget_RatesFutures->item(4,1)->text().toDouble());
	Real fut7Quote=96.2875; fut7Quote = static_cast<Real>(ui->tableWidget_RatesFutures->item(5,1)->text().toDouble());
	Real fut8Quote=96.0875; fut8Quote = static_cast<Real>(ui->tableWidget_RatesFutures->item(6,1)->text().toDouble());

	// swaps
	Rate s2yQuote=0.037125; s2yQuote = static_cast<Rate>(ui->tableWidget_RatesSwaps->item(-1,1)->text().toDouble()*0.01);
	Rate s3yQuote=0.0398; s3yQuote = static_cast<Rate>(ui->tableWidget_RatesSwaps->item(0,1)->text().toDouble()*0.01);
	Rate s5yQuote=0.0443; s5yQuote = static_cast<Rate>(ui->tableWidget_RatesSwaps->item(1,1)->text().toDouble()*0.01);
	Rate s10yQuote=0.05165; s10yQuote = static_cast<Rate>(ui->tableWidget_RatesSwaps->item(2,1)->text().toDouble()*0.01);
	Rate s15yQuote=0.055175; s15yQuote = static_cast<Rate>(ui->tableWidget_RatesSwaps->item(3,1)->text().toDouble()*0.01);


	/********************
	***    QUOTES    ***
	********************/

	// SimpleQuote stores a value which can be manually changed;
	// other Quote subclasses could read the value from a database
	// or some kind of data feed.

	// deposits
	boost::shared_ptr<Quote> d1wRate(new SimpleQuote(d1wQuote));
	boost::shared_ptr<Quote> d1mRate(new SimpleQuote(d1mQuote));
	boost::shared_ptr<Quote> d3mRate(new SimpleQuote(d3mQuote));
	boost::shared_ptr<Quote> d6mRate(new SimpleQuote(d6mQuote));
	boost::shared_ptr<Quote> d9mRate(new SimpleQuote(d9mQuote));
	boost::shared_ptr<Quote> d1yRate(new SimpleQuote(d1yQuote));
	// FRAs
	boost::shared_ptr<Quote> fra3x6Rate(new SimpleQuote(fra3x6Quote));
	boost::shared_ptr<Quote> fra6x9Rate(new SimpleQuote(fra6x9Quote));
	boost::shared_ptr<Quote> fra6x12Rate(new SimpleQuote(fra6x12Quote));
	// futures
	boost::shared_ptr<Quote> fut1Price(new SimpleQuote(fut1Quote));
	boost::shared_ptr<Quote> fut2Price(new SimpleQuote(fut2Quote));
	boost::shared_ptr<Quote> fut3Price(new SimpleQuote(fut3Quote));
	boost::shared_ptr<Quote> fut4Price(new SimpleQuote(fut4Quote));
	boost::shared_ptr<Quote> fut5Price(new SimpleQuote(fut5Quote));
	boost::shared_ptr<Quote> fut6Price(new SimpleQuote(fut6Quote));
	boost::shared_ptr<Quote> fut7Price(new SimpleQuote(fut7Quote));
	boost::shared_ptr<Quote> fut8Price(new SimpleQuote(fut8Quote));
	// swaps
	boost::shared_ptr<Quote> s2yRate(new SimpleQuote(s2yQuote));
	boost::shared_ptr<Quote> s3yRate(new SimpleQuote(s3yQuote));
	boost::shared_ptr<Quote> s5yRate(new SimpleQuote(s5yQuote));
	boost::shared_ptr<Quote> s10yRate(new SimpleQuote(s10yQuote));
	boost::shared_ptr<Quote> s15yRate(new SimpleQuote(s15yQuote));


	/*********************
		***  RATE HELPERS ***
		*********************/

	// RateHelpers are built from the above quotes together with
	// other instrument dependant infos.  Quotes are passed in
	// relinkable handles which could be relinked to some other
	// data source later.

	// deposits
	DayCounter depositDayCounter = Actual360();

	boost::shared_ptr<RateHelper> d1w(new DepositRateHelper(
		Handle<Quote>(d1wRate),
		1*Weeks, fixingDays,
		calendar, ModifiedFollowing,
		true, depositDayCounter));
	boost::shared_ptr<RateHelper> d1m(new DepositRateHelper(
		Handle<Quote>(d1mRate),
		1*Months, fixingDays,
		calendar, ModifiedFollowing,
		true, depositDayCounter));
	boost::shared_ptr<RateHelper> d3m(new DepositRateHelper(
		Handle<Quote>(d3mRate),
		3*Months, fixingDays,
		calendar, ModifiedFollowing,
		true, depositDayCounter));
	boost::shared_ptr<RateHelper> d6m(new DepositRateHelper(
		Handle<Quote>(d6mRate),
		6*Months, fixingDays,
		calendar, ModifiedFollowing,
		true, depositDayCounter));
	boost::shared_ptr<RateHelper> d9m(new DepositRateHelper(
		Handle<Quote>(d9mRate),
		9*Months, fixingDays,
		calendar, ModifiedFollowing,
		true, depositDayCounter));
	boost::shared_ptr<RateHelper> d1y(new DepositRateHelper(
		Handle<Quote>(d1yRate),
		1*Years, fixingDays,
		calendar, ModifiedFollowing,
		true, depositDayCounter));


	// setup FRAs
	boost::shared_ptr<RateHelper> fra3x6(new FraRateHelper(
		Handle<Quote>(fra3x6Rate),
		3, 6, fixingDays, calendar, ModifiedFollowing,
		true, depositDayCounter));
	boost::shared_ptr<RateHelper> fra6x9(new FraRateHelper(
		Handle<Quote>(fra6x9Rate),
		6, 9, fixingDays, calendar, ModifiedFollowing,
		true, depositDayCounter));
	boost::shared_ptr<RateHelper> fra6x12(new FraRateHelper(
		Handle<Quote>(fra6x12Rate),
		6, 12, fixingDays, calendar, ModifiedFollowing,
		true, depositDayCounter));


	// setup futures
	// Rate convexityAdjustment = 0.0;
	Integer futMonths = 3;
	Date imm = IMM::nextDate(settlementDate);
	boost::shared_ptr<RateHelper> fut1(new FuturesRateHelper(
		Handle<Quote>(fut1Price),
		imm,
		futMonths, calendar, ModifiedFollowing,
		true, depositDayCounter));
	imm = IMM::nextDate(imm+1);
	boost::shared_ptr<RateHelper> fut2(new FuturesRateHelper(
		Handle<Quote>(fut2Price),
		imm,
		futMonths, calendar, ModifiedFollowing,
		true, depositDayCounter));
	imm = IMM::nextDate(imm+1);
	boost::shared_ptr<RateHelper> fut3(new FuturesRateHelper(
		Handle<Quote>(fut3Price),
		imm,
		futMonths, calendar, ModifiedFollowing,
		true, depositDayCounter));
	imm = IMM::nextDate(imm+1);
	boost::shared_ptr<RateHelper> fut4(new FuturesRateHelper(
		Handle<Quote>(fut4Price),
		imm,
		futMonths, calendar, ModifiedFollowing,
		true, depositDayCounter));
	imm = IMM::nextDate(imm+1);
	boost::shared_ptr<RateHelper> fut5(new FuturesRateHelper(
		Handle<Quote>(fut5Price),
		imm,
		futMonths, calendar, ModifiedFollowing,
		true, depositDayCounter));
	imm = IMM::nextDate(imm+1);
	boost::shared_ptr<RateHelper> fut6(new FuturesRateHelper(
		Handle<Quote>(fut6Price),
		imm,
		futMonths, calendar, ModifiedFollowing,
		true, depositDayCounter));
	imm = IMM::nextDate(imm+1);
	boost::shared_ptr<RateHelper> fut7(new FuturesRateHelper(
		Handle<Quote>(fut7Price),
		imm,
		futMonths, calendar, ModifiedFollowing,
		true, depositDayCounter));
	imm = IMM::nextDate(imm+1);
	boost::shared_ptr<RateHelper> fut8(new FuturesRateHelper(
		Handle<Quote>(fut8Price),
		imm,
		futMonths, calendar, ModifiedFollowing,
		true, depositDayCounter));


	// setup swaps
	Frequency swFixedLegFrequency = Annual;
	BusinessDayConvention swFixedLegConvention = Unadjusted;
	DayCounter swFixedLegDayCounter = Thirty360(Thirty360::European);
	boost::shared_ptr<IborIndex> swFloatingLegIndex(new Euribor6M);

	boost::shared_ptr<RateHelper> s2y(new SwapRateHelper(
		Handle<Quote>(s2yRate), 2*Years,
		calendar, swFixedLegFrequency,
		swFixedLegConvention, swFixedLegDayCounter,
		swFloatingLegIndex));
	boost::shared_ptr<RateHelper> s3y(new SwapRateHelper(
		Handle<Quote>(s3yRate), 3*Years,
		calendar, swFixedLegFrequency,
		swFixedLegConvention, swFixedLegDayCounter,
		swFloatingLegIndex));
	boost::shared_ptr<RateHelper> s5y(new SwapRateHelper(
		Handle<Quote>(s5yRate), 5*Years,
		calendar, swFixedLegFrequency,
		swFixedLegConvention, swFixedLegDayCounter,
		swFloatingLegIndex));
	boost::shared_ptr<RateHelper> s10y(new SwapRateHelper(
		Handle<Quote>(s10yRate), 10*Years,
		calendar, swFixedLegFrequency,
		swFixedLegConvention, swFixedLegDayCounter,
		swFloatingLegIndex));
	boost::shared_ptr<RateHelper> s15y(new SwapRateHelper(
		Handle<Quote>(s15yRate), 15*Years,
		calendar, swFixedLegFrequency,
		swFixedLegConvention, swFixedLegDayCounter,
		swFloatingLegIndex));


	/*********************
		**  CURVE BUILDING **
		*********************/

	// Any DayCounter would be fine.
	// ActualActual::ISDA ensures that 30 years is 30.0
	DayCounter termStructureDayCounter =
		ActualActual(ActualActual::ISDA);


	double tolerance = 1.0e-15;

	// A depo-swap curve
	std::vector<boost::shared_ptr<RateHelper> > depoSwapInstruments;
	depoSwapInstruments.push_back(d1w);
	depoSwapInstruments.push_back(d1m);
	depoSwapInstruments.push_back(d3m);
	depoSwapInstruments.push_back(d6m);
	depoSwapInstruments.push_back(d9m);
	depoSwapInstruments.push_back(d1y);
	depoSwapInstruments.push_back(s2y);
	depoSwapInstruments.push_back(s3y);
	depoSwapInstruments.push_back(s5y);
	depoSwapInstruments.push_back(s10y);
	depoSwapInstruments.push_back(s15y);
	boost::shared_ptr<YieldTermStructure> depoSwapTermStructure(
		new PiecewiseYieldCurve<Discount,LogLinear>(
										settlementDate, depoSwapInstruments,
										termStructureDayCounter,
										tolerance));


	// A depo-futures-swap curve
	std::vector<boost::shared_ptr<RateHelper> > depoFutSwapInstruments;
	depoFutSwapInstruments.push_back(d1w);
	depoFutSwapInstruments.push_back(d1m);
	depoFutSwapInstruments.push_back(fut1);
	depoFutSwapInstruments.push_back(fut2);
	depoFutSwapInstruments.push_back(fut3);
	depoFutSwapInstruments.push_back(fut4);
	depoFutSwapInstruments.push_back(fut5);
	depoFutSwapInstruments.push_back(fut6);
	depoFutSwapInstruments.push_back(fut7);
	depoFutSwapInstruments.push_back(fut8);
	depoFutSwapInstruments.push_back(s3y);
	depoFutSwapInstruments.push_back(s5y);
	depoFutSwapInstruments.push_back(s10y);
	depoFutSwapInstruments.push_back(s15y);
	boost::shared_ptr<YieldTermStructure> depoFutSwapTermStructure(
		new PiecewiseYieldCurve<Discount,LogLinear>(
									settlementDate, depoFutSwapInstruments,
									termStructureDayCounter,
									tolerance));


	// A depo-FRA-swap curve
	std::vector<boost::shared_ptr<RateHelper> > depoFRASwapInstruments;
	depoFRASwapInstruments.push_back(d1w);
	depoFRASwapInstruments.push_back(d1m);
	depoFRASwapInstruments.push_back(d3m);
	depoFRASwapInstruments.push_back(fra3x6);
	depoFRASwapInstruments.push_back(fra6x9);
	depoFRASwapInstruments.push_back(fra6x12);
	depoFRASwapInstruments.push_back(s2y);
	depoFRASwapInstruments.push_back(s3y);
	depoFRASwapInstruments.push_back(s5y);
	depoFRASwapInstruments.push_back(s10y);
	depoFRASwapInstruments.push_back(s15y);
	boost::shared_ptr<YieldTermStructure> depoFRASwapTermStructure(
		new PiecewiseYieldCurve<Discount,LogLinear>(
									settlementDate, depoFRASwapInstruments,
									termStructureDayCounter,
									tolerance));


	// Term structures that will be used for pricing:
	// the one used for discounting cash flows
	RelinkableHandle<YieldTermStructure> discountingTermStructure;
	// the one used for forward rate forecasting
	RelinkableHandle<YieldTermStructure> forecastingTermStructure;


	/*********************
	* SWAPS TO BE PRICED *
	**********************/

	// constant nominal 1,000,000 Euro
	/////■ Real nominal = 1000000.0;
	Real nominal = static_cast<Real>(ui->doubleSpinBox_Notional->value());

	// fixed leg
	/////■ Frequency fixedLegFrequency = Annual;
	Frequency fixedLegFrequency = Annual;
	/////■ BusinessDayConvention fixedLegConvention = Unadjusted;
	BusinessDayConvention fixedLegConvention = Unadjusted;
	/////■ DayCounter fixedLegDayCounter = Thirty360(Thirty360::European);
	DayCounter fixedLegDayCounter = Thirty360(Thirty360::European);
	/////■ Rate fixedRate = 0.04;
	Rate fixedRate = static_cast<Real>((ui->doubleSpinBox_fixedRate->value())*0.01);
	
	// floating leg
	/////■　Frequency floatingLegFrequency = Semiannual;
	Frequency floatingLegFrequency = Semiannual;
	int comboBoxFloatingLegFrequency = ui->comboBox_FloatingLegFrequency->currentIndex();
	switch(comboBoxFloatingLegFrequency){
		case 0: // Semiannual
			floatingLegFrequency = Semiannual; break;
		case 1: // Annual
			floatingLegFrequency = Annual; break;
		case 2: // Quarterly
			floatingLegFrequency = Quarterly; break;
	}

	/////■ BusinessDayConvention floatingLegConvention = ModifiedFollowing;
	BusinessDayConvention floatingLegConvention = ModifiedFollowing;
	/////■ DayCounter floatingLegDayCounter = Actual360();
	DayCounter floatingLegDayCounter = Actual360();

	boost::shared_ptr<IborIndex> euriborIndex(
									new Euribor6M(forecastingTermStructure));
	/////■　Spread spread = 0.0;
	Spread spread = static_cast<Spread>((ui->doubleSpinBox_spread->value())*0.01);
	/////■　Integer lenghtInYears = 5;
	Integer lenghtInYears =  (Integer)(ui->doubleSpinBox_lenghtInYears->value());
	/////■　VanillaSwap::Type swapType = VanillaSwap::Payer;
	int comboBoxPayerReceiver = ui->comboBox_swapType->currentIndex();
	VanillaSwap::Type swapType = VanillaSwap::Receiver; 
	switch(comboBoxPayerReceiver){
		case 0: // Fix Payer
			swapType = VanillaSwap::Payer; break; // VanillaSwap::Payer=1
		case 1: // Fix Receiver
			swapType = VanillaSwap::Receiver; break; // VanillaSwap::Receiver=-1
	}
	
	Date maturity = settlementDate + lenghtInYears*Years;
	Schedule fixedSchedule(settlementDate, maturity,
							Period(fixedLegFrequency),
							calendar, fixedLegConvention,
							fixedLegConvention,
							DateGeneration::Forward, false);
	Schedule floatSchedule(settlementDate, maturity,
							Period(floatingLegFrequency),
							calendar, floatingLegConvention,
							floatingLegConvention,
							DateGeneration::Forward, false);
	VanillaSwap spot5YearSwap(swapType, nominal,
		fixedSchedule, fixedRate, fixedLegDayCounter,
		floatSchedule, euriborIndex, spread,
		floatingLegDayCounter);

	Date fwdStart = calendar.advance(settlementDate, 1, Years);
	Date fwdMaturity = fwdStart + lenghtInYears*Years;
	Schedule fwdFixedSchedule(fwdStart, fwdMaturity,
								Period(fixedLegFrequency),
								calendar, fixedLegConvention,
								fixedLegConvention,
								DateGeneration::Forward, false);
	Schedule fwdFloatSchedule(fwdStart, fwdMaturity,
								Period(floatingLegFrequency),
								calendar, floatingLegConvention,
								floatingLegConvention,
								DateGeneration::Forward, false);
	VanillaSwap oneYearForward5YearSwap(swapType, nominal,
		fwdFixedSchedule, fixedRate, fixedLegDayCounter,
		fwdFloatSchedule, euriborIndex, spread,
		floatingLegDayCounter);


	/***************
	* SWAP PRICING *
	****************/

	Real NPV;
	Rate fairRate;
	Spread fairSpread;

	boost::shared_ptr<PricingEngine> swapEngine(
		new DiscountingSwapEngine(discountingTermStructure));

	spot5YearSwap.setPricingEngine(swapEngine);
	oneYearForward5YearSwap.setPricingEngine(swapEngine);

	int swapTermStructureType(0);
	swapTermStructureType = ui->comboBox_TermStructureType->currentIndex();
	//QMessageBox msgBoxTmp(this); msgBoxTmp.setText(QString::number(swapTermStructureType)); msgBoxTmp.exec();
	switch(swapTermStructureType){
		case 0:
			forecastingTermStructure.linkTo(depoSwapTermStructure);
			discountingTermStructure.linkTo(depoSwapTermStructure);
			break;
		case 1:
			forecastingTermStructure.linkTo(depoFutSwapTermStructure);
			discountingTermStructure.linkTo(depoFutSwapTermStructure);
			break;
		case 2:
			forecastingTermStructure.linkTo(depoFRASwapTermStructure);
			discountingTermStructure.linkTo(depoFRASwapTermStructure);
			break;
	}

	NPV = spot5YearSwap.NPV();	
	fairRate = spot5YearSwap.fairRate();
	fairSpread = spot5YearSwap.fairSpread();
	

	ui->lineEdit_SwapNPV->setText(QString::number(static_cast<double>(NPV),'f'));
	ui->lineEdit_SwapFairRate->setText(QString::number(static_cast<double>(fairRate*100.0),'f'));
	ui->lineEdit_SwapFairSpread->setText(QString::number(static_cast<double>(fairSpread*100.0),'f'));

	
}




/**
 * メニューが選択された時に呼び出されるスロット
 */
void MainWindow::menuSelected()
{
	QAction* action = qobject_cast<QAction*>(sender());

	if (action)
		ui->label->setText(action->text() + tr(" was selected."));

	// Message
	// http://ameblo.jp/adagio-allegro/entry-10794653416.html
	QMessageBox msgBox(this);
	msgBox.setWindowTitle(tr("Title"));
	msgBox.setText(tr("This is a message box."));
	msgBox.setStandardButtons(QMessageBox::Ok);
	msgBox.setIcon(QMessageBox::Warning);
	msgBox.resize(100, 70);
	msgBox.exec();
}

/**
 * 最初から用意されてるイベントハンドラメソッド
 * QWidget::changeEvent() のオーバーライド
 *
 * @param e イベントオブジェクト
 */
void MainWindow::changeEvent(QEvent *e)
{
	QMainWindow::changeEvent(e);
	switch (e->type()) {
	case QEvent::LanguageChange:
		ui->retranslateUi(this);
		break;
	default:
		break;
	}
}


// Displaying Call Option Price in a Message Box
Real callFunc(Real spot, Real strike, Rate r, Volatility vol, Time tau, Real x)
{
	Real mean = log(spot)+(r-0.5*vol*vol)*tau;
	Real stdDev = vol*sqrt(tau);
	boost::math::lognormal_distribution<> d(mean,stdDev);
	return (x-strike)*pdf(d,x)*exp(-r*tau);
}

double qlintegration() // call option price 2.6119
{
	Real spot = 100.0;
	Rate r = 0.03;
	Time tau = 0.5;
	Volatility vol = 0.20;
	Real strike = 110.0;

	Real a=strike, b=strike*10.0;

	boost::function<Real(Real)> ptrF;
	ptrF = boost::bind(&callFunc,spot,strike,r,vol,tau,_1);

	Real absAcc = 0.00001;
	Size maxEval = 1000;
	SimpsonIntegral numInt(absAcc, maxEval);
	return numInt(ptrF, a, b);
}

void MainWindow::on_pushButton_pressed()
{
	
	double callOptPrice = qlintegration();
	QString callOptPriceString = QString::number(callOptPrice);
	QMessageBox msgBox(this);
	msgBox.setText(callOptPriceString);
	msgBox.exec();

	Size dim = 1;
	SobolRsg sobolGen(dim);
	std::vector<Real> sampleSobol(sobolGen.dimension());
	sampleSobol = sobolGen.nextSequence().value;
	QString rndnum = QString::number(sampleSobol[0]);
	QMessageBox msgBox2(this);
	msgBox2.setText(rndnum);
	msgBox2.exec();

	BigInteger seed = SeedGenerator::instance().get();
	MersenneTwisterUniformRng unifMt(seed);
	QString rndnum2 = QString::number(unifMt.nextReal());
	QMessageBox msgBox3(this);
	msgBox3.setText(rndnum2);
	msgBox3.exec();

	qDebug() << "Button Pressed!";
}

