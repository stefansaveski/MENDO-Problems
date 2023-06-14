//https://mendo.mk/Task.do?id=989
#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
 
 
int findLongest(pair<int,int> dominos[], int n){
 
    int longest = 1, temp = 1;
    int first = dominos[0].first;
    int second = dominos[1].first;
    for(int i=2; i<=n; i++){
        //cout << first << " " << second << endl;
        if(first <= second && first != 0){
            temp++;
            first = second;
            second = dominos[i].first;
        }
        else{
            temp = 1;
            first = second;
            second = dominos[i].first;
        }
        if(temp >= longest)
            longest = temp;
    }
    return longest;
}
 
 
 
 
int main()
{
    int n;
    cin >> n;
    pair<int, int> dominos[n];
 
    for(int i=0; i<n; i++){
        cin >> dominos[i].first;
    }
    for(int i=0; i<n; i++){
        cin >> dominos[i].second;
    }
    bool same = true;
    for(int i=0; i<n; i++){
        if(dominos[i].first != dominos[i].second)
            same = false;
    }
    if(same){
        cout << findLongest(dominos, n);
        return 0;
    }
    pair<int, int> tempdominos[n];
    for(int i=0; i<n; i++)
        tempdominos[i] = dominos[i];
    int maxLongest = findLongest(dominos, n);
    for(int i=0; i<n; i++){
        swap(dominos[i].first, dominos[i].second);
        int longest = findLongest(dominos, n);
        //cout << i << endl;
        if(longest >= maxLongest){
            int cnt = i+1;
            for(int i=0; i<n; i++){
                 tempdominos[i].first = dominos[i].first;
                 tempdominos[i].second = dominos[i].second;
            }
 
            while(longest >= maxLongest)
            {
                swap(tempdominos[cnt].first, tempdominos[cnt].second);
                longest = findLongest(tempdominos, n);
                //cout << "*" << longest  << "*" << endl;
                if(longest > maxLongest)
                    maxLongest = longest;
                cnt++;
                if(cnt >= n)
                    break;
            }
        }
        //cout << endl;
        swap(dominos[i].first, dominos[i].second);
 
    }
    cout << maxLongest;
}