#include <bits/stdc++.h>
using namespace std;


//GP-> a,ar,ar2,ar3,ar4
int gp(int a,int b,int n){

  int first_term=a;
  int multiplier=b/a;

  return first_term*(pow(multiplier,n-1));
}
int main(){

  int a,b,n;
  cin>>a>>b>>n;

  cout<<gp(a,b,n)<<"\n";

  return 0;
}
