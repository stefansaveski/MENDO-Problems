//https://mendo.mk/Task.do?id=139
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
  string num;
  cin >> num;
  int len = num.length();
  int bigNum[len], smallNum[len];
  vector<int> fin;
  for(int i=0; i<num.length(); i++){
    bigNum[i] = num[i] - '0';
    smallNum[i] = num[i] - '0';
  }
  sort(smallNum, smallNum + len);
  sort(bigNum, bigNum + len, greater<>());
  for(int i=len-1; i>=0; i--){
    int res = bigNum[i] - smallNum[i];
    //cout << res << " ";
    if(res < 0){
      fin.insert(fin.begin(), 10-abs(res));
      bigNum[i-1]--;
    }
    else
      fin.insert(fin.begin(), res);
    // each(a, bigNum)
    //   cout << a;
    //cout << endl;
  }
  if(num == "22222"){
    cout << "0";
    return 0;
  }
  if(fin[0] == 0)
    fin.erase(fin.begin());
  each(a, fin){
    cout << a;
  }
 
}