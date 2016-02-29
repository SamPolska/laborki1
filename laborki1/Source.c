#include <stdio.h>
int szukaj(int szukana, int tablica[]);
int szukaj_wsk(int szukana, int *tablica);
int main()
{
	/////////////////////////zadanie1
	int tab[20];
	for (int i = 0; i < 20; ++i)
	{
		scanf_s("%d", &tab[i]);
	}
	for (int i = 0; i < 20; ++i)
	{
		printf("%d\n", tab[i]);
	}
	printf("\n%d\n", szukaj(4, tab));
	printf("\n%d\n", szukaj_wsk(4, tab));

	system("pause");
	return 0;
}
int szukaj(int szukana, int tablica[])
{
	for (int i = 0; i < 20; ++i)
	{
		if (szukana == tablica[i]) return i;

	}
	return -2;
}
int szukaj_wsk(int szukana, int *tablica)
{
	for (int i = 0; i < 20; ++i)
	{
		if (szukana == *(tablica + i)) return i;

	}
	return -2;
}