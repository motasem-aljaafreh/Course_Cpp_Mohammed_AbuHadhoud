#include <iostream>
using namespace std;

int main()
{
	int A = 11, B = 20;

	A += B; // A = A + B = 30
	cout << A << endl;

	A -= B; // A = A - B = 10
	cout << A << endl;

	A *= B; // A = A * B = 200
	cout << A << endl;

	A /= B; // A = A / B = 20
	cout << A << endl;

	A %= B; // A = A % B = 10
	cout << A << endl;



	return 0;
}