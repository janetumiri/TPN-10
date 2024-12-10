#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Persona {
public:
  string nombre;
  int edad;

  Persona(string nombre, int edad) {
    this->nombre = nombre;
    this->edad = edad;
  }
};

bool compareByEdad(const Persona &p1, const Persona &p2) {
  return p1.edad < p2.edad;
}

int main() {
  vector<Persona> personas;
  int n;
  cout << "Ingrese la cantidad de personas: ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    string nombre;
    int edad;
    cout << "\nIngrese el nombre de la persona " << i + 1 << ": ";
    cin >> nombre;
    cout << "Ingrese la edad: ";
    cin >> edad;

    personas.push_back(Persona(nombre, edad));
  }

  sort(personas.begin(), personas.end(), compareByEdad);

  cout << "\nDatos de las personas ordenados por edad:\n";
  for (int i = 0; i < personas.size(); i++) {
    cout << "Persona " << i + 1 << ": " << personas[i].nombre << " - " << personas[i].edad << endl;
  }

  return 0;
}