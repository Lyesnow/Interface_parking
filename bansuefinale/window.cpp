#include "window.h"
#include "QComboBox"
#include <QGridLayout>
#include <QGroupBox>
#include <QLabel>
#include <QLineEdit>
#include <QMessageBox>
#include <QPixmap>
#include <QApplication>
#include <compte.h>
#include <QChar>

Window::Window(QWidget *parent)
: QWidget(parent)
{
QGroupBox *echoGroup = new QGroupBox(tr("Bienvenue sur La gestion du Parking, connectez-vous s'il vous plaît"));


QLabel *echoLabel = new QLabel(tr("Mot de passe"));

QLabel *echoLabell =  new QLabel(tr("Identifiant"));

echoLineEdit = new QLineEdit;
echoLineEdit->setPlaceholderText("Identifiant");
echoLineEdit->setMaxLength(9); // je met 9 cara max
echoLineEdit2 = new QLineEdit;
echoLineEdit2->setDisabled(1);
echoLineEdit2->setPlaceholderText("Mot de passe");
echoLineEdit2->setMaxLength(4); // 4 cara max
echoCheckBox = new QCheckBox("Masquer");
echoCheckBox2 = new QCheckBox("Masquer");



QGridLayout *echoLayout = new QGridLayout; // crée une grille dans j'insère mes boutons à l'intérieure
echoLayout->addWidget(echoLabell, 0, 0);
echoLayout->addWidget(echoCheckBox, 0, 1);
echoLayout->addWidget(echoLineEdit, 1, 0, 1, 2);
echoLayout->addWidget(echoLabel, 2,0);
echoLayout->addWidget(echoCheckBox2, 2, 1);
echoLayout->addWidget(echoLineEdit2, 3, 0, 1, 2);
echoLayout->addWidget(connexion, 4,0,1,2); // ça me prend toute la ligne
echoLayout->addWidget(B2, 5,0);
echoLayout->addWidget(B3, 6, 0);
echoLayout->addWidget(B4, 7,0);
echoLayout->addWidget(B5, 8,0);
echoLayout->addWidget(B6, 9,0);
echoLayout->addWidget(B7, 5,1);
echoLayout->addWidget(B8, 6,1);
echoLayout->addWidget(B9, 7,1);
echoLayout->addWidget(B10, 8,1);
echoLayout->addWidget(B11, 9,1);
echoLayout->addWidget(B12, 5,0);
echoLayout->addWidget(B13, 6, 0);
echoLayout->addWidget(B14, 7,0);
echoLayout->addWidget(B15, 8,0);
echoLayout->addWidget(B16, 9,0);
echoLayout->addWidget(B17, 5,1);
echoLayout->addWidget(B18, 6,1);
echoLayout->addWidget(B19, 7,1);
echoLayout->addWidget(B20, 8,1);
echoLayout->addWidget(B21, 9,1);
echoLayout->addWidget(erase, 10,0);
echoLayout->addWidget(Button, 10,0);
echoLayout->addWidget(B22, 5,2,1,1);
echoLayout->addWidget(B23, 6,2,1,1);
echoLayout->addWidget(B24, 7,2,1,1);
echoLayout->addWidget(B25, 8,2,1,1);
echoLayout->addWidget(B26, 9,2,1,1);
echoLayout->addWidget(B27, 5,3,1,1);
echoLayout->addWidget(B28, 6,3,1,1);
echoLayout->addWidget(B29, 7,3,1,1);
echoLayout->addWidget(B30, 8,3,1,1);
echoLayout->addWidget(B31, 9,3,1,1);
echoLayout->addWidget(B32, 5,4,1,1);
echoLayout->addWidget(B33, 6,4,1,1);
echoLayout->addWidget(B34, 7,4,1,1);
echoLayout->addWidget(B35, 8,4,1,1);
echoLayout->addWidget(B36, 9,4,1,1);
echoLayout->addWidget(B37, 5,5,1,1);
echoLayout->addWidget(B38, 6,5,1,1);

Button->hide();
B12->hide();
B13->hide();
B14->hide();
B15->hide();
B16->hide();
B17->hide();
B18->hide();
B19->hide();
B20->hide();
B21->hide();
B22->hide();
B23->hide();
B24->hide();
B25->hide();
B26->hide();
B27->hide();
B28->hide();
B29->hide();
B30->hide();
B31->hide();
B32->hide();
B33->hide();
B34->hide();
B35->hide();
B36->hide();
B37->hide();
B38->hide();

//echoLayout->addWidget(erase, 5,1,1,1);


this->B3->setGeometry(25, 50, 50, 25);
connect(B2, SIGNAL(clicked()),this, SLOT(clickedSlot())); // je connecte tous les boutons
connect(B3, SIGNAL(clicked()),this, SLOT(clickedSlot()));
connect(B4, SIGNAL(clicked()),this, SLOT(clickedSlot()));
connect(B5, SIGNAL(clicked()),this, SLOT(clickedSlot()));
connect(B6, SIGNAL(clicked()),this, SLOT(clickedSlot()));
connect(B7, SIGNAL(clicked()),this, SLOT(clickedSlot()));
connect(B8, SIGNAL(clicked()),this, SLOT(clickedSlot()));
connect(B9, SIGNAL(clicked()),this, SLOT(clickedSlot()));
connect(B10, SIGNAL(clicked()),this, SLOT(clickedSlot()));
connect(B11, SIGNAL(clicked()),this, SLOT(clickedSlot()));
connect(B12, SIGNAL(clicked()),this, SLOT(clickedSlot())); // je connecte tous les boutons
connect(B13, SIGNAL(clicked()),this, SLOT(clickedSlot()));
connect(B14, SIGNAL(clicked()),this, SLOT(clickedSlot()));
connect(B15, SIGNAL(clicked()),this, SLOT(clickedSlot()));
connect(B16, SIGNAL(clicked()),this, SLOT(clickedSlot()));
connect(B17, SIGNAL(clicked()),this, SLOT(clickedSlot()));
connect(B18, SIGNAL(clicked()),this, SLOT(clickedSlot()));
connect(B19, SIGNAL(clicked()),this, SLOT(clickedSlot()));
connect(B20, SIGNAL(clicked()),this, SLOT(clickedSlot()));
connect(B21, SIGNAL(clicked()),this, SLOT(clickedSlot()));
connect(B22, SIGNAL(clicked()),this, SLOT(clickedSlot())); // je connecte tous les boutons
connect(B23, SIGNAL(clicked()),this, SLOT(clickedSlot()));
connect(B24, SIGNAL(clicked()),this, SLOT(clickedSlot()));
connect(B25, SIGNAL(clicked()),this, SLOT(clickedSlot()));
connect(B26, SIGNAL(clicked()),this, SLOT(clickedSlot()));
connect(B27, SIGNAL(clicked()),this, SLOT(clickedSlot()));
connect(B28, SIGNAL(clicked()),this, SLOT(clickedSlot()));
connect(B29, SIGNAL(clicked()),this, SLOT(clickedSlot()));
connect(B30, SIGNAL(clicked()),this, SLOT(clickedSlot()));
connect(B31, SIGNAL(clicked()),this, SLOT(clickedSlot()));
connect(B32, SIGNAL(clicked()),this, SLOT(clickedSlot())); // je connecte tous les boutons
connect(B33, SIGNAL(clicked()),this, SLOT(clickedSlot()));
connect(B34, SIGNAL(clicked()),this, SLOT(clickedSlot()));
connect(B35, SIGNAL(clicked()),this, SLOT(clickedSlot()));
connect(B36, SIGNAL(clicked()),this, SLOT(clickedSlot()));
connect(B37, SIGNAL(clicked()),this, SLOT(clickedSlot()));
connect(B38, SIGNAL(clicked()),this, SLOT(clickedSlot()));
connect(connexion, SIGNAL(clicked(bool)),this,SLOT (connecslot()));
connect(erase, SIGNAL(clicked(bool)),this,SLOT (erased()));
connect(Button, SIGNAL(clicked(bool)),this,SLOT (abcd()));
echoGroup->setLayout(echoLayout);
connect(echoCheckBox, SIGNAL(clicked()), this, SLOT(masque()));
connect(echoCheckBox2, SIGNAL(clicked()), this, SLOT(masque()));
connect(connexion, SIGNAL(clicked(bool)),this,SLOT (trois()));

QGridLayout *layout = new QGridLayout;
layout->addWidget(echoGroup, 0, 0);// 0,0 définit la position de notre layout
setLayout(layout);

setWindowTitle(tr("Gestion Parking"));// définit le titre de l'application
//connect(echoComboBox,QOverload<int>::of(&QComboBox::activated),this, &Window::echoChanged);
}

//void Window::echoChanged(int index)
//{
//switch (index) {
//case 0:
//echoLineEdit2->setEchoMode(QLineEdit::Normal);
//break;
//case 1:
//echoLineEdit2->setEchoMode(QLineEdit::Password);
//break;
//case 2:
//    echoLineEdit2->setEchoMode(QLineEdit::PasswordEchoOnEdit);
//    break;
//    case 3:
//    echoLineEdit2->setEchoMode(QLineEdit::NoEcho);
//    break;
//    }
//}
void Window::masque(){

    if(echoCheckBox->isChecked()){
     echoLineEdit->setEchoMode(QLineEdit::Password);
}
    else if (!echoCheckBox->isChecked()){
     echoLineEdit->setEchoMode(QLineEdit::Normal);
    }

    if (echoCheckBox2->isChecked()){
        echoLineEdit2->setEchoMode(QLineEdit::Password);
   }
       else if (!echoCheckBox2->isChecked()){
        echoLineEdit2->setEchoMode(QLineEdit::Normal);
}
}
void Window:: erased()
{
    B2->hide();
    B3->hide();
    B4->hide();
    B5->hide();
    B6->hide();
    B7->hide();
    B8->hide();
    B9->hide();
    B10->hide();
    B11->hide();
    erase->hide();

    Button->show();
    B12->show();
    B13->show();
    B14->show();
    B15->show();
    B16->show();
    B17->show();
    B18->show();
    B19->show();
    B20->show();
    B21->show();
    B21->show();
    B22->show();
    B23->show();
    B24->show();
    B25->show();
    B26->show();
    B27->show();
    B28->show();
    B29->show();
    B30->show();
    B31->show();
    B32->show();
    B33->show();
    B34->show();
    B35->show();
    B36->show();
    B37->show();
    B38->show();

}
void Window:: abcd()
{
    B12->hide();
    B13->hide();
    B14->hide();
    B15->hide();
    B16->hide();
    B17->hide();
    B18->hide();
    B19->hide();
    B20->hide();
    B21->hide();
    B22->hide();
    B23->hide();
    B24->hide();
    B25->hide();
    B26->hide();
    B27->hide();
    B28->hide();
    B29->hide();
    B30->hide();
    B31->hide();
    B32->hide();
    B33->hide();
    B34->hide();
    B35->hide();
    B36->hide();
    B37->hide();
    B38->hide();
    erase->show();

    Button->hide();
    B2->show();
    B3->show();
    B4->show();
    B5->show();
    B6->show();
    B7->show();
    B8->show();
    B9->show();
    B10->show();
    B11->show();
}
void Window:: clickedSlot()
{
QPushButton *button = (QPushButton *) sender();
//QLineEdit::text(), QString::at(), QChar::toAscii())
int num_bouton = (button->text()[0].digitValue()); //

echoLineEdit->setText(echoLineEdit->text()+QString::number(num_bouton));// j envoie le texte sur la ligne

QString texte_ID = echoLineEdit->text();
QString Iden = "123456789";
QString mdp_ID = echoLineEdit2->text();
QString mdp = "9320";
if (texte_ID==Iden)
    {
     //connect(edit, SIGNAL(textChanged()), this, SLOT(echolineEdit2);
    echoLineEdit->setDisabled(true);
    echoLineEdit2->setDisabled(1);
    echoLineEdit2->setEnabled(1);
    echoLineEdit2->setText(echoLineEdit2->text()+QString::number(num_bouton));
     }else if(mdp_ID==mdp)
{
    connexion->setDisabled(1);
    connexion->setEnabled(1);

}

}

void Window:: connecslot()
{
QString texte_ID = echoLineEdit->text();
QString Iden = "123456789";
QString mdp_ID = echoLineEdit2->text();
QString mdp = "9320";
QLabel *valide = new QLabel;

if (texte_ID==Iden && mdp_ID==mdp) // je recupere le compte avec l id et le mdp je verifie
    {

    connexion->setStyleSheet("QPushButton{background-color: green}");
    Compte *ls = new Compte;
    ls->show();
    this->close();



       valide = new QLabel(tr("Connection établie!"));
       layout()->addWidget(valide);
       }else if( mdp_ID!=mdp )
{
    connexion->setStyleSheet("QPushButton{background-color: red}");
       valide = new QLabel(tr("Connection rater"));
       layout()->addWidget(valide);
}else if( texte_ID!=Iden )
{
    connexion->setStyleSheet("QPushButton{background-color: red}");
       valide = new QLabel(tr("Connection rater"));
       layout()->addWidget(valide);
}
}


void Window ::trois()
{
    QString texte_ID = echoLineEdit->text();
    QString Iden = "123456789";
    QString mdp_ID = echoLineEdit2->text();
    QString mdp = "9320";
    QLabel *valide = new QLabel;
    tentative++;
    if (texte_ID!=Iden && mdp_ID!=mdp && tentative==1)
    {
       // QApplication::quit();
        valide = new QLabel(tr("Il vous reste 2 tentatives "));
        layout()->addWidget(valide);

    }else if (texte_ID!=Iden && mdp_ID!=mdp && tentative==2)
    {
       // QApplication::quit();
        valide = new QLabel(tr("Il vous reste 1 tentative "));
        layout()->addWidget(valide);

    } else if ( tentative==3)
    {
        QApplication::quit();
    }
}


















//    //echoLineEdit2->setText(echoLineEdit2->text()+QString::number(num_bouton));
//    //connexion->setStyleSheet("QPushButton { background-color: red; }");
//    connexion->setDisabled(1); // si oui alors le bouton connexion se dverouille
//    connexion->setEnabled(1);
//    QMessageBox msgBox;
//    msgBox.setWindowTitle("BNP PARIBAS");
//    msgBox.setText(" <font color='green'> connexion réussie  </font>  ");
//    msgBox.exec();
//     } else if (texte_ID!=Iden)
//{
//     //connexion->setText("<font color='red'> idenntifiant ou mdp faux  </font>");
//    QMessageBox msgBox;
//    msgBox.setWindowTitle("BNP PARIBAS");
//    msgBox.setText(" <font color='red'> Ident ou mdp faux pour   ");
//    msgBox.exec();
//}
//else if (mdp_ID!=mdp)
//{
//     //connexion->setText("<font color='red'> idenntifiant ou mdp faux  </font>");
//    QMessageBox msgBox;
//    msgBox.setWindowTitle("BNP PARIBAS");
//    msgBox.setText(" <font color='red'> Ident ou mdp faux    ");
//    msgBox.exec();

//}if (mdp_ID==mdp)
//{
//connexion->setStyleSheet("QPushButton { background-color:rgb(0,128,0); }");
//} else if ( mdp_ID!=mdp)
//{
//    connexion->setStyleSheet("QPushButton { background-color: red; }");
//    echoLineEdit2->clear();
//}
//if (texte_ID==Iden)
//{
//echoLineEdit->setStyleSheet("{ background-color:rgb(0,128,0); }");
//} else if ( texte_ID!=Iden)
//{
//    echoLineEdit->setStyleSheet(" { background-color: red; }");
//}
//if (texte_ID==Iden && mdp_ID==mdp) // je recupere le compte avec l id et le mdp je verifie
//    {
//    connexion->setStyleSheet("")
//     } else if (texte_ID!=Iden)







//void Window::Hlayout1(){}
//void Window::Hlayout2(){}

// Si Ali Lyes
