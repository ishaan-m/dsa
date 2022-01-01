#include <bits/stdc++.h>
using namespace std;
float celsiusToFahrenheit(float temp){

  return ((temp*9.0/5.0)+32.0);
}
int main(){

  float temp;
  cin>>temp;

  cout<<celsiusToFahrenheit(temp)<<"\n";


  return 0;

}
