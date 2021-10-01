/**
 * Maximum Subarray Sum using Divide and Conquer approach.
 * 
 * Time Complexity: T(n) = 2T(n/2) + Θ(n) => O(nLog(n))
 */

#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

struct sub_arr
{
    int start, end;
    int sum = 0;
};

sub_arr FindMaxSub(int[], int, int);
sub_arr FindMaxCrossing(int[], int, int, int);

int main(int argc, char const *argv[])
{
    const int kSize = 16;
    int numbers[] = {13, -3, -25, 20, -3, -16, -23, 18, 20, -7, 12, -5, -22, 15, -4, 7};
    sub_arr s = FindMaxSub(numbers, 0, kSize - 1);
    cout << "Start: " << s.start << endl;
    cout << "End: " << s.end << endl;
    cout << "Sum: " << s.sum << endl;
    return 0;
}

sub_arr FindMaxSub(int arr[], int start, int end)
{
    if (start == end)
    {
        return {start, end, arr[start]};
    }
    else
    {
        int mid = floor((start + end) / 2);
        sub_arr s_left = FindMaxSub(arr, start, mid);
        sub_arr s_right = FindMaxSub(arr, mid + 1, end);
        sub_arr s_x = FindMaxCrossing(arr, start, mid, end);

        if (s_left.sum >= s_right.sum && s_left.sum >= s_x.sum)
        {
            return s_left;
        }
        else if (s_right.sum >= s_left.sum && s_right.sum >= s_x.sum)
        {
            return s_right;
        }
        else
        {
            return s_x;
        }
    }
}

sub_arr FindMaxCrossing(int arr[], int start, int mid, int end)
{
    sub_arr a;
    int sum = 0,
        left_sum = INT_MIN,
        right_sum = INT_MIN;
    for (int i = mid; i >= start; i--)
    {
        sum += arr[i];
        if (sum > left_sum)
        {
            left_sum = sum;
            a.start = i;
        }
    }

    sum = 0;
    for (int i = mid + 1; i <= end; i++)
    {
        sum += arr[i];
        if (sum > right_sum)
        {
            right_sum = sum;
            a.end = i;
        }
    }

    a.sum = right_sum + left_sum;
    return a;
}
