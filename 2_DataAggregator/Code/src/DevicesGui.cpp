#include "DevicesGui.h"


DevicesGui::DevicesGui(QWidget* parent) : QWidget(parent)
{
    addDeviceGui = new AddDeviceGui();
    modifyDeviceGui = new ModifyDeviceGui();
    
    verifyMessageBox = new QMessageBox();
    verifyMessageBox->setText("<qt>The specified action is <b>irrevocable.</b><qt>");
    verifyMessageBox->setInformativeText("<qt>\nAre you sure you would like to continue?</qt>");
    verifyMessageBox->setStandardButtons(QMessageBox::No | QMessageBox::Yes);
    verifyMessageBox->setDefaultButton(QMessageBox::No);
    verifyMessageBox->setIcon(QMessageBox::Warning);
    
    
    tableStrLst = new QStringList();
    tableStrLst->append("Type");
    tableStrLst->append("ID");
    tableStrLst->append("Address");
    tableStrLst->append("Status");
    tableWidget = new QTableWidget(1, 4, this);
    tableWidget->setHorizontalHeaderLabels(*tableStrLst);
    
    addBtn = new QPushButton("Add", this);
    modifyBtn = new QPushButton("Modify", this);
    removeBtn = new QPushButton("Remove", this);
    
    connect(addBtn, SIGNAL(released() ), this, SLOT(handleAddBtnSlot() ) );
    connect(modifyBtn, SIGNAL(released() ), this, SLOT(handleModifyBtnSlot() ) );
    connect(removeBtn, SIGNAL(released() ), this, SLOT(handleRemoveBtnSlot() ) );
    
    buttonLayout = new QHBoxLayout();
    buttonLayout->addWidget(addBtn);
    buttonLayout->addWidget(modifyBtn);
    buttonLayout->addWidget(removeBtn);
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(tableWidget, 0, 0);
    outerLayout->addLayout(buttonLayout, 1, 0, Qt::AlignRight);
    
    this->setLayout(outerLayout);
}


void DevicesGui::handleAddBtnSlot()
{
    cout << "\"add\" button pressed" << endl;
    addDeviceGui->show();
    

}


void DevicesGui::handleModifyBtnSlot()
{
    cout << "\"modify\" button pressed" << endl;
    modifyDeviceGui->show();
    
    updateTableWidget();
}


void DevicesGui::handleRemoveBtnSlot()
{
    cout << "\"remove\" button pressed" << endl;
    int ret = verifyMessageBox->exec();
    
    switch(ret)
    {
        case QMessageBox::Yes:
            ;
            break;
        case QMessageBox::No:
            ;
            break;
        default:
            ;
    }
    
    updateTableWidget();
}


void DevicesGui::updateTableWidget()
{
    QVector<QString> tmpTypeStrVec = addDeviceGui->getTypesStrVec();
    QVector<QString> tmpIpAddressStrVec = addDeviceGui->getIpAddressStrVec();
    QVector<bool> tmpPreferenceBoolVec = addDeviceGui->getPreferenceBoolVec();
    QVector<QString> tmpNoteStrVec = addDeviceGui->getNoteStrVec();
    
    cout << endl << addDeviceGui->getTypesStrVec().size() << endl;
    
    for(size_t i = 0; i <= tmpTypeStrVec.size(); i++)
        tableWidget->removeRow(i);
    
    for(size_t i = 0; i < tmpTypeStrVec.size(); i++)
    {
        QTableWidgetItem* typeItem = new QTableWidgetItem(tr(tmpTypeStrVec.at(i).toLatin1()));
        QTableWidgetItem* ipAddrItem = new QTableWidgetItem(tr(tmpIpAddressStrVec.at(i).toLatin1()));
        
        QTableWidgetItem* prefItem;
        if(tmpPreferenceBoolVec.at(i) == true)
            prefItem = new QTableWidgetItem(tr("Yes"));
        else
            prefItem = new QTableWidgetItem(tr("No"));
        
        QTableWidgetItem* noteItem = new QTableWidgetItem(tr(tmpNoteStrVec.at(i).toLatin1()));
        
        tableWidget->insertRow(i);
        tableWidget->setItem(i, 0, typeItem);
        tableWidget->setItem(i, 1, ipAddrItem);
        tableWidget->setItem(i, 2, prefItem);
        tableWidget->setItem(i, 3, noteItem);
    }
}


DevicesGui::~DevicesGui()
{
    ;
}
