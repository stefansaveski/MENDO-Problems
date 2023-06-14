//https://mendo.mk/Task.do?id=986
#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long int n, res = 0;
    cin >> n;
    long long int kvadrati;
    for(int i=0; i<n/2; i++){
        kvadrati = i*i;
        //cout << kvadrati << " ";
        if(kvadrati >= n)
            break;
        res++;
    }
    cout << res-1;
    return 0;
}