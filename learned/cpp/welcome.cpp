// Copyright [2022] Meek_0
// Learning Started 26/01/22 | 06.00 p.m

#include<iostream>
#include<string>


void loop(int r, int c) {
    int rwMid = (r-1)/2;
    for (int i = 0; i < r; i++) {
        // Counting remaining one by one row !
        int remainingBefore = (c-3*(2*i+1));    // Var names are self Explanatory
        int remWelcome = (c-7);
        int remainingAfter = (c-3*(2*(r-i)-1));
        //
        if (i < rwMid) {
            std::cout << std::string((remainingBefore/2), '-');
            for (int p =0; p < (2*i+1); p++) {
                std::cout << ".|.";         // String fill constructor can only fill one single charecter !
            }
            std::cout << std::string((remainingBefore/2), '-');
        } else if (i == rwMid) {
            std::cout << std::string((remWelcome/2), '-') << "WELCOME" << std::string((remWelcome/2), '-');
        } else if (i > rwMid) {
            std::cout << std::string((remainingAfter/2), '-');
            for (int z =0; z < (2*(r-i)-1); z++) {
               std::cout << ".|.";
            }
            std::cout <<  std::string((remainingAfter/2), '-');
        }
        std::cout << std::endl;
    }
}


int main() {
    int inputs{0};
    std::cout << "Enter Rows : ";
    std::cin >> inputs;
    loop(inputs, inputs*3);
    return 0;
}
