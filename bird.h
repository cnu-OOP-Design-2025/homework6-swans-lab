#pragma once

#include <iostream>

class Bird {
    std::string species; 
public:
    Bird(){}
    Bird(std::string species): species(species){
        std::cout << species << " has borned" << std::endl;
    }

    virtual void display() {
        std::cout << "Species: " << species << std::endl;
    }

    virtual void fly() {
        std::cout << "This bird can fly." << std::endl;
    }

    virtual void swim() {
        std::cout << "This bird can swim." << std::endl;
    }

    virtual void cry() = 0;

    virtual ~Bird() {
        std::cout << species << " has died" << std::endl;
     }
};

class Duck: public Bird{
public:
    /* FIXME */
    Duck();
    ~Duck();
    void cry();
};

class Penguin: public Bird{
public:
    /* FIXME */
    Penguin();
    ~Penguin();
    void cry();
    void fly();
};

class Eagle: public Bird{
public:
    /* FIXME */
    Eagle();
    ~Eagle();
    void cry();
    void swim();
};
