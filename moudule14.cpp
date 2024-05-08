#include <iostream>

using namespace std;

class Dog {
public:
    void bark() {
        cout << "woof woof!" << endl;
    }
};

class Chihuahua : public Dog {
public:
    void bark() {
        cout << "yip yip!" << endl;
    }
};

class Husky : public Dog {
public:
    void bark() {
        cout << "howl howl!" << endl;
    }
};

class Pug : public Dog {
public:
    void bark() {
        cout << "snort snort!" << endl;
    }
};

class WaterBottle {
public:
    void spill() {
        cout << "*spills out of bottle*" << endl;
    }
};

class SippyCup : public WaterBottle {
public:
    void spill() {
        cout << "*leak-proof!*" << endl;
    }
};

class SportsBottle : public WaterBottle {
public:
    void spill() {
        cout << "*drenches everything in sight*" << endl;
    }
};

class Thermos : public WaterBottle {
public:
    void spill() {
        cout << "*maintains temperature*" << endl;
    }
};

class Computer {
public:
    void overheats() {
        cout << "*overheats and catches on fire*" << endl;
    }
};

class GamingComputer : public Computer {
public:
    void overheats() {
        cout << "*glows with cool LED lights!*" << endl;
    }
};

class Laptop : public Computer {
public:
    void overheats() {
        cout << "*shuts down to cool off*" << endl;
    }
};

class SuperComputer : public Computer {
public:
    void overheats() {
        cout << "*calculates faster than light speed!*" << endl;
    }
};

int main() {
    Chihuahua tinyDog;
    Husky fluffyDog;
    Pug wrinklyDog;

    SippyCup leakProofBottle;
    SportsBottle activeBottle;
    Thermos temperatureBottle;

    GamingComputer gamingPC;
    Laptop portablePC;
    SuperComputer megaPC;

    tinyDog.bark();
    fluffyDog.bark();
    wrinklyDog.bark();

    leakProofBottle.spill();
    activeBottle.spill();
    temperatureBottle.spill();

    gamingPC.overheats();
    portablePC.overheats();
    megaPC.overheats();

    return 0;
}