//
//  CheckingsAccount.cpp
//  OODesign_HW1.2_Template_Pattern
//
//  Created by Aakrit Prasad on 4/21/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//

#include "CheckingsAccount.h"


CheckingsAccount::CheckingsAccount()
    {
        std::cout << "Thank you for opening a CHECKINGS account with us! You have deposited $1000 to open this account" << std::endl;
    }
void CheckingsAccount::calc_interest()
    {
        std::cout << "You will not recieve any interest in this accounts since its a checkings account" << std::endl;//no interest in checkings account
        
    }
CheckingsAccount::~CheckingsAccount()
    {
        std::cout << "Closing Your Checkings Account!" << std::endl;
    }