#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtMultimedia>
#include <QtCore>
#include <QtWidgets>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void durationChanged(qint64 duration);

    void positionChanged(qint64 progress);

    void on_pushButton_Volume_clicked();

    void on_actionOpen_Audio_File_triggered();

    void on_pushButton_Seek_Back_clicked();

    void on_pushButton_Stop_clicked();

    void on_pushButton_Play_clicked();

    void on_pushButton_Pause_clicked();

    void on_pushButton_Seek_Forward_clicked();

    void on_horizontalSlider_valueChanged(int value);

    void on_horizontalSlider_2_valueChanged(int value);

private:
    void updateDuration(qint64 duration);
    Ui::MainWindow *ui;
    bool muted = false;
    QMediaPlayer *MPlayer;
    qint64 Mduration;
    QAudioOutput *audioOutput;
};
#endif // MAINWINDOW_H
