//https://mendo.mk/Task.do?id=885
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
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int n, m;
    cin >> n >> m;
    LL int matrix[n][m];
    memset(matrix, 0, sizeof matrix);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }
 
    vector<int> results;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if ((i == 0 || matrix[i-1][j] > matrix[i][j]) &&
                (i == n-1 || matrix[i+1][j] > matrix[i][j]) &&
                (j == 0 || matrix[i][j-1] > matrix[i][j]) &&
                (j == m-1 || matrix[i][j+1] > matrix[i][j])) {
 
                vector<int> v;
                if(i+1 < n) v.push_back(matrix[i+1][j]);
                if(i-1 >= 0) v.push_back(matrix[i-1][j]);
                if(j+1 < m) v.push_back(matrix[i][j+1]);
                if(j-1 >= 0) v.push_back(matrix[i][j-1]);
                sort(v.begin(), v.end());
                results.push_back(v[0]-matrix[i][j]);
            }
        }
    }
 
    sort(results.begin(), results.end(), greater<int>());
    each(a, results) cout << a << " ";
    return 0;
}