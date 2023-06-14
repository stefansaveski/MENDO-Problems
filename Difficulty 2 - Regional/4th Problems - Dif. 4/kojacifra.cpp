//https://mendo.mk/Task.do?id=958
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#pragma GCC target ("avx2")
#pragma GCC optimization("O2")
#pragma GCC optimization("unrool-loops")
  
int main(){ios::sync_with_stdio(false);cin.tie(NULL);//cout.tie(NULL);
  
    LL int a,b,temp,cifri[10]={0};
    cin>>a>>b;
    int krajniC[b]={0};
    for(LL int i=0;i<a;i++){
        char holder;
        cin>>holder;
        cifri[holder-48]+=1;
    }
    for(LL int i=0;i<b;i++){
        int bCifri;
        cin>>bCifri;
        temp=0;
        for(int j=9;j>0;j--){
            temp+=cifri[j];
            if(temp>=bCifri){
                krajniC[i]+=j;
                j=0;
            }
        }
    }
    for(int i=0;i<b;i++)
            cout<<krajniC[i]<<' ';
}