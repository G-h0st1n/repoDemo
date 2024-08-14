#include <iostream>
#include <vector>
#include "Bank.h"

int main()
{
    Bank bank;
    bank.addAccount("aa12", 100);
    double amountToAdd;
    cout << "El balance de la cuenta aa12 es: " << bank.getBalance("aa12") << endl;

    cout << "Ingrese la cantidad a agregar: ";
    cin >> amountToAdd;
    bank.addBalance("aa12", amountToAdd);

    cout << "El balance de la cuenta aa12 es: " << bank.getBalance("aa12") << endl;

    cout << "Ingrese la cantidad a restar: ";
    cin >> amountToAdd;
    bank.removeBalance("aa12", amountToAdd);

    cout << "El balance de la cuenta aa12 es: " << bank.getBalance("aa12") << endl;
    return 0;
}