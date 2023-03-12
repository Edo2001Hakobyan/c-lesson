#include <iostream>


int main() {
    int n;
    std::cout << "Enter a positive integer: "<<std::endl;
    std::cin >> n;
    
    int prev = 0;
    int curr = 1;
    int next;
    
    for (int i = 2; i <= n; i++) {
        next = prev + curr;
        prev = curr;
        curr = next;
    }
    
    std::cout << "The " << n << "th positive Fibonacci number is: " << curr <<std::endl;
    return 0;
}
