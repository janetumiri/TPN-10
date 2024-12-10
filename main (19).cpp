#include <iostream>
#include <vector>
using namespace std;

class CuentaBancaria {
public:
  int numeroCuenta;
  string nombreTitular;
  float saldo;

  CuentaBancaria(int numeroCuenta, string nombreTitular, float saldo) {
    this->numeroCuenta = numeroCuenta;
    this->nombreTitular = nombreTitular;
    this->saldo = saldo;
  }

  void depositar(float monto) {
    saldo += monto;
    cout << "Depósito realizado. Nuevo saldo: " << saldo << endl;
  }

  void retirar(float monto) {
    if (saldo >= monto) {
      saldo -= monto;
      cout << "Retiro realizado. Nuevo saldo: " << saldo << endl;
    } else {
      cout << "Saldo insuficiente." << endl;
    }
  }
};

int main() {
  vector<CuentaBancaria> cuentas;
  int n;
  cout << "Ingrese la cantidad de cuentas bancarias: ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    int numeroCuenta;
    string nombreTitular;
    float saldo;
    cout << "\nIngrese el número de cuenta " << i + 1 << ": ";
    cin >> numeroCuenta;
    cout << "Ingrese el nombre del titular: ";
    cin >> nombreTitular;
    cout << "Ingrese el saldo inicial: ";
    cin >> saldo;

    cuentas.push_back(CuentaBancaria(numeroCuenta, nombreTitular, saldo));
  }

  cout << "\nDatos de las cuentas bancarias:\n";
  for (int i = 0; i < cuentas.size(); i++) {
    cout << "Cuenta " << i + 1 << ": " << endl;
    cout << "Número de cuenta: " << cuentas[i].numeroCuenta << endl;
    cout << "Nombre del titular: " << cuentas[i].nombreTitular << endl;
    cout << "Saldo: " << cuentas[i].saldo << endl;
    cout << endl;
  }

  int opcion, cuentaIndex;
  float monto;
  while (true) {
    cout << "\nSeleccione una opción:\n";
    cout << "1. Depositar\n";
    cout << "2. Retirar\n";
    cout << "3. Salir\n";
    cout << "Opción: ";
    cin >> opcion;

    if (opcion == 3) {
      break;
    }

    cout << "Ingrese el índice de la cuenta (1 - " << cuentas.size() << "): ";
    cin >> cuentaIndex;
    cuentaIndex--; // Adjust index for vector

    if (cuentaIndex < 0 || cuentaIndex >= cuentas.size()) {
      cout << "Índice de cuenta inválido." << endl;
      continue;
    }

    cout << "Ingrese el monto: ";
    cin >> monto;

    if (opcion == 1) {
      cuentas[cuentaIndex].depositar(monto);
    } else if (opcion == 2) {
      cuentas[cuentaIndex].retirar(monto);
    }
  }

  return 0;
}