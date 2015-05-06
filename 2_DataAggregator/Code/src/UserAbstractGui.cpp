#include "UserAbstractGui.h"


UserAbstractGui::UserAbstractGui(QWidget* parent) : QWidget(parent)
{   
    
    nameLe = new QLineEdit();
    emailLe = new QLineEdit();
    usernameLe = new QLineEdit();
    passwordLe = new QLineEdit();
    //connect(passwordLe, SIGNAL(textChanged() ), this, SLOT(handlePasswordLeSlot() ) );
    accountTypesLst = new QStringList();
    accountTypesLst->push_back("Admin");
    accountTypesLst->push_back("User");
    accountTypeCb = new QComboBox();
    accountTypeCb->addItems(*accountTypesLst);
    retypePasswordLbl = new QLabel("Retype Password", this);
    retypePasswordLbl->setVisible(false);
    retypePasswordLe = new QLineEdit();
    retypePasswordLe->setVisible(false);
    exerciesTe = new QTextEdit();
    noteTe = new QTextEdit();
    
    okBtn = new QPushButton("Ok", this);
    applyBtn = new QPushButton("Apply", this);
    cancelBtn = new QPushButton("Cancel", this);
    
    connect(okBtn, SIGNAL(released()), this, SLOT(handleOkBtnSlot()));
    connect(applyBtn, SIGNAL(released()), this, SLOT(handleApplyBtnSlot()));
    connect(cancelBtn, SIGNAL(released()), this, SLOT(handleCancelBtnSlot()));
    
    formLayout = new QFormLayout();
    formLayout->addRow(tr("&Name"), nameLe);
    formLayout->addRow(tr("&Email"), emailLe);
    formLayout->addRow(tr("&Username"), usernameLe);
    formLayout->addRow(tr("&Password"), passwordLe);
    formLayout->addRow(retypePasswordLbl, retypePasswordLe);
    formLayout->addRow(tr("&Account Type"), accountTypeCb);
    formLayout->addRow(tr("&Exercise(s)"), exerciesTe);
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


void UserAbstractGui::handlePasswordLeSlot()
{
    retypePasswordLbl->setVisible(true);
    retypePasswordLe->setVisible(true);
}


void UserAbstractGui::handleOkBtnSlot()
{
    if(usernameStr != usernameLe->text() )
    {
        nameStr = nameLe->text();
        emailStr = emailLe->text();
        usernameStr = usernameLe->text();
        passwordStr = passwordLe->text();
        accountTypeStr = accountTypeCb->currentText();
        exerciesStr = exerciesTe->toPlainText();
        noteStr = noteTe->toPlainText();
    
        nameStrVec.push_back(nameStr);
        emailStrVec.push_back(emailStr);
        usernameStrVec.push_back(usernameStr);
        passwordStrVec.push_back(passwordStr);
        accountTypeStrVec.push_back(accountTypeStr);
        exerciesStrVec.push_back(exerciesStr);
        noteStrVec.push_back(noteStr);
        
        this->close();
    }
    
    //cout << toString() << endl;
   
}


void UserAbstractGui::handleApplyBtnSlot()
{
    if(usernameStr != usernameLe->text() )
    {
        nameStr = nameLe->text();
        emailStr = emailLe->text();
        usernameStr = usernameLe->text();
        passwordStr = passwordLe->text();
        accountTypeStr = accountTypeCb->currentText();
        exerciesStr = exerciesTe->toPlainText();
        noteStr = noteTe->toPlainText();
    
        nameStrVec.push_back(nameStr);
        emailStrVec.push_back(emailStr);
        usernameStrVec.push_back(usernameStr);
        passwordStrVec.push_back(passwordStr);
        accountTypeStrVec.push_back(accountTypeStr);
        exerciesStrVec.push_back(exerciesStr);
        noteStrVec.push_back(noteStr);

    }
}


void UserAbstractGui::handleCancelBtnSlot()
{
    this->close();
}


void UserAbstractGui::unloadDefaultBtns()
{
    outerLayout->removeItem(buttonLayout);
    okBtn->setEnabled(false);
    okBtn->setVisible(false);
    applyBtn->setEnabled(false);
    applyBtn->setVisible(false);
    cancelBtn->setEnabled(false);
    cancelBtn->setVisible(false);
}


string UserAbstractGui::toString()
{
    string tmp;
    tmp.append("Name\tEmail\tUsername\tPassword\tAccount Type\tExercise(s)\tNote\n");
    /*for(size_t i = 0; i < usernameStrVec.size(); i++)
    {
        tmp.append(nameStrVec.at(i));
        tmp.append("\t");
        tmp.append(emailStrVec.at(i));
        tmp.append("\t");
        tmp.append(usernameStrVec.at(i));
        tmp.append("\t");
        tmp.append(passwordStrVec.at(i));
        tmp.append("\t");
        tmp.append(accountTypeStrVec.at(i));
        tmp.append("\t");
        tmp.append(exerciesStrVec.at(i));
        tmp.append("\t");
        tmp.append(noteStrVec.at(i));
        tmp.append("\n");
    }*/
    
    return tmp;
}


UserAbstractGui::~UserAbstractGui()
{
    ;
}
