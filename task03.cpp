#include <iostream>
#include <vector>

void PrintDB(const std::vector<int>& db, const int &index);

int main() {
    const int buffer_size = 20;
    std::vector<int> db(buffer_size);
    int input;
    int index = 0;

    while (true) {
        std::cout << "input number: ";
        std::cin >> input;
        if (input == -1) {
            PrintDB(db, index);
        } else {
            db[index] = input;
            index = (index + 1) % buffer_size;
        }

    }
    return 0;
}

void PrintDB(const std::vector<int>& db, const int &index) {
    for (int i = index; i < db.size(); ++i) {
        std::cout << db[i] << " ";
    }
    for (int i = 0; i < index; ++i) {
        std::cout << db[i] << " ";
    }
    std::cout << std::endl;
}