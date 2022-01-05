#include <bits/stdc++.h>
using namespace std;


/*
Kamenetsky’s formula

f(x) = n* log10(( n/ e)) + log10(2*pi*n)/2 

*/
int numberOfDigitsInFactorial(int n){
  double sum=0;

  while(n>0){
    sum+=log10(n);
    n--;
  }

  return (int)(sum+1);
}

int main(){

  int n;
  cin>>n;
  cout<<numberOfDigitsInFactorial(n)<<"\n";

  return 0;
}
