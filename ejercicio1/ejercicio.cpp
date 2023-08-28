#include <iostream>
#include <list>

using namespace std;

int main() {

    list<int> lista1 = {1, 2, 3, 4, 5};
    list<int> lista2 = {6, 7, 8, 9, 10};
    list<int> lista3 = {11, 12, 13, 14, 15};


    cout << "lista 1:" << endl;
    for (int elemento : lista1) {
        cout << elemento << endl;
    }
    cout << endl;
    //tuve que usar un copilador online, no pude ejecutarlo en windows :(
    cout << "lista 2:" << endl;
    for (int elemento : lista2) {
        cout << elemento << endl;
    }
    cout << endl;

    cout << "lista 3:" << endl;
    for (int elemento : lista3) {
        cout << elemento << endl;
    }
    cout << endl;

    return 0;
}
