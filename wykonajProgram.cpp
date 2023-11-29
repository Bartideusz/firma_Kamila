void wykonajProgram() {
    float w_sprzedazy, w_zaliczki, premia, wynagrodzenie;

    cout << "Podaj miesieczna wartosc sprzedazy: ";
    cin >> w_sprzedazy;
    cout << "Podaj zaliczke: ";
    cin >> w_zaliczki;

    premia = wysokoscPremii(w_sprzedazy);

    wynagrodzenie = obliczWynagrodzenie(w_sprzedazy, w_zaliczki, premia);

    if (wynagrodzenie < 0) {
        cout << "Pracownik musi zwrocic pieniadze firmie" << endl;
    } else {
        cout << "Wynagrodzenie: " << wynagrodzenie << endl;
    }
}