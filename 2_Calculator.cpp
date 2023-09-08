//  TASK 2:   Simple Calculator

#include <iostream>
using namespace std;

int main() 
{
    double num1, num2;
    int operation;
    cout<<"_________________SIMPLE CALCULATOR________________\n"<<endl;
    do
    {
    	cout << "\nEnter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;
	
    cout<<"Enter your choice:"<<endl;
    cout<<"1. +\n2. -\n3. *\n 4. /"<<endl;
    cin >> operation;

    switch (operation) 
	{
        case 1:
            	cout << "Result is : " << num1 + num2 <<endl;
            break;
            
        case 2:
            	cout << "Result is : " << num1 - num2 <<endl;
            break;
            
        case 3:
            	cout << "Result is : " << num1 * num2 <<endl;
            break;
            
        case 4:
            if (num2 != 0) 
			{
                cout << "Result is : " << num1 / num2 <<endl;
            } 
			else 
			{
                cout << "Division by zero is not allowed." <<endl;
            }
            break;
            
        default:
            cout << "Invalid operation. Please choose +, -, *, or /." <<endl;
    }
}
while(operation!=0);

    return 0;
}

