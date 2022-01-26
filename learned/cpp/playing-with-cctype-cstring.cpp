// Copyright [2022] Meek_0
// Learning Started 26/01/22 | 11.00 p.m
#include<iostream>
#include<cstring>

using namespace std;

int main() {
    char name[50] {};
    char withspaces[50] {};
    cout << "Enter \0 name : " << endl;     // this commands run only till it finds \0 . That's why I was testing it !
    // cin >> name;
    cin.getline(withspaces, 50, '\n');  // for charecter types only ! cin.getline(var_name, total_char_size, stop_sign)
    // cout << name << endl;
    cout << withspaces << endl;
    // snprintf(name, withspaces)
    strcpy(name, withspaces); //NOLINT
    for (size_t i =0; i < strlen(name); i++) {      // size_t is better than int or unsigned
        if (!isspace(name[i])) {            // if only checks true false. That's why I've used 'bang sign' for 'false' !
            cout << name[i];
        }
    }
    return 0;
}
