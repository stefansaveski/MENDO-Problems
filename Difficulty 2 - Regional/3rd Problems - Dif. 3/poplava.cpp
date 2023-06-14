//https://mendo.mk/Task.do?id=114
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
  
int main()
{
    int n;
    cin >> n;
  
    vector<pair<int, int> > v;
  
    for (int i=0; i<n; i++)
    {
        int pi, xi;
        cin >> pi >> xi;
  
        //prvo xi, pa pi
        //za da gi podredime klasite spored produktivnosta
        v.push_back(make_pair(xi, pi));
    }
  
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
  
    int produktivnost = 1000000000, lugje = 0;
    int vkupnoLugje = 0;
  
    for (int i=0; i<(int)v.size(); i++)
    {
        int slednaProduktivnost = v[i].first;
        vkupnoLugje = vkupnoLugje + v[i].second;
  
        if (slednaProduktivnost*vkupnoLugje >= produktivnost * lugje)
        {
            //zemi lugje i od ovaa klasa
            produktivnost = slednaProduktivnost;
            lugje = vkupnoLugje;
        }
    }
  
    cout << (produktivnost * lugje) << endl;
    return 0;
}