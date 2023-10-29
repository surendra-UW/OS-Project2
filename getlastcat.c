#include "types.h"
#include "stat.h"
#include "user.h"



int main(void) 
{
  char *fileName = (char *)malloc(100 * sizeof(char));
  int response = getlastcat(fileName);
  if(fileName == NULL) {
    strncpy(fileName, "Cat has not yet been called", 50);
  }
  printf(1, "XV6_TEST_OUTPUT Last catted filename: %s\n", fileName);
  return response;
}
