#include <stdio.h>

// Ejercicio 1

/*  

int main(int argc, char const *argv[])
{
	int x, y, base, exp;
	printf("Ingrese la base: ");
	scanf("%d", &x);
	printf("Ingrese el exponente: ");
	scanf("%d", &y);
	base = x;
	exp = y;
	for (int i = 0; i <= exp; ++i)
	{
		base = base * x;
	}
	printf("El resultado de la potencia es: %c\n", base);
	system("PAUSE");
	return 0;
}

*/

// Ejercicio 2

/*
int cantidad(int x, string s)
{

	int n = 0;
	for (int i = 0; i <= s.length; ++i)
	{
		n++;
	}
	if ( n == x)
		{
			return true;
		}
	else {
			return false;
		}
}
*/

// Ejercicio 3

/*
int main(int argc, char const *argv[])
{
	int ocho[7], x, y, contx = 0, conty = 0, posx[], posy[];
	bool xb = false, yb - false;
	for (int i = 0; i <= 7; ++i)
	 {
	 	printf("Ingrese valor: ");
	 	scanf("%d", &ocho[i]);
	 } 
	printf("Ingrese valor x: ");
	scanf("%d", &x);
	printf("Ingrese valor y: ");
	scanf("%d", &y);
	for (int i = 0; i <= 7; ++i)
	{
		if (x == ocho[i])
		{
			contx++;
			posx[contx] = i;
			xb = true;
		}
	}
	for (int i = 0; i <= 7; ++i)
	{
		if (y == ocho[i])
		{
			conty++;
			posy[conty] = i;
			yb = true;
		}
	}
	if (xb == true)
	{
		printf("El numero que se repite es: %d\n", x);
		printf("Se repite %d veces\n", contx);
		printf("En las posiciones: \n");
		for (int i = 0; i <= contx; ++i)
		{
			printf("%d\n", posx[i]);
		}
	}
	if (yb == true)
	{
		printf("El numero que se repite es: %d\n", y);
		printf("Se repite %d veces\n", conty);
		printf("En las posiciones: \n");
		for (int i = 0; i <= conty; ++i)
		{
			printf("%d\n", posy[i]);
		}
	}
	return 0;
}
*/

//Ejercicio 4

/*
int main(int argc, char const *argv[])
{
	int depto[19][5], sum = 0, sumpp[19], promp[19];
	for (int i = 0; i < 20; ++i)
	{
		for (int j = 0; j < 6; ++j)
		{
			printf("\nIngrese cantidad de personas que viven en el departamento %d del piso %d: ",j, i );
			scanf("%d", &depto[i][j]);
		}
	}
	for (int i = 0; i < 20; ++i)
	{
		for (int j = 0; j < 6; ++j)
		{
			sum = sum + depto[i][j];
		}
	}
	for (int i = 0; i < 20; ++i)
	{
		for (int j = 0; j < 6; ++j)
		{
			sumpp[i] = sumpp[i] + depto[i][j];
		}
	}
	for (int i = 0; i < 20; ++i)
	{
		promp[i] = sumpp [i] / sum;
	}
	printf("\n El total de habitantes en el edificio es: %d", sum);
	for (int i = 0; i < 20; ++i)
	{
		printf("\n El promedio de habitates en el piso %d es de el:%d porciento.", i, promp[i]);
	}
	return 0;
}

*/

//Ejercicio 5

/*
int recibo(int x, int y)
{
	printf("\n Ingrese Valor: ");
	scanf("%d", &x);
	printf("\n Ingrese Valor: ");
	scanf("%d", &y);
	return x, y;
}

int resta(int num, int den)
{
	int rest, x;
	rest = num;
	while(x == 1)
	{
		x == 1;
		if ( rest > dem)
		{
			rest = rest - dem;
		}
		else
		{
			x == 0;
		}
	}
	return rest;
}
*/

//Ejercicio 7

/*
int potencia(int n)
{
	int r;
	for (int i = 0; i < n; ++i)
	{
		r = ( ( i * 2 ) + 1) + r;
	}
	return r;
}

*/