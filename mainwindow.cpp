#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDesktopServices>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}







void MainWindow::on_actionArreter_triggered()
{
    ui->webView->stop();
}

void MainWindow::on_actionGo_triggered()
{


    QUrl url;
        QString QUrlbar;
        QUrlbar = ui->QUrlbar->displayText();
        url = url.fromUserInput("http://www."+ QUrlbar );
        ui->webView->setUrl(url);

        QString title;
        title = ui->webView->title();
        MainWindow::setWindowTitle(title + "Qsurfer");



      ui->progressBartim->setValue(100);

}

void MainWindow::on_Gosearch_clicked()
{
    QUrl url;
        QString Searchbar;
        Searchbar = ui->Searchbar->displayText();
        url = url.fromUserInput("http://www.duckduckgo.com/?q=" + Searchbar);
        ui->webView->setUrl(url);

        QString title;
        title = ui->webView->title();
        MainWindow::setWindowTitle(title + "Qsurfer");


        ui->progressBartim->setValue(100);


}

void MainWindow::on_actionHome_triggered()
{

    QUrl url;
          url = ("qrc:/new/home/dostart/index.html");


            ui->webView->setUrl(url);


    ui->progressBartim->setValue(100);

}

void MainWindow::on_QUrlbar_editingFinished()
{


    QUrl url;
        QString QUrlbar;
        QUrlbar = ui->QUrlbar->displayText();
        url = url.fromUserInput("http://www."+ QUrlbar );
        ui->webView->setUrl(url);


        QString title;
        title = ui->webView->title();
        MainWindow::setWindowTitle(title + "Qsurfer");


        ui->progressBartim->setValue(100);


}

void MainWindow::on_Searchbar_editingFinished()
{
    QUrl url;
        QString Searchbar;
        Searchbar = ui->Searchbar->displayText();
        url = url.fromUserInput("http://www.duckduckgo.com/?q=" + Searchbar);
        ui->webView->setUrl(url);

        QString title;
        title = ui->webView->title();
        MainWindow::setWindowTitle(title + "Qsurfer");


        ui->progressBartim->setValue(100);

}




void MainWindow::on_clear_clicked()
{
    ui->QUrlbar->clear();
}

void MainWindow::on_actionExternel_browser_triggered()
{
    QString link = "http://www.google.com";
    QDesktopServices::openUrl(QUrl(link));
}

void MainWindow::on_actionprecedent_triggered()
{
    ui->webView->back();
}

void MainWindow::on_actionavantprec_triggered()
{
     ui->webView->forward();
}

void MainWindow::on_actionActualiser_triggered()
{
    ui->webView->reload();
}
