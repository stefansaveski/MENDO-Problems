//https://mendo.mk/Task.do?id=608
#include <iostream>
  
using namespace std;
  
int palindrom(int a, int b){
  if(a%10 == b/10 && a/10 == b%10)
    return 1;
  else
    return 0;
}
 
int main(){ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
  int sat1, min1, sat2, min2, res=0,temp=0;
  cin >> sat1 >> min1 >> sat2 >> min2;
  if(sat1==sat2&&min1>min2)
    temp=1;
  if(sat1==sat2&&min1>min2){
    for(int i=min1;i<60;i++)
        if(palindrom(i,sat1))
            res+=1;
    sat1+=1; 
    min1=0;
  }
if(temp==1)
  for(int i=sat1;i!=sat2;i++){
    bool track=false;
    if(i==24)
      i=0;
    for(int j=min1;j<60;j++){
      if(i!=sat1&&track==false){
        j=0;
        track=true;
      }
      if(palindrom(i,j))
        res+=1;
      if(j==min2&&i==sat2)
        break;
    }
  }
else
  for(int i=sat1;i!=sat2+1;i++){
    bool track=false;
    if(i==24)
      i=0;
    for(int j=min1;j<60;j++){
      if(i!=sat1&&track==false){
        j=0;
        track=true;
      }
      if(palindrom(i,j))
        res+=1;
      if(j==min2&&i==sat2)
        break;
    }
  }
  cout<<res<<"\n";
}