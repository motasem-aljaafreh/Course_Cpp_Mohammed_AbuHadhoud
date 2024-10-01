#include <iostream>
using namespace std;

int main()
{
    float diameter;
    const float PI = 3.14;
    
    cout << "Enter the area of the circle diameter: ";
    cin >> diameter;

    float area = (PI * diameter * diameter) / 4;

    cout << "The area of the diameter of the circle is: " << area << endl;

    return 0;
}