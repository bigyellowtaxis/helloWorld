
#include "indow.h"
#include <QPushButton>
#include <QApplication>

window::window(QWidget *parent) :  //defines function?
    QWidget(parent)
{
    setFixedSize(100,50);  //creates window

    m_button = new QPushButton("Hello", this);  //creates button with text in window
    m_button->setGeometry(10,10,80,30);  //sets size of button
    connect(m_button, SIGNAL (clicked()),QApplication::instance(), SLOT (quit()));  //closes window when button is pushed
}
