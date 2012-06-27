#include "CustomDoubleSpinBox.h"

CustomDoubleSpinBox::CustomDoubleSpinBox(QWidget *parent) : QDoubleSpinBox(parent)
{
	this->setRange(DBL_MIN, DBL_MAX);
	this->setDecimals(NUMBER_OF_DECIMALS);
}

QString CustomDoubleSpinBox::textFromValue(double value) const
{
	if (boost::math::isnan(value))
	{
		return QString::fromStdString("NaN");
	}
	else
	{
		QString result;
		return result.setNum(value,'f', NUMBER_OF_DECIMALS);
	}
}

double CustomDoubleSpinBox::valueFromText(const QString &text) const
{
	if (text.toLower() == QString::fromStdString("nan"))
	{
		//return nan("");
		return 0.0;
	}
	else
	{
		return text.toDouble();
	}
}

QValidator::State CustomDoubleSpinBox::validate ( QString & input, int & pos ) const
{
	Q_UNUSED(input);
	Q_UNUSED(pos);

	return QValidator::Acceptable;
}


// https://www.gitorious.org/techspinbox
// http://www.matthiaspospiech.de/blog/2009/01/03/qt-spinbox-widget-with-scientific-notation/
// http://stackoverflow.com/questions/9274884/qspinbox-thousand-separator
//class QDoubleSpinBoxWithSeparator : public QDoubleSpinBox
//{
//	QString QDoubleSpinBoxWithSeparator::textFromValue(int value)
//	{
//		return this->locale()->toString(value);
//	}
//};
// ui->doubleSpinBox_Notional->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));