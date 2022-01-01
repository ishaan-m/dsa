#include <bits/stdc++.h>
using namespace std;
int recursive_power(int n,int e){

  if(e==0){
    return 1;
  }
  int temp=recursive_power(n,e/2);

  //if power is even, return power/2*power/2

  if(e%2==0){
    return temp*temp;
  }

  //if power is odd, return power/2*power/2*n
  else{
    return temp*temp*n;
  }


}
int iterative_power(int n,int e){

  int res=1;
  while(e){
    if(e%2==1){
      res*=n;
    }
    n*=n;
    e/=2;
  }
  
  return res;
}
int main(){

  int n,e;
  cin>>n>>e;

  cout<<recursive_power(n,e)<<"\n";
  cout<<iterative_power(n,e)<<"\n";

  return 0;
}
