#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Function for binary search only applicable in sorted array
int Binary search(int arr[], int low, int mid, int high, int key);
{
    if (high < low)
        return -1;


    int mid = (low + high / 2) 
    
    if (key == arr[mid])
    {
        return mid;
    }

    
    if (key > arr[mid])
    {
        return binary search(arr, [mid + 1], high, key)
    }
    else
    {
        return binary search(arr, low, [mid - 1], key);
    }
}