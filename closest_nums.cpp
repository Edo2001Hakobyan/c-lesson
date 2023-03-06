#include <iostream>
bool get_simple(int);
int main()
{
	int num;
	std::cout<<"Enter a number"<<std::endl;
        std::cin>>num;
	int closest_after = num;
        //Check what is the closest simple number after given number:	
        while (true) {
        if (closest_after < 0) {
            closest_after--;
        } else {
            closest_after++;
        }
        if (get_simple(closest_after)) {
            break;
        }
    }
        //Check what is the closest simple number before given number:
        int closest_before = num ;	
        while (true) {
        if (closest_before < 0) {
            closest_before++;
        } else {
            closest_before--;
        }
        if (get_simple(closest_before)) {
            break;
        }
    }
    std::cout << "The closest simple digit after to " << num << " is " << closest_after << std::endl;
    std::cout << "The closest simple digit before to " << num << " is " << closest_before << std::endl;
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

