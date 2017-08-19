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

/*
===----- Second Method -------===
Note we have the desirable property that: n = (n - 1) & n will make the last 1
n as 0
e.g.: n = 5, i.e. n = 101, then n & (n - 1) = 100
*/

int CountOneSecondMethod(int n)
{
    int count = 0;
    while(n) {
	count++;
	n = n & (n - 1);
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
