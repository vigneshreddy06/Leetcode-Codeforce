#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  bool hasHard = false; 

  for (int i = 0; i < n; ++i) {
    int difficulty;
    cin >> difficulty;
    hasHard |= difficulty; 
  }

  cout << (hasHard ? "HARD" : "EASY") << endl;

  return 0;
}
