#include <iostream>

using namespace std;

class Dog{
public:
    void bark(){
        cout << "woof woof!" << endl;
    }
};

class waterBottle{
public:
    void spill(){
        cout << "*spills out of bottle*" << endl;
    }
};

class computer{
public:
    void overheats(){
        cout << "*overheats and catches on fire*" << endl;
    }
};

int main(){
    computer pc;
    waterBottle water;
    Dog wolf;

    wolf.bark();
    water.spill();
    pc.overheats();

    return 0;
}