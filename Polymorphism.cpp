#include <iostream>

using namespace std;

// base class
class Animal {
public:
    virtual void SesCikar() {
        cout << "Hayvan sesi cikar" << endl;
    }
};


//child class
class Cat : public Animal {
public:
    void SesCikar() override {
        cout << "MiyavMiyav" << endl;
    }
};


//child class
class Dog : public Animal {
public:
    void SesCikar() override {
        cout << "HavHav" << endl;
    }
};

int main() {
    Animal* animals[2];
    animals[0] = new Cat();
    animals[1] = new Dog();

    for (int i = 0; i < 2; i++) {
        animals[i]->SesCikar(); 
    }

   
    for (int i = 0; i < 2; i++) {
        delete animals[i];
    }

    return 0;
}
