//https://mendo.mk/Task.do?id=977
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
#pragma GCC optimize ("Ofast")
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
 
int main(){ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   
    int num, n, threes[3] = {0}, maxi=0, cnt=0;
    cin >> n;
    for(int i=0; i<n; i++){
      cin >> num;
      cnt++;
      if(num == 3 && threes[0] == 0){
        threes[0] = cnt;
        cnt = 0;
        continue;
      }
      if(num == 3 && threes[1] == 0){
        threes[1] = cnt;
        cnt = 0;
        continue;
      }
      if(num == 3 && threes[2] == 0){
        threes[2] = cnt;
        cnt = 0;
        continue;
      }
      if(num == 3){
        maxi = max(maxi, threes[0]+threes[1]+threes[2]+cnt-1);
        threes[0] = threes[1];
        threes[1] = threes[2];
        threes[2] = cnt;
        cnt = 0;
        continue;
      }
      if(num != 3 && i == n-1){
        maxi = max(maxi, threes[0]+threes[1]+threes[2]+cnt);
        break;
      }
    }
    cout << maxi;
    return 0;
}