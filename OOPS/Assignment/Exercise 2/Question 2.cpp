/*
2. Write a program of Addition, Subtraction, Division,
Multiplication usingconstructor.
*/
#include <iostream>
using namespace std; 
class Calculator
{
int a, b;
public:
	void result() 
	{
		cout << "Enter First Number: "; 
		cin >> a;
		cout << "Enter Second Number: "; 
		cin >> b;
	}

	
	int add() 
	{
		return a + b;
	}

	
	int sub() 
	{
		return a - b;
	}
	
	int mul() 
	{
		return a * b;
	}
	int div() 
	{
			return a / b;
		}
};
int main() 
{
	int ch;
	Calculator c; 
	cout << "Enter 1 to Add 2 Numbers" << 
			"\nEnter 2 to Subtract 2 Numbers" << 
			"\nEnter 3 to Multiply 2 Numbers" << 
			"\nEnter 4 to Divide 2 Numbers" << 
			"\nEnter 0 To Exit";
		
	
	{
		cout << "\nEnter Choice: ";
		cin >> ch;
		switch (ch)
		{
		case 1:
			
			c.result();	 
			
			cout << "Result: " << 
					c.add(); 
			break;
		case 2:
			
			
			c.result();
			cout << "Result: " << 
					c.sub();
			break;
		case 3:
			c.result();
			
			
			cout << "Result: " << 
					c.mul(); 
			break;
		case 4:
			c.result();
			
			
			cout << "Result: " << 
					c.div();
			break;
		}
		
	} 
	
	
}
