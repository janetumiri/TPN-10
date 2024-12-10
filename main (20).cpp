#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Empleado {
public:
  string nombre;
  float salario;
  string departamento;

  Empleado(string nombre, float salario, string departamento) {
    this->nombre = nombre;
    this->salario = salario;
    this->departamento = departamento;
  }
};

bool compareBySalario(const Empleado &e1, const Empleado &e2) {
  return e1.salario > e2.salario;
}

int main() {
  vector<Empleado> empleados;
  int n;
  cout << "Ingrese la cantidad de empleados: ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    string nombre, departamento;
    float salario;
    cout << "\nIngrese el nombre del empleado " << i + 1 << ": ";
    cin >> nombre;
    cout << "Ingrese el salario: ";
    cin >> salario;
    cout << "Ingrese el departamento: ";
    cin >> departamento;

    empleados.push_back(Empleado(nombre, salario, departamento));
  }

  sort(empleados.begin(), empleados.end(), compareBySalario);

  cout << "\nDatos de los empleados ordenados por salario:\n";
  for (int i = 0; i < empleados.size(); i++) {
    cout << "Empleado " << i + 1 << ": " << endl;
    cout << "Nombre: " << empleados[i].nombre << endl;
    cout << "Salario: " << empleados[i].salario << endl;
    cout << "Departamento: " << empleados[i].departamento << endl;
    cout << endl;
  }

  return 0;
}