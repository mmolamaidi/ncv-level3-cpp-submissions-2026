#include<iostream>
using namespace std;


void displayText();         // prototype

int main()
{
    displayText();          // call
    displayText();          // call again
    return 0;
}

void displayText()          // definition
{
    cout << "Good day to you." << endl;
}
