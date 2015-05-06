#include <qt4/QtGui/qmessagebox.h>

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


bool DeviceAbstractGui::handleOkBtnSlot()
{
    if(idStr != idLe->text())
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
        preferenceBoolVec.push_back(preferenceStr);
        noteStrVec.push_back(noteStr);
        
        typeLe->setText("");
        idLe->setText("");
        ipAddressLe->setText("");
        preferenceCb->setCheckable(false);
        noteTe->setText("");
        
        this->close();
    }
    
    cout << toString() << endl;
    
    QMessageBox* msg = new QMessageBox();
    msg->setText("<qt><b>Note!</b><qt>");
    msg->setInformativeText("<qt>\nPress the <b>Devices</b> button to update the table</qt>");
    msg->setStandardButtons(QMessageBox::Ok);
    msg->exec();
    
    return true;
}


bool DeviceAbstractGui::handleApplyBtnSlot()
{
    if(idStr != idLe->text())
    {
        typeStr = typeLe->text();
        idStr = idLe->text();
        ipAddressStr = ipAddressLe->text();
        bool preferenceStr = preferenceCb->isChecked();
        noteStr = noteTe->toPlainText();
    
        typeStrVec.push_back(typeStr);
        idStrVec.push_back(idStr);
        ipAddressStrVec.push_back(ipAddressStr);
        preferenceBoolVec.push_back(preferenceStr);
        noteStrVec.push_back(noteStr);

    }
    
    QMessageBox* msg = new QMessageBox();
    msg->setText("<qt><b>Note!</b><qt>");
    msg->setInformativeText("<qt>\nPress the <b>Devices</b> button to update the table</qt>");
    msg->setStandardButtons(QMessageBox::Ok);
    msg->exec();
    
    return true;
}


void DeviceAbstractGui::handleCancelBtnSlot()
{
    this->close();
}


QVector<QString> DeviceAbstractGui::getTypesStrVec()
{
    return typeStrVec;
}


QVector<QString> DeviceAbstractGui::getIdStrVec()
{
    return idStrVec;
}


QVector<QString> DeviceAbstractGui::getIpAddressStrVec()
{
    return ipAddressStrVec;
}


QVector<bool> DeviceAbstractGui::getPreferenceBoolVec()
{
    return preferenceBoolVec;
}


QVector<QString> DeviceAbstractGui::getNoteStrVec()
{
    return noteStrVec;
}


string DeviceAbstractGui::toString()
{
    string tmp;
    tmp.append("Type\tID\tIP Address\tPreference?\tNote\n");
    
    for(size_t i = 0; i < ipAddressStrVec.size(); i++)
    {
        tmp.append(typeStrVec.at(i).toUtf8());
        tmp.append("\t");
        tmp.append(idStrVec.at(i).toUtf8());
        tmp.append("\t");
        tmp.append(ipAddressStrVec.at(i).toUtf8());
        tmp.append("\t");
        tmp.append(preferenceBoolVec.at(i) + "");
        tmp.append("\t");
        tmp.append(noteStrVec.at(i).toUtf8());
        tmp.append("\n");
    }
    
    return tmp;
}


DeviceAbstractGui::~DeviceAbstractGui()
{
    ;
}
