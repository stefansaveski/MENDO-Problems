//https://mendo.mk/Task.do?id=987
#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
 
long long int newNum(long long int x){
    long long int maxS = 1;
    for(long long int i=2; i<x; i++){
        if(x % i == 0){
            maxS = x / i;
            break;
        }
    }
    return maxS + x;
}
 
 
 
int main()
{
    long long int x, n;
    cin >> x >> n;
    long long int num = x;
    for(long long int i=0; i<n; i++){
        num = newNum(num);
    }
    cout << num;
    return 0;
}