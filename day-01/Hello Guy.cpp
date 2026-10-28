// Made with Blocks to C++
#include <iostream>
#include <string>

using namespace std;

int main() {
    string name = "";
    cout << "What is your name?" << endl;
    getline(cin >> ws, name);

    string gender = "";
    cout << "Are you male or female?" << endl;
    getline(cin >> ws, gender);

    cout<<endl;

    cout << "Hello " << name << endl;
    if (gender == "M") {
        cout << "You are a clever guy!" << endl;
    }
    if (gender == "F") {
        cout << "You are a clever lady!" << endl;
    }
    return 0;
}
