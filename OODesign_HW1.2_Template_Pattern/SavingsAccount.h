//
//  SavingsAccount.h
//  OODesign_HW1.2_Template_Pattern
//
//  Created by Aakrit Prasad on 4/21/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//

#ifndef __OODesign_HW1_2_Template_Pattern__SavingsAccount__
#define __OODesign_HW1_2_Template_Pattern__SavingsAccount__

#include "Account.h"

class SavingsAccount: public Account
{
public:
    SavingsAccount();
//    {
//        std::cout << "Thank you for opening a SAVINGS account with us! You have deposited $1000 to open this account" << std::endl;
//    }
    virtual void calc_interest();
//    {
//        //need to implement compount interest in here
//        setInterestRate(0.02);
//        std::cout << "The interest rate for this account is: " << getInterestRate() << " %" << std::endl;
//    }
    int getYear();
//    {
//        return years;
//    }
    void setYear(int yr);
//    {
//        years = yr;
//    }
    virtual ~SavingsAccount();
//    {
//        std::cout << "Closing Your Savings Account!" << std::endl;
//    }
};


#endif /* defined(__OODesign_HW1_2_Template_Pattern__SavingsAccount__) */
