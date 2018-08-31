#include<iostream>
using namespace std;
int main(){
int a,b,c;
//asking user about the three angles of the triangle
 cout << "What is the first angle of the triangle?"<<endl;
 cin >> a;
 cout << "What is the second angle of the triangle?"<<endl;
 cin >> b;
 cout << "What is the third angle of the triangle?"<<endl;
 cin >> c;
//checking if the trinagle is valid 
 if ((a+b+c)<180)
cout << "The triangle is valid :)"<<endl;
//else not valid
 else 
 cout << "The triangle is not valid :("<<endl;
 return 0;
 }
