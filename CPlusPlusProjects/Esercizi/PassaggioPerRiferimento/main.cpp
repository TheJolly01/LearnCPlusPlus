#include <iostream>
void swapPointer(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void swapReference(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
int main()
{
    int x = 1;
    int y = 2;
    swapPointer(&x, &y);
    std::cout << "x: " << x;
    std::cout << "y: " << y;
    swapReference(x, y);
    std::cout << "x: " << x;
    std::cout << "y: " << y;
    return 0;
}
