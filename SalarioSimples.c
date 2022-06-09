#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	float sal, bonus;
	int temp;
	printf("Digite seu salario: ");
	scanf("%f", &sal);
	printf("Digite o seu tempo de trabalho na empresa: ");
	scanf("%d", &temp);
	if(sal <= 500 && sal > 0)
	{
		bonus = (sal*0.15) + sal;
		if(temp >= 3);
		{
			bonus = bonus +(bonus*0.1);
		}
		printf("O seu salario é de %.2f", bonus);
	}
	else if(sal >=500 && sal <= 1000)
	{
		bonus = (sal*0.12) + sal;
		if(temp >= 3);
		{
			bonus = bonus +(bonus*0.1);
		}
		printf("O seu salario é de %.2f", bonus);
	}
	else if(sal >=1000)
	{
		bonus = (sal*0.05) + sal;
		if(temp >= 3);
		{
			bonus = bonus +(bonus*0.1);
		}
		printf("O seu salario e de %.2f", bonus);
	}
	else
	{
		printf("Valor invalido!");
	}
}
