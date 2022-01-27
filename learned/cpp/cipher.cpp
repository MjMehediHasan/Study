// Copyright [2022] Meek_0
// Learning Started 27/01/22 | 2.00 p.m

#include<iostream>
#include<string>
#define str std::string
#define cout std::cout
#define cin std::cin
#define endl std::endl

str cipher(str input) {
    str alpha {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    str key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    str outputs {};
    str choice1 {};
    str choice2 {};
    if (input.at(0) == 'e' || input.at(0) == 'E') {
        choice1 = alpha;
        choice2 = key;
    } else if (input.at(0) == 'd' || input.at(0) == 'D') {
        choice1 = key;
        choice2 = alpha;
    } else {
        return "Only D/E is available option ! Make sure to put it in the start !";
    }
    for (size_t i : input.substr(2)) {
        if (choice1.find(i) != str::npos) {
            outputs += choice2.at(choice1.find(i));
        } else {
            outputs += i;
        }
    }
    return outputs;
}
int main() {
    str inputs {};
    while (true) {
        cout << "\nPut (D/E <space>) and Enter Your Message : " << endl;
        getline(cin, inputs);
        if (inputs == "q" || inputs == "Q") {
            cout << "\n\nOk ! Quiting..." << endl;
            break;
        } else {
            cout << str(50, '#') + "\n\n" + cipher(inputs) + "\n\n" + str(50, '#') << endl;
        // string(cpp)<str(50, '#')> + ctype_declaration_string ("\n\n")
        // string+ctype_string = Ok
        // string+string  /  ctype_string+ctype_string = Illegal !
        }
    }
    return 0;
}
