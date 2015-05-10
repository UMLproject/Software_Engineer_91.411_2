###**Software Engineering I Term Project**
![Logo](https://github.com/DeepBlue14/Software_Engineer_91.411_2/blob/master/2_DataAggregator/Code/se_logo.png)


*Authors*:  
James Kuczynski, James_Kuczynski@student.uml.edu  
Michael Forsyth, Michael_Forsyth@student.uml.edu  
Nicholas Forsyth, Nicholas_Forsyth@student.uml.edu  
Neel Tripathi, Neel_Tripathi@student.uml.edu  
Robert Vecchione, Robert_Vecchione@student.uml.edu  


####**Index**
- Dependencies
- Installation
- Build & Run


To see the demo, go to: https://github.com/DeepBlue14/Software_Engineer_91.411_2/blob/master/2_DataAggregator/Demo/README.md



####**Dependencies**
- [Ubuntu][2] 12.04-15.04 *(tested with 14.04)*
- [QT4][1] Project
- [QJson][4]
- [SQLite][3] Database



####**Installation**


Install [QT4][1]:
```bash
sudo apt-get install libqt4-*
```


Install [QJson][4]
```bash
sudo apt-get install libqjson0 libqjson-*
```


Install [SQLite][3]
```bash
sudo apt-get install sqlite3 libsqlite3-dev
```



####**Build & Run**


This project was built using the NetBeans IDE, since it is one which we are all familiar with *(we use it in Computing IV)*.  Instructions for running with other IDEs such as Eclipse should be similar.  

Start NetBeans, press the "**Open Project**" button.  Navigate to the project, and open the "**Code**" folder.  The configuration files included should link to external resources, but to double check:
- Right-click the project
- Select "Properties"
- Select "Qt" from the options on the left.
- Make sure that the following checkboxes are selected: "**QtCore**", "**QtGui**", "**QtWidgets**", "**QtSql**", "**QtXml**".
- "MOC Directory" should be "moc" *(optional)*

- Next, select "Linker" from the options on the left.
- Under "Libraries" should be listed "**qjson**" and "**sqlite3**".  If these are NOT present, then select the "..." button, type "Add Library..." and type "qjson".  Press "OK".  Then repete the operation to add "sqlite3".

If this is done correctly, the application should be ready to compile/run.  Run the "Clean&Build" button.  Press the green arrow run button to launch the app.





<!--links-->

[1]: http://qt-project.org/
[2]: http://www.ubuntu.com/
[3]: https://sqlite.org/
[4]: http://qjson.sourceforge.net/

