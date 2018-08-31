#include<iostream>

using namespace std;

int main() {

cout<<"Checking whether a number is divisible by 5 and 11"<<endl;
cout<<endl;
cout<<"Enter your number"<<endl;

int a;//declaring a

cin>>a;

if (a%5 == 0 && a%11 == 0){
cout<<"Your number is divisible by 5 and 11"<<endl;
}
else if (a%5 != 0 && a%11 == 0){
cout<<"Your number is not divisible by 5"<<endl;
}
else if (a%5 == 0 && a%11 != 0){
cout<<"Your number is indivisible by 11"<<endl;
}
else 
cout<<"Your number is not divisible by both"<<endl;//Used remainder operator for conditions
}



