#include<iostream>
using namespace std;
 void isEven(int number);
main(){
int input;
cout << "enter your input:";
cin >> input;
isEven(input);
}
void isEven(int number){
int input;
if (input % 2 == 0){
   cout <<" number is even";
}
if (input % 2 != 0){
   cout << "number is odd ";
}
}