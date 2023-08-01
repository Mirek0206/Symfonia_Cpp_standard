#include <iostream>

int main()
{
    char litera;

    do
    {
        std::cout << "Napisz jakas litere: ";
        std::cin >> litera;
        std::cout << "\n Napisales: " << litera << " \n";
    }while ( litera != 'K');

    std::cout << "\n Skoro napisales K to konczymy !";
}