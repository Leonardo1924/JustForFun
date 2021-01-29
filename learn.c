#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
int c;
FILE *fvalue;

fvalue = fopen(".txt","r");
if (fvalue){
        while((c= getc(fvalue)) != EOF)
            putchar(c);
}

fclose(fvalue);
return 0;

}