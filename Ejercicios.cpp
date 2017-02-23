#include <stdio.h>


// Ejercicio 1
  
int x, y, base, exp;

int main(int argc, char const *argv[])
{
	printf("Ingrese la base: ");
	scanf("%d", &x);
	printf("Ingrese el exponente: ");
	scanf("%d", &y);
	base = x;
	exp = y;
	for (int i = 0; i < exp; ++i)
	{
		base = base * x;
	}
	printf("El resultado de la potencia es: %c\n", base);
	system("PAUSE");
	return 0;
}


// Ejercicio 2

