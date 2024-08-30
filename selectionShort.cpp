#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {4, 2, 5, 1, 7, 8};
    // for rotate
    for (int i = 0; i < 5; i++)
    {
        int index = i;
        // for index 1
        for (int j = i + 1; j < 6; j++)
        {
            if (arr[j] < arr[index])
                index = j;
        }
        swap(arr[i], arr[index]);
    }
    // for array printing
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}