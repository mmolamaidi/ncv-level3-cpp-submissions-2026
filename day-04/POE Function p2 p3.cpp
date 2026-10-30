#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


int displaySum(int num1, int num2);
int displayDifference(int num1, int num2);
int displayProduct(int num1, int num2);
double displayQuotient(double num1, double num2);

int main(){

srand(static_cast<unsigned int>(time(0)));//seed the random number generator using the current time

int n1 = (rand()%50)+1;
int n2 = (rand()%50)+1;

char o;

cout<<"Generated numbers: "<< n1<<" and "<<n2<<endl;
cout<<"Enter a math operator(+,-,*,/): \n";
cin>>o;

switch(o){
    case '+': cout<< "\nSum\t\t : "<<displaySum(n1, n2)<<endl;
    break;
    case '-': cout<<"\nDifference\t : "<<displayDifference(n1, n2)<<endl;
    break;
    case '*': cout<<"\nProduct\t\t : "<<displayProduct(n1, n2)<<endl;
    break;
    case '/':cout<<"\nQuotient\t : "<<displayQuotient(n1, n2)<<endl;

}

return 0;
}


int displaySum(int num1, int num2){

return num1+num2;

}

int displayDifference(int num1, int num2){

return num1-num2;

}

int displayProduct(int num1, int num2){

return num1*num2;

}

double displayQuotient(double num1, double num2){

return num1/num2;

}
