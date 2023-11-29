float obliczPremie(float w_sprzedazy) {
    float premia;
    if (w_sprzedazy < 10000) {
        premia = 0.10;
    } else if (w_sprzedazy >= 10000 && w_sprzedazy <= 14999.99) {
        premia = 0.12;
    } else if (w_sprzedazy >= 15000 && w_sprzedazy <= 17999.99) {
        premia = 0.14;
    } else if (w_sprzedazy >= 18000 && w_sprzedazy <= 21999.99) {
        premia = 0.16;
    } else if (w_sprzedazy >= 22000) {
        premia = 0.12;
    }
    return premia;
}