#include <iostream>

int CountOne(int n)
{
    int count = 0;
    
/* mind that we need to define the variable <help> as the 
   unsigned int */

    unsigned int help = 1;
    while(help) {
	if(n & help)
	    count++;
	help = help << 1;
    }
    return count;
}

int main()
{
    int n = 0;
    std::cout << "Input a number: ";
    while(std::cin >> n) {
	std::cout << "number in " << n << ": " << CountOne(n) << std::endl;
        std::cout << "Input a number: ";
    }
}
