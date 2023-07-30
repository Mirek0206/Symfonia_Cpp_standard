/* --------------------------------------------
 * program na przleiczanie wysokosci podanej
 * w stopach na wysokosc w metrach.
 * Cwiczymy tu operacje wczytywania z klawiatury
 * i wypisywania na ekranie.
 ---------------------------------------------*/
#include <iostream>

int main(void)
{
    int stopy;
    double metry;
    double przelicznik = 0.3;

    std::cout << "Podaj wysokosc w stopach: ";
    std::cin >> stopy;

    metry = stopy * przelicznik;

    std::cout << "\n";

    // ----wypisanie wynikow----
    std::cout << stopy << " stop - to jest: " << metry << " metrow\n";
}
