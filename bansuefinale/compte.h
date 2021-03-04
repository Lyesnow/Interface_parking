#ifndef COMPTE_H
#define COMPTE_H

#include <QPushButton>
#include <QMainWindow>
#include <QHBoxLayout>
#include <QStackedLayout>
#include <QLabel>
#include <QWidget>
#include <QCheckBox>
#include <QMainWindow>
#include <QHBoxLayout>
#include <QLineEdit>
#include <QVBoxLayout>
QT_BEGIN_NAMESPACE
class QLineEdit;
QT_END_NAMESPACE



class Compte : public QWidget
{
    Q_OBJECT

public:
    explicit Compte(QWidget *parent = 0);


double solde = 1200;
double placeparking = 100;
double visiteur = 0;
double statistique = 0;
double statsemaine =0;
double employer = 0;
double soldeclient = 3500;
double autreclient = 2500;
int choix1=1;
int choix2=2;
int histo =0;
int histo2=0;

//QHBoxLayout *Horiz_layout = new QHBoxLayout;
//QVBoxLayout *Vertic_layout = new QVBoxLayout;

private:


    QPushButton *B1 = new QPushButton("Afficher Matricule ");
    QPushButton *B2 = new QPushButton("Afficher Badges");
    QPushButton *B3 = new QPushButton("Débiter");
    QPushButton *B4 = new QPushButton("Virement");
    QPushButton *B5 = new QPushButton("Commander un chequier");
    QPushButton *B6 = new QPushButton("Consulter votre RIB");
    QPushButton *B7 = new QPushButton("Autoriser");
    QPushButton *B8 = new QPushButton("Refuser");
    QPushButton *B9 = new QPushButton("Confirmer");
    QPushButton *B10 = new QPushButton("Aide");
    QPushButton *B11 = new QPushButton( "Quitter");

    QLineEdit *banqEdit;
    QLineEdit *banqEdit2;
    QLineEdit *banqEdit3;
    QLineEdit *banqEdit4;

    QLabel *Lyesolde = new QLabel;
    QLabel *Date = new QLabel;
    QLabel *Employer = new QLabel;
    QLabel *Statisti = new QLabel;
    QLabel *Statsemaines = new QLabel;
    QLabel *Visiteur= new QLabel;
    QLabel *viremment = new QLabel;
    QLabel *vtrhisto = new QLabel;

public slots:
void debiter();
void faireUnVirement();
void Afficher();
void crediter();
void Rib();
void chb();
void confirm();
void confirm2();
void confirm3();
void aideban();


}
;

// SI ALI LYES BTS SN2 1 12 2020
#endif // COMPTE_H
