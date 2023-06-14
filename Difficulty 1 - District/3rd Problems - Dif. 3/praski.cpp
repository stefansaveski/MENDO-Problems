//https://mendo.mk/Task.do?id=878
#include <iostream>
  
using namespace std;
  
int main()
{
    int n, sum = 0, result=0;
    cin >> n;
    int niza[n];
    for(int i=0; i<n; i++){
        cin >> niza[i];
        sum += niza[i];
    }
    double maxavg = float(sum) / n;
    for(int i=0; i<n; i++){
        sum -= niza[i];
        float avg = float(sum)/(n-(i+1));
        if(avg > maxavg){
            maxavg = avg;
            result = i+1;
        }
    }
    cout << result;
}