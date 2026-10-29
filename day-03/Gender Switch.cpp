
//determine gender
#include<iostream>
using namespace std;

int main(){

//declare
char gender_code;
string description;


//input
cout<<"Enter the gender code(M/F): ";
cin>>gender_code;

//Selection and Output
switch(gender_code)
{
 case 'M':
 case 'm': description = "You are a gent.";
        break;
 case 'F':
 case 'f': description ="You are a lady.";
        break;
 default: description = "Invalid gender code!!!";
        break;

}


//if(gender_code == 'M' | gender_code == 'm' )
  //  description = "You are a gent.";
//else if(gender_code == 'F' | gender_code == 'f')
  //  description = "You are a lady.";
//else
    //description = "Invalid gender code!!!";

cout<<endl;
cout<<description<<endl;

return 0;
}
