#include <iostream>
using namespace std;

int busca(int arr[], int tam, int x)
{
  for(int i = 0; i < tam; i++) 
  {
      if(arr[i] == x) {
          cout << "Número encontrado na posição " << i << endl; 
          return i;
      }  
  }
  cout << "Número não encontrado"; 
  return -1;
  
}


int main() 
{    
    int x;
    int arr[] = {1, 2, 3, 4, 5};
    int tam = sizeof(arr) / sizeof(arr[0]);
    cout << "Digite o valor a ser buscado: ";
    cin >> x; 

    busca(arr, tam, x); 
    
}

