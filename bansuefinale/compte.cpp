#include "compte.h"
#include "QComboBox"
#include <QGridLayout>
#include <QGroupBox>
#include <QLabel>
#include <QLineEdit>
#include <QMessageBox>
#include <QPixmap>
#include <QApplication>

Compte::Compte(QWidget *parent) :
   QWidget(parent)
{

    QGroupBox *echoGroup = new QGroupBox(tr("N° Compte 45678  Nom= Kitano Prenom:Ken "));
    Lyesolde->setText("Solde : "+ QString::number(solde) + " €");                 //("Solde : "+ QString::number(solde) + " €");
    banqEdit = new QLineEdit;
    banqEdit->setPlaceholderText("Inserer votre somme ");
    banqEdit->setMaxLength(9); // je met 9 cara max
    banqEdit->hide();
    banqEdit2 = new QLineEdit;
    banqEdit2->setPlaceholderText("Inserer la somme à retirer  ");
    banqEdit2->setMaxLength(9); // je met 9 cara max
    banqEdit2->hide();
    banqEdit3 = new QLineEdit;
    banqEdit3->setPlaceholderText("Inserer le Rib ici  ");
    banqEdit3->setMaxLength(25); // je met 9 cara max
    banqEdit3->hide();
    viremment ->setText("Insserer le numéro de compte au quel vous voulez effectuer votre action");
    viremment->hide();
      banqEdit4 = new QLineEdit;
    banqEdit4->setPlaceholderText("Inserer votre somme ");
    banqEdit4->setMaxLength(25); // je met 9 cara max
    banqEdit4->hide();
    //vtrhisto->setText("Historique des opération"+);
    B7->hide();
    B8->hide();
    B9->hide();

    QGridLayout *interbanq = new QGridLayout; // crée une grille dans j'insère mes boutons à l'intérieure
     // interbanq->addWidget(debut,0, 0);
    interbanq->addWidget(Lyesolde,1,1,1,1);
        interbanq->addWidget(B1,0,0,1,1);
         interbanq->addWidget(B2,1,0,1,1);
         interbanq->addWidget(B3, 0,2,1,1);
         //interbanq->addWidget(B4, 0,2,0,1);
         interbanq->addWidget(B5, 2,2,1,1);
         interbanq->addWidget(B6, 2,0);
         interbanq->addWidget(B10, 3,0,1,1);
         interbanq->addWidget(B4, 3,2,1,1);
         interbanq->addWidget(B11, 4,1,1,1);
         interbanq->addWidget(banqEdit, 5,0,1,2);
         interbanq->addWidget(banqEdit2, 5,0,1,2);
         interbanq->addWidget(banqEdit3, 7,0,1,2);
        interbanq->addWidget(banqEdit4, 7,0,1,2);
         interbanq->addWidget(viremment,6,0,1,2);
         interbanq->addWidget(B7, 5,2,1,2);
          interbanq->addWidget(B8, 5,2,1,2);
            interbanq->addWidget(B9, 7,2,1,2);
            interbanq->addWidget(vtrhisto, 8,0,1,2);

     //interbanq->addWidget(echoLineEdit, 4, 0, 1, 2);
     echoGroup->setLayout(interbanq);


connect(B1, SIGNAL(clicked()),this, SLOT(Afficher()));
connect(B2, SIGNAL(clicked()),this, SLOT(crediter()));
connect(B3, SIGNAL(clicked()),this, SLOT(debiter()));
connect(B6, SIGNAL(clicked()),this, SLOT(Rib()));
connect(B5, SIGNAL(clicked()),this, SLOT(chb()));
connect(B7, SIGNAL(clicked()),this, SLOT(confirm()));
connect(B8, SIGNAL(clicked()),this, SLOT(confirm2()));
connect(B9, SIGNAL(clicked()),this, SLOT(confirm3()));
connect(B4, SIGNAL(clicked()),this, SLOT(faireUnVirement()));
connect(B11, SIGNAL(clicked()),qApp, SLOT(quit()));
connect(B10, SIGNAL(clicked()),this, SLOT(aideban()));


QGridLayout *layout = new QGridLayout;
layout->addWidget(echoGroup, 0, 0);// 0,0 définit la position de notre layout
setLayout(layout);
setWindowTitle(tr("BNP PARIBAS"));// définit le titre de l'application
}
void Compte :: Afficher(){
    QLabel *valide = new QLabel;
    valide = new QLabel(tr("Numéro de téléphone: 0603484848 \nVotre adresse: Rue des Lumières \nAdresse email: LecorburSN2@gmail.com "));
    layout()->addWidget(valide);


}
void Compte::chb(){  // commander un chéquier
    QLabel *valide = new QLabel;
    valide = new QLabel(tr("Vous avez commandez un chéquier"));
    layout()->addWidget(valide);

}
void Compte::Rib(){
    QLabel *valide = new QLabel;
    valide = new QLabel(tr("Votre RIB est le 4789 8524 6547 0042"));
    layout()->addWidget(valide);

}

void Compte :: debiter(){
     banqEdit2->show();
     B8->show();

}
void Compte :: faireUnVirement(){
   banqEdit3->show();
   banqEdit->hide();
   banqEdit2->hide();
   B8->setDisabled(1);
   B8->hide();
   B9->show();
    viremment->show();
}

void Compte:: crediter(){
    banqEdit->show();
    B7->show();


}
void Compte:: confirm(){
     B7->show();
          solde = solde + banqEdit->text().toDouble();

          histo = histo +  banqEdit->text().toDouble();
          QLabel *Lyesold = new QLabel("Vous avez rajouter +"+ QString::number(histo) + " €");
           banqEdit->setText(QString::number(solde));
          Lyesolde->setText("Solde : "+ QString::number(solde) + " €");
          banqEdit->clear();


          layout()->addWidget(Lyesold);



}
void Compte:: confirm2(){
     B8->show();
          solde = solde - banqEdit2->text().toDouble();
          histo2 = histo2 +  banqEdit2->text().toDouble();

          QLabel *Lyesold = new QLabel("Vous avez retirer -  "+ QString::number(histo2) + " €");
          banqEdit2->setText(QString::number(solde));
          Lyesolde->setText("Solde : "+ QString::number(solde) + " €");
          banqEdit2->clear();

          layout()->addWidget(Lyesold);



}
void Compte:: confirm3(){
//     B9->show();
//          solde = solde - banqEdit3->text().toDouble();
//          soldeclient = soldeclient + banqEdit3->text().toDouble();

//          banqEdit3->setText(QString::number(soldeclient));

//          QLabel *Lyesold = new QLabel("Votre nouveau Solde : "+ QString::number(solde) + " €" );
//          Lyesolde->setText("Solde : "+ QString::number(solde) + " €");
//          QLabel *Lyesoldee = new QLabel("Son nouveau Solde : "+ QString::number(soldeclient) + " €" );
//          Lyesoldee->setText("Le nouveau Solde du compte que vous avez : "+ QString::number(soldeclient) + " €");
//          banqEdit3->clear();

//          layout()->addWidget(Lyesold);

//          layout()->addWidget(Lyesoldee);
            B9->show();
            banqEdit->setDisabled(1);
            banqEdit2->setDisabled(1);


        if ( banqEdit3->text().toDouble()== choix1)
        {
                B9->setStyleSheet("QPushButton{background-color: green}");
                QLabel *Lyesoldees = new QLabel(" Vous avez sélectionner Mr Denis" );
                layout()->addWidget(Lyesoldees);

                QLabel *Lyesoldess = new QLabel(" Insserrer votre montant " );
                layout()->addWidget(Lyesoldess);

                    banqEdit3->hide();
                  banqEdit4->show();
                  banqEdit4->show();
                 solde = solde - banqEdit4->text().toDouble();
                    soldeclient = soldeclient + banqEdit4->text().toDouble();


                 banqEdit4->setText(QString::number(soldeclient));

                 QLabel *Lyesold = new QLabel("Votre Solde : "+ QString::number(solde) + " €" );
                 Lyesolde->setText("Solde : "+ QString::number(solde) + " €");
                 QLabel *Lyesoldee = new QLabel("Son nouveau Solde : "+ QString::number(soldeclient) + " €" );
                 Lyesoldee->setText("Le nouveau Solde du compte que vous avez effectuer un virement : "+ QString::number(soldeclient) + " €");
                 banqEdit4->clear();

                 layout()->addWidget(Lyesold);

                 layout()->addWidget(Lyesoldee);


         }else if ( banqEdit3->text().toDouble()!= choix1){
             B9->setStyleSheet("QPushButton{background-color: red}");
            QLabel *Lyesoldees = new QLabel(" Erreur Rib faux" );
            layout()->addWidget(Lyesoldees);
        }


       }



void Compte:: aideban(){
    QLabel *aide = new QLabel;
    aide = new QLabel(tr("VOUS AVEZ UNE QUESTION ?\nContacter nous sur nos résaux sociaux:\n FACEBOOK : Rejoignez-nous sur Facebook pour suivre nos conseils, astuces et nos dernières actualités digitales"));
    layout()->addWidget(aide);

}

// SI ALI LYES 1 12 2020
