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
	sleep(3);
    int number = rand() % (max - (min + 1)) + min;
	int guess;

	std::cout << "Guess the number 1-100. You have 3 tries or you will die: ";
	std::cin >> guess;
	sleep(1);

	if(guess == number){
		
		std::cout << "Correct!" << std::endl;

	} else if(guess > number){
	
		std::cout << "Too High!" << std::endl;
		
		if (guess > 100) {
			std::cout << "Not in range" << std::endl;
		}


	} else if(guess < number) {
	
		std::cout << "Too Low!" << std::endl;

		if (guess < 1) {
			std::cout << "Not in range" << std::endl;
}

	} 
	
if(guess != number) {

	std::cout << "Try again!" << std::endl;
	std::cout << "Guess the number: ";
	std::cin >> guess;
	
	if(guess == number){
		
		std::cout << "Correct!" << std::endl;

	} else if(guess > number){
	
		std::cout << "Too High!" << std::endl;
		
		if (guess > 100) {
			std::cout << "Not in range" << std::endl;
		}


	} else if(guess < number) {

	std::cout << "Too Low!" << std::endl;

		if (guess < 1) {
			std::cout << "Not in range" << std::endl;
}

	} 
 }

if(guess != number) {

	std::cout << "Try again!" << std::endl;
	std::cout << "Guess the number: ";
	std::cin >> guess;
	
	if(guess == number){
		
		std::cout << "Correct!" << std::endl;

	} else if(guess > number){
	
		std::cout << "Too High!" << std::endl;
		
		if (guess > 100) {
			std::cout << "Not in range" << std::endl;
		}


	} else if(guess < number) {

		std::cout << "Too Low!" << std::endl;

		if (guess < 1) {
			std::cout << "Not in range" << std::endl;
}

	} 
 }

if(guess != number) {
	std::cout << "You died" << std::endl;
}

	std::cout << "The number is " << number << std::endl;


	
	
	
return 0;

}

