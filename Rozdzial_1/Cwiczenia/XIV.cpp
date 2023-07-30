/* -------------------------------------------------------
 *  Napisz program pozwalający przleiczyć
 *  cale na centymetry (1 cal = 2.54 centymetra)
 ------------------------------------------------------- */
#include <iostream>

#define PRZELICZNIK 2.54F

int main(void)
{
       double cale;
       double centymetry;

       std::cout << "Podaj dlugosc w calach: ";
       std::cin >> cale;

       std::cout << cale << " cali - to jest: " << PRZELICZNIK * cale << " centymetrow.";
}