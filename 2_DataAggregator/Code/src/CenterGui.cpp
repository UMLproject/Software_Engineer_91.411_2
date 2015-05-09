#include "CenterGui.h"

CenterGui::CenterGui(QWidget* parent) : QWidget(parent)
{
    usernameLbl = new QLabel("Welcome!");
    
    QFont* font1 = new QFont("Serif");
    font1->setBold(true);
    font1->setPointSize(14);
    usernameLbl->setFont(*font1);
    
    QFont* font2 = new QFont("Serif");
    font2->setPointSize(12);
    textLbl = new QLabel("Welcome to the dashboard.\nPlease select an optionfrom\nthe menu to the right ->");
    textLbl->setFont(*font2);
    
    outerLayout = new QGridLayout(this);
    outerLayout->addWidget(usernameLbl, 0, 0, Qt::AlignCenter);
    outerLayout->addWidget(textLbl, 1, 0, Qt::AlignHCenter);
    
    this->setLayout(outerLayout);
    this->setMinimumSize(500, 300);//setMinimumSize(600, 400);
}


CenterGui::~CenterGui()
{
    ;
}