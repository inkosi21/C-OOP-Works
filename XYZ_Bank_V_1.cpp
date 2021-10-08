#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

class Account{
	public:
		//Default constructor
		Account(){
			//The default constructor will be called when an object of the account class is created
		}
		
	void setBalance(double x){
		//Setter function to set initial balance
		//Function accepts one argument and pass it to the balance atribute
		balance = x;
	}
		
	double getBalance(){
		//Getter function that will be invoked everytime the balance enquiry function is called
		//or when the account balance is otherwise updated
			
		return balance;
	}
	
	double setDeposit(double x){
		//Accepts deposit request from user.
		deposits = x;
		balance += deposits;
				
		return balance;
	}
	
	double setWithdrawal(double x){
		//Accepts withdrawal rewuests from user
		withdrawals = x;
		balance -= withdrawals;
				
		return balance;
	}	
	
	private:
		//Private class attributes
		double balance;
		double deposits;
		double withdrawals;
};
	
	double bal, depositAmount, withdrawalAmount; 
	int option;
	Account a1;
	
int main(){
	do{
		system("cls");
		cout << "\n\t\t\t======================================================================";
		cout << "\n\t\t\t======================================================================";
		cout << "\n\t\t\t====================           XYZ BANK           ====================";
		cout << "\n\t\t\t======================================================================";
		cout << "\n\t\t\t====================                              ====================";
		cout << "\n\t\t\t====================             MENU             ====================";
		cout << "\n\t\t\t====================                              ====================";
		cout << "\n\t\t\t======================================================================";
		cout << "\n\t\t\t======================================================================";
		cout << "\n\n\t\t\t\t1. Open Account";
		cout << "\n\n\t\t\t\t2. Deposit";
		cout << "\n\n\t\t\t\t3. Withdraw";
		cout << "\n\n\t\t\t\t4. Balance Enquiry";
		cout << "\n\n\t\t\t\t0. Quit";
		cout << "\n\t\t\t======================================================================";
		cout << "\n\n\t\t\t\t||====>> ";
		cin >> option;
		
			switch(option){
				case 1:{
					system("cls");
					cout << "\n\t\t\t======================================================================";
					cout << "\n\t\t\t======================================================================";
					cout << "\n\t\t\t====================           XYZ BANK           ====================";
					cout << "\n\t\t\t======================================================================";
					cout << "\n\t\t\t====================                              ====================";
					cout << "\n\t\t\t====================         NEW  ACCOUNT         ====================";
					cout << "\n\t\t\t====================                              ====================";
					cout << "\n\t\t\t======================================================================";
					cout << "\n\t\t\t======================================================================";
					cout << "\n\t\t\tEnter initial amount to create New Account...\n\n\t\t\t";
					cout << "Starting Deposit : $";
					cin >> bal;
					a1.setBalance(bal);
					system("cls");
					cout << "\n\t\t\tAccount successfully created.\n\t\t\tOpened with ending balance $";
					cout << fixed << setprecision(2) << a1.getBalance();
					cout << "\n\n\t\t\t";
					
					break;
				}
				
				case 2:{
					system("cls");
					cout << "\n\t\t\t======================================================================";
					cout << "\n\t\t\t======================================================================";
					cout << "\n\t\t\t====================           XYZ BANK           ====================";
					cout << "\n\t\t\t======================================================================";
					cout << "\n\t\t\t====================                              ====================";
					cout << "\n\t\t\t====================           DEPOSIT            ====================";
					cout << "\n\t\t\t====================                              ====================";
					cout << "\n\t\t\t======================================================================";
					cout << "\n\t\t\t======================================================================";
					cout << "\n\n\t\t\t\t\t||====>> $";
					cin >> depositAmount;
						bal = a1.getBalance();
						if(bal > 0){
							a1.setDeposit(depositAmount);						
							cout << "\n\t\t\tTransaction successful.\n\t\t\t";
							cout << " Deposit : $" << fixed << setprecision(2) << depositAmount;
							cout << "\n\t\t\tCurrent Balance : $";  
							cout << fixed << setprecision(2) << a1.getBalance();
							cout << "\n\n\t\t\t";
						}else{
							cout << "\n\t\t\tInvalid account.\n\t\t\tYou do not have an existing account.\n\t\t\tChoose option 1 to create an account.\n\n\t\t\t";
						}
						
					break;
				}
				
				case 3:{
					system("cls");
					cout << "\n\t\t\t======================================================================";
					cout << "\n\t\t\t======================================================================";
					cout << "\n\t\t\t====================           XYZ BANK           ====================";
					cout << "\n\t\t\t======================================================================";
					cout << "\n\t\t\t====================                              ====================";
					cout << "\n\t\t\t====================          WITHDRAWAL          ====================";
					cout << "\n\t\t\t====================                              ====================";
					cout << "\n\t\t\t======================================================================";
					cout << "\n\t\t\t======================================================================";
					cout << "\n\n\t\t\t\t\t||====>> $";
					cin >> withdrawalAmount;
						bal = a1.getBalance();
						if(bal > 0 && bal >= withdrawalAmount){
							a1.setWithdrawal(withdrawalAmount);						
							cout << "\n\t\t\tTransaction successful.\n\t\t\t";
							cout << " Withdrawal : $" << fixed << setprecision(2) << withdrawalAmount;
							cout << "\n\t\t\tCurrent Balance : $";  
							cout << fixed << setprecision(2) << a1.getBalance();
							cout << "\n\n\t\t\t";
						}else{
							cout << "\n\t\t\tInsufficient funds.\n\t\t\tYou do not have sufficient funds to complete this transaction.\n\t\t\t";
						}
					break;
				}
				
				case 4:{
					system("cls");
					cout << "\n\t\t\t======================================================================";
					cout << "\n\t\t\t======================================================================";
					cout << "\n\t\t\t====================           XYZ BANK           ====================";
					cout << "\n\t\t\t======================================================================";
					cout << "\n\t\t\t====================                              ====================";
					cout << "\n\t\t\t====================        BALANCE ENQUIRY       ====================";
					cout << "\n\t\t\t====================                              ====================";
					cout << "\n\t\t\t======================================================================";
					cout << "\n\t\t\t======================================================================";
					cout << "\n\t\t\tAvailable Balance $";
					cout << fixed << setprecision(2) << a1.getBalance();
					cout << "\n\n\t\t\t";
					break;
				}
			}
	system("pause");		
	}while(option != 0);
	
	return 0;
}
