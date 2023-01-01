#include<iostream>
using namespace std;

void add(int number1,int number2);
void multiplication(int number1,int number2);
void subtraction(int number1,int number2);
main (){ 
int num1;
int num2;
int operation;

cout << "enter number 1:";
cin >> num1;
cout << " enter number 2:";
cin >> num2;
cout << "operation(+,-,*): ";
cin >> operation ;
if (operation=='+'){
   add(num1,num2);}
if (operation=='-'){
subtraction(num1,num2);
}
if (operation=='*'){
multiplication(num1,num2);
}


}

void add(int number1,int number2){
int sum;
sum=number1+number2;
cout << "sum is:" << sum << endl;

}

void multiplication(int number1,int number2){
int multiplication=number1*number2;
cout << "multiplication is:" <<multiplication << endl ;
 }

void subtraction(int number1,int number2){
int subtraction=number1-number2;
cout << "subtraction is:" << subtraction << endl ;

}