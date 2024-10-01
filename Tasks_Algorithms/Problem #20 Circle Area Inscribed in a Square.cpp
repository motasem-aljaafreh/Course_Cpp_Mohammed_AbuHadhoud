#include <iostream>
using namespace std;

int main()
{
	float a;
	const float PI = 3.14;

	cout << "Enter the Circle Area Inscribed in a Square: ";
	cin >> a;
	float area = (PI * a * a) / 4;

	cout << "The are of the circle is: " << area << endl;



	return 0;
}
