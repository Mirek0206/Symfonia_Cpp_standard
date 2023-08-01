#include <iostream>

int main()
{
    int ile;

    std::cout << "Ile gwiazzdek ma miec kapitan? : ";
    std::cin >> ile;
    std::cout << "\n No to narysujmy wszystkie " << ile << " : ";

    // pętla while rysująca gwiazdki
    while(ile)
    {
        std::cout << "*";
        ile = ile - 1;
    }
    // na dowód, że miał prawo przerwać pętlę
    std::cout << "\n Teraz zmienna 'ile' ma wartosc " << ile;
}