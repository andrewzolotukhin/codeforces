#include <iostream>

int main() {
        int n;
        std::cin >> n;

        for(int i = 2; i <= n-2; i+=2)
        {
                if(((n - i) & 1) == 0) {
                        std::cout << "YES\n";
                        return 0;
                }
        }
        std::cout << "NO\n";
        return 0;
}