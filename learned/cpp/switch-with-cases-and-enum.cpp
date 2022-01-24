// Copyright [2022] Meek_0
// Learning Started 24/01/22 | 9.00 p.m
//
// Useful links:
// What is enum : https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-enum
//              : https://gist.githubusercontent.com/MjMehediHasan/98c8bd48a017920db4a7f5b78b6b9081/raw/enum.html
// How to cin in enum : http://www.cplusplus.com/forum/general/222932

#include<iostream>

int main() {
    enum direction {
        left, right, up, down
    };
    direction heading {left};
    // std::cout << "Which Direction sir ? : " << std::endl;
    // std::cin >> heading;
    switch (heading) {
        case left :     // for enumeration you don't need to put values / strings in quotes !
            std::cout << "Heading to the left !" << std::endl;
            break;
        case right :
            std::cout << "Heading to the right !" << std::endl;
            break;
        case up :
            std::cout << "Heading to the up !" << std::endl;
            break;
        case down :
            std::cout << "Heading to the down !" << std::endl;
            break;
        default :
            std::cout << "Are you kidding me ?" << std::endl;
        // In case you are missing default and any of the enum element left unhandled then compiler will warn you
        // in some compiler you might even face  compiling error !
    }
    return 0;
} // NOLINT | For my stupid linter !
