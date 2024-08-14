//
// Created by Edgar on 13/08/2024.
//
#ifndef Bank_h
#define Bank_h

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Bank {
private:
    struct BankAccount {
        string accountNumber;
        double Balance;
    };

    vector <BankAccount> accounts;

    int findAccountIndex(string accountNumber);
public:
    void addAccount(string accountNumber, double initialBalance);
    double getBalance(string accountNumber);

    //intento
    int addBalance(string accountNumber, double Balance);
    int removeBalance(string accountNumber, double Balance);
};

#endif
