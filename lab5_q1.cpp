#include<iostream>
   using namespace std;
   int main(){
   float a1,a2;

//asking 2 numbers from the user
 cout << "What is the first number?" << endl;
 cin >> a1;
 
 cout << "What is the second number?" << endl;
 cin >> a2;
//finding the maximum number among them

if (a1 > a2){
 cout << "The maximum number is"<<a1<<endl;
}

else {
 cout << "The maiximum number is" <<a2<<endl;
}

return 0;
}
