#include <iostream>
#include <conio.h>

using namespace std;


int main()
{
	int num, size, value, integer, result;
	int numbers[1000];
	
	cout << "Enter the Array Size:";
	cin >> size;	
	cout << "Enter Integers:";
	
	for (integer = 0; integer < size; integer++)
	{
		cin >> numbers[integer];
	}
	
	cout << "Your Data:\n";
	for (integer = 0; integer < size; integer++)
	{
		cout << numbers[integer] << endl;
	}
	
	
	for (integer = 0; integer < size; integer++)
	{
		for(num = integer + 1; num < size; num++)
		{
			if(numbers[integer] > numbers[num])
			{
				value = numbers[integer];
				numbers[integer] = numbers[num];
				numbers[num] = value;
			}
		}
	}
	

	
	cout << "After Using Selection Sorting ... \n";
	cout << "Sorted Data:";
	
	for(integer = 0; integer < size; integer++)
	{
		cout << numbers[integer] << ' ';
	}
	
	
	
	
	_getch();
	return 0;
}
