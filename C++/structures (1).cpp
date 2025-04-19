//Buffer overfloe is there i need to solve
//i have a buffer of size 10 and when i am trying to write more than that
#include <iostream>
using namespace std;

struct employee
{
    int eId;
    char name[90];
    int salary;
    int year;
};

int main()
{
    int a;
    cout << "Enter the number of employees: ";
    cin >> a;

    employee employees[a];

    for (int i = 0; i < a; i++)
    {
        cout << "Enter the details for employee " << i + 1 << ":" << endl;
        cout << "Employee ID: ";
        cin >> employees[i].eId;

        cout << "Name: ";

        cin.getline(employees[i].name, 90);

        cout << "Salary: ";
        cin >> employees[i].salary;

        cout << "Year of employment: ";
        cin >> employees[i].year;
    }

    cout << "\nEmployee Details:\n";
    for (int i = 0; i < a; i++)
    {
        cout << "Employee " << i + 1 << ":" << endl;
        cout << "Name: " << employees[i].name << endl;
        cout << "Name: ";

        cin.ignore();
        cin.getline(employees[i].name, 90);

        cout << "Salary: " << employees[i].salary << endl;
        cout << "Year of employment: " << employees[i].year << endl;
    }

    cout << "Which employee data would you like to get? Enter the employee number: ";
    int searchId;
    cin >> searchId;


    for (int i = 0; i < a; i++)
    {
        if (employees[i].eId == searchId)
        {
            cout << "\nEmployee Details for Employee with ID " << searchId << ":\n";
            cout << "Name: " << employees[i].name << endl;
            cout << "Salary: " << employees[i].salary << endl;
            cout << "Year of employment: " << employees[i].year << endl;
            return 0; 
        }
    }

    cout << "Employee with ID " << searchId << " not found." << endl;

    return 0;
}
