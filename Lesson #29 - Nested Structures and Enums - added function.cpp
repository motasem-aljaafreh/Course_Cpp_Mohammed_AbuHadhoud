#include <iostream>
using namespace std;

enum enGender { Male, Female };
enum enMaritalStatus { Single, Married };

struct stAddress {
    string City;
    string StreetAddress;
    int NumberFlat;
};

struct stContactInfo {
    string Phone;
    string Email;
    stAddress Address;
};

struct stPerson {
    string FirstName;
    string LastName;
    stContactInfo ContactInfo;
    enGender Gender;
    enMaritalStatus MaritalStatus;
};

// Function to convert Gender enum to string
string genderToString(enGender gender) {
    return gender == Male ? "Male" : "Female";
}

// Function to convert MaritalStatus enum to string
string maritalStatusToString(enMaritalStatus status) {
    return status == Single ? "Single" : "Married";
}

int main() {
    stPerson Person1;
    Person1.FirstName = "Motasem";
    Person1.LastName = "FamilyName";

    Person1.ContactInfo.Address.City = "Amman";
    Person1.ContactInfo.Address.StreetAddress = "7th Circle - St.Smart 5";
    Person1.ContactInfo.Address.NumberFlat = 8;

    Person1.ContactInfo.Phone = "0790000000";
    Person1.ContactInfo.Email = "example@gmail.com";

    Person1.Gender = enGender::Male;
    Person1.MaritalStatus = enMaritalStatus::Single;

    cout << Person1.FirstName << "\n"
        << Person1.LastName << "\n"
        << Person1.ContactInfo.Address.City << "\n"
        << Person1.ContactInfo.Address.StreetAddress << "\n"
        << Person1.ContactInfo.Address.NumberFlat << "\n"
        << Person1.ContactInfo.Phone << "\n"
        << Person1.ContactInfo.Email << "\n"
        << genderToString(Person1.Gender) << "\n"  // Convert enum to string
        << maritalStatusToString(Person1.MaritalStatus) << "\n";  // Convert enum to string

    return 0;
}