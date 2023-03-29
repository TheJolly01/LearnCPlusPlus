#include <iostream>

int main() {





    std::cout << "Enumerazioni normali" << std::endl;
    enum Enumerazione{mela, pera = 10, banana = 22, ananas};
    std::cout << mela << std::endl;
    std::cout << pera << std::endl;
    std::cout << banana << std::endl;
    std::cout << ananas << std::endl;
    std::cout << "Assegnazione enumeratore a variabile e stampa variabile" << std::endl;
    int x = pera;
    std::cout << x << std::endl;

    std::cout << "Enumerazioni con tipo char" << std::endl;
    enum EnumerazioneChar : char {ciao = 97, addio = 'c', arrivederci};
    std::cout << ciao << std::endl;
    std::cout << addio << std::endl;
    std::cout << arrivederci << std::endl;

    std::cout << "Enumerazioni con campo di visibilita" << std::endl;

    enum class EnumNascosta : int{mela, pera = 100, ciao, arrivederci = 2};
    std::cout << (int) EnumNascosta::mela << std::endl;
    std::cout << (int) EnumNascosta::pera << std::endl;
    std::cout << (int) EnumNascosta::ciao << std::endl;
    std::cout << (int) EnumNascosta::arrivederci << std::endl;

    std::cout << "Assegnazione enumeratore a variabile e stampa variabile" << std::endl;
    int y = (int) EnumNascosta::ciao;
    std::cout << y << std::endl;

    std::cout << "Assegnazione enumeratore a variabile di tipo enum" << std::endl;
    enum class forma{ quadrato, cerchio, triangolo};
    forma f1 = forma::cerchio;
    std::cout<< (int) f1 <<std::endl;

    std::cout << "Conversione implicita da enumeratori a variabili di tipo numerico" << std::endl;
    enum colore {rosso, verde, blu = 10};
    int c1 = rosso; // ok, 'colore' non è una enum class
    //colore c2 = 2; // errore: la conversione implicita non è bidirezionale!
    colore c3 = (colore) 3; // ok
    std::cout<< c3 <<std::endl;

    return 0;
}
