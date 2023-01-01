#include<iostream>
using namespace std;
void printname(string name);


main(){
string name= "ALI";
printname(name);

printname("Bilal");
string secondname;
cout << "enter second name:";
cin >> secondname;
}
void printname(string name){
cout << "my name is :" << name ;
}
