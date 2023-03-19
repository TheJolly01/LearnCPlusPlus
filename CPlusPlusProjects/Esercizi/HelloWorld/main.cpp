/*
 * Il primo programma di esempio:
 * Hello World!
 * */

#include <iostream> //libreria per input output

//definizione classe Greater
class Greater{

public: //metodo pubblico
    static void sayHello(){
        std::cout<<"Hello World!"<<std::endl; //stampa frase
    }
};
int main(){ //metodo principale 
    Greater g; //crea oggetto g di tipo Greater
    g.sayHello(); //usa metodo sayHello di g
    return 0; //restituisci 0 per chiudere il programma
}

