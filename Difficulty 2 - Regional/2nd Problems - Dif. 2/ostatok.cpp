//https://mendo.mk/Task.do?id=11
#include <iostream>
using namespace std;
 
int main()
{
  int niza[10],ostatok[10], br=0;
  for(int i=0; i<10; i++)
  {
    cin >> niza[i];
    ostatok[i] = niza[i] % 42;
  }
 
  for (int i = 0; i < 10; i++)
  {
        int j = 0;
        for (j = 0; j < i; j++)
            if (ostatok[i] == ostatok[j])
                break;
 
        if (i == j)
            br++;
    }
  cout << br;
 
}