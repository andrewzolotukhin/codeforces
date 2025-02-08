#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;

  cin >> t;

  while (t--) {
    char s1[10], s2[10];
    scanf("%s %s\n", s1, s2);

    char t = s1[0];
    s1[0] = s2[0];
    s2[0] = t;

    printf("%s %s\n", s1, s2);
  }
}
