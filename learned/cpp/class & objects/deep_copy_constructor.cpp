// Copyright [2022] Meek_0
// Learning Started 14/02/22 | 12.00 a.m
// deep copy of RAW pointers

#include <iostream>
#include <string>

class deep {
 private:
    int *data;

 public:
// Constructors
    explicit deep(int d) {
        data = new int;
        *data = d;
        std::cout << "Constructor called" << std::endl;
    }
    // shallow(const shallow &s)
    // : shallow(s.data) {
    //     std::cout << "shallow copy constructor called" << std::endl;
    // }
    deep(const deep &s) {
        data = new int;
        *data = *s.data;
        std::cout << "deep copy constructor called" << std::endl;
    }
    ~deep() {
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
void display(deep s) {
    std::cout << s.get_val() << std::endl;
    // when object is out of this scope, it will be deleted
}
int main() {
    deep meek(100);
    display(meek);

    deep mehedi(meek);
    display(mehedi);
    // Unlike shalow copy, deep copy will allocate a new memory for the object
    // so if destructor is called after display(), it will not delete the memory of the first object

    return 0;
}