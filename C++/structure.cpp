// #include <iostream>
// using namespace std;
// struct employee
// {
//     int employee_id;
//     char favChar;
//     float salary;
// };

// int main()
// {
// struct employee Harry;
// Harry.employee_id = 1234567890;
// Harry.favChar = 'A';
// Harry.salary= 1111.1;
// cout<<Harry.employee_id<<endl;
// cout<<Harry.favChar<<endl;
// cout<<Harry.salary<<endl;
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// typedef struct data // typedef is used for useing it as an keyword
// {
//     int roll_number;
//     string Name;
//     int Class;
//     char Section;
// } da;

// int main()
// {
//     da student; // Declare an instance of the data structure//we do need to declare something here//ad is data i wrote because of typedef function

//     cout << "What is the roll number" << endl;
//     cin >> student.roll_number;

//     cout << "Enter the name of student" << endl;
//     cin >> student.Name;

//     cout << "Enter the class of student" << endl;
//     cin >> student.Class;

//     cout << "Enter the section of student" << endl;
//     cin >> student.Section;

//     // Display the entered information
//     cout << "Student Information:" << endl;
//     cout << "Roll Number: " << student.roll_number << endl;
//     cout << "Name: " << student.Name << endl;
//     cout << "Class: " << student.Class << endl;
//     cout << "Section: " << student.Section << endl;

//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

struct Person
{
    int age;
    string name;
    char covid_y_or_n;
    string state;
};

int main()
{
    int numPeople;
    cout << "What is the total number of people you want to enter?" << endl;
    cin >> numPeople;

    const int maxPeople = 100; // Adjust the maximum number as needed
    Person peopleArray[maxPeople];

    for (int i = 0; i < numPeople; i++)
    {
        cout << "Enter the age for person " << i + 1 << ": ";
        cin >> peopleArray[i].age;

        cout << "Enter the name for person " << i + 1 << ": ";
        cin >> peopleArray[i].name;

        cout << "Enter 'y' if the person had COVID, 'n' otherwise: ";
        cin >> peopleArray[i].covid_y_or_n;

        cout << "Enter the state for person " << i + 1 << ": ";
        cin >> peopleArray[i].state;

        cout << endl;
    }

    // Display the information for each person
    for (int i = 0; i < numPeople; i++)
    {
        cout << "Person " << i + 1 << " Information:" << endl;
        cout << "Age: " << peopleArray[i].age << endl;
        cout << "Name: " << peopleArray[i].name << endl;
        cout << "COVID: " << peopleArray[i].covid_y_or_n << endl;
        cout << "State: " << peopleArray[i].state << endl
             << endl;
    }

    return 0;
}
