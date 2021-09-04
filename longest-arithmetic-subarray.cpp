//Kick Start 2020 Round E :
//https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ff47/00000000003bf4ed#problem

#include <iostream>
// #include <bits/stdc++.h>
// this header won't get accepted
using namespace std;

int longestArithmeticSubarray(int arr[], int n)
{

    // if (n == 2)
    //     return n;

    int len = 2;
    int maxLen = 2;
    int diff = arr[1] - arr[0];

    for (int i = 2; i < n; i++)
    {
        if (arr[i] - arr[i - 1] == diff)
        {
            len++;
        }
        else
        {
            diff = arr[i] - arr[i - 1];
            len = 2;
        }

        maxLen = max(len, maxLen);
    }

    return maxLen;
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

        cout << "Case #" << i << ": " << longestArithmeticSubarray(arr, n) << endl;
    }
    return 0;
}