#include <iostream>

int fibonacci(int n) {
    if (n <= 1) {
        return n; 
    }

    return fibonacci(n - 1) + fibonacci(n - 2); 
}

int main() {
    int N;
    std::cout << "Digite o valor de N: ";
    std::cin >> N;

    int resultado = fibonacci(N);
    std::cout << "O valor de Fibonacci na posição " << N << " é: " << resultado << std::endl;

    return 0;
}


