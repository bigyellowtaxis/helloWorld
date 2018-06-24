#ifndef WINDOW_H
#define WINDOW_H


#include <QWidget>

class QPushButton;
class window : public QWidget
{
    public:
        explicit window(QWidget *parent = 0);
    private:
        QPushButton *m_button;
};

#endif // WINDOW_H
