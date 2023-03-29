#include <iostream>

int main() {
    // definizione e utilizzo lungo di un puntatore
    int *puntatore1 = new int;
    delete puntatore1;

    // definizione e utilizzo abbreviati di un puntatore
    int *puntatore2 = new int;

    // definizione puntatore inizializzato come nullptr
    int *puntatore3 = nullptr;
    puntatore3 = new int;

    std::cout<<"Indirizzo puntatore1: "<<puntatore1<<std::endl;
    std::cout<<"Indirizzo puntatore2: "<<puntatore2<<std::endl;
    std::cout<<"Indirizzo puntatore3: "<<puntatore3<<std::endl;

    //-------------------------------------------------------

    //operatori di referenziazione e deferenziazione

    //referenziazione

    int a = 100;
    int *ptr1 = &a;
    std::cout<<"Numero: "<<a<<" Puntatore referenziato: "<<*ptr1<< std::endl;

    //dereferenziazione
    int b = *ptr1;
    std::cout<<"Numero: "<<b<<" Puntatore da cui viene preso il valore: "<<*ptr1<<std::endl;


    return 0;


}
