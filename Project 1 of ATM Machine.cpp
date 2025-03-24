#include<iostream>
using namespace std;
int main()
{
	int const pin = 6789;
	int balance = 20000;
	int choice;
	int deposit, withdraw;
	int enteredpin;
	cout << "\t\t\t\t Welcome to the ATM Machine"<<endl;
	cout << "Please enter your pin:";
	cin >> enteredpin;
	if (enteredpin == pin)
	{
		cout << "1. Check Balance" << endl;
		cout << "2. Deposit Money" << endl;
		cout << "3.Withdraw Money" << endl;
		cout << "4. Exit" << endl;
		cout << "Enter your choice:";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "The total balance is:" << balance << endl;
			break;
		case 2:
			cout << "How much money you want to deposit?" << endl;
			cin >> deposit;
			balance += deposit;
			cout << "The new balance is:" << balance << endl;
			break;
		case 3:
			cout << "How much money you want to withdraw?" << endl;
			cin >> withdraw;
			balance -= withdraw;
			if (withdraw > balance)
			{
				cout << "Insufficient Funds" << endl;
			}
			else if (withdraw <= 0)
			{
				cout << "Withdraw should be greater than 0" << endl;
			}
			else
			{
				cout << "The new balance after withdraw is:" << balance << endl;
			}
			break;
		    case 4:
			cout << " Please take your card" << endl;
		    default:
			cout << "Invalid Choice";
		}
	}
	else 
	{
		cout << "Invalid pin";
	}
	
}