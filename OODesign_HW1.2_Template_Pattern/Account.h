//
//  Account.h
//  OODesign_HW1.2_Template_Pattern
//
//  Created by Aakrit Prasad on 4/21/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//

#ifndef __OODesign_HW1_2_Template_Pattern__Account__
#define __OODesign_HW1_2_Template_Pattern__Account__

#include <iostream>
#include <ctime>
#include <cmath>
#include <string>
#include <chrono>

class Account
{
    double balance; //account balance
    double interestRate; //fixed interest per year
    double check;
    
    virtual void calc_interest() = 0; //pure virtual function, needs to be implemented in base classes
    
    void update_balance();
//    {
//        
//        //M = P((1+interest)^years)
//        balance = (balance*(pow(1+interestRate, years)));
//    }
    void print_summary();
//    {
//        std::cout << "The money in your account currently is: $" << balance << std::endl;
//    }
    
protected:
    int years;
    
public:
    //time_t createaccount = time(0);
    Account();
    void get_account_summary();
//    {
//        calc_interest();
//        update_balance();
//        print_summary();
//    }
    double getBalance();
//    {
//        return balance;
//    }
    void addBalance(double amt);
//    {
//        balance += amt;
//    }
    void setBalance(double amt);
//    {
//        balance = amt;
//    }
    void setInterestRate(double amt);
//    {
//        interestRate = amt;
//    }
    double getInterestRate();
//    {
//        return interestRate*100;
//    }
    ~Account();
//    {
//        std::cout << "Sorry for closing your Account! Hope you come bank with us again!" << std::endl;
//    }
};




#endif /* defined(__OODesign_HW1_2_Template_Pattern__Account__) */
