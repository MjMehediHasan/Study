// "Copyright [2022] Mehedi Hasan"
// Learning Started 17/01/22 | 11.21 p.m


#include<iostream>

int main() {
    int n{0}, i, values[20]{0}, su{0};      // Always initialize your variables !
                // [size]{Initializing_value}
    std::cout << "\nHow Many Values : " << std::endl;
    std::cin >> n;
    std::cout << "\nEnter Values : " << std::endl;
    for (i=0; i < n; i++) {
        std::cin >> values[i];
        su = (su + values[i]);
        std::cout << "I " << values[i] << " \tsum " << su << std::endl;
    }
    std::cout << "\n\nAverage is : " << static_cast<double>(su)/3 << std::endl;
    // "static_cast<double>" Checks if the var is convertable to Double
    // Good practice for skipping point zero zero in whole numbers
    //
}  // NOLINT