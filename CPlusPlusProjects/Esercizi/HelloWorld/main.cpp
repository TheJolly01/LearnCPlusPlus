/*
 * Il primo programma di esempio:
 * Hello World!
 * */

#include <iostream>

//definizione classe Greater
class Greater{

public:
    static void sayHello(){
        std::cout<<"Hello World!"<<std::endl;
    }
};
int main(){
    Greater g;
    g.sayHello();
    return 0;
}

