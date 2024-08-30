
#include <iostream>
using namespace std;

int main()
{

    // for min value
    int arr[5] = {3, 5, 12, 45, 56};
    int ans = INT16_MAX;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < ans)
        {
            ans = arr[i];
        }
    }

    cout << ans << endl;

    // for max value

    ans = INT16_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > ans)
        {
            ans = arr[i];
        }
    }
    cout << ans << endl;

    return 0;
}
