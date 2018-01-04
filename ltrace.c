#include <stdio.h>
#include <string.h>

int main(void)
{
  char buf[32];
  //char key[] = hoge;
  char key [] = "kto";

  puts("Please input password.");
  fgets(buf, sizeof(buf), stdin);
  strtok(buf, "\n");

  if(!strcmp(buf, key)){
    puts("Congratulations!");
    puts("Congratulations! Your flag is ");
    puts("nya");
  }
  else{
    puts("Invalid input.");
  }
  return 0;
}
