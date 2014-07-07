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

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_action_triggered();

    void on_action_2_triggered();

    void on_actionActualiser_triggered();

    void on_actionArreter_triggered();

    void on_actionGo_triggered();

    void on_Gosearch_clicked();

    void on_actionHome_triggered();

    void on_QUrlbar_editingFinished();

    void on_Searchbar_editingFinished();

    void on_actionAboutqsurfer_triggered();

    void on_actionNewtab_triggered();

    void on_actionClear_triggered();

    void on_clear_clicked();

    void on_actionExternel_browser_triggered();

    void on_actionprecedent_triggered();

    void on_actionavantprec_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
