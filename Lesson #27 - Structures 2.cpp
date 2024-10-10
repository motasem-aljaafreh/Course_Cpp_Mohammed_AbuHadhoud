#include <iostream>
#include <string>

using namespace std;

struct EmployeeInfo {
    string name;
    string address;
    string country;
    string job;
    char gender;
    bool married;
    unsigned short age;
    float monthlySalary;
    float yearlySalary;

    void calculateYearlySalary() {
        yearlySalary = monthlySalary * 12;
    }
};

// Function to get input from the user
void getEmployeeInfo(EmployeeInfo &employee) {
    cout << "Enter Employee Name: ";
    getline(cin, employee.name);

    cout << "Enter Your Address: ";
    getline(cin, employee.address);

    cout << "Enter Country: ";
    getline(cin, employee.country);

    cout << "Enter Job Specialty: ";
    getline(cin, employee.job);

    cout << "Enter Gender (M/F): ";
    cin >> employee.gender;

    // Input validation for gender
    while (employee.gender != 'M' && employee.gender != 'F') {
        cout << "Invalid input! Please enter 'M' or 'F': ";
        cin >> employee.gender;
    }

    cout << "Are you Married? (1 for Yes, 0 for No): ";
    cin >> employee.married;

    cout << "Enter Your Age: ";
    cin >> employee.age;

    cout << "Enter Monthly Salary: ";
    cin >> employee.monthlySalary;

    // Calculate yearly salary
    employee.calculateYearlySalary();
}

// Function to display employee information
void displayEmployeeInfo(const EmployeeInfo &employee) {
    cout << "\nEmployee Information:\n";
    cout << "Name: " << employee.name << "\n"
         << "Address: " << employee.address << "\n"
         << "Country: " << employee.country << "\n"
         << "Job Specialty: " << employee.job << "\n"
         << "Gender: " << (employee.gender == 'M' ? "Male" : "Female") << "\n"
         << "Married: " << (employee.married ? "Yes" : "No") << "\n"
         << "Age: " << employee.age << "\n"
         << "Monthly Salary: $" << employee.monthlySalary << "\n"
         << "Yearly Salary: $" << employee.yearlySalary << endl;
}

int main() {
    EmployeeInfo employee1;

    // Clear input buffer before taking string inputs
    //cin.ignore();

    getEmployeeInfo(employee1);

    displayEmployeeInfo(employee1);

    return 0;
}
