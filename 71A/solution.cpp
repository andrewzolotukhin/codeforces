#include <iostream>
#include <string>

int main() {
        int n;
        std::string s;
        std::cin >> n;
        for(int i = 0; i < n; i++)
        {
                std::cin >> s;
                size_t l = s.size();
                if(l > 10) {
                        std::cout << s.at(0) << l - 2 << s.at(l - 1) << std::endl;
                        continue;
                }

                std::cout << s << std::endl;
        }
        return 0;
}
