//https://mendo.mk/Task.do?id=13
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main()
{
    int n, m;
    cin >> n >> m;
 
    vector<int> v;
 
    for (int i=0; i<n; i++)
    {
        int xi;
        cin >> xi;
 
        v.push_back(xi);
    }
 
 
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
 
    //optimalnoto reshenie na nosenje na knigite odi vaka:
    //ako vekje mora da ja odneseme knigata koja e najdaleku vo hodnikot
    //vo toa odenje treba da gi odneseme i ostanatite M-1 knigi koi se najdaleku
 
    int rezultat = 0;
 
    for (int i=0; i<v.size(); i+=m)
    {
        rezultat += v[i]; //odi da gi odnesesh m-te knigi
        rezultat += v[i]; //vrati se nazad
    }
 
    cout << rezultat << endl;
    return 0;
}