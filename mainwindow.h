#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <memory>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class Sensor;
class Deur;


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
   explicit MainWindow(QWidget *parent = 0);
    void paintEvent(QPaintEvent *event);

    ~MainWindow();

private:
  //  Ui::MainWindow *ui;
    std::shared_ptr<Ui::MainWindow> ui;
    std::shared_ptr<Sensor> s1;
    std::array<std::shared_ptr<Deur>,3> deuren={};

private slots:
    void on_sensor_act_clicked();
    void on_schuifdeurSensorKnop_clicked();
    void on_d1Knop_clicked();
    void on_d2Knop_clicked();





};
#endif // MAINWINDOW_H
