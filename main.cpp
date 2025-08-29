#include <Foco.hpp>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    Foco foquito;
    foquito.Apagar();
    foquito.Encender();
    cout << foquito.MostrarEstado() << endl;

    Foco foco2;
    foco2.Encender();
    cout << foco2.MostrarEstado() << endl;

    return 0;
}
