#include <stdio.h>
int main(void){
    int numero;
    int i;
    int suma = 0;
    printf(" ingresar numero entero");
    scanf("%d",&numero);

    if (numero > 0)
    {
         for ( i = 1; i <= numero; i++)
        printf("por favor ingresar el numero entero positivo\n");
            suma = suma + 1;
    }
    printf("la suma de gauss hasta %d es: %d\n", suma);
return 0;
}