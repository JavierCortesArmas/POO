#include <bits/stdc++.h>

using namespace std;

//"ENCAPSULAMIENTO"
// Clase base Animal
class Animal {
private:
    string nombre;
    int edad;
public:
    Animal(string nombre, int edad) {
        this->nombre = nombre;
        this->edad = edad;
    }
    string getNombre() const {
        return nombre;
    }
    int getEdad() const {
        return edad;
    }
    virtual void hacerSonido() const = 0;
};

// Clase derivada Perro
class Perro : public Animal {
public:
    Perro(string nombre, int edad) : Animal(nombre, edad) {}
    void hacerSonido() const override {
        cout << "Guau!" << endl;
    }
};

// Clase derivada Gato
class Gato : public Animal {
public:
    Gato(string nombre, int edad) : Animal(nombre, edad) {}
    void hacerSonido() const override {
        cout << "Miau!" << endl;
    }
};

int main() {
    Animal* animal1 = new Perro("Fido", 3);
    Animal* animal2 = new Gato("Pelusa", 2);

    cout << animal1->getNombre() << " tiene " << animal1->getEdad() << " años." << endl;
    cout << animal2->getNombre() << " tiene " << animal2->getEdad() << " años." << endl;

    animal1->hacerSonido();
    animal2->hacerSonido();

    delete animal1;
    delete animal2;

    return 0;
}
