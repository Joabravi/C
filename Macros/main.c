#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416
int main()
{
    float x;
    x = PI;
    int y;
    printf("El valor de x es: %f.\n",x);
    printf("Introduce un valor para y: ");
    scanf("%i",&y);
    printf("El valor de y es: %i\n",y);
    x = x * y;
    printf("El nuevo valor de x es: %f.\n",x);

    return 0;
}
