//https://mendo.mk/Task.do?id=14
#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n,anagrams=0;
    bool yes = true;;
    string a,b;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for(int i = 0; i < a.length(); i++)
            if (a[i] != b[i])
                yes = false;
 
        if(yes == true){
            anagrams++;
        }
        yes = true;
    }
    cout << anagrams;
    return 0;
}