//https://mendo.mk/Task.do?id=787
#include <bits/stdc++.h>
#include <string>
using namespace std;
 
 
int main()
{
    string str1, str2;
    cin >> str1;
    str2 = str1;
    int n = str1.length();
 
    for (int i = 0; i < n / 2; i++)
        swap(str2[i], str2[n - i - 1]);
    //cout << str2;
 
    if(stoi(str2) > stoi(str1))
        cout << stoi(str2);
    else
        cout << stoi(str1);
 
    return 0;
}