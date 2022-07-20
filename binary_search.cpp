#include <iostream>
using namespace std;
int b_search(int a[], int i, int j, int key)
{
    int mid;
    while (i <= j)
    {
        mid = i + (j - i) / 2;
        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] > key)
        {
            return b_search(a, i, mid - 1, key);
        }
        else
        {
            return b_search(a, mid + 1, j, key);
        }
    }
}
int main()
{
    int a[100], n, i, key;
    cout << "Enter the size of array : ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the number to be found : ";
    cin >> key;
    cout << "Number is found at : " << b_search(a, 0, n, key);
}