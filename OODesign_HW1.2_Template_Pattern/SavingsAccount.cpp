//
//  SavingsAccount.cpp
//  OODesign_HW1.2_Template_Pattern
//
//  Created by Aakrit Prasad on 4/21/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//

#include "SavingsAccount.h"

SavingsAccount::SavingsAccount()
    {
        std::cout << "Thank you for opening a SAVINGS account with us! You have deposited $1000 to open this account" << std::endl;
    }
void SavingsAccount::calc_interest()
    {
        //need to implement compount interest in here
        setInterestRate(0.02);
        std::cout << "The interest rate for this account is: " << getInterestRate() << " %" << std::endl;
    }
int SavingsAccount::getYear()
    {
        return years;
    }
void SavingsAccount::setYear(int yr)
    {
        years = yr;
    }
SavingsAccount::~SavingsAccount()
    {
        std::cout << "Closing Your Savings Account!" << std::endl;
    }