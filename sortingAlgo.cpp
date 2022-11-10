
// ***** QUICK SORT ******
// ***** MERGE SORT ******

#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
void mergeSort(int[], int, int);
void quickSort(int[], int, int);

int main()
{
    int i;
    int arr[] = {2, 25, 83, 41, 20, 86, 32, 14, 26, 116};
    // mergeSort(arr, 0, 9);
    quickSort(arr, 0, 9);
    fo(i, 10)
    {
        cout << i[arr] << " ";
    }
    cout << endl;
}

void mergeSort(int *arr, int l, int r)
{
    int i;
    if (l >= r)
    {
        return;
    }
    int mid = (l + r) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    int l_sz = mid - l + 1;
    int L[l_sz + 1];    // Left array (size is increased by 1 to add INT_MAX at the end)
    int r_sz = r - mid; // r - (mid + 1) + 1
    int R[r_sz + 1];    // Right array (size is increased by 1 to add INT_MAX at the end)
    for (int i = 0; i < l_sz; ++i)
    {
        L[i] = arr[l + i];
    }
    for (int i = 0; i < r_sz; ++i)
    {
        R[i] = arr[mid + 1 + i];
    }
    L[l_sz] = R[r_sz] = INT_MAX; // INT_MAX is added so that if all the elements of any one of the array are used up then this INT_MAX will be used for remaining comparison
    int l_i = 0;
    int r_i = 0;
    for (int i = l; i <= r; ++i)
    {
        if (L[l_i] < R[r_i])
        {
            arr[i] = L[l_i];
            l_i++;
        }
        else
        {
            arr[i] = R[r_i];
            r_i++;
        }
    }
}

int partition(int arr[], int start, int end)
{
    int pivot_ele = arr[end];
    int i = (start - 1);

    for (int j = start; j <= end - 1; j++)
    {
        if (arr[j] < pivot_ele)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[end]);
    return (i + 1);
}

void quickSort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int pivot = partition(arr, start, end);
    quickSort(arr, start, pivot - 1);
    quickSort(arr, pivot + 1, end);
}