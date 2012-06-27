//#ifndef QTBOOSTQUANTLIB_H
//#define QTBOOSTQUANTLIB_H
//
//#include <QtGui/QMainWindow>
//#include "ui_qtboostquantlib.h"
//
//class QtBoostQuantLib : public QMainWindow
//{
//	Q_OBJECT
//
//public:
//	QtBoostQuantLib(QWidget *parent = 0, Qt::WFlags flags = 0);
//	~QtBoostQuantLib();
//
//private:
//	Ui::QtBoostQuantLibClass ui;
//};
//
//#endif // QTBOOSTQUANTLIB_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat Mar 17 13:57:39 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
	class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

protected:
	void changeEvent(QEvent *e);

private slots:
	void menuSelected();
	void on_pushButton_pressed();
	void calcSwap();
	void showSwapNPV();

private:
	Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H