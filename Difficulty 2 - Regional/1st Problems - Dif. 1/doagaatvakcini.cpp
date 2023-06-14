//https://mendo.mk/Task.do?id=902
#include <bits/stdc++.h>
#define LL long long
#define LD long double
#define INF (1<<30)
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")
using namespace std;
 
int main(){ ios::sync_with_stdio(false); cin.tie(); cout.tie();
 
int RES = 0;
int x;
while( cin >> x ) RES += x/2;
cout << RES << endl;
 
}