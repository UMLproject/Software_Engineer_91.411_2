/*
 * File: SpeechController
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description: This file deserializes vocal comands into text, and
 *                   uses these to activate events on the GUI.
 *
 * Created
 */

#ifndef SPEECH_CONTROLLER_H
#define SPEECH_CONTROLLER_H

#include <ros/ros.h>
#include <std_msgs/String.h>
#include <iostream>

//#include "/home/james/se_ws/src/Software_Engineer_91.411_2/2_DataAggregator/Code/kinect_app/app_node/src/MasterGui.h"
#include "../../app_node/src/MasterGui.h"

using namespace std;

class SpeechController
{

private:
    ;

enum Command
     {
         ACTIVATE,
         DEACTIVATE,
         START_VIDEO,
	 STOP_VIDEO,
         RESULTS,
	 USERS,
	 DEVICES,
	 HISTORY,
	 HELP,
	 Exit,
	 HIDE_MENU,
	 SHOW_MENU
     };
    Command command;
    MasterGui* masterGui;

public:
    SpeechController();
    void callback(const std_msgs::String::ConstPtr& msg);
    void runCommand(Command command);
    ~SpeechController();

};

#endif /* SPEECH_CONTROLLER_H */
