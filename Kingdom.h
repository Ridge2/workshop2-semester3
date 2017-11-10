/***********************************************************
// OOP244 Workshop 2: Dynamic Memory
// File Kingdom.h
// Version 1.0
// Date 2017/09/18
// Author Ridge Francis
// Description
// This header file gives the program the header files needed
// to function properly.
//
// Revision History
///////////////////////////////////////////////////////////
// Name     Date    Reason
///////////////////////////////////////////////////////////
***********************************************************/

// Header safeguards
#ifndef KINGDOM_H
#define KINGDOM_H

// sict namespace
//
namespace sict {
    // Structure Kingdom
    //
    struct Kingdom {
        char m_name[33];
        int m_population;
    };
    // Declaration of display function
    //
    void display(const Kingdom&);
}
#endif

