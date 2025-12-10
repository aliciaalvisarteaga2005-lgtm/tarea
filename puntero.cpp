#include <iostream> // Para std::cout, std::endl

int main() {
    int variable = 20;   // Una variable entera normal
    int *puntero;        // DECLARACIÓN de un puntero a un entero

    // ASIGNACIÓN: 'puntero' ahora guarda la dirección de 'variable'
    puntero = &variable;

    std::cout << "-- Información de 'variable' --" << std::endl;
    std::cout << "Valor de 'variable': " << variable << std::endl;
    std::cout << "Dirección de 'variable' (&variable): " << &variable << std::endl;

    std::cout << "\n-- Información de 'puntero' --" << std::endl;
    std::cout << "Contenido de 'puntero' (la dirección que guarda): " << puntero << std::endl;
    std::cout << "Dirección donde está guardado el propio 'puntero' (&puntero): " << &puntero << std::endl;

    std::cout << "\n-- Accediendo al valor A TRAVÉS del puntero --" << std::endl;
    std::cout << "Valor al que apunta 'puntero' (*puntero): " << *puntero << std::endl; // DEREFERENCIA

    // Modificando variable A TRAVÉS del puntero
    std::cout << "\nModificando a través del puntero" << std::endl;

    *puntero = 30; // Ve a la dirección que guarda 'puntero' y cambia el valor allí a 30

    std::cout << "Nuevo valor de 'variable' (después de *puntero = 30): " << variable << std::endl;
    std::cout << "Nuevo valor apuntado por 'puntero' (*puntero): " << *puntero << std::endl;
    
        std::cout << "\nNorma Alice isu Arteaga "<< std::endl;

    return 0;
}

