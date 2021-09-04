//Kick Start 2020 Round E :


#include <iostream>
// #include <bits/stdc++.h>
// this header won't get accepted
using namespace std;

int recordBreaker(int arr[], int n)
{
int days=1;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << "Case #" << i << ": " << recordBreaker(arr, n) << endl;
    }
    return 0;
}