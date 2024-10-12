#include <iostream>
#include <string>
using namespace std;


int main()
{
    // Convert string st1 = "43.22" to double, float, and int.

    string st1 = "43.22";

    int st1_to_int = stod(st1);
    float st1_to_float = stof(st1);
    double st1_to_double = stod(st1);

    
    // Convert integer Num1 = 20 to string.
    int Num1 = 20;
    string Num1_ToString = to_string(Num1);


    // Convert double Num2 = 33.5 to string.
    double Num2 = 33.5;
    string Num2_ToString = to_string(Num2);


    // Convert float Num3 = 55.23 to string, and integer.

    float Num3 = 55.23;
    string Num3_ToString = to_string(Num3);
    int Num3_ToInteger = static_cast<float>(Num3);


    cout << st1_to_int << "\n"
        << st1_to_float << "\n"
        << st1_to_double << "\n"
        << Num1_ToString << "\n"
        << Num2_ToString << "\n"
        << Num3_ToString << "\n"
        << Num3_ToInteger << endl;



    return 0;
}



/*
int main() {
    int num1 = 10;
    double num2 = num1; // Implicit conversion
    cout << num2 << endl; // Outputs: 10.0
    return 0;
}
*/

//### 2. Explicit Casting(C - Style)
//You can explicitly cast an `int` to a `double` using C - style casting.

/*
#include <iostream>
using namespace std;

int main() {
    int num1 = 10;
    double num2 = (double)num1; // C-style cast
    cout << num2 << endl; // Outputs: 10.0
    return 0;
}
*/

//### 3. Function - Style Casting
//You can also use function - style casting to convert an `int` to a `double`.
/*
#include <iostream>
using namespace std;

int main() {
    int num1 = 10;
    double num2 = double(num1); // Function-style cast
    cout << num2 << endl; // Outputs: 10.0
    return 0;
}
*/

//### 4. Using `static_cast`
//The preferred method in modern C++ is to use `static_cast`, which is safer and more explicit.

/*
#include <iostream>
using namespace std;

int main() {
    int num1 = 10;
    double num2 = static_cast<double>(num1); // static_cast
    cout << num2 << endl; // Outputs: 10.0
    return 0;
}
*/