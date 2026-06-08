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


};

int main()
{
    
    
}