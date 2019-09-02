#include <stdio.h> //These are C libraries
//#include <cstdio> //Can use this also
#include <stdlib.h>
#include <iostream>

int main(int argc, char* argv[])
{
  int guess = 0;
  int n = 6;

  while(guess != n){

    puts("Enter a guess from 1 to 10: ");
    std::cin >> guess; 

    if(guess > n){
      printf("too high");
    }

    if(guess < n){
      printf("too low");
    }
  }

  printf("You guessed it!");
  
  return 0;
}
