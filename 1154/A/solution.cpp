#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  vector<long long> nums(4, 0);
  cin >> nums[0] >> nums[1] >> nums[2] >> nums[3];

  for (int i = 0; i < nums.size(); i++) {
    long long abc = nums[i];
    long long ab = nums[(i + 1) % nums.size()],
              ac = nums[(i + 2) % nums.size()],
              bc = nums[(i + 3) % nums.size()];
    long long a = abc - bc;
    long long b = abc - ac;
    long long c = abc - ab;

    if (a + b + c == abc) {
      cout << a << " " << b << " " << c << '\n';
    }
  }
}
