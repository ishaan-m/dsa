#include <bits/stdc++.h>
using namespace std;

int counter(int n){
  int result=0;
  while(n){
    result++;
    n/=10;
  }
  
  
  return result;
}

int main(){

  int n;
  cin>>n;

  cout<<counter(n);


  return 0;
}
