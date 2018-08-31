#include<iostream>
#include<cmath>
//libraries
using namespace std;

int main(){

float a,b,c;//declaring a,b,c

cout<<"Finding the roots of a quadratic equation"<<endl<<endl;

cout<<"A quadratic equation is of the form ax^2 + bx + c"<<endl;

cout<<"Enter your a,b and c"<<endl; 

cin>>a;
cin>>b;
cin>>c;

float d = pow(b,2) -4*a*c;//Calculating the determinant 

if (d >= 0){//condition to make sure equation has roots
cout<<"The roots are "<< (d-b)/(2*a) <<" and "<<(-b-d)/2*a<<endl;
}

else 
cout<<"This equation has imaginary roots."<<endl;
}

