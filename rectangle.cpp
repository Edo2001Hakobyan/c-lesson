#include <iostream>

int main() {
    int N, M;
    char C;	
    std::cout << "Enter the value of row (N): "<<std::endl;
    std::cin >> N;
    std::cout << "Enter the value of column (M): "<<std::endl;
    std::cin >> M;
    std::cout << "Enter the value of character (C): "<<std::endl;
    std::cin >> C;
    for (int i = 1; i <= M; i++) {
        for (int j = 1; j <= N; j++) {
            if (i == 1 || i == M || j == 1 || j == N) {
		    std::cout << C;
            } else {
		    std::cout<< " ";
            }
        }
	std::cout<<""<<std::endl;
    }

    return 0;
}


