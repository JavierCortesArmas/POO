#include <bits/stdc++.h>

using namespace std;

//"HERENCIA"
class Animal {
public:
    virtual void hacerSonido() = 0;
};
//Animal de herencia Perro
class Perro : public Animal {
public:
    void hacerSonido() override {
        cout << "Guau!" << endl;
    }
};
//Animal de herencia Gato
class Gato : public Animal {
public:
    void hacerSonido() override {
        cout << "Miau!" << endl;
    }
};

int main() {
    Animal* animal1 = new Perro();
    Animal* animal2 = new Gato();

    animal1->hacerSonido();
    animal2->hacerSonido();
    return 0;
}
