#include <iostream>

int main()
{
    std::cout << "Stewardzie, ilu leci pasazerow ? ";

    int ile;
    std::cin >> ile;

    int i;
    for ( i = 1; i <= ile; i = i + 1 )
    {
        std::cout << "Pasazer nr " << i << " prosze zapiac pasy ! \n";
    }

    std::cout << "Skoro wszyscy juz apieli, to ladujemy. ";
}