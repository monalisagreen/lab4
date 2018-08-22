#include <iostream>  //including library
#include <math.h> //library for square root
using namespace std;
int main(){ //integer function
float s,b,c,a; 
cout << "enter side of the triangle in meters " << endl;
cin >> s;
cout << "side of triangle is " << s << "m" << endl;
b= sqrt(3);
c= pow(s,2);
a= (b*c)/4; //calculating area 
cout << " area of triangle is " << a << "m^2" << endl;
return 0;
}

