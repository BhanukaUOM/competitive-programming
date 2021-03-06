#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;


int gcd(int m, int n) {
  if (m == 0) return n;
  if (n == 0) return m;
  if (m == n) return m;
  if (m == 1) return 1;
  if (n == 1) return 1;

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

  int n, m;
  while(cin >> n >> m) {
    if (gcd(n, m) == 1) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }    
  }  

  return 0;
}
