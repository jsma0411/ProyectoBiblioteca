#include <iostream>
#include <string>

using namespace std;

class Libro
{

    private:
    string titulo;
    string autor;
    int anio;

    public:
        Libro()
        {
            titulo = "";
            autor = "";
            anio = 0;
        }
        
        Libro(string t, string a, int an)
        {
            titulo = t;
            autor = a;
            anio = an;
        }

        void mostrarInformacion()
        {
            cout << "Titulo: " << titulo << endl;
            cout << "Autor: " << autor << endl;
            cout << "Año: " << anio << endl;
        }

     

};

class Biblioteca{

    private:
    Libro libros[100];
    int cantidadLibros;

public:

    Biblioteca()
    {
        cantidadLibros = 0;
    }

   
    void agregarLibro(Libro libro)
    {
        if(cantidadLibros < 100)
        {
            libros[cantidadLibros] = libro;
            cantidadLibros++;
        }
        else
        {
            cout << "La biblioteca esta llena." << endl;
        }
    }

    
    void mostrarLibros()
    {
        if(cantidadLibros == 0)
        {
            cout << "\nNo hay libros registrados.\n";
            return;
        }

        for(int i = 0; i < cantidadLibros; i++)
        {
            cout << "\nLibro #" << i + 1 << endl;
            libros[i].mostrarInformacion();
        }
    }

    
    int contarLibros()
    {
        return cantidadLibros;
    }

};

int main()
{
    
    Biblioteca biblioteca;
    int opcion;
    
}