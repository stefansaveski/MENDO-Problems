//https://mendo.mk/Task.do?id=361
#include <iostream>
 
using namespace std;
 
int main()
{
    int a[4],br5=0,br0=0;
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    for(int i=0;i<4;i++){
        if(a[i]==5)
            br5++;
        if(a[i]==0)
            br0++;
    }
    if(br5>br0){
        cout<<br0;
    }
    else if(br0>br5){
        cout<<br5;
    }
    else if(br5==br0)
        cout<<br5;
    else
        cout<<"0";
    return 0;
}