#include <iostream>
#include <vector>
using namespace std;

class Alumno {
public:
  string nombre;
  float nota1, nota2, nota3;

  Alumno(string nombre, float nota1, float nota2, float nota3) {
    this->nombre = nombre;
    this->nota1 = nota1;
    this->nota2 = nota2;
    this->nota3 = nota3;
  }
};

int main() {
  vector<Alumno> alumnos;
  int n;
  cout << "Ingrese la cantidad de alumnos: ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    string nombre;
    float nota1, nota2, nota3;
    cout << "\nIngrese el nombre del alumno " << i + 1 << ": ";
    cin >> nombre;
    cout << "Ingrese la nota 1: ";
    cin >> nota1;
    cout << "Ingrese la nota 2: ";
    cin >> nota2;
    cout << "Ingrese la nota 3: ";
    cin >> nota3;

    alumnos.push_back(Alumno(nombre, nota1, nota2, nota3));
  }

  cout << "\nDatos de los alumnos:\n";
  for (int i = 0; i < alumnos.size(); i++) {
    cout << "Alumno " << i + 1 << ": " << alumnos[i].nombre << endl;
    cout << "Nota 1: " << alumnos[i].nota1 << endl;
    cout << "Nota 2: " << alumnos[i].nota2 << endl;
    cout << "Nota 3: " << alumnos[i].nota3 << endl;
    cout << endl;
  }

  return 0;
}