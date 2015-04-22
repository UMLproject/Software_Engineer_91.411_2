#include "SpeechController.h"

SpeechController::SpeechController()
{
    masterGui = new MasterGui();
}


void SpeechController::callback(const std_msgs::String::ConstPtr& msg)
{
    ROS_INFO("I heard: [%s]", msg->data.c_str() );
    if(masterGui->getMasterGui() == NULL)
    {
    	//show dialog notifying the user to star app_node first.
	return;
    }

/*
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
SHOW_MENU*/


    if(strcmp(msg->data.c_str(), "activate") == 0)
    {
	runCommand(command = ACTIVATE);
    }
    else if(strcmp(msg->data.c_str(), "deactivate") == 0)
    {
        runCommand(command = DEACTIVATE);
    }
    else if(strcmp(msg->data.c_str(), "start video") == 0)
    {
        runCommand(command = START_VIDEO);
    }
    else if(strcmp(msg->data.c_str(), "stop video") == 0)
    {
	runCommand(command = STOP_VIDEO);
    }
    else if(strcmp(msg->data.c_str(), "results") == 0)
    {
	runCommand(command = RESULTS);
    }
    else if(strcmp(msg->data.c_str(), "users") == 0)
    {
	runCommand(command = USERS);
    }
    else if(strcmp(msg->data.c_str(), "devices") == 0)
    {
	runCommand(command = DEVICES);
    }
    else if(strcmp(msg->data.c_str(), "history") == 0)
    {
	runCommand(command = HISTORY);
    }
    else if(strcmp(msg->data.c_str(), "help") == 0)
    {
	runCommand(command = HELP);
    }
    else if(strcmp(msg->data.c_str(), "exit") == 0)
    {
	runCommand(command = EXIT);
    }
    else if(strcmp(msg->data.c_str(), "hide menu") == 0)
    {
	runCommand(command = HIDE_MENU);
    }
    else if(strcmp(msg->data.c_str(), "show menu") == 0)
    {
	runCommand(command = SHOW_MENU);
    }




}


void SpeechController::runCommand(Command command)
{
    switch(command)
    {
        case ACTIVATE:
    	    masterGui->getMasterGui()->handleActivateBtnSlot();
	    break;
	case DEACTIVATE:
	    masterGui->getMasterGui()->handleActivateBtnSlot();
	    break;
	case START_VIDEO:
	    masterGui->getMasterGui()->handleVideoBtnSlot();
	    break;
	case STOP_VIDEO:
	    masterGui->getMasterGui()->handleVideoBtnSlot();
	    break;
	case RESULTS:
	    masterGui->getMasterGui()->handleResultsBtnSlot();
	    break;
	case USERS:
	    masterGui->getMasterGui()->handleUsersBtnSlot();
	    break;
	case DEVICES:
	    masterGui->getMasterGui()->handleDevicesBtnSlot();
	    break;
	case HISTORY:
	    masterGui->getMasterGui()->handleHistoryBtnSlot();
	    break;
	case HELP:
	    masterGui->getMasterGui()->handleHelpBtnSlot();
	    break;
	case EXIT:
	    masterGui->getMasterGui()->handleExitBtnSlot();
	    break;
	case HIDE_MENU:
	    cerr << "SpeechController::runCommand;  This command has not yet been implemented." << endl;
	    //masterGui->getMasterGui()->handleMenuBtnSlot();
	    break;
	case SHOW_MENU:
	    cerr << "SpeechController::runCommand;  This command has not yet been implemented." << endl;
	    //masterGui->getMasterGui()->handleMenuBtnSlot();
	    break;
	default:
	    cerr << "SpeechController::runCommand;  Invalid Command" << endl;


    }//end of switch
}


SpeechController::~SpeechController()
{
    ;
}
