#include <iostream>
bool get_simple(int);
int main()
{
	int num;
	std::cout<<"Enter a number"<<std::endl;
        std::cin>>num;
	if (get_simple(num)) {
		std::cout<<num<<" "<<"number is a simple"<<std::endl;
	}
	else {
		std::cout<<num<<" " <<"number is not a simple"<<std::endl;
	}
        return 0;

}



bool get_simple(int n) {
	if (n <= 1) return false;
	
	for(int i = 2; i*i <= n;i++) {
	    if (n % i == 0) return false;
        }
        return true;
}	

