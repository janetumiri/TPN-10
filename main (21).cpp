#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Libro {
public:
    string titulo;
    string autor;
    int año;

    Libro(string titulo, string autor, int año) {
        this->titulo = titulo;
        this->autor = autor;
        this->año = año;
    }
};

bool compararLibros(const Libro& libro1, const Libro& libro2) {
    return libro1.año < libro2.año;
}

int main() {
    vector<Libro> libros;

    int cantidadLibros;
    cout << "Ingrese la cantidad de libros: ";
    cin >> cantidadLibros;

    for (int i = 0; i < cantidadLibros; i++) {
        string titulo, autor;
        int año;

        cout << "\nIngrese los datos del libro " << i + 1 << ":" << endl;
        cout << "Título: ";
        cin.ignore(); 
        getline(cin, titulo);
        cout << "Autor: ";
        getline(cin, autor);
        cout << "Año de publicación: ";
        cin >> año;

        libros.push_back(Libro(titulo, autor, año));
    }

    sort(libros.begin(), libros.end(), compararLibros);

    cout << "\nLibros ordenados por año de publicación:" << endl;
    for (const Libro& libro : libros) {
        cout << "Título: " << libro.titulo << endl;
        cout << "Autor: " << libro.autor << endl;
        cout << "Año: " << libro.año << endl << endl;
    }

    return 0;
}
