#include "DeviceAbstractGui.h"


DeviceAbstractGui::DeviceAbstractGui(QWidget* parent) : QWidget(parent)
{
    typeLe = new QLineEdit();
    idLe = new QLineEdit();
    ipAddressLe = new QLineEdit();
    preferenceCb = new QCheckBox();
    noteTe = new QTextEdit();
    
    okBtn = new QPushButton("OK", this);
    applyBtn = new QPushButton("Apply", this);
    cancelBtn = new QPushButton("Cancel", this);
    
    connect(okBtn, SIGNAL(released()), this, SLOT(handleOkBtnSlot()));
    connect(applyBtn, SIGNAL(released()), this, SLOT(handleApplyBtnSlot()));
    connect(cancelBtn, SIGNAL(released()), this, SLOT(handleCancelBtnSlot()));
    
    formLayout = new QFormLayout();
    formLayout->addRow(tr("&Type"), typeLe);
    formLayout->addRow(tr("&ID"), idLe);
    formLayout->addRow(tr("&IP Address"), ipAddressLe);
    formLayout->addRow(tr("&Preference"), preferenceCb);
    formLayout->addRow(tr("&Note"), noteTe);
    
    buttonLayout = new QHBoxLayout();
    buttonLayout->addWidget(okBtn);
    buttonLayout->addWidget(applyBtn);
    buttonLayout->addWidget(cancelBtn);
    
    outerLayout = new QGridLayout();
    outerLayout->addLayout(formLayout, 0, 0);
    outerLayout->addLayout(buttonLayout, 1, 0, Qt::AlignRight);
    
    this->setLayout(outerLayout);
}


void DeviceAbstractGui::handleOkBtnSlot()
{
    if(idStr != typeLe->text())
    {
        cout << "adding" << endl;
        typeStr = typeLe->text();
        idStr = idLe->text();
        ipAddressStr = ipAddressLe->text();
        bool preferenceStr = preferenceCb->isChecked();
        noteStr = noteTe->toPlainText();
    
        typeStrVec.push_back(typeStr);
        idStrVec.push_back(idStr);
        ipAddressStrVec.push_back(ipAddressStr);
        preferenceStrVec.push_back(preferenceStr);
        noteStrVec.push_back(noteStr);
        
        this->close();
    }
    
    //cout << toString() << endl;

}


void DeviceAbstractGui::handleApplyBtnSlot()
{
    if(idStr != typeLe->text())
    {
        typeStr = typeLe->text();
        idStr = idLe->text();
        ipAddressStr = ipAddressLe->text();
        bool preferenceStr = preferenceCb->isChecked();
        noteStr = noteTe->toPlainText();
    
        typeStrVec.push_back(typeStr);
        idStrVec.push_back(idStr);
        ipAddressStrVec.push_back(ipAddressStr);
        preferenceStrVec.push_back(preferenceStr);
        noteStrVec.push_back(noteStr);

    }
}


void DeviceAbstractGui::handleCancelBtnSlot()
{
    cout << "\"Cancel\" button pressed" << endl;
}


DeviceAbstractGui::~DeviceAbstractGui()
{
    ;
}
