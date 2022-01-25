// Copyright [2022] Meek_0
// Learning Started 25/01/22 | 11.00 p.m
//
// Do while loop with some sort of switch and cases stuff
// Please read the comments must !

#include<iostream>
#include<string>
int main() {
    char selection{};
    bool selBool{true};
    do {
        std::cout << "\n\n-------------------------" << std::endl;
        std::cout << "1) Echo name\n" << "2) Echo name of her\n";
        std::cout << "3) Do Nothing\n" << "Q) Quit Program\n\n>";
        std::cin >> selection;
        switch (selection) {
            case '1' : {std::string name{};
                        std::cout << "Enter Your Name : ";
                        std::cin >> name;
                        std::cout << "Hi there " << name;}
                        break;
            case '2' : std::cout << "_ _" << std::endl;
                        break;
            case '3' : std::cout << "Ok ! I'll do nothin 🤐!" << std::endl;
                        break;
            case 'q' :
            case 'Q' : {std::cout << "Ok ! Good by ! 😥" << std::endl;
                        selBool = false;}
                        break;
            default : std::cout << "Invalid Option ! Use your glasses !🥴";
        }
    } while (selBool);
    //
    // while (selection != q && selection != Q) using "&&"" instead of "||"
    // because "while" can only be "true" or "False" not partially true or false !
    // if you use " || " you'll get : CWE-571 Logical disjunction always evaluates to true
    return 0;
}
