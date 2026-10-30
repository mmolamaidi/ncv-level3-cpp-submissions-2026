#include<iostream>
using namespace std;


void getNumbers(int &num1, int &num2);
void displaySum(int num1, int num2);
void displayDifference(int num1, int num2);
void displayProduct(int num1, int num2);
void displayQuotient(int num1, int num2);

int main(){

int n1=0, n2=0;

getNumbers(n1, n2);

displaySum(n1, n2);
displayDifference(n1, n2);
displayProduct(n1, n2);
displayQuotient(n1, n2);


return 0;
}

void getNumbers(int &num1, int &num2){

cout<<"Enter two numbers: "<<endl;
cin>>num1>>num2;
}

void displaySum(int num1, int num2){

cout<<"Sum: "<<num1+num2<<endl;

}

void displayDifference(int num1, int num2){

cout<<"difference: "<<num1-num2<<endl;

}

void displayProduct(int num1, int num2){

cout<<"Product: "<<num1*num2<<endl;

}

void displayQuotient(int num1, int num2){

cout<<"Quotient: "<<num1/num2<<endl;

}
