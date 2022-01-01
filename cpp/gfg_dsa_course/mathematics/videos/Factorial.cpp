#include <bits/stdc++.h>
using namespace std;

int iterative_factorial(int n){
  int result=1;
  for(int i=n;i>=1;i--){
    result*=i;
  }
  return result;
}

int recursive_factorial(int n){
  if(n==0){
    return 1;
  }
  return n*recursive_factorial(n-1);
}

int main(){

  int n;
  cin>>n;
  cout<<iterative_factorial(n)<<"\n";
  cout<<recursive_factorial(n)<<"\n";


  return 0;
}
