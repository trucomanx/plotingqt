#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "myplot.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    MyPlot plot(800,600);

    QList<double> X;    X<<1<<2<<3<<4;
    QList<double> Y;    Y<<-1<<0<<2<<4;

    plot.Print("imagefile.png",X,Y,"My first labelx","My first labely");
}

MainWindow::~MainWindow()
{
    delete ui;
}
