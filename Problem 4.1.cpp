#include <iostream>
#include <conio.h>
#include <cmath>
#include <stdlib.h>


using namespace std;

void sum()
{
	int num1, num2;
	float result;
	char y, n;
	
	cout << "Enter First Integer:"; cin >> num1;
	cout << "Enter Second Integer:"; cin >> num2;
    
	result = (num1 + num2);
	cout << "Result:" << ' ' << result << endl;
    
}

void subtract()
{
	int num1, num2;
	float result;
	char y, n;
	
	cout << "Enter First Integer:"; cin >> num1;
	cout << "Enter Second Integer:"; cin >> num2;
	result = (num1 - num2);
	cout << "Result:" << ' ' << result << endl;
}

void multiply()
{
	int num1, num2;
	float result;
	char y, n;
	
	cout << "Enter First Integer:"; cin >> num1;
	cout << "Enter Second Integer:"; cin >> num2;
	result = (num1 * num2);
	cout << "Result:" << ' ' << result << endl;
}

void divide()
{
	int num1, num2;
	float result;
	char y, n;
	
	cout << "Enter First Integer:"; cin >> num1;
	cout << "Enter Second Integer:"; cin >> num2;
	result = (num1 / num2);
	cout << "Result:" << ' ' << result << endl;
}

void mod()
{
	int num1, num2;
	float result;
	char y, n;
	
	cout << "Enter First Integer:"; cin >> num1;
	cout << "Enter Second Integer:"; cin >> num2;
	result = (num1 % num2);
	cout << "Result:" << ' ' << result << endl;
}




int main()
{
	int num1, num2;
	float result;
	char y, n, choice, decision;
	
	system("cls");
	do
	{
		             
    	system("cls");
		cout << "Program Calculator" << endl;
		cout << "MENU:" << endl;
		cout << "1. Add" << endl;
		cout << "2. Subtract" << endl;
		cout << "3. Multiply" << endl;
		cout << "4. Divide" << endl;
		cout << "5. Modulus" << endl;
		cout << "y - Continue" << endl;
		cout << "n - Exit" << endl;
		
		cout << "Enter your choice:"; cin >> choice;
	
		switch (choice)
		{
			case '1':
				sum();
				cout << "Do you want to continue?:"; cin >> decision;
				break;
				
			case '2':
				subtract();
				cout << "Do you want to continue?:"; cin >> decision;
				break;
				
			case '3':
				multiply();
				cout << "Do you want to continue?:"; cin >> decision;
				break;
				
			case '4':
				divide();
				cout << "Do you want to continue?:"; cin >> decision;
				break;
				
			case '5':
				mod();
				cout << "Do you want to continue?:"; cin >> decision;
				break;
				
			case 'n':
				exit(0);
				break;
				
			default:
			cout << "Invalid!" << endl;
			
			system ("cls");
		
			
		}
	}
	
	while (decision != 'n');
	
	
	
	
	
	_getch();
	return 0;
	
}
