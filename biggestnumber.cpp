//Author:
#include<iostream>

int main()
{
  
  int numberOne = 0;
  int numberTwo = 0;
  int biggest = 0;

  std::cout<<"Please enter a whole number:\n";
  std::cin>>numberOne;

  std::cout<<"Please enter another whole number:\n";
  std::cin>>numberTwo;

  if(numberOne == numberTwo)
  {
          std::cout<<"The numbers are the same.\n";
  }

  else
  {
          if(numberOne > numberTwo)
          {
                  biggest = numberOne;
          }

          else
          {
                  biggest = numberTwo;
          }

          std::cout<<"Of those two numbers, the biggest is: ";
          std::cout<<biggest;
  }

  std::cout<<std::endl<<"Thank you for playing.\n";
  
  return 0;
}
