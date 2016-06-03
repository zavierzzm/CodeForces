#include <iostream>

using namespace std;

int main() {
  long long n, m, a;
  long long row, col;

  cin >> n >> m >> a;
  row = (n + a - 1) / a;
  col = (m + a - 1) / a;

  cout << row * col << endl;

  return 0;
}
