#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

int main() {
    // Item e: Creating a simple list (vector)
    std::vector<int> my_list = {10, 20, 30, 40, 50};
    
    // Item g: Adding random numbers
    std::srand(std::time(0));
    for(int i = 0; i < 5; i++) {
        my_list.push_back(std::rand() % 100 + 1);
    }

    // Item i: Sorting the list
    std::sort(my_list.begin(), my_list.end());

    std::cout << "Sorted C++ List: ";
    for(int x : my_list) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    
    return 0;
}