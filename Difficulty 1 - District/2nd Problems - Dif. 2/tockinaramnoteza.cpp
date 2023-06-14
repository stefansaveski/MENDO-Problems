//https://mendo.mk/Task.do?id=701
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
 
int main(){
    int n;
    cin >> n;
    int niza[n];
    for(int i=0; i<n; i++){
      cin >> niza[i];
    }
    for(int i=0; i<n; i++){
      int leftsum = 0;
      int rightsum = 0;
      for(int l=0; l<i; l++){
        leftsum += niza[l];
        //cout << niza[l] << " " ;
      }
      //cout << endl;
      for(int j=i+1; j<n; j++){
        rightsum += niza[j];
        //cout << niza[j] << " ";
      }
      if(leftsum == rightsum){
        cout << i+1;
        return 0;
      }
      //cout << endl;
    }
    cout << "-1";
    return 0;
}