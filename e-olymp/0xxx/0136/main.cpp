#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;


template <typename INT> 
INT gcd(INT m, INT n) {
  if (m == 0) return n;
  if (n == 0) return m;
  if (m == n) return m;
  if (m == 1) return (INT)1;
  if (n == 1) return (INT)1;

  bool m_even = ((m & 1) == 0);
  bool n_even = ((n & 1) == 0);

  if (m_even) {
    return n_even ? 2 * gcd(m >> 1, n >> 1) : gcd(m >> 1, n);
  }
  // ! m_even
  if (n_even) {
    return gcd(m, n >> 1);
  }

  // !n_even && !m_even
  return (n > m) ? gcd(m, (n - m) >> 1) : gcd((m - n) >> 1, n);
}



int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  long int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;


  if (x1 > x2) swap(x1, x2);
  if (y1 > y2) swap(y1, y2);

  if (x1 == x2) {
    cout << (y2 - y1 + 1) << '\n';
    return 0;
  }
  
  if (y1 == y2) {
    cout << (x2 - x1 + 1) << '\n';
    return 0;
  }
  
  cout << gcd(x2 - x1, y2 - y1) + 1 << '\n';

  return 0;
}
