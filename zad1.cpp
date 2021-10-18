//Napisz program który bedzie sprawdzał czy wprowadzona liczba jest podzielna przez 3 i 5, 
//jezeli bedzie podzielna to oblicz jej pierwiastek
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    cout<<"Program obliczajacy pierwiastek liczb podzielnych przez 3 i 5\n\n";

    //definicja zmiennej przechowujacej liczby calkowite a
    int a;

    //zebranie wartosci od uzytkownika
    cout<<"Podaj liczbe: ";
    cin>>a;

    //sprawdzenie czy liczba jest podzielna przez 3 i 5
    if(a%3 == 0 && a%5 == 0){
        //zwrocenie pierwiastka liczby jesli jest podzielna
        cout<<"Pierwiastek tej liczby to "<<(double)(sqrt(a));
    }else{
        //odmowa obliczenia pierwiastka gdy liczba nie spelnia warunku
        cout<<"Liczba nie spelnia warunkow, nie obliczam pierwiastka";
    }

    return 0;
}