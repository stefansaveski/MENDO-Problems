//https://mendo.mk/Task.do?id=116
#include <bits/stdc++.h>
#include <string>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")
void swap(int *xp, int yp);
int main() { ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int n,m,vkupno=0,placeholder;
cin>>n>>m;
int ci[m],ki[m],po[m];
for(int i=0;i<m;i++){
  cin>>ci[i]>>ki[i];
  po[i]=ci[i]*ki[i];
}
cout<<endl;
for(int i=0;i<m;i++)
  for(int j=i;j<m;j++)
    if(ci[i]>ci[j]){
      swap(ki[i],ki[j]);
      swap(ci[i],ci[j]);
    }
  for(int i=0;i<m;i++){
    //cout<<ci[i]<<" "<<ki[i]<<endl;
    if(n>0){
    loop:
    n-=ki[i]; //cout<<n<<endl;
    if(n<0){ n+=ki[i]; ki[i]-=1; goto loop;}
    vkupno+=ki[i]*ci[i];
  }
  }
cout<<vkupno<<endl;
}
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}