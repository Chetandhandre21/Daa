// A program to find the number of zeros
#include <bits/stdc++.h>
using namespace std;
int zerocount(vector<int> arr)
{
    int len = arr.size();
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == 0)
        {
            count++;
        }
    }
    int one = len - count;
    int flag = false;
    for (int j = 0; j < one; j++)
    {
        if (arr[j] == 1)
        {
            flag = true;
        }

        else
        {
            flag = false;
            cout << "invalid input";
        }
    }
    for (int k = 0; k < count; k++)
    {
        if (arr[k] == 0)
        {
            flag = true;
        }
    }
    if (flag == true)
    {
        cout <<"count of zeros are " <<count;
    }
   
}
int main()
{

    vector<int> arr;
    arr = {0,1};

    zerocount(arr);
}
