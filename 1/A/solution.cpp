#include <iostream>


int main () {
    long long n, m, a;
    std::cin >> n >> m >> a;

    if(a >= n && a >= m) {
      std::cout << 1 << std::endl;
      return 0;
    }

    long long fn = n / a;
    long long fm = m / a;
    int rn = n % a;
    int rm = m % a;

    std::cout <<  fn*fm + ((rn == 0 ? 0 : 1) * fm) + ((rm == 0 ? 0: 1) * fn) + ((rn > 0 && rm > 0) ? 1: 0) << std::endl;

    return 0;
}
