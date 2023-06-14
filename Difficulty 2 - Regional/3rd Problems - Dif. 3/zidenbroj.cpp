//https://mendo.mk/Task.do?id=957
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
    char num[3]; LL int b; vector<int> niza;
    for(int i=0; i<3; i++){
      cin >> num[i];
      niza.pb(num[i]-48);
    }
    cin >> b;
    LL int holder[3], brojac = 0, temp=0;
    holder[0] = num[0]-48;
    holder[1] = num[1]-48;
    holder[2] = num[2]-48;
    for(int i=3; true; i++){
      niza.pb((holder[0]+holder[1]+holder[2]) % 10);
      holder[temp] = niza[i];
      brojac++;
      temp++;
      if(temp == 3)
        temp = 0;
      if(niza[i-2] == num[0]-48 && niza[i-1] == num[1]-48 && niza[i] == num[2]-48){
        break;
      }
    }
    niza.pop_back(); niza.pop_back(); niza.pop_back();
    if(b%brojac == 0){
      cout << niza[brojac-1];
      return 0;
    }
    cout << niza[b%brojac-1];
    return 0;
}