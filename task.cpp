#include<iostream>
using namespace std;
void ifpass(int marks);
main (){
int marks;
while(true){ 
cout << "enter quiz marks:";
cin >> marks;
ifpass(marks);}
}

void ifpass(int marks){

  if(marks > 50){
   cout << "you have passed first quiz of PF";
}
  if (marks==50){
   cout << "you barely passed the PF work hard";
}
  if(marks < 50){
cout << "you failed the PF";
}


}