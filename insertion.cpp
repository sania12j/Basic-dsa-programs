#include <iostream>
using namespace std;

int arr;

int insertSorted(int arr[], int size, int key, int capacity)
{
    if (size >= capacity)
        return size;
    arr[size] = key;
    return (size + 1);
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6};
    int capacity = 10;
    int size = 6;
    int i, key = 25;

    cout << "\n Before insertion: ";
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";

    size = insertSorted(arr, size, key, capacity);
    
    cout << "\n After insertion:";
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}