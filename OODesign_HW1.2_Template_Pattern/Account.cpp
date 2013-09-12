//
//  Account.cpp
//  OODesign_HW1.2_Template_Pattern
//
//  Created by Aakrit Prasad on 4/21/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//

#include "Account.h"

void Account::update_balance()
    {
        
        //M = P((1+interest)^years)
        if(check == 0)
        {
            balance = (balance*(pow(1+interestRate, years)));
            check = 1;
        }
    }
void Account::print_summary()
    {
        std::cout << "The money in your account currently is: $" << balance << std::endl;
    }

    
    //time_t createaccount = time(0);
Account::Account(): balance(1000), interestRate(0), years(0), check(0) //intializer list
    {
    }
void Account::get_account_summary()
    {
        calc_interest();
        update_balance();
        print_summary();
    }
double Account::getBalance()
    {
        return balance;
    }
void Account::addBalance(double amt)
    {
        balance += amt;
    }
void Account::setBalance(double amt)
    {
        balance = amt;
    }
void Account::setInterestRate(double amt)
    {
        interestRate = amt;
    }
double Account::getInterestRate()
    {
        return interestRate*100;
    }
Account::~Account()
    {
        std::cout << "Sorry for closing your Account! Hope you come bank with us again!" << std::endl;
    }
