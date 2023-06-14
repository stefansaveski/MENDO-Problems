//https://mendo.mk/Task.do?id=168
#include <iostream>
#include <string>
#include <algorithm>
 
 
using namespace std;
 
int main ()
{
  int n, brojac=0, max=0;
  cin >> n;
  int niza[n];
   
  for(int i=0; i<n; i++){
      cin >> niza[i];
      if(niza[i] > max){
          max = niza[i];
      }
  }
  int najvisoka = max;
  for(int i=0; i<n; i++){
      while(niza[i] != najvisoka){
        niza[i]++;
        brojac++;
      }
  }
  cout << brojac;
  return 0;
}