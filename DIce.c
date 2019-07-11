#include <stdio.h>
#include <stdlib.h>

int main() {
  int d1 = rand()%6+1;
  int d2 = rand()%6+1;
  
  char name[20];
  
  printf( "What is your name?\n" );
  printf( "> " );
  scanf( "%s" , name );
  printf( "Hello, %s!\n" , name );
  
  printf( "Rolling the dice...\n" );
  printf( "Die 1: %d\n" , d1 );
  printf( "Die 2: %d\n" , d2 );
  printf( "Total value: %d\n" , d1+d2 );
  
  return 0;
}
