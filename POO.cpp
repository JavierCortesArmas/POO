#include <bits/stdc++.h>

using namespace std;

class Animal {
    private:
    int edad;
    string nombre;

    public:
    void setNombre(string nombre) {
        this->nombre = nombre;
    }
    string getNombre() {
        return nombre;
    }

    void setEdad(int edad) {
        this->edad = edad;
    }
    int getEdad() {
        return edad;
    }

    virtual void sonido() = 0;
};

class Gato : public Animal {
    public:
    void sonido() {
        cout << "Miauu!" << endl;
    }
};

class Perro : public Animal {
    public:
    void sonido() {
        cout << "Guaa!" << endl;
    }
};

int main() {
    Animal* animal1 = new Gato();
    Animal* animal2 = new Perro();

    animal1->sonido();
    animal1->setNombre("Peluso");
    animal1->setEdad(2);
    cout << "El Gato se llama " << animal1->getNombre() << " y tiene de edad "<< animal1->getEdad() << " años"<< endl;

    animal2->sonido();
    animal2->setNombre("Duke");
    animal2->setEdad(4);
    cout << "El perro se llama " << animal2->getNombre() << " y tiene de edad "<< animal2->getEdad() << " años"<< endl;
    return 0;
}
