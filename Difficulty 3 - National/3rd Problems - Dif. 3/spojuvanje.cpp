//https://mendo.mk/Task.do?id=286
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int myCompare(string X, string Y)
{
    // first append Y at the end of X
    string XY = X.append(Y);
 
    // then append X at the end of Y
    string YX = Y.append(X);
 
    // Now see which of the two
    // formed numbers is greater
    return XY.compare(YX) > 0 ? 1 : 0;
}
 
 
int main(){
  vector<string> arr;
 
   // output should be 6054854654
   int n;
   cin >> n;
   for(int i=0; i<n; i++){
     string num;
     cin >> num;
     arr.push_back(num);
   }
   sort(arr.begin(), arr.end(), myCompare);
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i];
}