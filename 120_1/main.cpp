//
//  main.cpp
//  120_1
//
//  Created by owner on 8/10/16.
//  Copyright © 2016 Oscar Parra. All rights reserved.
//
//  Description: A program that will return the amount of total change when given an amount of coins.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int quarter = 0;
    int dime = 0;
    int nickel = 0;
    int penny = 0;
    
    //Read in coins from user
    cout<< "Enter a quarter amount :"<<endl;
    cin>>quarter;
    cout<< "Enter a dime amount :"<<endl;
    cin>>dime;
    cout<< "Enter a nickel amount :"<<endl;
    cin>>nickel;
    cout<< "Enter a penny amount :"<<endl;
    cin>>penny;
    
    //Calculate the total change
    int change =(quarter * 25) + (dime * 10) + (nickel * 5) + penny;
    
    //Return the amount of change to user
    cout<<"The coin amount that you have entered comes to a total of : "<<endl;
    cout<<change<<" cents."<<endl;
    
    return 0;
}
