#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main(){

double radiusC = 0;
const double PI = 3.14;
double areaC = 0;
double perimeterC = 0;

cout<<"Enter the radius: "<<endl;
cin>>radiusC;


areaC = PI*pow(radiusC,2);
perimeterC = 2*PI*radiusC;
//cout<<fixed<<setprecision(2);
cout<<"Area:\t\t"<<areaC<<"\nPerimeter:\t"<<perimeterC<<endl;

return 0;
}
