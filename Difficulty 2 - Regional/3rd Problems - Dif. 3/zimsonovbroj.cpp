//https://mendo.mk/Task.do?id=854
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
 
bool palindrom(int num){
  string s = to_string(num);
  string str = s;
  int n = str.length();
  for (int i = 0; i < n / 2; i++)
    swap(str[i], str[n - i - 1]);
  if(s == str)
    return true;
  else
    return false;
 
}
 
bool divisible(int num){
  string s = to_string(num);
  for(int i=0; i<s.length(); i++){
    int digit = s[i] - '0';
    if(digit == 0 || num % digit != 0)
      return false;
  }
  return true;
}
 
int main(){ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
  int levo, desno, res = 0;
  cin >> levo >> desno;
  for(int i=levo; i <= desno; i++){
    if(palindrom(i) || divisible(i))
      res++;
  }
  cout << res;
 
  return 0;
}