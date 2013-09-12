// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SavingsAccount.h"
#include "CheckingsAccount.h"



//  main.cpp
//  OODesign_HW1.2_Template_Pattern
//
//  Created by Aakrit Prasad on 4/18/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.


int xmain(int argc, _TCHAR * argv[])
{
    CheckingsAccount c;
    std::cout << std::endl;
	c.get_account_summary();
	
    while(1)
    {
        std::string z;
        std::cout << "To get account summary type 'A', to add money to your account type 'B', or 'Q' to quit" << std::endl;
        std::cin >> z;
        if(z == "A")
        {
            c.get_account_summary();
        }
        else if (z == "B")
        {
            double a;
            std::cout << "Enter amount to add in $: ";
            std::cin >> a;
            c.addBalance(a);
            std::cout << "We have added $" << a << "to your account." << "Your current balance is: " << c.getBalance() << std::endl;
            
        }
        else if (z == "Q")
        {
            std::cout << "You are not exiting from your CHECKINGS Account" << std::endl;
            break;
        }
        else
        {
            std::cout << "Invalid Entry" << std::endl;
            continue;
        }
    }
    std::cout << std::endl;
    
    SavingsAccount s;
    int b = 0;
    while(1)
    {
        while (b == 0)
        {
            int y = 0;
            std::string g;
            std::cout << "How many years have you had money in this account? :";
            std::cin >> g;
            y = atoi(g.c_str());
            if(y < 31)
            {
                s.setYear(y);
            }
            else
            {
                std::cout << "Please enter a value between 0 and 30 for years!" << std::endl;
                continue;
            }
            b = 1;
        }
        std::string z;
        std::cout << "To get account summary type 'A', to add money to your account type 'B', or 'Q' to quit" << std::endl;
        std::cin >> z;
        if(z == "A")
        {
            s.get_account_summary();
        }
        else if (z == "B")
        {
            double a;
            std::cout << "Enter amount to add in $: ";
            std::cin >> a;
            s.addBalance(a);
            std::cout << "We have added $" << a << "to your account." << "Your current balance is: " << s.getBalance() << std::endl;
        }
        else if (z == "Q")
        {
            std::cout << "You are now exiting from your SAVINGS Account" << std::endl;
            break;
        }
		else if( z == "Y" )
			b = 0;
        else
        {
            std::cout << "Invalid Entry" << std::endl;
            continue;
        }
    }
    std::cout << std::endl;
    
    //std::cout<< time(0);
    
    return 0;
}

void UTmain()
{
    std::cout << std::endl;
	Account* ca = new CheckingsAccount();
    std::cout << std::endl;
	ca->get_account_summary();
	ca->addBalance( 1000.0 );
	ca->get_account_summary();
    std::cout << std::endl;

	//Account* sa = new SavingsAccount();		// will not allow access to setYear
	SavingsAccount* sa = new SavingsAccount();
    std::cout << std::endl;
	sa->get_account_summary();
	sa->addBalance( 1000.0 );
	sa->get_account_summary();
    std::cout << std::endl;
	
	sa->setYear( 1 );
	sa->get_account_summary();
	sa->setYear( 2 );
	sa->get_account_summary();
}

int _tmain(int argc, _TCHAR* argv[])
{
	//xmain( argc, argv );

	UTmain();
	return 0;
}

