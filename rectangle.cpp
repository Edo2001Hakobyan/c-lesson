#include <iostream>

int main() {
    int N, M;
    std::cout << "Enter the value of N: "<<std::endl;
    std::cin >> N;
    std::cout << "Enter the value of M: "<<std::endl;
    std::cin >> M;

    for (int i = 1; i <= M; i++) {
        for (int j = 1; j <= N; j++) {
            if (i == 1 || i == M || j == 1 || j == N) {
		    std::cout << "*";
            } else {
		    std::cout<< " ";
            }
        }
	std::cout<<""<<std::endl;
    }

    return 0;
}


