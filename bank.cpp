#include <iostream>

using namespace std;
int pieniadze;
string login, PIN;
int main() {
    cout << "Kubobank: wpisz login" << endl;
    cin >> login;
    cout << "Podaj numer PIN:";
    cin >> PIN;
    if(PIN=="1992")
    {
        cout << "Poprawny PIN";
        cout << "\n" << "podaj ile pieniedzy chcesz wyplacic:";
        cin >> pieniadze;
        cout << "\n" << "zostanie ci wyplacone:" << pieniadze << ",00" << "PLN";
        cout << "\n" << "zabierz karte z bankomatu";
    }
    else
    {
        cout <<"zly kod PIN";
        cout << "\n" << "sproboj ponownie:";
        cin >> PIN;
        if(PIN=="1992")
        {
            cout << "Poprawny PIN";
            cout << "\n" << "podaj ile pieniedzy chcesz wyplacic:";
            cin >> pieniadze;
            cout << "\n" << "zostanie ci wyplacone:" << pieniadze << ",00" << "PLN";
            cout << "\n" << "zabierz karte z bankomatu";
        }
        else
        {
            cout << "\n" << 'podales drugi raz bledny kod, twoje konto jest zablokowane';
        }


    }
    return 0;
}
