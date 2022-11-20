#include <stdio.h>
#include "ft_printf.h"


int main()
{
	int r1;
	int r2;
	void *p;

	p = NULL;
	printf ("Test simple");
	r1 =printf("[Test simple]");
	printf("\n");
	r2 = ft_printf("[Test simple]");
	if (r1 != r2)
		printf("\nERROR RETURN\n");
	printf("\n");
	//printf("[   \0   ]\n");
	printf("\n");
	//ft_printf("[   \0   ]\n");
	if (r1 != r2)
		printf("\nERROR RETURN\n");
	printf("\n");
	//printf("");
	printf("\n");
	//ft_printf("");
	if (r1 != r2)
		printf("\nERROR RETURN\n");
	printf("\n");
	r1 = printf("Phsbfaif aufugvu augdvugv auvdgsvdy gvygfvyv\t shdbu");
	printf("\n");
	r2 = ft_printf("Phsbfaif aufugvu augdvugv auvdgsvdy gvygfvyv\t shdbu");
	if (r1 != r2)
		printf("\nERROR RETURN\n");
	printf("\n--------\nTraitement de NULL\n--------\n");
	//r1 = printf("%s", NULL);
	printf("\n");
	//r2 = ft_printf("%s", NULL);
	if (r1 != r2)
		printf("\nERROR RETURN\n");
	printf("\n--------\nTraitement des specifiers\n--------\n");
	r1 = printf("phrase l%cmda%i", 'T', 48);
	printf("\n");
	r2 = ft_printf("phrase l%cmda%i", 'T', 48);
	if (r1 != r2)
		printf("\nERROR RETURN\n");
	printf("\n");
	//r1 = printf("phrase l%cmda%d", 'T', 48.700);
	printf("\n");
	//r2 = ft_printf("phrase l%cmda%d", 'T', 48.700);
	if (r1 != r2)
		printf("\nERROR RETURN\n");
	printf("\n");
	//r1 = printf("INT MIN : %d", -2147483648);
	printf("\n");
	//r2 = ft_printf("INT MIN : %d", -2147483648);
	if (r1 != r2)
		printf("\nERROR RETURN\n");
	printf("\n");
	r1 = printf("chaine %s imbriquee", "de caratere OK");
	printf("\n");
	r2 = ft_printf("chaine %s imbriquee", "de caratere OK");
	if (r1 != r2)
		printf("\nERROR RETURN\n");
	printf("\n");
	r1 = printf("Test %%%d", 000);
	printf("\n");
	r2 = ft_printf("Test %%%d", 000);
	if (r1 != r2)
		printf("\nERROR RETURN\n");
	printf("\n");
	r1 = printf("Affiche hexa NULL : %p", p);
	printf("\n");
	r2 = ft_printf("Affiche hexa NULL : %p", p);
	if (r1 != r2)
		printf("\nERROR RETURN\n");
	printf("\n");
	r1 = printf("Unsigned int : %u - %u", 42, -23);
	printf("\n");
	r2 = ft_printf("Unsigned int : %u - %u", 42, -23);
	if (r1 != r2)
		printf("\nERROR RETURN\n");
	printf("\n");
	r1 = printf("Affiche hexa x : %x", 42);
	printf("\n");
	r2 = ft_printf("Affiche hexa x : %x", 42);
	if (r1 != r2)
		printf("\nERROR RETURN\n");
	printf("\n");
	r1 = printf("Affiche hexa X : %X", 42);
	printf("\n");
	r2 = ft_printf("Affiche hexa X : %X", 42);
	if (r1 != r2)
		printf("\nERROR RETURN\n");
	printf("\n");


	//ft_printf()
}
// int main()
// {
// 	int r = 0; 

// 	r = printf("test");
// 	printf("\nr = %d\n", r);
// 	r = printf("%s", "t");
// 	printf("\nr = %d\n", r);
// 	r = printf("%cd", 122);
// 	printf("\nr = %d\n", r);
// 	r = printf("%p%c", &r, 'a');
// 	printf("\nr = %d\n", r);
// 	printf ("\n-------\n");
// 	r = ft_printf("test");
// 	ft_printf("\nr = %d\n", r);
// 	r = ft_printf("%s", "t");
// 	ft_printf("\nr = %d\n", r);
// 	r = ft_printf("%cd", 122);
// 	ft_printf("\nr = %d\n", r);
// 	r = ft_printf("%p%c", &r, 'a');
// 	ft_printf("\nr = %d\n", r);
// 	return (0);
// }
