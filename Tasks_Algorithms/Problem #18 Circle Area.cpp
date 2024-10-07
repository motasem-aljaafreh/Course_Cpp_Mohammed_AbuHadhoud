#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    
    float area;

    cout << "Enter The Circle Area : ";
    cin >> area;

    const float PI = 3.14;
    
    float results = PI * pow(area, 2);

    cout << "Area of Circae is : " << ceil(results) << endl;
    
    
    
   
    return 0;
}
