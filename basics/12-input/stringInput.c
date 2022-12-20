#include <stdio.h>

int main() {
  // Create a string
  char firstName[30];

  // Ask the user to input some text
  printf("Enter your first name: \n");

  // Get and save the text
  scanf("%s", firstName);

  // Output the text
  printf("Hello %s.", firstName);
  
  return 0;
}