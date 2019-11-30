#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A;
  int B;
  cin >> A >> B;
  int K = (A + B) / 2;
  
  if ((A + B) % 2 == 0) {
    cout << K << endl;
  } else {
    cout << "IMPOSSIBLE" << endl;
  }
}
