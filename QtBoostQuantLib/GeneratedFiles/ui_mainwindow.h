/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon Jun 18 02:04:18 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCalendarWidget>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QDial>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QTableWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QDial *dial;
    QDateEdit *dateEdit;
    QLabel *label;
    QPushButton *pushButton;
    QToolButton *toolButton;
    QProgressBar *progressBar;
    QComboBox *comboBox;
    QLabel *label_2;
    QLabel *label_3;
    QTableWidget *tableWidget;
    QListWidget *listWidget;
    QTreeWidget *treeWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableWidget *tableWidget_RatesDeposites;
    QTableWidget *tableWidget_RatesFRAs;
    QTableWidget *tableWidget_RatesFutures;
    QTableWidget *tableWidget_RatesSwaps;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label_SettlementDate;
    QDateEdit *dateEdit_settlementDate;
    QLabel *label_Nominal;
    QDoubleSpinBox *doubleSpinBox_Notional;
    QLabel *label_LenghtInYears;
    QDoubleSpinBox *doubleSpinBox_lenghtInYears;
    QLabel *label_SwapTermStructureTypeLabel;
    QComboBox *comboBox_TermStructureType;
    QLabel *label_SwapType;
    QComboBox *comboBox_swapType;
    QLabel *label_FixedLeg;
    QLabel *label_FixedLegFrequency;
    QComboBox *comboBox_FixedLegFrequency;
    QLabel *label_FixedLegConvention;
    QComboBox *comboBox_fixedLegConvention;
    QLabel *label_FloatingLegConvention;
    QComboBox *comboBox_floatingLegConvention;
    QLabel *label_FixedLegDayCounter;
    QComboBox *comboBox_fixedLegDayCounter;
    QLabel *label_FixingRate;
    QDoubleSpinBox *doubleSpinBox_fixedRate;
    QLabel *label_FloatingLeg;
    QLabel *label_FloatingLegDayCounter;
    QComboBox *comboBox_floatingLegDayCounter;
    QLabel *label_FloatingLegFrequency;
    QComboBox *comboBox_FloatingLegFrequency;
    QLabel *label_Spread;
    QDoubleSpinBox *doubleSpinBox_spread;
    QPushButton *pushButtonCalcSwap;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_SwapResults;
    QLabel *label_SwapNPV;
    QLabel *label_FairRate;
    QLabel *label_FairSpread;
    QLineEdit *lineEdit_SwapFairSpread;
    QLineEdit *lineEdit_SwapFairRate;
    QLineEdit *lineEdit_SwapNPV;
    QWidget *tab_2;
    QTableView *tableView;
    QCalendarWidget *calendarWidget;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit_2;
    QTextEdit *textEdit;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1082, 840);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(30, 470, 113, 20));
        dial = new QDial(centralWidget);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setGeometry(QRect(340, 430, 50, 64));
        dateEdit = new QDateEdit(centralWidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(290, 500, 110, 22));
        dateEdit->setCalendarPopup(true);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 550, 211, 16));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(380, 590, 75, 23));
        toolButton = new QToolButton(centralWidget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(380, 640, 111, 18));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(350, 720, 118, 23));
        progressBar->setValue(24);
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(420, 510, 69, 22));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(300, 610, 50, 12));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(300, 640, 50, 12));
        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (tableWidget->rowCount() < 3)
            tableWidget->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setItem(1, 2, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setItem(1, 3, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setItem(2, 2, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setItem(2, 3, __qtablewidgetitem18);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(520, 530, 471, 131));
        listWidget = new QListWidget(centralWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(470, 670, 121, 101));
        treeWidget = new QTreeWidget(centralWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(620, 670, 301, 101));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 1061, 431));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tableWidget_RatesDeposites = new QTableWidget(tab);
        if (tableWidget_RatesDeposites->columnCount() < 1)
            tableWidget_RatesDeposites->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget_RatesDeposites->setHorizontalHeaderItem(0, __qtablewidgetitem19);
        if (tableWidget_RatesDeposites->rowCount() < 6)
            tableWidget_RatesDeposites->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget_RatesDeposites->setVerticalHeaderItem(0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget_RatesDeposites->setVerticalHeaderItem(1, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget_RatesDeposites->setVerticalHeaderItem(2, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget_RatesDeposites->setVerticalHeaderItem(3, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget_RatesDeposites->setVerticalHeaderItem(4, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget_RatesDeposites->setVerticalHeaderItem(5, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        __qtablewidgetitem26->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget_RatesDeposites->setItem(0, 0, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        __qtablewidgetitem27->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget_RatesDeposites->setItem(1, 0, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        __qtablewidgetitem28->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget_RatesDeposites->setItem(2, 0, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        __qtablewidgetitem29->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget_RatesDeposites->setItem(3, 0, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        __qtablewidgetitem30->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget_RatesDeposites->setItem(4, 0, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        __qtablewidgetitem31->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget_RatesDeposites->setItem(5, 0, __qtablewidgetitem31);
        tableWidget_RatesDeposites->setObjectName(QString::fromUtf8("tableWidget_RatesDeposites"));
        tableWidget_RatesDeposites->setGeometry(QRect(10, 10, 111, 211));
        QFont font;
        font.setPointSize(9);
        tableWidget_RatesDeposites->setFont(font);
        tableWidget_RatesDeposites->setAutoScrollMargin(16);
        tableWidget_RatesDeposites->verticalHeader()->setDefaultSectionSize(20);
        tableWidget_RatesDeposites->verticalHeader()->setMinimumSectionSize(18);
        tableWidget_RatesFRAs = new QTableWidget(tab);
        if (tableWidget_RatesFRAs->columnCount() < 1)
            tableWidget_RatesFRAs->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget_RatesFRAs->setHorizontalHeaderItem(0, __qtablewidgetitem32);
        if (tableWidget_RatesFRAs->rowCount() < 3)
            tableWidget_RatesFRAs->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget_RatesFRAs->setVerticalHeaderItem(0, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget_RatesFRAs->setVerticalHeaderItem(1, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget_RatesFRAs->setVerticalHeaderItem(2, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        __qtablewidgetitem36->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget_RatesFRAs->setItem(0, 0, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        __qtablewidgetitem37->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget_RatesFRAs->setItem(1, 0, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        __qtablewidgetitem38->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget_RatesFRAs->setItem(2, 0, __qtablewidgetitem38);
        tableWidget_RatesFRAs->setObjectName(QString::fromUtf8("tableWidget_RatesFRAs"));
        tableWidget_RatesFRAs->setGeometry(QRect(130, 10, 121, 211));
        tableWidget_RatesFRAs->setFont(font);
        tableWidget_RatesFRAs->setAutoScrollMargin(16);
        tableWidget_RatesFRAs->verticalHeader()->setDefaultSectionSize(20);
        tableWidget_RatesFRAs->verticalHeader()->setMinimumSectionSize(18);
        tableWidget_RatesFutures = new QTableWidget(tab);
        if (tableWidget_RatesFutures->columnCount() < 1)
            tableWidget_RatesFutures->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidget_RatesFutures->setHorizontalHeaderItem(0, __qtablewidgetitem39);
        if (tableWidget_RatesFutures->rowCount() < 8)
            tableWidget_RatesFutures->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidget_RatesFutures->setVerticalHeaderItem(0, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableWidget_RatesFutures->setVerticalHeaderItem(1, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableWidget_RatesFutures->setVerticalHeaderItem(2, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableWidget_RatesFutures->setVerticalHeaderItem(3, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tableWidget_RatesFutures->setVerticalHeaderItem(4, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tableWidget_RatesFutures->setVerticalHeaderItem(5, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tableWidget_RatesFutures->setVerticalHeaderItem(6, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        tableWidget_RatesFutures->setVerticalHeaderItem(7, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        __qtablewidgetitem48->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget_RatesFutures->setItem(0, 0, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        __qtablewidgetitem49->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget_RatesFutures->setItem(1, 0, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        __qtablewidgetitem50->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget_RatesFutures->setItem(2, 0, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        __qtablewidgetitem51->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget_RatesFutures->setItem(3, 0, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        __qtablewidgetitem52->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget_RatesFutures->setItem(4, 0, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        __qtablewidgetitem53->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget_RatesFutures->setItem(5, 0, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        __qtablewidgetitem54->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget_RatesFutures->setItem(6, 0, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        __qtablewidgetitem55->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget_RatesFutures->setItem(7, 0, __qtablewidgetitem55);
        tableWidget_RatesFutures->setObjectName(QString::fromUtf8("tableWidget_RatesFutures"));
        tableWidget_RatesFutures->setGeometry(QRect(260, 10, 121, 211));
        tableWidget_RatesFutures->setFont(font);
        tableWidget_RatesFutures->setAutoScrollMargin(16);
        tableWidget_RatesFutures->verticalHeader()->setDefaultSectionSize(20);
        tableWidget_RatesFutures->verticalHeader()->setMinimumSectionSize(18);
        tableWidget_RatesSwaps = new QTableWidget(tab);
        if (tableWidget_RatesSwaps->columnCount() < 1)
            tableWidget_RatesSwaps->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        tableWidget_RatesSwaps->setHorizontalHeaderItem(0, __qtablewidgetitem56);
        if (tableWidget_RatesSwaps->rowCount() < 5)
            tableWidget_RatesSwaps->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        tableWidget_RatesSwaps->setVerticalHeaderItem(0, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        tableWidget_RatesSwaps->setVerticalHeaderItem(1, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        tableWidget_RatesSwaps->setVerticalHeaderItem(2, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        tableWidget_RatesSwaps->setVerticalHeaderItem(3, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        tableWidget_RatesSwaps->setVerticalHeaderItem(4, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        __qtablewidgetitem62->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget_RatesSwaps->setItem(0, 0, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        __qtablewidgetitem63->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget_RatesSwaps->setItem(1, 0, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        __qtablewidgetitem64->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget_RatesSwaps->setItem(2, 0, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        __qtablewidgetitem65->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget_RatesSwaps->setItem(3, 0, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        __qtablewidgetitem66->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget_RatesSwaps->setItem(4, 0, __qtablewidgetitem66);
        tableWidget_RatesSwaps->setObjectName(QString::fromUtf8("tableWidget_RatesSwaps"));
        tableWidget_RatesSwaps->setGeometry(QRect(390, 10, 111, 211));
        tableWidget_RatesSwaps->setFont(font);
        tableWidget_RatesSwaps->setAutoScrollMargin(16);
        tableWidget_RatesSwaps->verticalHeader()->setDefaultSectionSize(20);
        tableWidget_RatesSwaps->verticalHeader()->setMinimumSectionSize(18);
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(510, 10, 301, 424));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_SettlementDate = new QLabel(layoutWidget);
        label_SettlementDate->setObjectName(QString::fromUtf8("label_SettlementDate"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_SettlementDate);

        dateEdit_settlementDate = new QDateEdit(layoutWidget);
        dateEdit_settlementDate->setObjectName(QString::fromUtf8("dateEdit_settlementDate"));
        dateEdit_settlementDate->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        dateEdit_settlementDate->setAlignment(Qt::AlignCenter);
        dateEdit_settlementDate->setDateTime(QDateTime(QDate(2004, 9, 22), QTime(0, 0, 0)));
        dateEdit_settlementDate->setMaximumDate(QDate(2099, 12, 31));
        dateEdit_settlementDate->setMinimumDate(QDate(1900, 1, 1));
        dateEdit_settlementDate->setCalendarPopup(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, dateEdit_settlementDate);

        label_Nominal = new QLabel(layoutWidget);
        label_Nominal->setObjectName(QString::fromUtf8("label_Nominal"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_Nominal);

        doubleSpinBox_Notional = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_Notional->setObjectName(QString::fromUtf8("doubleSpinBox_Notional"));
        doubleSpinBox_Notional->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        doubleSpinBox_Notional->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_Notional->setAccelerated(false);
        doubleSpinBox_Notional->setDecimals(0);
        doubleSpinBox_Notional->setMinimum(1);
        doubleSpinBox_Notional->setMaximum(1e+09);
        doubleSpinBox_Notional->setValue(1e+06);

        formLayout->setWidget(1, QFormLayout::FieldRole, doubleSpinBox_Notional);

        label_LenghtInYears = new QLabel(layoutWidget);
        label_LenghtInYears->setObjectName(QString::fromUtf8("label_LenghtInYears"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_LenghtInYears);

        doubleSpinBox_lenghtInYears = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_lenghtInYears->setObjectName(QString::fromUtf8("doubleSpinBox_lenghtInYears"));
        doubleSpinBox_lenghtInYears->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_lenghtInYears->setDecimals(2);
        doubleSpinBox_lenghtInYears->setMinimum(0.01);
        doubleSpinBox_lenghtInYears->setMaximum(100);
        doubleSpinBox_lenghtInYears->setSingleStep(0.01);
        doubleSpinBox_lenghtInYears->setValue(5);

        formLayout->setWidget(2, QFormLayout::FieldRole, doubleSpinBox_lenghtInYears);

        label_SwapTermStructureTypeLabel = new QLabel(layoutWidget);
        label_SwapTermStructureTypeLabel->setObjectName(QString::fromUtf8("label_SwapTermStructureTypeLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_SwapTermStructureTypeLabel);

        comboBox_TermStructureType = new QComboBox(layoutWidget);
        comboBox_TermStructureType->setObjectName(QString::fromUtf8("comboBox_TermStructureType"));

        formLayout->setWidget(3, QFormLayout::FieldRole, comboBox_TermStructureType);

        label_SwapType = new QLabel(layoutWidget);
        label_SwapType->setObjectName(QString::fromUtf8("label_SwapType"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_SwapType);

        comboBox_swapType = new QComboBox(layoutWidget);
        comboBox_swapType->setObjectName(QString::fromUtf8("comboBox_swapType"));

        formLayout->setWidget(4, QFormLayout::FieldRole, comboBox_swapType);

        label_FixedLeg = new QLabel(layoutWidget);
        label_FixedLeg->setObjectName(QString::fromUtf8("label_FixedLeg"));
        QFont font1;
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        font1.setStrikeOut(false);
        label_FixedLeg->setFont(font1);
        label_FixedLeg->setTextFormat(Qt::PlainText);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_FixedLeg);

        label_FixedLegFrequency = new QLabel(layoutWidget);
        label_FixedLegFrequency->setObjectName(QString::fromUtf8("label_FixedLegFrequency"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_FixedLegFrequency);

        comboBox_FixedLegFrequency = new QComboBox(layoutWidget);
        comboBox_FixedLegFrequency->setObjectName(QString::fromUtf8("comboBox_FixedLegFrequency"));

        formLayout->setWidget(6, QFormLayout::FieldRole, comboBox_FixedLegFrequency);

        label_FixedLegConvention = new QLabel(layoutWidget);
        label_FixedLegConvention->setObjectName(QString::fromUtf8("label_FixedLegConvention"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_FixedLegConvention);

        comboBox_fixedLegConvention = new QComboBox(layoutWidget);
        comboBox_fixedLegConvention->setObjectName(QString::fromUtf8("comboBox_fixedLegConvention"));

        formLayout->setWidget(7, QFormLayout::FieldRole, comboBox_fixedLegConvention);

        label_FloatingLegConvention = new QLabel(layoutWidget);
        label_FloatingLegConvention->setObjectName(QString::fromUtf8("label_FloatingLegConvention"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_FloatingLegConvention);

        comboBox_floatingLegConvention = new QComboBox(layoutWidget);
        comboBox_floatingLegConvention->setObjectName(QString::fromUtf8("comboBox_floatingLegConvention"));

        formLayout->setWidget(8, QFormLayout::FieldRole, comboBox_floatingLegConvention);

        label_FixedLegDayCounter = new QLabel(layoutWidget);
        label_FixedLegDayCounter->setObjectName(QString::fromUtf8("label_FixedLegDayCounter"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_FixedLegDayCounter);

        comboBox_fixedLegDayCounter = new QComboBox(layoutWidget);
        comboBox_fixedLegDayCounter->setObjectName(QString::fromUtf8("comboBox_fixedLegDayCounter"));

        formLayout->setWidget(9, QFormLayout::FieldRole, comboBox_fixedLegDayCounter);

        label_FixingRate = new QLabel(layoutWidget);
        label_FixingRate->setObjectName(QString::fromUtf8("label_FixingRate"));

        formLayout->setWidget(10, QFormLayout::LabelRole, label_FixingRate);

        doubleSpinBox_fixedRate = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_fixedRate->setObjectName(QString::fromUtf8("doubleSpinBox_fixedRate"));
        doubleSpinBox_fixedRate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_fixedRate->setAccelerated(false);
        doubleSpinBox_fixedRate->setDecimals(3);
        doubleSpinBox_fixedRate->setMinimum(0.001);
        doubleSpinBox_fixedRate->setMaximum(100);
        doubleSpinBox_fixedRate->setSingleStep(0.001);
        doubleSpinBox_fixedRate->setValue(4);

        formLayout->setWidget(10, QFormLayout::FieldRole, doubleSpinBox_fixedRate);

        label_FloatingLeg = new QLabel(layoutWidget);
        label_FloatingLeg->setObjectName(QString::fromUtf8("label_FloatingLeg"));
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        label_FloatingLeg->setFont(font2);

        formLayout->setWidget(11, QFormLayout::LabelRole, label_FloatingLeg);

        label_FloatingLegDayCounter = new QLabel(layoutWidget);
        label_FloatingLegDayCounter->setObjectName(QString::fromUtf8("label_FloatingLegDayCounter"));

        formLayout->setWidget(12, QFormLayout::LabelRole, label_FloatingLegDayCounter);

        comboBox_floatingLegDayCounter = new QComboBox(layoutWidget);
        comboBox_floatingLegDayCounter->setObjectName(QString::fromUtf8("comboBox_floatingLegDayCounter"));

        formLayout->setWidget(12, QFormLayout::FieldRole, comboBox_floatingLegDayCounter);

        label_FloatingLegFrequency = new QLabel(layoutWidget);
        label_FloatingLegFrequency->setObjectName(QString::fromUtf8("label_FloatingLegFrequency"));

        formLayout->setWidget(13, QFormLayout::LabelRole, label_FloatingLegFrequency);

        comboBox_FloatingLegFrequency = new QComboBox(layoutWidget);
        comboBox_FloatingLegFrequency->setObjectName(QString::fromUtf8("comboBox_FloatingLegFrequency"));

        formLayout->setWidget(13, QFormLayout::FieldRole, comboBox_FloatingLegFrequency);

        label_Spread = new QLabel(layoutWidget);
        label_Spread->setObjectName(QString::fromUtf8("label_Spread"));

        formLayout->setWidget(14, QFormLayout::LabelRole, label_Spread);

        doubleSpinBox_spread = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_spread->setObjectName(QString::fromUtf8("doubleSpinBox_spread"));
        doubleSpinBox_spread->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_spread->setDecimals(3);
        doubleSpinBox_spread->setMaximum(100);
        doubleSpinBox_spread->setSingleStep(0.001);

        formLayout->setWidget(14, QFormLayout::FieldRole, doubleSpinBox_spread);

        pushButtonCalcSwap = new QPushButton(tab);
        pushButtonCalcSwap->setObjectName(QString::fromUtf8("pushButtonCalcSwap"));
        pushButtonCalcSwap->setGeometry(QRect(820, 10, 221, 23));
        layoutWidget1 = new QWidget(tab);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(820, 40, 218, 74));
        gridLayout_SwapResults = new QGridLayout(layoutWidget1);
        gridLayout_SwapResults->setSpacing(6);
        gridLayout_SwapResults->setContentsMargins(11, 11, 11, 11);
        gridLayout_SwapResults->setObjectName(QString::fromUtf8("gridLayout_SwapResults"));
        gridLayout_SwapResults->setContentsMargins(0, 0, 0, 0);
        label_SwapNPV = new QLabel(layoutWidget1);
        label_SwapNPV->setObjectName(QString::fromUtf8("label_SwapNPV"));

        gridLayout_SwapResults->addWidget(label_SwapNPV, 0, 0, 1, 1);

        label_FairRate = new QLabel(layoutWidget1);
        label_FairRate->setObjectName(QString::fromUtf8("label_FairRate"));

        gridLayout_SwapResults->addWidget(label_FairRate, 1, 0, 1, 1);

        label_FairSpread = new QLabel(layoutWidget1);
        label_FairSpread->setObjectName(QString::fromUtf8("label_FairSpread"));

        gridLayout_SwapResults->addWidget(label_FairSpread, 2, 0, 1, 2);

        lineEdit_SwapFairSpread = new QLineEdit(layoutWidget1);
        lineEdit_SwapFairSpread->setObjectName(QString::fromUtf8("lineEdit_SwapFairSpread"));
        lineEdit_SwapFairSpread->setAcceptDrops(false);
        lineEdit_SwapFairSpread->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_SwapFairSpread->setDragEnabled(false);
        lineEdit_SwapFairSpread->setReadOnly(true);

        gridLayout_SwapResults->addWidget(lineEdit_SwapFairSpread, 2, 2, 1, 1);

        lineEdit_SwapFairRate = new QLineEdit(layoutWidget1);
        lineEdit_SwapFairRate->setObjectName(QString::fromUtf8("lineEdit_SwapFairRate"));
        lineEdit_SwapFairRate->setAcceptDrops(false);
        lineEdit_SwapFairRate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_SwapFairRate->setDragEnabled(false);
        lineEdit_SwapFairRate->setReadOnly(true);

        gridLayout_SwapResults->addWidget(lineEdit_SwapFairRate, 1, 2, 1, 1);

        lineEdit_SwapNPV = new QLineEdit(layoutWidget1);
        lineEdit_SwapNPV->setObjectName(QString::fromUtf8("lineEdit_SwapNPV"));
        lineEdit_SwapNPV->setAcceptDrops(false);
        lineEdit_SwapNPV->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_SwapNPV->setDragEnabled(false);
        lineEdit_SwapNPV->setReadOnly(true);

        gridLayout_SwapResults->addWidget(lineEdit_SwapNPV, 0, 2, 1, 1);

        tabWidget->addTab(tab, QString());
        layoutWidget->raise();
        tableWidget_RatesDeposites->raise();
        tableWidget_RatesFRAs->raise();
        tableWidget_RatesFutures->raise();
        tableWidget_RatesSwaps->raise();
        layoutWidget->raise();
        pushButtonCalcSwap->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 570, 256, 192));
        calendarWidget = new QCalendarWidget(centralWidget);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(20, 610, 261, 161));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 470, 75, 23));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(160, 510, 75, 23));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(720, 460, 113, 20));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(580, 460, 104, 31));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(860, 440, 160, 80));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1082, 24));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuFile->addAction(actionExit);

        retranslateUi(MainWindow);
        QObject::connect(lineEdit, SIGNAL(returnPressed()), pushButton_2, SLOT(animateClick()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindow, SLOT(close()));
        QObject::connect(pushButtonCalcSwap, SIGNAL(clicked()), MainWindow, SLOT(showSwapNPV()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "Exit (_E)", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "Calculate!", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\346\226\260\343\201\227\343\201\204\345\210\227", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\346\226\260\343\201\227\343\201\204\345\210\227", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\346\226\260\343\201\227\343\201\204\345\210\227", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\346\226\260\343\201\227\343\201\204\345\210\227", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\346\226\260\343\201\227\343\201\204\350\241\214", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "\346\226\260\343\201\227\343\201\204\350\241\214", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "\346\226\260\343\201\227\343\201\204\350\241\214", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(0, 0);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "11", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(0, 1);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "12", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(0, 2);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "13", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(0, 3);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "14", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(1, 0);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "21", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(1, 1);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "22", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(1, 2);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "23", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->item(1, 3);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "24", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(2, 0);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "31", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(2, 1);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "32", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(2, 2);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "33", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(2, 3);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "34", 0, QApplication::UnicodeUTF8));
        tableWidget->setSortingEnabled(__sortingEnabled);


        const bool __sortingEnabled1 = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "\346\226\260\343\201\227\343\201\204\343\202\242\343\202\244\343\203\206\343\203\240", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "\346\226\260\343\201\227\343\201\204\343\202\242\343\202\244\343\203\206\343\203\240", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWindow", "\346\226\260\343\201\227\343\201\204\343\202\242\343\202\244\343\203\206\343\203\240", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("MainWindow", "\346\226\260\343\201\227\343\201\204\343\202\242\343\202\244\343\203\206\343\203\240", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("MainWindow", "\346\226\260\343\201\227\343\201\204\343\202\242\343\202\244\343\203\206\343\203\240", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem5 = listWidget->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("MainWindow", "\346\226\260\343\201\227\343\201\204\343\202\242\343\202\244\343\203\206\343\203\240", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem6 = listWidget->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("MainWindow", "\346\226\260\343\201\227\343\201\204\343\202\242\343\202\244\343\203\206\343\203\240", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem7 = listWidget->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("MainWindow", "\346\226\260\343\201\227\343\201\204\343\202\242\343\202\244\343\203\206\343\203\240", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem8 = listWidget->item(8);
        ___qlistwidgetitem8->setText(QApplication::translate("MainWindow", "\346\226\260\343\201\227\343\201\204\343\202\242\343\202\244\343\203\206\343\203\240", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem9 = listWidget->item(9);
        ___qlistwidgetitem9->setText(QApplication::translate("MainWindow", "\346\226\260\343\201\227\343\201\204\343\202\242\343\202\244\343\203\206\343\203\240", 0, QApplication::UnicodeUTF8));
        listWidget->setSortingEnabled(__sortingEnabled1);

        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(7, QApplication::translate("MainWindow", "\346\226\260\343\201\227\343\201\204\345\210\227", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(6, QApplication::translate("MainWindow", "\346\226\260\343\201\227\343\201\204\345\210\227", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(5, QApplication::translate("MainWindow", "\346\226\260\343\201\227\343\201\204\345\210\227", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(4, QApplication::translate("MainWindow", "\346\226\260\343\201\227\343\201\204\345\210\227", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(3, QApplication::translate("MainWindow", "\346\226\260\343\201\227\343\201\204\345\210\227", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("MainWindow", "\346\226\260\343\201\227\343\201\204\345\210\227", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("MainWindow", "\346\226\260\343\201\227\343\201\204\345\210\227", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled2 = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("MainWindow", "\346\226\260\343\201\227\343\201\204\343\202\242\343\202\244\343\203\206\343\203\240", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("MainWindow", "\346\226\260\343\201\227\343\201\204\343\202\242\343\202\244\343\203\206\343\203\240", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, QApplication::translate("MainWindow", "\346\226\260\343\201\227\343\201\204\343\202\242\343\202\244\343\203\206\343\203\240", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidget->topLevelItem(3);
        ___qtreewidgetitem4->setText(0, QApplication::translate("MainWindow", "\346\226\260\343\201\227\343\201\204\343\202\242\343\202\244\343\203\206\343\203\240", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidget->topLevelItem(4);
        ___qtreewidgetitem5->setText(0, QApplication::translate("MainWindow", "\346\226\260\343\201\227\343\201\204\343\202\242\343\202\244\343\203\206\343\203\240", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem6 = treeWidget->topLevelItem(5);
        ___qtreewidgetitem6->setText(0, QApplication::translate("MainWindow", "\346\226\260\343\201\227\343\201\204\343\202\242\343\202\244\343\203\206\343\203\240", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem7 = treeWidget->topLevelItem(6);
        ___qtreewidgetitem7->setText(0, QApplication::translate("MainWindow", "\346\226\260\343\201\227\343\201\204\343\202\242\343\202\244\343\203\206\343\203\240", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem8 = treeWidget->topLevelItem(7);
        ___qtreewidgetitem8->setText(0, QApplication::translate("MainWindow", "\346\226\260\343\201\227\343\201\204\343\202\242\343\202\244\343\203\206\343\203\240", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem9 = treeWidget->topLevelItem(8);
        ___qtreewidgetitem9->setText(0, QApplication::translate("MainWindow", "\346\226\260\343\201\227\343\201\204\343\202\242\343\202\244\343\203\206\343\203\240", 0, QApplication::UnicodeUTF8));
        treeWidget->setSortingEnabled(__sortingEnabled2);

        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_RatesDeposites->horizontalHeaderItem(0);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "Deposits", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget_RatesDeposites->verticalHeaderItem(0);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "1w", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget_RatesDeposites->verticalHeaderItem(1);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "1m", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget_RatesDeposites->verticalHeaderItem(2);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow", "3m", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget_RatesDeposites->verticalHeaderItem(3);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindow", "6m", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget_RatesDeposites->verticalHeaderItem(4);
        ___qtablewidgetitem24->setText(QApplication::translate("MainWindow", "9m", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget_RatesDeposites->verticalHeaderItem(5);
        ___qtablewidgetitem25->setText(QApplication::translate("MainWindow", "1y", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled3 = tableWidget_RatesDeposites->isSortingEnabled();
        tableWidget_RatesDeposites->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget_RatesDeposites->item(0, 0);
        ___qtablewidgetitem26->setText(QApplication::translate("MainWindow", "3.8200", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget_RatesDeposites->item(1, 0);
        ___qtablewidgetitem27->setText(QApplication::translate("MainWindow", "3.7200", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget_RatesDeposites->item(2, 0);
        ___qtablewidgetitem28->setText(QApplication::translate("MainWindow", "3.6300", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget_RatesDeposites->item(3, 0);
        ___qtablewidgetitem29->setText(QApplication::translate("MainWindow", "3.5300", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget_RatesDeposites->item(4, 0);
        ___qtablewidgetitem30->setText(QApplication::translate("MainWindow", "3.4800", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget_RatesDeposites->item(5, 0);
        ___qtablewidgetitem31->setText(QApplication::translate("MainWindow", "3.4500", 0, QApplication::UnicodeUTF8));
        tableWidget_RatesDeposites->setSortingEnabled(__sortingEnabled3);

        QTableWidgetItem *___qtablewidgetitem32 = tableWidget_RatesFRAs->horizontalHeaderItem(0);
        ___qtablewidgetitem32->setText(QApplication::translate("MainWindow", "FRAs", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget_RatesFRAs->verticalHeaderItem(0);
        ___qtablewidgetitem33->setText(QApplication::translate("MainWindow", "3x6", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget_RatesFRAs->verticalHeaderItem(1);
        ___qtablewidgetitem34->setText(QApplication::translate("MainWindow", "6x9", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget_RatesFRAs->verticalHeaderItem(2);
        ___qtablewidgetitem35->setText(QApplication::translate("MainWindow", "6x12", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled4 = tableWidget_RatesFRAs->isSortingEnabled();
        tableWidget_RatesFRAs->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget_RatesFRAs->item(0, 0);
        ___qtablewidgetitem36->setText(QApplication::translate("MainWindow", "3.7125", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidget_RatesFRAs->item(1, 0);
        ___qtablewidgetitem37->setText(QApplication::translate("MainWindow", "3.7125", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidget_RatesFRAs->item(2, 0);
        ___qtablewidgetitem38->setText(QApplication::translate("MainWindow", "3.7125", 0, QApplication::UnicodeUTF8));
        tableWidget_RatesFRAs->setSortingEnabled(__sortingEnabled4);

        QTableWidgetItem *___qtablewidgetitem39 = tableWidget_RatesFutures->horizontalHeaderItem(0);
        ___qtablewidgetitem39->setText(QApplication::translate("MainWindow", "Futures", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem40 = tableWidget_RatesFutures->verticalHeaderItem(0);
        ___qtablewidgetitem40->setText(QApplication::translate("MainWindow", "1y", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem41 = tableWidget_RatesFutures->verticalHeaderItem(1);
        ___qtablewidgetitem41->setText(QApplication::translate("MainWindow", "2y", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem42 = tableWidget_RatesFutures->verticalHeaderItem(2);
        ___qtablewidgetitem42->setText(QApplication::translate("MainWindow", "3y", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem43 = tableWidget_RatesFutures->verticalHeaderItem(3);
        ___qtablewidgetitem43->setText(QApplication::translate("MainWindow", "4y", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem44 = tableWidget_RatesFutures->verticalHeaderItem(4);
        ___qtablewidgetitem44->setText(QApplication::translate("MainWindow", "5y", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem45 = tableWidget_RatesFutures->verticalHeaderItem(5);
        ___qtablewidgetitem45->setText(QApplication::translate("MainWindow", "6y", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem46 = tableWidget_RatesFutures->verticalHeaderItem(6);
        ___qtablewidgetitem46->setText(QApplication::translate("MainWindow", "7y", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem47 = tableWidget_RatesFutures->verticalHeaderItem(7);
        ___qtablewidgetitem47->setText(QApplication::translate("MainWindow", "8y", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled5 = tableWidget_RatesFutures->isSortingEnabled();
        tableWidget_RatesFutures->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem48 = tableWidget_RatesFutures->item(0, 0);
        ___qtablewidgetitem48->setText(QApplication::translate("MainWindow", "96.2875", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem49 = tableWidget_RatesFutures->item(1, 0);
        ___qtablewidgetitem49->setText(QApplication::translate("MainWindow", "96.7875", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem50 = tableWidget_RatesFutures->item(2, 0);
        ___qtablewidgetitem50->setText(QApplication::translate("MainWindow", "96.9875", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem51 = tableWidget_RatesFutures->item(3, 0);
        ___qtablewidgetitem51->setText(QApplication::translate("MainWindow", "96.6875", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem52 = tableWidget_RatesFutures->item(4, 0);
        ___qtablewidgetitem52->setText(QApplication::translate("MainWindow", "96.4875", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem53 = tableWidget_RatesFutures->item(5, 0);
        ___qtablewidgetitem53->setText(QApplication::translate("MainWindow", "96.3875", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem54 = tableWidget_RatesFutures->item(6, 0);
        ___qtablewidgetitem54->setText(QApplication::translate("MainWindow", "96.2875", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem55 = tableWidget_RatesFutures->item(7, 0);
        ___qtablewidgetitem55->setText(QApplication::translate("MainWindow", "96.0875", 0, QApplication::UnicodeUTF8));
        tableWidget_RatesFutures->setSortingEnabled(__sortingEnabled5);

        QTableWidgetItem *___qtablewidgetitem56 = tableWidget_RatesSwaps->horizontalHeaderItem(0);
        ___qtablewidgetitem56->setText(QApplication::translate("MainWindow", "Swaps", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem57 = tableWidget_RatesSwaps->verticalHeaderItem(0);
        ___qtablewidgetitem57->setText(QApplication::translate("MainWindow", "2y", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem58 = tableWidget_RatesSwaps->verticalHeaderItem(1);
        ___qtablewidgetitem58->setText(QApplication::translate("MainWindow", "3y", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem59 = tableWidget_RatesSwaps->verticalHeaderItem(2);
        ___qtablewidgetitem59->setText(QApplication::translate("MainWindow", "5y", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem60 = tableWidget_RatesSwaps->verticalHeaderItem(3);
        ___qtablewidgetitem60->setText(QApplication::translate("MainWindow", "7y", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem61 = tableWidget_RatesSwaps->verticalHeaderItem(4);
        ___qtablewidgetitem61->setText(QApplication::translate("MainWindow", "10y", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled6 = tableWidget_RatesSwaps->isSortingEnabled();
        tableWidget_RatesSwaps->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem62 = tableWidget_RatesSwaps->item(0, 0);
        ___qtablewidgetitem62->setText(QApplication::translate("MainWindow", "3.7125", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem63 = tableWidget_RatesSwaps->item(1, 0);
        ___qtablewidgetitem63->setText(QApplication::translate("MainWindow", "3.9800", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem64 = tableWidget_RatesSwaps->item(2, 0);
        ___qtablewidgetitem64->setText(QApplication::translate("MainWindow", "4.4300", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem65 = tableWidget_RatesSwaps->item(3, 0);
        ___qtablewidgetitem65->setText(QApplication::translate("MainWindow", "5.1650", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem66 = tableWidget_RatesSwaps->item(4, 0);
        ___qtablewidgetitem66->setText(QApplication::translate("MainWindow", "5.5175", 0, QApplication::UnicodeUTF8));
        tableWidget_RatesSwaps->setSortingEnabled(__sortingEnabled6);

        label_SettlementDate->setText(QApplication::translate("MainWindow", "Settlement Date", 0, QApplication::UnicodeUTF8));
        dateEdit_settlementDate->setDisplayFormat(QApplication::translate("MainWindow", "yyyy/MM/dd", 0, QApplication::UnicodeUTF8));
        label_Nominal->setText(QApplication::translate("MainWindow", "Nominal", 0, QApplication::UnicodeUTF8));
        label_LenghtInYears->setText(QApplication::translate("MainWindow", "Length in Years", 0, QApplication::UnicodeUTF8));
        label_SwapTermStructureTypeLabel->setText(QApplication::translate("MainWindow", "Term Structure Type", 0, QApplication::UnicodeUTF8));
        comboBox_TermStructureType->clear();
        comboBox_TermStructureType->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Depos, Swaps", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Depos, Futures, Swaps", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Depos, FRAs, Swaps", 0, QApplication::UnicodeUTF8)
        );
        label_SwapType->setText(QApplication::translate("MainWindow", "Swap Type", 0, QApplication::UnicodeUTF8));
        comboBox_swapType->clear();
        comboBox_swapType->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "VanillaSwap::Payer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "VanillaSwap::Receiver", 0, QApplication::UnicodeUTF8)
        );
        label_FixedLeg->setText(QApplication::translate("MainWindow", "Fixed Leg", 0, QApplication::UnicodeUTF8));
        label_FixedLegFrequency->setText(QApplication::translate("MainWindow", "  Fixed Leg Frequency", 0, QApplication::UnicodeUTF8));
        comboBox_FixedLegFrequency->clear();
        comboBox_FixedLegFrequency->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Annual", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Semiannual", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Quarterly", 0, QApplication::UnicodeUTF8)
        );
        label_FixedLegConvention->setText(QApplication::translate("MainWindow", "  Fixed Leg Convention", 0, QApplication::UnicodeUTF8));
        comboBox_fixedLegConvention->clear();
        comboBox_fixedLegConvention->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Unadjusted", 0, QApplication::UnicodeUTF8)
        );
        label_FloatingLegConvention->setText(QApplication::translate("MainWindow", "  Floating Leg Convention", 0, QApplication::UnicodeUTF8));
        comboBox_floatingLegConvention->clear();
        comboBox_floatingLegConvention->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "ModifiedFollowing", 0, QApplication::UnicodeUTF8)
        );
        label_FixedLegDayCounter->setText(QApplication::translate("MainWindow", "  Fixed Leg Day Counter", 0, QApplication::UnicodeUTF8));
        comboBox_fixedLegDayCounter->clear();
        comboBox_fixedLegDayCounter->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Thirty360::European", 0, QApplication::UnicodeUTF8)
        );
        label_FixingRate->setText(QApplication::translate("MainWindow", "  Fixed Rate (%)", 0, QApplication::UnicodeUTF8));
        label_FloatingLeg->setText(QApplication::translate("MainWindow", "Floating Leg", 0, QApplication::UnicodeUTF8));
        label_FloatingLegDayCounter->setText(QApplication::translate("MainWindow", "  Floating Leg Day Counter", 0, QApplication::UnicodeUTF8));
        comboBox_floatingLegDayCounter->clear();
        comboBox_floatingLegDayCounter->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Actual360", 0, QApplication::UnicodeUTF8)
        );
        label_FloatingLegFrequency->setText(QApplication::translate("MainWindow", "  Floating Leg Frequency", 0, QApplication::UnicodeUTF8));
        comboBox_FloatingLegFrequency->clear();
        comboBox_FloatingLegFrequency->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Semiannual", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Annual", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Quarterly", 0, QApplication::UnicodeUTF8)
        );
        label_Spread->setText(QApplication::translate("MainWindow", "  Spread (%)", 0, QApplication::UnicodeUTF8));
        pushButtonCalcSwap->setText(QApplication::translate("MainWindow", "Evaluate Swap", 0, QApplication::UnicodeUTF8));
        label_SwapNPV->setText(QApplication::translate("MainWindow", "Swap NPV", 0, QApplication::UnicodeUTF8));
        label_FairRate->setText(QApplication::translate("MainWindow", "Fair Rate (%)", 0, QApplication::UnicodeUTF8));
        label_FairSpread->setText(QApplication::translate("MainWindow", "Fair Spread (%)", 0, QApplication::UnicodeUTF8));
        lineEdit_SwapFairSpread->setText(QApplication::translate("MainWindow", "0.0", 0, QApplication::UnicodeUTF8));
        lineEdit_SwapFairRate->setText(QApplication::translate("MainWindow", "0.0", 0, QApplication::UnicodeUTF8));
        lineEdit_SwapNPV->setText(QApplication::translate("MainWindow", "0.0", 0, QApplication::UnicodeUTF8));
        lineEdit_SwapNPV->setPlaceholderText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Swap", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "PushButton", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "PushButton", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
