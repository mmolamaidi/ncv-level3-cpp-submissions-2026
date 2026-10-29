//determine gender
#include<iostream>
#include<iomanip>
using namespace std;

int main(){

int num=0;
int sum=0;
double avg=0.0;

for(int count=1; count<=5; count++){
    cout<<"Enter number:"<<count<<endl;
    cin>>num;
    if(num >=0 && num<=50){
      sum =sum + num;
    }
    else
    {

        cout<<"Invalid number, Enter a number between 1 and 50!!!"<<endl;
        count--;
    }

}

avg=static_cast<double>(sum)/5;

cout<<endl;
cout<<"The sum of five numbers is: "<<sum<<endl;
cout<<fixed<<setprecision(2);
cout<<"The average of the five numbers is: "<<avg<<endl;

return 0;
}
