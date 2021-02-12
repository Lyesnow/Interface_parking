#ifndef WINDOW_H
#define WINDOW_H

#include <QPushButton>
#include <QMainWindow>
#include <QHBoxLayout>
#include <QStackedLayout>
#include <QLabel>
#include <QWidget>
#include <QCheckBox>

QT_BEGIN_NAMESPACE
class QLineEdit;
QT_END_NAMESPACE



//! [0]
class Window : public QWidget
{
Q_OBJECT



public:
Window(QWidget *parent = nullptr);
//void echoChanged(int);


QPushButton *connexion = new QPushButton(" Connexion");
QPushButton *B2 = new QPushButton("1");
QPushButton *B3 = new QPushButton("2");
QPushButton *B4 = new QPushButton("3");
QPushButton *B5 = new QPushButton("4");
QPushButton *B6 = new QPushButton("5");
QPushButton *B7 = new QPushButton("6");
QPushButton *B8 = new QPushButton("7");
QPushButton *B9 = new QPushButton("8");
QPushButton *B10 = new QPushButton("9");
QPushButton *B11 = new QPushButton("0");
QPushButton *Button = new QPushButton();
QPushButton *erase = new QPushButton("<");
int tentative=0;

//QPushButton *Bouton[10];
//QHBoxLayout *Horiz_layout = new QHBoxLayout;
//QVBoxLayout *Vertic_layout = new QVBoxLayout;

public slots:
void erased();
void connecslot();
void clickedSlot();
void masque();
void trois();
//void echoChanged2();
//void textchangeee();
//void Hlayout1();
//void Hlayout2();

private:
QLineEdit *echoLineEdit;
QLineEdit *echoLineEdit2;
QCheckBox *echoCheckBox;
QCheckBox *echoCheckBox2;
};
#endif
// Si ALI Lyes 18/11/2020
