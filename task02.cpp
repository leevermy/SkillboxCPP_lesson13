#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

int main() {
    std::vector<float> prices {2.5, 4.25, 3.0, 10.0};
    std::vector<int> items {0, 0, 2, 4};

    // не понял, что значит "Программа не допускает выхода за границы вектора цен"
    // то ли завершаться должна, то ли просто считать только то, что в границе диапазона
    // поэтому потренировал assert
    auto result = std::max_element(items.begin(), items.end());
    assert(*result >= 0 && *result <= prices.size() - 1);
    
    float sum = 0;
    for (int i = 0; i < items.size(); ++i) {
        sum += prices[items[i]];
    }

    std::cout << sum;
    return 0;
}