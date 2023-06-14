//https://mendo.mk/Task.do?id=615
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    vector<int> vals = {6, 3, 5, 5, 4, 5, 5, 3, 7, 5};
 
 
    for (int i = 9999; i >= 0; i--) {
        int sum = 0;
        int num = i;
        for (int j = 0; j < 4; j++) {
            int digit = num % 10;
            sum += vals[digit];
            num /= 10;
        }
        if (sum == n) {
            cout << i << endl;
            return 0;
        }
    }
 
    cout << "-1" << endl;
    return 0;
}