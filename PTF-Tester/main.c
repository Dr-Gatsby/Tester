#include <stdio.h>

int main()
{
	int r1;
	int r2;
	void *p;

	p = NULL;
	printf ("Test simple");
	printf("[Test simple]");
	printf("\n");
	ft_printf("[Test simple]");
	if (r1 != r2)
		printf("\nERROR RETURN\n");
	printf("\n");
	printf("[   \0   ]\n");
	printf("\n");
	ft_printf("[   \0   ]\n");
	if (r1 != r2)
		printf("\nERROR RETURN\n");
	printf("\n");
	printf("");
	printf("\n");
	ft_printf("");
	if (r1 != r2)
		printf("\nERROR RETURN\n");
	printf("\n");
	printf("Phsbfaif aufugvu augdvugv auvdgsvdy gvygfvyv\t shdbu");
	printf("\n");
	ft_printf("Phsbfaif aufugvu augdvugv auvdgsvdy gvygfvyv\t shdbu");
	if (r1 != r2)
		printf("\nERROR RETURN\n");
	printf("\n--------\nTraitement de NULL\n--------\n");
	printf("%s", NULL);
	printf("\n");
	ft_printf("%s", NULL);
	if (r1 != r2)
		printf("\nERROR RETURN\n");
	printf("\n--------\nTraitement des specifiers\n--------\n");
	printf("phrase l%cmda%i", 'T', 48);
	printf("\n");
	ft_printf("phrase l%cmda%i", 'T', 48);
	if (r1 != r2)
		printf("\nERROR RETURN\n");
	printf("\n");
	printf("phrase l%cmda%d", 'T', 48.700);
	printf("\n");
	ft_printf("phrase l%cmda%d", 'T', 48.700);
	if (r1 != r2)
		printf("\nERROR RETURN\n");
	printf("\n");
	printf("INT MIN : %d", -2147483648);
	printf("\n");
	ft_printf("INT MIN : %d", -2147483648);
	if (r1 != r2)
		printf("\nERROR RETURN\n");
	printf("\n");
	printf("chaine %s imbriquee", "de caratere OK");
	printf("\n");
	ft_printf("chaine %s imbriquee", "de caratere OK");
	if (r1 != r2)
		printf("\nERROR RETURN\n");
	printf("\n");
	printf("Test %%%d", 000);
	printf("\n");
	ft_printf("Test %%%d", 000);
	if (r1 != r2)
		printf("\nERROR RETURN\n");
	printf("\n");
	printf("Affiche hexa NULL : %p", p);
	printf("\n");
	ft_printf("Affiche hexa NULL : %p", p);
	if (r1 != r2)
		printf("\nERROR RETURN\n");
	printf("\n");
	printf("Unsigned int : %u - %u", 42, -23);
	printf("\n");
	ft_printf("Unsigned int : %u - %u", 42, -23);
	if (r1 != r2)
		printf("\nERROR RETURN\n");
	printf("\n");
	printf("Affiche hexa x : %x", 42);
	printf("\n");
	ft_printf("Affiche hexa x : %x", 42);
	if (r1 != r2)
		printf("\nERROR RETURN\n");
	printf("\n");
	printf("Affiche hexa X : %X", 42);
	printf("\n");
	ft_printf("Affiche hexa X : %X", 42);
	if (r1 != r2)
		printf("\nERROR RETURN\n");
	printf("\n");


	//ft_printf()
}