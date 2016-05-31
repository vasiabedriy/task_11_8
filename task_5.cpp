#include "task_5.h"

task_8::task_8(QWidget *parent) :
    QMainWindow(parent)
{
    this->setGeometry(20,50, 250,170);

    m_spinbox = new QSpinBox(this);
    m_spinbox->setGeometry(QRect(QPoint(30,30),QSize(200,20)));

    m_progressbar = new QProgressBar(this);
    m_progressbar->setGeometry(QRect(QPoint(30,80),QSize(200,20)));

    m_slider = new QSlider(Qt::Horizontal ,this);
    m_slider->setGeometry(QRect(QPoint(30,130),QSize(200,20)));

    connect(m_slider, SIGNAL(valueChanged(int)), m_progressbar,SLOT(setValue(int)));
    connect(m_slider, SIGNAL(valueChanged(int)), m_spinbox,SLOT(setValue(int)));

    connect(m_spinbox, SIGNAL(valueChanged(int)), m_progressbar,SLOT(setValue(int)));
    connect(m_spinbox, SIGNAL(valueChanged(int)), m_slider,SLOT(setValue(int)));

    //connect(ui->progressBar, SIGNAL(valueChanged(int)), ui->spinBox,SLOT(setValue(int)));
    //connect(ui->progressBar, SIGNAL(valueChanged(int)), ui->horizontalSlider,SLOT(setValue(int)));
}

task_8::~task_8()
{
    delete m_progressbar;
    delete m_slider;
    delete m_spinbox;
}
