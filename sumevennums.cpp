#include<iostream>

using namespace std;

int main(){

int n;
int x = 0;

cout<<"Sum of even numbers"<<endl;

cout<<"Enter your number ";

cin>>n;

int a;

for (a=0; a<=n; a++){


if (a % 2 == 0){

x = x + a;
}
}
cout<<"The sum is "<<x<<endl;
}






