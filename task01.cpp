#include <iostream>
#include <vector>
// #include <iterator>
// #include <algorithm> 

int main() {
    int vector_size, number_to_delete, input;
    std::vector<int> numbers;

    std::cout << "Input vector size: ";
    std::cin >> vector_size;

    std::cout << "Input numbers:";
    for (int i = 0; i < vector_size; ++i) {
        std::cin >> input;
        numbers.push_back(input);
    }

    std::cout << "Input number to delete: ";
    std::cin >> number_to_delete;

    int write_index = 0;
    for (int read_index = 0; read_index < numbers.size(); ++read_index) {
        if (numbers[read_index] != number_to_delete) {
            numbers[write_index] = numbers[read_index];
            ++write_index;
        }
    }

    while (numbers.size() > write_index) {
        numbers.pop_back();
    }
    
    // Написал еще вда дополнительных варианта для себя
    // auto end = std::remove(numbers.begin(), numbers.end(), number_to_delete);
    // numbers.erase(end, numbers.end());

    // тоже самое, но в одну строку
    // numbers.erase(std::remove(numbers.begin(), numbers.end(), number_to_delete));
    
    // через создание другого вектора, только нужно потом сменить название вектора в выводе
    // std::vector<int> numbers2;
    // std::copy_if(numbers.begin(), numbers.end(), std::back_inserter(numbers2), [number_to_delete](int x) {
    //     return x != number_to_delete;
    //     });
        
    // std::cout << "Result: ";
    // for (int i = 0; i < numbers2.size(); ++i) { 
    //     std::cout << numbers2[i] << " ";
    // }


    std::cout << "Result: ";
    for (int i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << " ";
    }

    return 0;
}

