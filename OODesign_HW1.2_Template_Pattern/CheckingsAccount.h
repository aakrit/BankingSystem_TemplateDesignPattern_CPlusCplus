//
//  CheckingsAccount.h
//  OODesign_HW1.2_Template_Pattern
//
//  Created by Aakrit Prasad on 4/21/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//

#ifndef __OODesign_HW1_2_Template_Pattern__CheckingsAccount__
#define __OODesign_HW1_2_Template_Pattern__CheckingsAccount__

#include "Account.h"

class CheckingsAccount: public Account
{
public:
    CheckingsAccount();
//    {
//        std::cout << "Thank you for opening a CHECKINGS account with us! You have deposited $1000 to open this account" << std::endl;
//    }
    virtual void calc_interest();
//    {
//        std::cout << "You will not recieve any interest in this accounts since its a checkings account" << std::endl;//no interest in checkings account
//        
//    }
    virtual ~CheckingsAccount();
//    {
//        std::cout << "Closing Your Checkings Account!" << std::endl;
//    }
};


#endif /* defined(__OODesign_HW1_2_Template_Pattern__CheckingsAccount__) */
