#include <iostream>
#include <vector>

class move {
 private:
    int *data;
 public:
    void setVal(int d) {*data = d;}
    int getVal() {return *data;}
    explicit move(int d);
    move(const move &source);
    move(move &&source);
    ~move();
};

move::move(int d) {
    data = new int;
    *data = d;
    std::cout << "Constructor for : " << d <<std::endl;
}

// copy constructor
// Dangling constructor
move::move(const move &source)
    : move(*source.data) {            // move(source -> data)
        std::cout << "Copy Constructor (Deep-Copy) for : " << *data << std::endl;
}

// Move constructor
move::move(move &&source)
    : data {source.data} {
        data = source.data;
        source.data = nullptr;
        std::cout << "Move constructor called for : " << *data << std::endl;
}

// Destructor
move::~move() {
    if (data != nullptr) {
        std::cout << "Destructor for : " << *data << std::endl;
    } else {
        std::cout << "Destructor for Nullptr !" << std::endl;
    }
    delete data;
}

int main() {
    std::vector<move> vec;
    vec.push_back(move{10});
    return 0;
}