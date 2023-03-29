#include <bits/stdc++.h>

using namespace std;

//"ABSTRACCION"
// Clase abstracta Animal
class Animal {
public:
    virtual void hacerSonido() = 0; // Método virtual puro
};

// Clase Perro que hereda de Animal
class Perro : public Animal {
public:
    void hacerSonido() override {
        cout << "Guau!" << endl;
    }
};

// Clase Gato que hereda de Animal
class Gato : public Animal {
public:
    void hacerSonido() override {
        cout << "Miau!" << endl;
    }
};

int main() {
    Animal* animal1 = new Perro(); // Creación de objeto Perro como Animal
    Animal* animal2 = new Gato();  // Creación de objeto Gato como Animal

    animal1->hacerSonido(); // Llamado al método hacerSonido de Perro
    animal2->hacerSonido(); // Llamado al método hacerSonido de Gato

    delete animal1; // Liberar memoria asignada dinámicamente
    delete animal2;

    return 0;
}
