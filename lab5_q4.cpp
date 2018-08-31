#include<iostream>
 using namespace std;
 int main(){
 int a;
//asking the specific number from the user
 cout << "What is the number?";
 cin >>a;
//checking if the number is divisible by 5
 if (a%5==0)
 cout << "The number is divisible by 5 :)"<<endl;
 else
 cout << "The number is not divisible by 5 :("<<endl;
//checking if the number is divisible by 11
 if (a%11==0)
 cout << "The number is divisible by 11 :)"<<endl;
 else 
 cout << "The number is not divisible by 11 :("<<endl;
 return 0;
}
 
