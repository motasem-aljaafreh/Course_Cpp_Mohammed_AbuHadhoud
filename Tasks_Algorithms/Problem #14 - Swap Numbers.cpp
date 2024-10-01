#include <iostream>
using namespace std;

int main()
{
	int num1, num2;

	cout << "Enter First Number: ";
	cin >> num1;

	cout << "Enter Second Number: ";
	cin >> num2;

	cout << "Your Numbers Before Swap: " << "\n"<< num1 << "\n" << num2 << endl;


	int temp_swap = num1;
	num1 = num2; 
	num2 = temp_swap; 


	cout << "Your Numbers After Swap: " << "\n" << num1 << "\n" << num2 << endl;

	return 0;
}
