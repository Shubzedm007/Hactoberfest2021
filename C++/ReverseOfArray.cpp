#include <iostream>
#include <algorithm>
using namespace std;
int main() {
   int n;
   cout<<"Enter the size of an array : ";
   cin>>n;
   int arr[n];
   cout<<"Enter the elements of the array : ";
   for (int i = 0; i < n; i++)
   cin>> arr[i];
   cout << "Array before reverse: ";
   for (int i = 0; i < n; i++)
   cout << arr[i] << " ";
   reverse(arr, arr + n);
   cout << "\nArray after reverse: ";
   for (int i = 0; i < n; i++)
   cout << arr[i] << " ";
}
