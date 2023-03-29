#include <bits/stdc++.h>

using namespace std;

//"POLIMORFISMO"
#include <iostream>
using namespace std;

// Clase base abstracta Animal
class Animal {
public:
    // Método virtual puro que será implementado en las clases derivadas
    virtual void hacerSonido() = 0;
};

// Clase derivada Perro
class Perro : public Animal {
public:
    void hacerSonido() override {
        cout << "Guau!" << endl;
    }
};

// Clase derivada Gato
class Gato : public Animal {
public:
    void hacerSonido() override {
        cout << "Miau!" << endl;
    }
};

int main() {
    // Creamos dos objetos tipo Animal que apuntan a objetos de las clases derivadas
    Animal* animal1 = new Perro();
    Animal* animal2 = new Gato();

    // Llamamos al método hacerSonido() de cada objeto tipo Animal
    animal1->hacerSonido(); // Polimorfismo en acción, este llama al método hacerSonido() de la clase Perro
    animal2->hacerSonido(); // Polimorfismo en acción, este llama al método hacerSonido() de la clase Gato

    // Liberamos la memoria reservada con new
    delete animal1;
    delete animal2;
    return 0;
}
