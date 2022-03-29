#include<iostream>
#include<ctime>
using namespace std;
int main(){
  string str="0123456789";
  string otp; int n, len;
  n=str.length();
  cout<<"enter the length of OTP: ";
  cin>>len;
  srand(time(NULL)); // For different values each time we run the code
  for(int i=0;i<len;i++){
   otp.push_back(str[rand() % n]);
  }
   cout<<" the otp generated is : "<<otp<<endl;
   return 0;
}
