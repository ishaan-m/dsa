#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){

  if(n==1){
    return false;
  }
  if(n==2 || n==3){
    return true;
  }
  if(n%2==0 || n%3==0){
    return false;
  }
  //check from 5 for primeness, (5,7)->(11,13)->(17,19)->(23,25)->...
  for(int i=5;i*i<=n;i+=6){
    if(n%i==0 || n%(i+2)==0){
      return false;
    }
  }

  return true;


}
int main(){

    int n;
    cin>>n;
    cout<<isPrime(n)<<"\n";


  return 0;
}
