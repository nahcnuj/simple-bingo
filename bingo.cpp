#include <bits/stdc++.h>

int main() {
    std::random_device seed;
    std::vector<int> table(75);
    std::iota(table.begin(), table.end(), 1);
    std::shuffle(table.begin(), table.end(), std::mt19937(seed()));
    
    for (auto&& x : table) {
        std::cout << x;
        std::cin.get();
    }

    return 0;
}
