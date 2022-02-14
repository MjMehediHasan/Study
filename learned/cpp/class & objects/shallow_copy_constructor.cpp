// Copyright [2022] Meek_0
// Learning Started 14/02/22 | 12.00 a.m
// Shallow copy of RAW pointers

#include <iostream>
#include <string>

class shallow {
 private:
    int *data;

 public:
// Constructors
    explicit shallow(int d) {
        data = new int;
        *data = d;
        std::cout << "Constructor called" << std::endl;
    }
    shallow(const shallow &s)
    : data(s.data) {
        std::cout << "Shallow copy constructor called" << std::endl;
    }
    ~shallow() {
        delete data;
        std::cout << "Destructor called" << std::endl;
    }
// Member functions
    int get_val() {
        return *data;
    }
    void set_data(int d) {
        *data = d;
    }
};
void display(shallow s) {
    std::cout << s.get_val() << std::endl;
    // when object is out of this scope, it will be deleted
}
int main() {
    shallow meek(100);
    display(meek);

    shallow mehedi(meek);
    display(mehedi);
    // after this programme will crush
    // because when display is finised then it deletes the copy object which points to the same address as meek.data
    // so when new mehedi object is created by copying meek object it has no reference to that heap memory anymore
    // that's the problem of shallow copy

    return 0;
}