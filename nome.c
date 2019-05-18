#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"");
    int i;
    for (i=1;i<100/2;i++) {
    printf("Números par: %d\n", i*2);
}
system ("pause");
return 0;
}
