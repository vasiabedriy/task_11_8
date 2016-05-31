#ifndef task_8_H
#define task_8_H

#include <QMainWindow>
#include <QSpinBox>
#include <QProgressBar>
#include <QSlider>

namespace Ui {
class task_8;
}

class task_8 : public QMainWindow
{
    Q_OBJECT

public:
    explicit task_8(QWidget *parent = 0);
    ~task_8();


private:
    QSpinBox* m_spinbox;
    QProgressBar* m_progressbar;
    QSlider* m_slider;
};

#endif // task_8_H
