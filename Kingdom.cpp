/***********************************************************
// OOP244 Workshop 2: Dynamic Memory
// File Kingdom.cpp
// Version 1.0
// Date 2017/09/18
// Author Ridge Francis
// Description
// The .cpp file define the functions in the Kingdom.h file
//
// Revision History
///////////////////////////////////////////////////////////
// Name     Date    Reason
///////////////////////////////////////////////////////////
***********************************************************/

// Headers
//
#include<iostream>
#include "Kingdom.h"

using namespace std;
namespace sict {
    // Definition for display function
    //
    void display(const Kingdom& kingdom) {
        if(kingdom.m_name[0] != '\0') {
            cout << kingdom.m_name << ", population " <<  kingdom.m_population << endl;
        }
    }
}
