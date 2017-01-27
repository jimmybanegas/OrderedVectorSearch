
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

#include "Test.h"
#include <iostream>
using namespace std;

bool numberExists(vector<int> numbers,int x, int inicio, int fin)
{
    //int mitad = inicio + (final-inicio)/2;
    /*cout<< inicio<< endl;
    cout<< fin<< endl;
     cout<<"\n" << endl; */


    int mitad = (inicio + fin)/2;
    int b = numbers[mitad];

    if(inicio > fin)
        return false;

    if(b == x)
        return true;

    if(b < x)
    {
        return numberExists(numbers,x, mitad+1, fin);

    }else {
        return numberExists(numbers, x,0, mitad - 1);
    }

    return false;
}

bool numberExists(vector<int> ordered_numbers, int x)
{
    return numberExists(ordered_numbers,x,0,ordered_numbers.size()-1);
}

int main ()
{
    test();

    return 0;
}
