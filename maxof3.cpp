#include<iostream>//library

using namespace std;

int main() {

cout<<"Finding the greatest number"<<endl;

float a,b,c;//Declaration of a,b.c
cout<<"Enter the three unequal numbers"<<endl;
cin>>a;
cin>>b;
cin>>c;//Taking a,b,c from user

if (a>b && a>c){//Conditions to find which is greatest
cout<<"The greatest number is "<<a<<endl;
}
else if (b>a && b>c){
cout<<"The greatest number is "<<b<<endl;
}
else cout<<"The greatest number is "<<c<<endl;
}
 
