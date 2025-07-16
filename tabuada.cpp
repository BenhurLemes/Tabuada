#include <iostream>

void Tabuada();

int main(int argc, char const *argv[])
{
    Tabuada();
    return 0;
}

void Tabuada(){
    int numero;
    std::cout << "Digite o numero que deseja ver a tabuada: " << "\n";
    std::cin >> numero;
    for (int i = 0; i < 11; i++)
    {
        std::cout<< numero << " x " << i << " = " << numero * i << "\n";
    }
    
}