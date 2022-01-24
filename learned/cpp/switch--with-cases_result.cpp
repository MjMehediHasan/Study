// Copyright [2022] Meek_0
// Learning Started 24/01/22 | 8.00 p.m

#include<iostream>

int main() {
    char grade {};
    std::cout << "Enter Your Latter Grade : " << std::endl;
    std::cin >> grade;
    switch (grade) {
        case 'a':       // For both upper and lower cases !
        case 'A':
            std::cout << "You need 80-89 markes !" << std::endl;
            break;      // Always put break to a case, unless you really want to fall them all the way to the next break
        case 'b':
        case 'B':
            std::cout << "You need 70-79 markes !" << std::endl;
            break;
        case 'c':
        case 'C':
            std::cout << "You need 60-79 markes !" << std::endl;
            break;
        case 'd':
        case 'D':
            std::cout << "You need 50-59 markes !" << std::endl;
            break;
        case 'F':
        case 'f':
            {
            char confirm {};
            std::cout << "Are You Sure(Y/N) ?" << std::endl;
            std::cin >> confirm;
            if (confirm == 'Y' || confirm == 'y') {
                // braces are not necessary while you have only one statement to execute !
                std::cout << "I guess you don't wanna study !" << std::endl;
            } else if (confirm == 'N' || confirm == 'n') {
                std::cout << "Good ! Go - Study !" << std::endl;
            } else {
                std::cout << "Are You out of your mind !?" << std::endl;
            }
        // break;
        // Break can also be inside of the braces ! Not sure why they work same ! maybe i'll find it later on !
        } break;
        default : std::cout << "Never Mind !" << std::endl;
        // default doesn't need any "break" statement !
    }
    return 0;
} // NOLINT | For my stupid linter !
