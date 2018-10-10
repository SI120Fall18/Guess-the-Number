// Guess the number program
#include <iostream>
#include <ctime>
#include <cmath>
#include <unistd.h>

int main()
{
	unsigned seed;
	seed = time(0);
	
	srand(seed);

	int max = 100;
	int min = 1;
	//int number = rand() % (max - (min + 1)) + min;
	int number = 10;
    int guess;

	std::cout << "Guess the number 1-100: ";
	std::cin >> guess;
	sleep(5);

	if(guess == number){
		
		std::cout << "Correct!" << std::endl;

	} else if(guess > number){
	    
		std::cout << "Too High!" << std::endl;

        if(guess > 100) {
            std::cout << "Not in range" << std::endl;
        }
	} else if(guess < number) {
	
		std::cout << "Too Low!" << std::endl;
        
        if(guess < 1) {
            std::cout << "Not in range" << std::endl;
        }
	}


	
return 0;

}

