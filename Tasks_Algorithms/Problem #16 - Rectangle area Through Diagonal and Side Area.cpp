#include <iostream>
#include <cmath>
using namespace std;

int main()
{
        // Declare variables for length and width
        double length, diagonal;

        // Input values
        cout << "Enter the length of the rectangle: ";
        cin >> length; // Example input: 5

        cout << "Enter the diagonal of the rectangle: ";
        cin >> diagonal; // Example input: 7


        // Calculate the diagonal using Pythagorean theorem
        double area = length * sqrt(pow(diagonal, 2) - pow(length, 2));

        // Output the results
        cout << "Area of the rectangle: " << area << endl;
        

        return 0;
    }

