#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MPlayer = new QMediaPlayer;
    audioOutput = new QAudioOutput;
    MPlayer->setAudioOutput(audioOutput);
    ui->pushButton_Play->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    ui->pushButton_Pause->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
    ui->pushButton_Stop->setIcon(style()->standardIcon(QStyle::SP_MediaStop));
    ui->pushButton_Seek_Back->setIcon(style()->standardIcon(QStyle::SP_MediaSeekBackward));
    ui->pushButton_Seek_Forward->setIcon(style()->standardIcon(QStyle::SP_MediaSeekForward));
    ui->pushButton_Volume->setIcon(style()->standardIcon(QStyle::SP_MediaVolume));
    ui->horizontalSlider_2->setMinimum(1);
    ui->horizontalSlider_2->setMaximum(100);
    ui->horizontalSlider_2->setValue(30);
    audioOutput->setVolume(ui->horizontalSlider_2->value());
    connect(MPlayer, &QMediaPlayer::durationChanged, this, &MainWindow::durationChanged);
    connect(MPlayer, &QMediaPlayer::positionChanged, this, &MainWindow::positionChanged);
    ui->horizontalSlider->setRange(0,MPlayer->duration()/1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::durationChanged(qint64 duration)
{
    Mduration = duration/1000;
    ui->horizontalSlider->setMaximum(Mduration);
}

void MainWindow::positionChanged(qint64 progress)
{
    if (!ui->horizontalSlider->isSliderDown()) {
        ui->horizontalSlider->setValue(progress/1000);
    }
    updateDuration(progress/1000);
}

void MainWindow::on_pushButton_Volume_clicked()
{
    if (muted == false) {
        ui->pushButton_Volume->setIcon(style()->standardIcon(QStyle::SP_MediaVolume));
        muted = true;
        audioOutput->setMuted(muted);
    } else {
        ui->pushButton_Volume->setIcon(style()->standardIcon(QStyle::SP_MediaVolumeMuted));
        muted = false;
        audioOutput->setMuted(muted);
    }
}


void MainWindow::on_actionOpen_Audio_File_triggered()
{
    QString FileName = QFileDialog::getOpenFileName(this, tr("Select Audio File"), "", tr("Wav Files (*.wav)"));
    MPlayer->setSource(QUrl(FileName));
    QFileInfo fileinfo(FileName);
    ui->label_File_Name->setText(fileinfo.fileName());
}


void MainWindow::on_pushButton_Seek_Back_clicked()
{
    ui->horizontalSlider->setValue(ui->horizontalSlider->value()-100);
    MPlayer->setPosition(ui->horizontalSlider->value()*1000);
}


void MainWindow::on_pushButton_Stop_clicked()
{
    MPlayer->stop();
}


void MainWindow::on_pushButton_Play_clicked()
{
    MPlayer->play();
}


void MainWindow::on_pushButton_Pause_clicked()
{
    MPlayer->pause();
}


void MainWindow::on_pushButton_Seek_Forward_clicked()
{
    ui->horizontalSlider->setValue(ui->horizontalSlider->value()+100);
    MPlayer->setPosition(ui->horizontalSlider->value()*1000);
}


void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    MPlayer->setPosition(value*1000);
}

void MainWindow::on_horizontalSlider_2_valueChanged(int value)
{
    audioOutput->setVolume(value);
}

void MainWindow::updateDuration(qint64 duration)
{
    QString timestr;
    if (duration || Mduration) {
        QTime CurrentTime((duration/3600)%60, (duration/60)%60, duration%60, (duration*1000)%1000);
        QTime totalTime((Mduration/3600)%60, (Mduration/60)%60, Mduration%60, (Mduration*1000)%1000);
        QString format = "mm:ss";
        if (Mduration>3600) {
            format = "hh:mm:ss";
        }
        ui->label_Value_1->setText(CurrentTime.toString(format));
        ui->label_Value_2->setText(totalTime.toString(format));
    }
}

