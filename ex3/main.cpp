#include <iostream>

bool isSorted(int A[], int N) {
  for (int i = 1; i < N; ++i) {
    if (A[i] < A[i - 1]) {
      return false; 
    }
  }
  return true; 
}

int main() {
  int arr1[] = {1, 2, 3, 4, 5};
  int arr2[] = {5, 4, 3, 2, 1};
  int size1 = sizeof(arr1) / sizeof(arr1[0]);
  int size2 = sizeof(arr2) / sizeof(arr2[0]);

  std::cout << "Array 1 está ordenado? " << std::boolalpha
            << isSorted(arr1, size1) << std::endl;
  std::cout << "Array 2 está ordenado? " << std::boolalpha
            << isSorted(arr2, size2) << std::endl;

  return 0;
}
