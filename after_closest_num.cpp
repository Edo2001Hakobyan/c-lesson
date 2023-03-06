#include <iostream>
bool get_simple(int);
int main()
{
	int num;
	std::cout<<"Enter a number"<<std::endl;
        std::cin>>num;
	int closest_integer = num;
        //Check what is the closest simple number after given number:	
        while (true) {
        if (closest_integer < 0) {
            closest_integer--;
        } else {
            closest_integer++;
        }
        if (get_simple(closest_integer)) {
            break;
        }
    }
    std::cout << "The closest simple digit after to " << num << " is " << closest_integer << std::endl;
    return 0;
        

}


//This function check simple numbers:
bool get_simple(int n) {
	if (n <= 1) return false;
	
	for(int i = 2; i*i <= n;i++) {
	    if (n % i == 0) return false;
        }
        return true;
}	

