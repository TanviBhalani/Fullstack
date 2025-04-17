#include <iostream>
using namespace std;
#include <string.h>

class BankAccount{
    public :
    int accountNumber;
    char accountHolderName[50];
    float Balance;

    public :
    BankAccount(){
        cout << " ";
    }

    BankAccount(int accountNumber,const char* accountHolderName,float Balance){
        this->accountNumber = accountNumber;
        strcpy(this->accountHolderName,accountHolderName);       
        this->Balance = Balance;
    }

    void deposit(int amount){
        this->Balance += amount;
        cout << "Amount Credited..!" << endl;
    }

    void withdraw(int amount){
        this->Balance -= amount;
        cout << "Amount Dedited..!" << endl;
    }

    void getBalance(){
        cout << "Account balance is : " << this->Balance << endl;
    }

    void displayAccountInfo(){
        cout << "Account Holder Name is : " << this->accountHolderName << endl;
        cout << "Account Number is : " << this->accountNumber << endl;
        cout << "Account Balance is : " << this->Balance << endl;
    }
};

class SavingAccount : public BankAccount{
    private :
    float interestRate = 3.5;

    public :
    SavingAccount(){
        cout << "";
    }

    void setData(int accountNumber,const char* accountHolderName,float Balance){
        this->accountNumber = accountNumber;
        strcpy(this->accountHolderName,accountHolderName);       
        this->Balance = Balance;
    }

    void calculateInterest(){
        cout << "Interest Rate : " << (this->Balance / 100) * interestRate << endl;
    }
};

class FixDepositAccount : public BankAccount{
    private :
    int term;       

    public :
    FixDepositAccount(){
        cout << "";
    }

    void setData(int accountNumber,const char* accountHolderName,float Balance){
        this->accountNumber = accountNumber;
        strcpy(this->accountHolderName,accountHolderName);       
        this->Balance = Balance;
    }

    void calculateterm(){
        float interest = Balance * (interest / 100.0) * (term / 12.0);
        cout << "Term : " << interest << endl;
    }
};

int main(){

    BankAccount bank(123,"Jensi",23.0);
    bank.deposit(500);
    bank.withdraw(100);
    bank.getBalance(); 
    bank.displayAccountInfo();

    SavingAccount saving;
    saving.setData(123,"Jensi",2000);
    saving.calculateInterest();

    FixDepositAccount fixed;
    fixed.setData(123,"Jensi",8);
    fixed.calculateterm();

    return 0;
}