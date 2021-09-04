//Kick Start 2020 Round D :
//https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ff08/0000000000387171
//Done in 1st Attempt

#include <iostream>
// #include <bits/stdc++.h>
// this header won't get accepted
using namespace std;

int recordBreaker(int arr[], int n)
{

    if (n == 1)
        return 1;

    int days = 0;
    int leftMax = -1; // Or use <limits. h> for putting INT_MIN instead of 1

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1] && arr[i] > leftMax)
        {
            days++;
        }
        leftMax = max(leftMax, arr[i]);
    }

    if (arr[n - 1] > leftMax)
        days++;

    return days;
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