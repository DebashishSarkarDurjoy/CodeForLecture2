#include <iostream>
using namespace std;

template <class Type>
void funcExp(Type list[], int size)
{
    Type x = list[0];
    Type y = list[size - 1];
    for (int j = 1; j < size; j++) {
        if (x < list[j])
            x = list[j];

        if (y > list[size - 1 -j])
            y = list[size - 1 -j];
    }

    cout << x << endl; 
    cout << y << endl;
}

int main() {
    int strList[] = {9,1,5,7,3,7,0,1,9,10};

    funcExp(strList, 10);
}