#include <iostream>
using namespace std;

struct contact
{
	unsigned long long int phone;
	string email;

};


struct info_employe
{
	string name;
	string address;
	string country;
	string job;
	char gender;
	bool married;
	unsigned short age;
	float m_salary;
	float y_salary;
	contact more_info;
};


int main()
{
	info_employe employee1;
	cout << "Employee Name: ";
	cin >> employee1.name;
	cout << "Your Address: ";
	cin >> employee1.address;
	cout << "Country: ";
	cin >> employee1.country;
	cout << "Job - Your specialty: ";
	cin >> employee1.job;
	cout << "Gender M/F: ";
	cin >> employee1.gender;
	cout << "Are you Married 1/0: ";
	cin >> employee1.married;
	cout << "Your Age: ";
	cin >> employee1.age;
	cout << "Monthly Salary: ";
	cin >> employee1.m_salary;
	cout << "Enter Your Phone Number: ";
	cin >> employee1.more_info.phone;
	cout << "Enter Your E-mail Address: ";
	cin >> employee1.more_info.email;
	employee1.y_salary = employee1.m_salary * 12;

	cout << employee1.name << "\n" << employee1.address << "\n"
		<< employee1.country << "\n" << employee1.job << "\n"
		<< employee1.gender << "\n" << employee1.married << "\n"
		<< employee1.age << "\n" << employee1.m_salary << "\n"
		<< employee1.y_salary << "\n"
		<< employee1.more_info.phone << "\n" << employee1.more_info.email << endl;



	return 0;
}
