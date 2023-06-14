//https://mendo.mk/Task.do?id=849
#include <iostream>
 
using namespace std;
 
int main()
{
    int N;
    cin>>N;
    char niza[N];
    for(int i=0; i<N; i++){
        cin>>niza[i];
    }
    bool flag = false;
    int brojA=0,brojB=0,neispolnet=0;
    for(int i=0; i<N; i++){
        if(niza[i]=='C'){
            flag = true;
            if(brojB >= brojA)
                neispolnet++;
            brojA = 0;
            brojB = 0;
        }
        if(flag){
            if(niza[i] == 'A')
                brojA++;
            else if(niza[i] == 'B')
                brojB++;
        }
    }
    neispolnet--;
    if(neispolnet==0)
        cout<<"POGODENA"<<endl;
    else
        cout<<neispolnet;
 
 
 
 
    return 0;
}