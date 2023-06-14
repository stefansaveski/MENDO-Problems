//https://mendo.mk/Task.do?id=988
#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
 
long long int changeArr(vector<long long int> v, int operations){
 
    for(long long int i=0; i<operations; i++){
        sort(v.begin(), v.end());
        long long int dif = abs(v[0] - v[v.size()-1]);
        v.erase(v.begin());
        v.erase(v.begin() + v.size()-1);
        v.push_back(dif);
    }
    long long int sum = 0;
    for(long long int i=0; i<v.size(); i++)
        sum += v[i];
    return sum;
}
 
int main()
{
    long long int n, p;
    cin >> n >> p;
    vector<long long int> niza;
    for(long long int i=0; i<n; i++){
        long long int num;
        cin >> num;
        niza.push_back(num);
    }
    long long int prasanja[p];
    vector<long long int> results;
    for(long long int i=0; i<p; i++){
        cin >> prasanja[i];
        results.push_back(changeArr(niza, prasanja[i]));
    }
    for(long long int i=0; i<results.size(); i++)
        cout << results[i] << "\n";
    return 0;
}