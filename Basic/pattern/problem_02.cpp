
// Floyd's Triangle
/*

1
2 3
4 5 6
7 8 9 10

*/

#include<iostream>
using namespace std;

int main() {
  cout << "How many rows you want to print : ";
  int n;
  int count = 1;
  cin >> n;
  for(int i = 0; i < n; i++){
    for(int j=0 ; j <= i ; j++){
      cout << count << " ";
      count++;
    }
    cout << "\n";
  }

  return 0;
}