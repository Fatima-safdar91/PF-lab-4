#include<iostream>
using namespace std;

void add(int number1,int number2);
void multiplication(int number3,int number4);
void subtraction(int number3,int number4);
main (){ 
int num1;
int num2;
int num3;
int num4;
cout << "enter number 3:";
cin >> num3;
cout << " enter number 4:";
cin >> num4;
multiplication(num3,num4);
 num1=6;
 num2=4;
add(num1,num2);
subtraction(num3,num4);
}

void add(int number1,int number2){
int sum;
sum=number1+number2;
cout << "sum is:" << sum << endl;

}

void multiplication(int number3,int number4){
int multiplication=number3*number4;
cout << "multiplication is:" <<multiplication << endl ;
 }

void subtraction(int number3,int number4){
int minus=number3-number4;
cout << "subtraction is:" << subtraction << endl ;

}