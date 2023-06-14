//https://mendo.mk/Task.do?id=138
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
  string name;
  cin >> name;
  int n; cin >> n;
  string usedN[n];
  for(int i=0; i<n; i++){
    cin >> usedN[i];
  }
  map<string, int> map;
  //cout << endl;
  bool flag = true;
  for(int i=0; i<n; i++){
    if(usedN[i].find(name) != string::npos){
      if(usedN[i].length()-1 == name.length()-1)
        flag = false;
      else{
        string key = usedN[i].substr(name.length(), usedN[i].length()-1);
        map[key] = 1;
      }
    }
  }
  if(flag){
    cout << name;
    return 0;
  }
  for(int i=1; i<=1000000; i++){
    string key = to_string(i);
    if(map[key] != 1){
      cout << name + key;
      return 0;
    }
  }
}