#include <iostream>
#include <string>

int main() {
  std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        std::cout.tie(NULL);

        std::string s1, s2;

        std::cin >> s1 >> s2;

        size_t i = 0;

        for(i = 0; i < s1.size(); i++) {
          if (s1[i] >= 'a') s1[i]=( s1[i] - 32);
          if (s2[i] >= 'a') s2[i]=(s2[i] - 32);
        }

        i = 0;

        while(i < s1.size() && (s1[i] == s2[i])) i++;

        if(i == s1.size()) {
    std::cout << 0 << std::endl;
                return 0;
        }

  std::cout << ((s1[i] < s2[i])?-1:1) << std::endl;

  return 0;
}
