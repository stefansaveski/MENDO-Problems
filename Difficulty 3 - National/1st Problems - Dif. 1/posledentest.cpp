//https://mendo.mk/Task.do?id=284
#include <iostream>
using namespace std;
 
int main(){
  int K;
  float sum = 0, min;
  cin >> K;
  if(K == 2)
    min = 60;
  else if(K == 3)
    min = 70;
  else if(K == 4)
    min = 80;
  else if(K == 5)
    min = 90;
  for(int i=0; i<4; i++){
    int num;
    cin >> num;
    sum += num;
  }
  for(int i=0; i<=100; i++){
    sum += i;
    if(sum / 5 >= min){
      cout << i;
      return 0;
    }
    else
      sum -= i;
  }
  cout << "GRESHKA";
  return 0;
}