// http://stackoverflow.com/questions/10220607/subclassing-qdoublespinbox-with-nan-value

#ifndef CUSTOMDOUBLESPINBOX_H
#define CUSTOMDOUBLESPINBOX_H

#include <QDoubleSpinBox>
#include <QWidget>
#include <QtGui>
#include <QString>
#include <iostream>
//#include <math.h>
//#include <float.h>
#include <limits>
#include <boost/math/special_functions/fpclassify.hpp>

#define NUMBER_OF_DECIMALS 2

using namespace std;

class CustomDoubleSpinBox : public QDoubleSpinBox
{
	Q_OBJECT

public:
	CustomDoubleSpinBox(QWidget *parent = 0);
	virtual ~CustomDoubleSpinBox() throw() {}

	double valueFromText(const QString &text) const;
	QString textFromValue(double value) const;
	QValidator::State validate ( QString & input, int & pos ) const;
};

#endif // CUSTOMDOUBLESPINBOX_H