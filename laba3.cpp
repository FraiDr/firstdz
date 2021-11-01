#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
char alphabet[26] = { 'a','b', 'c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

int main()
{
    cout << "Input size of  massuv ";
    int N; cin >> N;
    cout << "Input massuv" << endl;
    int i, j,inA; char* A = new char[N];
    printf_s("%s", "[\n");
    for (i = 0; i < N; i++)
    {
        
        cin >> A[i];
        
    }
    printf_s("%s", "]");
    int M;
    M = N + 1;
    
    for (j = 0; j < M; j++)
    {
        inA = 0;
        for (i = 0; i < N; i++)
            if (alphabet[j] == A[i])
            {
                inA = 1;
                break;
            }
            if (inA == 0)
            {
                cout <<"missing letter ->" << alphabet[j] << endl;
            }
    }
    return 0;
}


