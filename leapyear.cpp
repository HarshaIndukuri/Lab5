#include<iostream>

using namespace std;

int main(){

int a;

cout<<"Finding Leap Year"<<endl;

cout<<endl;

cout<<"Enter your year"<<endl;

cin>>a;

if (a%400 == 0){
cout<<"This is a leap year"<<endl;
}

else if ((a%400 != 0 && a%100 == 0) || a%4 != 0){
cout<<"This is not a leap year"<<endl;
}

}


