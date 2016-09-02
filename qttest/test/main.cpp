#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int number = 5;
    int* address = &number; // Pointer
    cout << "Number:" << (long)number << endl;
    cout << "Address:" << (long)address << endl;

    *address = 10.4;
    cout << "number:" << (long)number << endl;
    cout << "number:" << (long)address << endl;
    return 0;
}
