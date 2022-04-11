#include <bits/stdc++.h>
using namespace std;
int del(int arr[], int n)
{
    int k = 0;
    int p = 0;
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        while (i < n - 1 && arr[i] == arr[i + 1])
            i++;
        p += arr[i];
        k++;
    }
    float f = p / k;
    int count = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] > f)
            count++;
    }
    if (count != 0)
    {
        count += del(arr, n - count);
        return count;
    }
    else
        return 0;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++)
            cin >> arr[j];
        int c = 0;
        c = del(arr, n);
        cout << c << endl;
    }
    return 0;
}