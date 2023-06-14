//https://mendo.mk/Task.do?id=529
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define pb push_back
#define mp make_pair
#define ins insert
#define each(a,x) for (auto& a: x)
#define pq priority_queue
#define f first
#define s second
#pragma GCC optimize ("Ofast")
#pragma GCC target ("avx2")
#pragma GCC optimization ("O2")
#pragma GCC optimization ("unroll-loops")
#define LL long long
int main(){ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  string lights;
  int brojac = 0;
  cin >> lights;
  if(lights[0] == 'Y'){
    brojac++;
    for(int i=0; i<lights.length(); i++){
      if(lights[i] == 'N'){
        for(int j=i; j<lights.length(); j+=i+1){
          if(lights[j] == 'N')
            lights[j] = 'Y';
          else
            lights[j] = 'N';
        }
        brojac++;
      }
      //cout << lights << endl;
    }
  }
  else{
    for(int i=0; i<lights.length(); i++){
      if(lights[i] == 'Y'){
        for(int j=i; j<lights.length(); j+=i+1){
          if(lights[j] == 'N')
            lights[j] = 'Y';
          else
            lights[j] = 'N';
        }
        brojac++;
      }
      //cout << lights << endl;
    }
  }
  cout << brojac;
  return 0;
}