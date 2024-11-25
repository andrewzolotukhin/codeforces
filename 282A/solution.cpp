#include <iostream>
#include <string>

int main() {
        int n, r = 0;
        std::cin >> n;
  std::string op;
        for(int i = 0; i < n; i+=1)
        {
                std::cin >> op;

                if((op == "++X") || (op == "X++")) {
      r++;
    } else r--;
        }
        std::cout << r << std::endl;
        return 0;
}
