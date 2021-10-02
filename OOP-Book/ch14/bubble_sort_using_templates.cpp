#include <iostream>
#include "bubble_sort_temp.h"

using namespace std;

int main(int argc, char const *argv[])
{
    const int kSize = 5;
    int arr1[] = {12, 19, 13, 20, 33};
    float arr2[] = {12.2, 19.4, 12.1, 13.5, 20};

    BubbleSort(arr1, kSize);
    BubbleSort(arr2, kSize);

    return 0;
}

template <class Numeric>
void BubbleSort(Numeric *arr, int SIZE)
{

    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = i + 1; j < SIZE; j++)
        {
            Swap(arr + i, arr + j);
        }
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

template <class Numeric>
void Swap(Numeric *pA, Numeric *pB)
{
    if (*pA > *pB)
    {
        Numeric temp = *pB;
        *pB = *pA;
        *pA = temp;
    }
}
