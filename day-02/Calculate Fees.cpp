//Calculating Annual College Fees

//required libraries
#include <iostream>
#include <iomanip>

//C++ standard namespace
using namespace std;

int main()
{
    // Declare and assign constants
    const double subject_fee = 1750.00;
    const double monthly_transport = 500.00;

    // Declare variables
    string student_name;
    float total_subject_fees;
    float annual_transport;
    float total_annual_expenses;
    int number_of_subjects = 0;

    // Promp and Input
    cout << "Enter your name: " << endl;
    getline(cin, student_name);
    cout << "\nEnter the number of subjects you want to register for: " << endl;
    cin >> number_of_subjects;

    // Processing(Calculating total annual fees)
    total_subject_fees = number_of_subjects * subject_fee;

    annual_transport = 12 * monthly_transport;

    total_annual_expenses = total_subject_fees + annual_transport;

    // Output formatted to two decimal places
    cout << endl;
    cout << fixed << setprecision(2);
    cout << "Student name:\t\t\t"<<student_name<<endl;
    cout << "Annual transport expenses:\tR"
         << annual_transport << endl;

    cout << "Total subject fees:\t\tR"
         << total_subject_fees << endl;

    cout << "Total annual expenses:\t\tR"
         << total_annual_expenses << endl;

    return 0;
}
