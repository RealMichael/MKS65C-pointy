#include <stdio.h>

int main(){
  unsigned int blah = 3219876543;
  char * point = &blah;
  
  //Prints da int in hex

  printf("Integer in hex form: %x\n",blah);


  int i = 0;
  while(i < 4){
    printf("the four bytes: %hhx\n", *(point + i));
    i ++;
  }
  
  int a = 0;
  while(a < 4){
    *(point + a) += 1;
    a ++;
  }

  printf("dec : %d\n", blah);
  printf("hex : %x\n", blah);
  

  blah = 3219876543;
  int b = 0;
  while(b < 4){
    *(point + b) += 16;
    b ++;
  }

  printf("dec : %d\n" , blah);
  printf("hex : %x\n", blah);





  return 0;


}
