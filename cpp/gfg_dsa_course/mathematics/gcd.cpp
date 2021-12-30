#include <bits/stdc++.h>
using namespace std;

//gcd(a,b)==gcd(a,a-b)

int gcd(int a,int b){
    while(a!=b){
      if(a<b){
        b=b-a;
      }
      else{
        a=a-b;
      }
    }
    return a;
}

int main(){

  int a,b;
  cin>>a>>b;
  cout<<gcd(a,b)<<"\n";



  return 0;
}
