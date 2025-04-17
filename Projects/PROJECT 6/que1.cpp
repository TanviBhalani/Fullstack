#include <iostream>
using namespace std;
#include <string.h>

class BankAccount{
    private:

    int AccountNumber;
    char AccountHolderName[50];
    int Balance;


    public :

   void setData(int accountNumber,const char *accountHolderName,int balance){
        this->AccountNumber = accountNumber;
        strcpy (this->AccountHolderName, accountHolderName);
        this->Balance = balance;

    }
    void getData(){
        cout << "Account number : " << AccountNumber <<endl;
        cout << "Account Holder name : " << AccountHolderName <<endl;
        cout << "Bank Balance : " << Balance <<endl;
    }

    void deposit(double amount){
        Balance += amount;
        cout << "Deposited $" << amount << ". New Balance: $" << Balance << endl;
    }


    void withdraw(int amount){
        this->Balance -= amount;
        cout << "Withdrawn " << amount << ". New Balance: " << Balance << endl;
    }

    void getBalance(){
        cout << "Acoount balance is : " << this->Balance;
    }

    void displayAccountInfo(){
        cout << "Account Number is : " << this->AccountNumber << endl;
        cout << "Account Holder Name is : " << this->AccountHolderName <<endl;
        cout << "Bank Balance is : " << this->Balance <<endl;
    }

};

class SavingAccount : public BankAccount{
    private :
    float interestRate = 3.5;
    int AccountNumber;
    char AccountHolderName[50];
    int Balance;

    public :
    SavingAccount(){
        cout << "";
    }

    void setData(int accountNumber,const char* accountHolderName,float Balance){
        this->AccountNumber = accountNumber;
        strcpy(this->AccountHolderName,accountHolderName);       
        this->Balance = Balance;
    }

    void CalculateInterest(){
        cout << "Interest Rate : " << (this->Balance / 100) * interestRate << endl;
    }
};

class FixDepositAccount : public BankAccount{
    private :
    int term; 
    int AccountNumber;
    char AccountHolderName[50];
    int Balance;      

    public :
    FixDepositAccount(){
        cout << "";
    }

    void setData(int accountNumber,const char* accountHolderName,float Balance){
        this->AccountNumber = accountNumber;
        strcpy(this->AccountHolderName,accountHolderName);       
        this->Balance = Balance;
    }

    void Calculateterm(){
        float interest = Balance * (interest / 100.0) * (term / 12.0);
        cout << "Term : " << interest << endl;
    }
};
 






int main(){

   BankAccount one;
   SavingAccount two;
   FixDepositAccount three;
  
   

   one.setData(123, "Tanvi" , 30000);
   one.getData();
   
   one.deposit(3000);
   one.withdraw(5000);

   one.displayAccountInfo();

   two.setData(123,"Tanvi",5000);
   two.CalculateInterest();

   
    three.setData(123,"Tanvi",10);
    three.Calculateterm();


    return 0;
}