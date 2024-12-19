#include <iostream>

int main() {
        int n, k = 0, r = 0;
        std::cin >> n >> k;
        int* v = new int[n];

        for(int i = 0; i <= n; i+=1)
        {
                std::cin >> v[i];
        }

        int i = 0;
        while(v[i] >= v[k - 1] && v[i] > 0) { r++; i++; }
        std::cout << r << std::endl;
        return 0;
}
