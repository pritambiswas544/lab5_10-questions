#include<iostream>
using namespace std;
int main(){
int a,remainder;

//asking user the specific number
 cout << "What is your specific number"<<endl;
 cin >> a;
 remainder=a%2;
//checking whether the number is even
 if (remainder == 0){
 cout << "The number is even" <<endl;
 }
//else its odd
 else {
 cout << "The number is odd" <<endl;
 }
 return 0;
 }
