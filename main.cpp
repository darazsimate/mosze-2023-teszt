#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; // N_ELEMENTS
    std::cout << "1-100 ertekek duplazasa" << std::endl; // << std::endl hiányzik,  " " ;
    for (int i = 0; i < N_ELEMENTS; i++)  // ciklus feltétel hiányos
    {
        b[i] = i * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++) // ciklus feltétel hibás
    {
        std::cout << "Ertek:"; // pontos vessző + érték kiíratása
        std::cout << b[i] << std::endl;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS; i++) // ; helyett , 
    {
        atlag += b[i]; // pontos vessző hiányzik
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    std::cout << "Szia Máté!";

    return 0;
}
