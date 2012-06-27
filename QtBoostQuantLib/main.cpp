#include <QtGui/QApplication>
#include <QDebug>
#include <QSystemLocale>
#include "qtboostquantlib.h"

#include <iostream>
#include <boost/math/distributions.hpp>
#include <ql/quantlib.hpp>
using namespace QuantLib;


void distributionFunc1(){
	boost::math::normal_distribution<> d(0.5 ,1);
	std::cout << "CDF :" << cdf(d ,0.2) << std::endl;
	std::cout << "PDF :" << pdf(d ,0.0) << std::endl;
	std::cout << "Inverse :" << quantile(d ,0.1) << std::endl;
	std::cout << "Mode :" << mode(d) << std::endl;
	std::cout << "Variance :" << variance(d) << std::endl;
	std::cout << "SD :" << standard_deviation(d) << std::endl;
	std::cout << "Skew :" << skewness(d) << std::endl;
	std::cout << "Kurtosis :" << kurtosis(d) << std::endl;
	std::cout << "Excess Kurt :" << kurtosis_excess(d) << std::endl;

	std::pair<double,double> sup = support(d);
	std::cout << "Left Sup :" << sup.first << std::endl;
	std::cout << "Right Sup :" << sup.second << std::endl;
}

void DateTesting1(){
	Date myDate(12, Aug, 2009);
	std::cout << myDate << std::endl;
	myDate++;
	std::cout << myDate << std::endl;
	myDate += 12*Days ;
	std::cout << myDate << std::endl;
	myDate -= 2*Months ;
	std::cout << myDate << std::endl;
	myDate--;
	std::cout << myDate << std::endl;

	Period myP(10, Weeks);
	myDate += myP;
	std::cout << myDate << std::endl;
}


int main(int argc, char *argv[])
{
	//QApplication a(argc, argv);
	//QtBoostQuantLib w;

	QLocale::setDefault(QLocale(QLocale::English, QLocale::UnitedStates));
	qDebug() << QLocale::system().language();

	QApplication a(argc, argv);	
	MainWindow w;
	//w.resize(500, 350);
	
	w.show();
	return a.exec();
}
