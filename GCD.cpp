#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int m, n, t;
  cin >> m >> n;
  if (m < n) {
    t = m;
    m = n;
    n = t;

    while (n != 0) {
      t = m % n;
      m = n;
      n = t;
    }
  } else {
    while (n != 0) {
      t = m % n;
      m = n;
      n = t;
    }
  }
  cout << "The GCD is: " << m;
}
