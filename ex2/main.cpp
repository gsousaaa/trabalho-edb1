#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int x )
{
  int left = 0;
  int right = size - 1;

  while (left <= right) {
    int mid = left + (right - left) / 2;
    if (arr[mid] == x)
    {
      return mid; 
    }
    else if (arr[mid] < x)
    {
      left = mid + 1;
    }
    else
    {
      right = mid - 1;
    }
  }
  
  return -1;
}

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = sizeof(arr) / sizeof(arr[0]);
  int searchValue = 5;
  int index = binarySearch(arr, size, searchValue);

  if (index != -1) {
    cout << "Elemento encontrado na posição: " << index << endl;
  } else {
    cout << "Elemento não encontrado." << endl;
  }

  return 0;
}
