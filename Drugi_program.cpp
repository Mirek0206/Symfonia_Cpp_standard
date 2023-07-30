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
