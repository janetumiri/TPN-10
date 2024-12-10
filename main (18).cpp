#include <iostream>
#include <vector>
using namespace std;

class Rectangulo {
public:
  float base, altura;

  Rectangulo(float base, float altura) {
    this->base = base;
    this->altura = altura;
  }

  float area() {
    return base * altura;
  }

  float perimetro() {
    return 2 * (base + altura);
  }
};

int main() {
  vector<Rectangulo> rectangulos;
  int n;
  cout << "Ingrese la cantidad de rectángulos: ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    float base, altura;
    cout << "\nIngrese la base del rectángulo " << i + 1 << ": ";
    cin >> base;
    cout << "Ingrese la altura: ";
    cin >> altura;

    rectangulos.push_back(Rectangulo(base, altura));
  }

  cout << "\nDatos de los rectángulos:\n";
  for (int i = 0; i < rectangulos.size(); i++) {
    cout << "Rectángulo " << i + 1 << ": " << endl;
    cout << "Base: " << rectangulos[i].base << endl;
    cout << "Altura: " << rectangulos[i].altura << endl;
    cout << "Área: " << rectangulos[i].area() << endl;
    cout << "Perímetro: " << rectangulos[i].perimetro() << endl;
    cout << endl;
  }

  return 0;
}