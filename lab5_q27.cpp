#include <iostream>
using namespace std;
int main(){
 int n,sum;
 int i=1;
 cout <<"What is the last number of the series?"<<endl;
 cin >> n;
 sum=0;
 while (i<=n){
 sum=sum+i;
 i++;}
 
 cout << "The sum of the natural numbers till your given number is"<<sum<<endl;
 
 return 0;
 }
 
