// Copyright [2022] Meek_0
// Learning Started 10/02/22 | 11.00 a.m

#include<iostream>

int *apply_all(int *arr1, size_t *size1, int *arr2, size_t *size2) {
    int *new_arr{nullptr};
    new_arr = new int[*size1 * *size2];
    // (*size1 > *size2) ? bigger = *size1 : bigger = *size1;
    int add {0};
    for (int i{0}; i < *size1; i++) {
        for (int j{0}; j < *size2; j++) {
            new_arr[i+j+add] = (arr1[i] * arr2[j]);
        }
        add += (*size2-1);  // for keeping index increasing
    }
return new_arr;
}

void print(int const *arr, size_t size) {
    for (int i{0}; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
int main() {
    int array1[]{1, 2, 3, 4, 5}, array2[]{10, 20, 30};
    size_t size1{5}, size2{3};
    // std::cout << "enter first array and size " << std::endl;
    // std::cin >> array1 >> size1;
    // std::cout << "enter second array and size " << std::endl;
    // std::cin >> array2 >> size2;
    int *result = apply_all(array1, &size1, array2, &size2);
    // array is already an address and size_t is a int value
    // so we need to provide reference for size1 and size2 not for array1 and array2
    print(result, size1 * size2);
    delete [] result;
return 0;
}
