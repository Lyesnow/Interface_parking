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
QPushButton *Button = new QPushButton("ABC");
QPushButton *erase = new QPushButton("123");
int tentative=0;
QPushButton *B12 = new QPushButton("A");
QPushButton *B13 = new QPushButton("B");
QPushButton *B14 = new QPushButton("C");
QPushButton *B15 = new QPushButton("D");
QPushButton *B16 = new QPushButton("E");
QPushButton *B17 = new QPushButton("F");
QPushButton *B18 = new QPushButton("G");
QPushButton *B19 = new QPushButton("H");
QPushButton *B20 = new QPushButton("I");
QPushButton *B21 = new QPushButton("J");
QPushButton *B22 = new QPushButton("K");
QPushButton *B23 = new QPushButton("K");
QPushButton *B24 = new QPushButton("L");
QPushButton *B25 = new QPushButton("M");
QPushButton *B26 = new QPushButton("N");
QPushButton *B27 = new QPushButton("O");
QPushButton *B28 = new QPushButton("P");
QPushButton *B29 = new QPushButton("Q");
QPushButton *B30 = new QPushButton("R");
QPushButton *B31 = new QPushButton("S");
QPushButton *B32 = new QPushButton("T");
QPushButton *B33 = new QPushButton("U");
QPushButton *B34 = new QPushButton("V");
QPushButton *B35 = new QPushButton("W");
QPushButton *B36 = new QPushButton("X");
QPushButton *B37 = new QPushButton("Y");
QPushButton *B38 = new QPushButton("Z");


//QPushButton *Bouton[10];
//QHBoxLayout *Horiz_layout = new QHBoxLayout;
//QVBoxLayout *Vertic_layout = new QVBoxLayout;

public slots:
void erased();
void abcd();
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
