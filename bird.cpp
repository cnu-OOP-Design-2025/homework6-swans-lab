#include <iostream>
#include "bird.h"

    Duck::Duck(): Bird("Duck"){ cry(); };
    void Duck::cry() {
        std::cout << "Quack!" << std::endl;
    }
    Duck::~Duck() { cry();}

    Eagle::Eagle(): Bird("Eagle"){ cry(); };
    void Eagle::swim() {
        std::cout << "This bird can't swim." << std::endl;
    }
    void Eagle::cry() {
        std::cout << "Screech!" << std::endl;
    }
    Eagle::~Eagle() { cry();}

    Penguin::Penguin(): Bird("Penguin"){ cry(); };
    void Penguin::fly() {
        std::cout << "This bird can't fly." << std::endl;
    }
    void Penguin::cry() {
        std::cout << "Squawk!" << std::endl;
    }
    Penguin::~Penguin() { cry();}


