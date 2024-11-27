#include <iostream>
#include <string>

int main() {
  std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        std::cout.tie(NULL);

        int i;
        std::string s;
        std::cin >> s;

        int b = 0;

        for(i = 0; i < s.size(); i++){
    b += (s[i] >= 'a')? 1 : -1;
        }

        for(i = 0; i < s.size(); i++){
                if(b >= 0) {
      if(s[i] < 'a') s[i] += 32;
                }
                else {
      if(s[i] >= 'a') s[i] -= 32;
                }
        }

  std::cout << s << std::endl;
  return 0;
}