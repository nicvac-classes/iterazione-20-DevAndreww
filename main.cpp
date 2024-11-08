#include <iostream>
using namespace std;

int main()
{
    int mattoncini, altezza, mattonciniNecessari;

    altezza = 0;

    mattonciniNecessari = 0;

    cout << "Quanti sono i mattoncini?" << endl;

    cin >> mattoncini;

    while(mattoncini>=mattonciniNecessari+(altezza+1))
    {
        altezza = altezza+1;

        mattonciniNecessari = mattonciniNecessari+altezza;
    }
   
    cout << "L'altezza della piramide è di " << altezza << " piani."
   
}