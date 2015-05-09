#include "UsersGui.h"
#include "ModifyDeviceGui.h"

UsersGui::UsersGui(QWidget* parent) : QWidget(parent)
{
    addUserGui = new AddUserGui();
    modifyUserGui = new ModifyUserGui();
    
    verifyMessageBox = new QMessageBox();
    verifyMessageBox->setText("<qt>The specified action is <b>irrevocable.</b><qt>");
    verifyMessageBox->setInformativeText("<qt>\nAre you sure you would like to continue?</qt>");
    verifyMessageBox->setStandardButtons(QMessageBox::No | QMessageBox::Yes);
    verifyMessageBox->setDefaultButton(QMessageBox::No);
    verifyMessageBox->setIcon(QMessageBox::Warning);
    
    tableStrLst = new QStringList();
    tableStrLst->append("Name");
    tableStrLst->append("Email");
    //tableStrLst->append("Exercise(s)");
    //tableStrLst->append("More");
    tableWidget = new QTableWidget(5, 2, this);
    tableWidget->setHorizontalHeaderLabels(*tableStrLst);
    //tableWidget->setCellWidget(4, 3, new QPushButton("More", this) );
/*
    for(size_t i = 0; i < tableWidget->rowCount(); i++)
    {
        tableWidget->setCellWidget(i, 2, new QComboBox(this) );
        tableWidget->setCellWidget(i, 3, new QPushButton("More", this) );
    }
*/
    
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


void UsersGui::handleMoreBtnSlot()
{
    cout << "\"more\" button pressed" << endl;
}


void UsersGui::handleAddBtnSlot()
{
    cout << "\"add\" button pressed" << endl;
    addUserGui->show();
}


void UsersGui::handleModifyBtnSlot()
{
    cout << "\"modify\" button pressed" << endl;
    modifyUserGui->show();
    
    updateTableWidget();
}


void UsersGui::handleRemoveBtnSlot()
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
}


void UsersGui::updateTableWidget()
{
    cout << "!!!!!!!!!UPDATING TABLE*********************" << endl;
    QVector<QString> tmpNameStrVec = addUserGui->getNameStrVec();
    QVector<QString> tmpEmailStrVec = addUserGui->getEmailStrVec();
    
    for(size_t i = 0; i <= tableWidget->rowCount(); i++)
        tableWidget->removeRow(i);
    
    for(size_t i = 0; i < tmpNameStrVec.size(); i++)
    {
        QTableWidgetItem* nameItem = new QTableWidgetItem(tr(tmpNameStrVec.at(i).toLatin1()));
        QTableWidgetItem* emailStrItem = new QTableWidgetItem(tr(tmpEmailStrVec.at(i).toLatin1()));
        
        tableWidget->insertRow(i);
        tableWidget->setItem(i, 0, nameItem);
        tableWidget->setItem(i, 1, emailStrItem);
    }
    
    if(tableWidget->rowCount() > 2)
        tableWidget->removeRow( (tableWidget->rowCount() - 1) );
    cout << "Row count: " << tableWidget->rowCount() << endl;
}


UsersGui::~UsersGui()
{
    ;
}
