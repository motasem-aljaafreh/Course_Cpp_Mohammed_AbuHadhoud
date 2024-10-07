#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a;
	const float PI = 3.14;

	cout << "Enter the Circle Area Inscribed in a Square: ";
	cin >> a;
	float area = (PI * a * a) / 4;

	cout << "The are of the circle is: " << ceil(area) << endl;




	return 0;
}
