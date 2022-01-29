// Copyright [2022] Meek_0
// Learning Started 29/01/22 | 10.00 p.m
#include <iostream>
#include <vector>
#include <string>
#include <cctype>       // for "tolower()"
#include<algorithm>     // for sorting vectors smallest and largest

// Defines
#define vec std::vector
#define str std::string
#define cout std::cout
#define cin std::cin
#define endl std::endl
#define pb push_back
#define sort std::sort


// Function Prototypes
void print(const vec<int> &v);
int check(vec<int> v);
int selFunc(char sel, vec<int> &v);    // Some selection need real vector from "main" function
int addVec(vec<int> &v);             // used pass by reference function to modify the real vector
double mean(const vec<int> &v);     // mean will take the real vector for actual numbers
void clearVec(vec<int> v);
int smallest(vec<int> v);
int largest(vec<int> v);


// Main function
int main() {
    char selection {};     // char type is needed for "tolower()"
    vec<int> list {};
    do {
        cout << "\n\n" << str(35, '-')<< endl;      // This will display "-" 35 times ! Very handy !
        cout << "P - Print Numbers\n" << "A - Add numbers\n";
        cout << "M - Display Mean of the numbers\n" << "S - Display the smallest number\n";
        cout << "L - Display the largest number\n" << "C - Clear list\n" << "Q - Quit\n\n>";
        cin >> selection;
        selection = tolower(selection);
        selFunc(selection, list);
    } while (selection != 'q');
    return 0;
}


// selection
int selFunc(char sel, vec<int> &v) {
    if (sel == 'p') {
        print(v);
    } else if (sel == 'a') {
        addVec(v);
    } else if (sel == 'm') {
        mean(v);
    } else if (sel == 's') {
        smallest(v);
    } else if (sel == 'l') {
        largest(v);
    } else if (sel == 'c') {
        clearVec(v);
    } else if (sel == 'q') {
        cout << "\n\nOk ! Quiting...\n\n";
    } else {
        cout << "\n\nInvalid option ! Try again !\n\n" << endl;
    }
return 0;
}



// Cheking empty list or not
int check(vec<int> v) {
    if (v.size() == 0) {
        cout << "[]-List is empty" << endl;
        return false;
    } else {
        return true;
    }
}

// Printing list
void print(const vec<int> &v) {
    if (check(v) != false) {
        cout << "List is : [ ";
        for (size_t val : v) {  // Ranged based for loop
            cout << val << " ";
        }
        cout << "]" << endl;
    }
}

// Adding to Vector
int addVec(vec<int> &v) {
    int temp {};
    cout << "Enter an integer : ";
    cin >> temp;
    for (size_t val : v) {  // Ranged based for loop
        if (val != temp) {
            cout << temp << " Added to the list ! << endl";
        } else if (val == temp) {
            cout << "\nNumber is already in list !\n";
            return 0;
        }
    }
    v.pb(temp);   // push_back won't work while iterating through the same vector
}

// Mean
double mean(const vec<int> &v) {
    double total {0};
    if (check(v) != false) {
        for (auto val : v) {
            total += val;
        }
        return (total/v.size());
    }
}

// smallest
int smallest(vec<int> v) {
    if (check(v) != false) {
        sort(v.begin(), v.end());
        cout << "\n\n" << v[0] << " is the smallest number in the list !" << endl;
    }
}

// largest
int largest(vec<int> v) {
    if (check(v) != false) {
        sort(v.begin(), v.end(), std::greater<int>());  // reverse sorting
        cout << "\n\n" << v[0] << " is the largest number in the list !" << endl;
    }
}

// clear
void clearVec(vec<int> v) {
    if (check(v) != false) {
        v.clear();
        cout << "\n\nVector cleared !\n\n";
    }
}
