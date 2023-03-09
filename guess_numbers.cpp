#include <iostream>
#include <cstdlib>
#include <ctime>
void level_one();
void level_two();
void level_three();
int main()
{           
	std::srand(std::time(nullptr));
	level_one();
        level_two();
        level_three();
	return 0;
}	
void level_one()
{	
	int secretNumberOne = rand() % 99 + 1;
        int  numGuessesOne = 0,guess;
	std::cout<<"Level 1!"<<std::endl;
	while (guess != secretNumberOne)
        {
		std::cout<<"Guess number between 1 and 99:"<<std::endl;
		std::cin>>guess;
		numGuessesOne++;
		if (guess > secretNumberOne) 
		 { 
			 if (guess - secretNumberOne >= 1 && guess - secretNumberOne <= 10)
			 { 
				 std::cout<<"High!\n"<<std::endl;
			 }
			 else 
			 {
				 std::cout<<"Too high!\n"<<std::endl;
			 }
		 }	 
	         else if (secretNumberOne > guess)
		  {
			  if (secretNumberOne - guess >= 1 && secretNumberOne - guess <= 10 )
			  {
				 std::cout<<"Low!\n"<<std::endl;

			  }
			  else
			  {
				 std::cout<<"Too low\n"<<std::endl;
			  }
		  }
		else
		{
				 std::cout<<"Correct number!\n"<<std::endl;
				
		}
	 	
	} 
	std::cout<<"You guessed level 1 number is "<<numGuessesOne<<"\n"<<std::endl;
	
}
void level_two()
{
         int numGuessesTwo = 0,guess;
         int secretNumberTwo = rand() % 900 + 100;
	 std::cout<<"Level 2!"<<std::endl;
	while (guess != secretNumberTwo)
	{
		std::cout<<"Guess number between 100 and 999:"<<std::endl;
		std::cin>>guess;
		numGuessesTwo++;
		if (guess > secretNumberTwo) 
		 { 
			 if (guess - secretNumberTwo >= 1 && guess - secretNumberTwo <= 10)
			 { 
				 std::cout<<"High!\n"<<std::endl;
			 }
			 else 
			 {
				 std::cout<<"Too high!\n"<<std::endl;
			 }
		 }	 
	         else if (secretNumberTwo > guess)
		  {
			  if (secretNumberTwo - guess >= 1 && secretNumberTwo - guess <= 10 )
			  {
				 std::cout<<"Low!\n"<<std::endl;

			  }
			  else
			  {
				 std::cout<<"Too low\n"<<std::endl;
			  }
		  }
		else
		{
				 std::cout<<"Correct number!\n"<<std::endl;
		}
	 }
	 std::cout<<"You guessed level 2 number is "<<numGuessesTwo<<"\n"<<std::endl;
}

void level_three()
{	
         int numGuessesThree = 0,guess;
         int secretNumberThree = rand() % 9000 + 1000;
	 std::cout<<"Level 3!"<<std::endl;
	while (guess != secretNumberThree)
	{
		std::cout<<"Guess number between 1000 and 9999:"<<std::endl;
		std::cin>>guess;
		numGuessesThree++;
		if (guess > secretNumberThree) 
		 { 
			 if (guess - secretNumberThree >= 1 && guess - secretNumberThree <= 10)
			 { 
				 std::cout<<"High!\n"<<std::endl;
			 }
			 else 
			 {
				 std::cout<<"Too high!\n"<<std::endl;
			 }
		 }	 
	         else if (secretNumberThree > guess)
		  {
			  if (secretNumberThree - guess >= 1 && secretNumberThree - guess <= 10 )
			  {
				 std::cout<<"Low!\n"<<std::endl;

			  }
			  else
			  {
				 std::cout<<"Too low\n"<<std::endl;
			  }
		  }
		else
		{
				 std::cout<<"Correct number!"<<std::endl;
				 
		}
	 }	
	 std::cout<<"You guessed level 3 number is "<<numGuessesThree<<std::endl;
         
}                
