//Napisz program wyznaczajacy najmniejsza z trzech liczb podanych przez uzytkownika
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    cout<<"Program znajdujacy najmniejsza podana wartosc\n\n";

    //definicja trzyelementowej tablicy liczb calkowitych
    int arr[3];

    //zebranie wartosci od uzytkownika
    cout<<"Podaj trzy wartosci: \n";
    cin>>arr[0]>>arr[1]>>arr[2];
    
    //posortowanie tabeli w kolejnosci rosnacej
    sort(arr,arr+3);

    //zwrocenie pierwszej (po posortowaniu najmniejszej) liczby z podanych
    cout<<"Najmniejsza wartosc to "<<arr[0];

    return 0;
}