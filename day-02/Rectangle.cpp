#include<iostream>

using namespace std;

int main(){

int length;
int bredth;
int area = 0;
int perimeter = 0;

cout<<"Enter length of the rectangle: "<<endl;
cin>>length;

cout<<"Enter bredth of the rectangle: "<<endl;
cin>>bredth;

perimeter = 2*(length + bredth);
area = length*bredth;

cout<<"Area:\t\t"<<area<<"\nPerimeter:\t"<<perimeter<<endl;

return 0;
}
