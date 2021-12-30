#include <bits/stdc++.h>
using namespace std;

//gcd(a,b)==gcd(a,a-b)

/*
gcd(5,15)->gcd(15,5%15)->gcd(5,15%5)->return 5;
gcd(5,7)->gcd(7,5%7)->gcd(5,7%5)->gcd(2,5%2)->gcd(1,2%1)->return 1;

*/
int gcd(int a,int b){
  //forcing a to be the bigger number b to be the smaller number
    if(b==0){
      //if smaller number is perfectly dividing larger number i.e. b is zero (a%b in previous func call), it is the gcd, so return it
      return a;
    }
    return gcd(b,a%b);
}

//lcm(a,b)== a*b/gcd(a,b)

int lcm(int a,int b){
  //formula return
  return (a*b)/(gcd(a,b));
}

int main(){

  int a,b;
  cin>>a>>b;
  cout<<gcd(a,b)<<"\n";
  cout<<lcm(a,b)<<"\n";

  return 0;
}
