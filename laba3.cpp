#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
char alphabet[26] = { 'a','b', 'c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };

int main()
{
    cout << "Input size of  massuv ";
    int size_of_massuv; cin >> size_of_massuv;
    cout << "Input massuv" << endl;
    int comparison_of_arrays;
    char* my_array = new char[size_of_massuv];
    printf_s("%s", "[\n");
    for (int i = 0; i < size_of_massuv; i++)
    {

        cin >> my_array[i];

    }
    printf_s("%s", "]");
    int part_of_alphabet;
    part_of_alphabet = size_of_massuv + 1;

    for (int j = 0; j < part_of_alphabet; j++)
    {
        comparison_of_arrays = 0;
        for (int i = 0; i < size_of_massuv; i++)
            if (alphabet[j] == my_array[i])
            {
                comparison_of_arrays = 1;
                break;
            }
        if (comparison_of_arrays == 0)
        {
            cout << "missing letter ->" << alphabet[j] << endl;
        }
    }
    return 0;
}


