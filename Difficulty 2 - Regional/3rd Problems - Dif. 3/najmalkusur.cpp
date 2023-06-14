//https://mendo.mk/Task.do?id=904
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define pb push_back
#define mp make_pair
#define ins insert
#define each(a,x) for (auto& a: x)
#define ir(i,a,b) for(int i=a;i<b;i++)
#define dr(i,a,b) for(int i=a;i>=b;i--)
#define f first
#define s second
 
int main() {
 
      int C[3], M;
      cin >> C[0] >> C[1] >> C[2] >> M;
 
      int minKusur = M;
      int MC[3];
 
      for( int i = 0; C[0]*i <= M; i++ ){
          for( int j = 0; C[0]*i + C[1]*j <= M; j++ ){
 
              int k = ( M - C[0]*i - C[1]*j ) / C[2];
 
              int kusur = M - C[0]*i - C[1]*j - C[2]*k;
 
              if( kusur < minKusur ){
                  minKusur = kusur;
                  MC[0] = i;
                  MC[1] = j;
                  MC[2] = k;
              }
 
          }
      }
 
      cout << minKusur << endl;
      cout << MC[0] << ' ' << MC[1] << ' ' << MC[2] << endl;
  }