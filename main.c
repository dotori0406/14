#include <stdio.h>
#include <stdlib.h>

struct Book 
{
       int number;
       char title[10];
};

int main(int argc, char *argv[])
{
    struct Book*p;
    
    p = (struct Book*)malloc(2*sizeof(struct Book) );
    
    p->number = 1;
    strcpy(p->title, "C Programing");
    
    
    (p+1)->number = 2;
    strcpy((p+1)->title, "Electronics");
    
    free(p);
    
  system("PAUSE");	
  return 0;
}
