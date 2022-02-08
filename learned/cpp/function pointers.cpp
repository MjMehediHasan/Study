// Copyright [2022] Meek_0
// Learning Started 08/02/22 | 10.00 p.m
#include <iostream>

int *create_array(int initial_val = 0, size_t size = 0) {
    int *new_array {nullptr};
    new_array = new int[size];
    for (int i{0}; i < size; i++) {
        new_array[i] = initial_val;
        // *(new_array+i) = initial_val;
    }
    return new_array;
}

void display(const int *const array, size_t size) {
    for (int i{0}; i < size; i++) {
        std::cout << array[i] << " ";
    }
}
int main() {
    // size_t size{0};
    // int val{0};
    // int *my_array{nullptr};
    int size{0}, val{0}, *my_array{nullptr};
    std::cout << "Size of the array and initial val : " << std::endl;
    std::cin >> size;
    std::cin >> val;
    my_array = create_array(val, size);
    display(my_array, size);
    delete [] my_array;
    return 0;
}
