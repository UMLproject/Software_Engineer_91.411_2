/* 
 * File:   DeviceAbstractGui.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This class provides a GUI to display device data.  This
 *                   class is inherited by several subclasses.
 *
 * Created on April 4, 2015, 5:11 PM
 */

#ifndef DEVICE_ABSTRACT_GUI_H
#define	DEVICE_ABSTRACT_GUI_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QMessageBox>
#include <QString>
#include <QVector>
#include <QCheckBox>
#include <QTextEdit>
#include <QPushButton>
#include <QFormLayout>
#include <QHBoxLayout>
#include <QGridLayout>

#include <iostream>

using namespace std;

class DeviceAbstractGui : public QWidget
{
    Q_OBJECT
    
private:
    QLineEdit* typeLe; /**Entry to specify device type.*/
    QLineEdit* idLe; /**Entry to specify device ID.*/
    QLineEdit* ipAddressLe; /**Entry to specify device IP address.*/
    QCheckBox* preferenceCb; /**Entry to specify if this device should be started by default.*/
    QTextEdit* noteTe; /**Entry for misc. notes about the device.*/
    QPushButton* okBtn; /**Button to save data and close entry GUI.*/
    QPushButton* applyBtn; /**Button to save data; do not close entry GUI.*/
    QPushButton* cancelBtn; /**Button to exit entry GUI without saving changes*/
    
    QString typeStr;
    QString idStr;
    QString ipAddressStr;
    bool preferenceStr;
    QString noteStr;
    
    QVector<QString> typeStrVec;
    QVector<QString> idStrVec;
    QVector<QString> ipAddressStrVec;
    QVector<bool> preferenceBoolVec;
    QVector<QString> noteStrVec;
    
    
    QFormLayout* formLayout; /**Layout to contain paired labels and entry points.*/
    QHBoxLayout* buttonLayout; /**Layout to contain this class's buttons.*/
    QGridLayout* outerLayout; /**base layout added directly to class.*/
    
private slots:
    /**
     * Slot to save data and close entry GUI when "OK" button is pressed.
     */
    bool handleOkBtnSlot();

    /**
     * Slot to save data without closing entry GUI when "Apply" button is pressed.
     */
    bool handleApplyBtnSlot();

    /**
     * Slot to close the entry GUI without saving data when "Cancel" button is pressed.
     */
    void handleCancelBtnSlot();
    
public:
    /**
     * Constructor.
     * @param parent Pointer to an instance of abstract parent class.
     */
    DeviceAbstractGui(QWidget* parent = 0);
    
    QVector<QString> getTypesStrVec();
    QVector<QString> getIdStrVec();
    QVector<QString> getIpAddressStrVec();
    QVector<bool> getPreferenceBoolVec();
    QVector<QString> getNoteStrVec();
    void deleteRow(int index);
    string toString();
    
    /**
     * Destructor.
     */
    ~DeviceAbstractGui();
    
};

#endif	/* DEVICE_ABSTRACT_GUI_H */

