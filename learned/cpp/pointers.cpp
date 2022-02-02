// Copyright [2022] Meek_0
// Learning Started 02/02/22 | 6.00 p.m
#include <iostream>
#include <string>
// #include <iomanip>
int main() {
    // char *names[] {"Meek", "Second"};   // You can use any data type
    // std::cout << names << std::endl;
    // for (auto val : names) {
    //     std::cout << val++ << std::endl;
    // }

// Getting heap memory from pointer
    int *int_prt {nullptr};
    int_prt = new int;
    std::cout << int_prt << std::endl;
    delete int_prt;  // Always delete after using space ! Otherwise you'll be out of memory !

// Heap memory with size !
    size_t size{0};
    double *temp {nullptr};

    std::cout << "How many Temps ? " << std::endl;
    std::cin >> size;
    temp = new double[size];
    *temp = 10;     // Dereferencing pointer !
    std::cout << *temp << std::endl;    // Contains only 10
    // for (auto val : temp) {
    //     std::cout << val++ << std::endl;
    // }
    delete [] temp;
    std::cout << *temp << std::endl;   // Grabage




// Notations && compairing

    int numbers[] {10, 20, 30};
    int number1 {10};
    std::string s1 {"Meek_0"};
    std::cout << "Value of scores : " << numbers << std::endl;

    int *score_ptr {&number1};
    std::cout << "Value of score_ptr : " << score_ptr << "Value " << *score_ptr << std::endl;
    int *score_ptr2 {numbers};
    int *score_ptr4 {numbers};
    // No reference is needed for array !
    std::cout << "Value of score_ptr2 : " << score_ptr2 <<  "Value " << *score_ptr2 << std::endl;
    std::string *score_ptr3 {&s1};      // need reference for strings
    std::cout << "Value of score_ptr3 : " << score_ptr3 << "Value " << *score_ptr3 << std::endl;

    // compairing
    std::cout << std::boolalpha;    // For only tru and false
    std::cout << (score_ptr2 == score_ptr) << std::endl;    // False cz memory locations aren't same
    std::cout << (*score_ptr2 == *score_ptr) << std::endl;    // True cz valuse are same
    std::cout << (score_ptr2 == score_ptr4) << std::endl;    // True cz memory locations are same

    // Notations (They all work the same)
    std::cout << "\nArray Subscription notation ------------------------------" << std::endl;
    std::cout << numbers[0] << std::endl;
    std::cout << numbers[1] << std::endl;
    std::cout << numbers[2] << std::endl;

    std::cout << "\nPointer Subscription notation ------------------------------" << std::endl;
    std::cout << score_ptr2[0] << std::endl;
    std::cout << score_ptr2[1] << std::endl;
    std::cout << score_ptr2[2] << std::endl;

    std::cout << "\nArray Offset notation ------------------------------" << std::endl;
    std::cout << *numbers << std::endl;
    std::cout << *(numbers +1) << std::endl;  // numbers<memory_location>+4 == (numbers+1)<memory_location> | Bcz int is 4 byte
    std::cout << *(numbers +1) << std::endl;  // That's why we are using Dereferencing here !

    std::cout << "\nPointer Offset notation ------------------------------" << std::endl;
    std::cout << *score_ptr2 << std::endl;
    std::cout << *(score_ptr2 +1) << std::endl;
    std::cout << *(score_ptr2 +1) << std::endl;

// + and -

    // (+)
    score_ptr2 += size;     // You can add number to reach out of the array but it wil cotain garbage !
    *score_ptr2 = 100;  // Then you can assign a value to that memory location !
    std::cout << score_ptr2 << std::endl;
    std::cout << *score_ptr2 << std::endl;  // add 1 to get to the second value of the numbers array which it is pointing to

    //(-)
    score_ptr2 -= size;     // Lowest is 0 so number or memory positions will not decrease after that !
    std::cout << score_ptr2 << std::endl;
    std::cout << *score_ptr2 << std::endl;  // Type 1 to get to the second value of the numbers array which it is pointing to

// Subtracting 2 pointers
    // 2 pointer should point the same "DATA TYPE" !
    int n = *score_ptr2 - *score_ptr;
    std::cout << n;

// Loop through pointer
    while (*score_ptr2 != 30) {
        std::cout << "\nInside Loop " << *score_ptr2++ << std::endl;
        // Don't use (*score_ptr2)++ this will just increase the value
        // Not memory location !
    }

// Pointers to constant
    int new_ptr_var {25};
    const int *int_ptr {&number1};    // int number1{10}
    // In this case pointer can point to another var
    int_ptr = &new_ptr_var;
    std::cout << "\nPointer to constant " << int_ptr << "Value " << *int_ptr << std::endl;

    // But it's data is constant
    // *int_ptr = 86; // error

// Constant pointers
    // opposite of pointer to constant
    int *const new_int_ptr {&number1};
    *new_int_ptr = 86;
    std::cout << "\nConstant pointers " << new_int_ptr << "Value " << *new_int_ptr << std::endl;
    // But pointing to another var is illegal
    // new_int_ptr = &new_ptr_var; // error
    return 0;
}
