#include <iostream>
using namespace std;

int linearSearch(int arr[], int key)
{
    for (int i = 0; i <= 5; i++)
    {
        if (arr[i] == key)
        {
            return i;
            break;
        }
    }
    return -1;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int key = 3;
    cout << linearSearch(arr, key);
    return 0;
}