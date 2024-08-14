//
// Created by Edgar on 13/08/2024.
//
#include "Bank.h"

void Bank::addAccount(string accountNumber, double initialBalance) {
    accounts.push_back({accountNumber, initialBalance});
}

double Bank::getBalance(string accountNumber) {
    int index = findAccountIndex(accountNumber);
    if(index != -1) {
        return accounts[index].Balance;
    }
    return -1;
}

//intento
int Bank::addBalance(string accountNumber, double Balance){
    int index = findAccountIndex(accountNumber);
    if(index != -1) {
        accounts[index].Balance += Balance;
        return 0;
    }
    return -1;
}

//resta
int Bank::removeBalance(string accountNumber, double Balance){
    int index = findAccountIndex(accountNumber);
    if(index != -1) {
        accounts[index].Balance -= Balance;
        return 0;
    }
    return -1;
}
//


int Bank::findAccountIndex(string accountNumber){
    for (size_t i = 0; i < accounts.size(); i++){
        if (accounts[i].accountNumber == accountNumber){
            return i;
        }
    }
    return -1;
}
