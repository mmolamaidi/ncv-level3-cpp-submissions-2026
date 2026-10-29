#include<iostream>
using namespace std;
int main(){

string names;
int count = 1;

cout<<"Enter the names of your friends:(stop to stop) "<<endl;
cin >> names;
cout<<names<<endl;
while (names != "stop")
{

    cout<<"Enter the names of your friends:(stop to stop) "<<endl;
    cin >> names;

    cout<<names<<endl;
    count++;
}

return 0;
}
