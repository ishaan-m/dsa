#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n){
  int rev=0;
  int curr=n;
  while(curr){
    rev=(rev*10)+curr%10;
    curr/=10;
  }

  return rev==n;
}
int main(){

  int n;
  cin>>n;

  cout<<isPalindrome(n)<<"\n";


  return 0;
}
