

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>




	int main()
	{							
	
	const unsigned int cobertura = 6;
	const unsigned int pizza = 32;
	const unsigned int chopp = 8;
	const unsigned int porc_gorjeta = 10;
	const float porc_desc1 = 0.052;
	const float porc_desc2 = 0.08;
	const float porc_desc3 = 0.10;
	unsigned int pessoas, qntd_chopp, qntd_pizza, qntd_cobertura;
	float chopp_valor, pizza_valor, cobertura_valor, valor_conta, gorjeta, valor_total, valor_pessoa, porc_desc, desconto, conta_gorjeta;  
	

	setlocale(LC_ALL,"Portuguese");
	
	system("cls");				
	
	printf("\n Sistema de uma pizzaria \n ");			
	
	

	printf("\n[-----------------------------------SISTEMA DA PIZZARIA-------------------------------------] \n");
	system("pause");
	
	printf("\n Informe o numero de pessoas na mesa: ");
	scanf("%u", &pessoas);			

	printf("\n Informe o numero de tulipas de chopp pedidas:");
	scanf("%u",&qntd_chopp);
		
	chopp_valor = chopp * qntd_chopp;

	printf("\n Informe o número de pizzas pedidas: ");	
	scanf("%u", &qntd_pizza);
	
	
	pizza_valor = pizza * qntd_pizza;
	
	printf("\n Informe a quantidade de coberturas da(s) pizza(s):");
	scanf("%u", &qntd_cobertura);
	
	
	cobertura_valor = cobertura * qntd_cobertura;
	
	valor_conta = chopp_valor + pizza_valor + cobertura_valor;
	

	
	gorjeta = valor_conta * porc_gorjeta / 100;
	conta_gorjeta = valor_conta + gorjeta;
	
	system("cls");				
	
	printf("\n[-----------------------------------SISTEMA DA PIZZARIA-------------------------------------] \n");
	
	if (conta_gorjeta <= 300)
	{
		desconto = porc_desc1 * conta_gorjeta;
		valor_total = conta_gorjeta - desconto;
		valor_pessoa = valor_total / pessoas;
		printf("\n Valor da Conta sem a gorjeta: %.2f", valor_conta);
		printf("\n Porcentagem da gorjeta: %u %%", porc_gorjeta);
		printf("\n Valor da gorjeta: %.2f", gorjeta);
		printf("\n Valor da conta com gorjeta: %.2f", conta_gorjeta );
		printf("\n Porcentagem do desconto: %.2f %%", porc_desc1 * 100 );
		printf("\n Valor do desconto: %.2f", desconto);
		printf("\n Valor total a pagar: %.2f", valor_total);
		printf("\n Valor pago por pessoa: %.2f", valor_pessoa);
		
	}
	else
	if (conta_gorjeta > 300 && conta_gorjeta <= 600)
	{
		desconto = porc_desc2 * conta_gorjeta;
		valor_total = conta_gorjeta - desconto;
		valor_pessoa = valor_total / pessoas;
		printf("\n Valor da Conta sem a gorjeta: %.2f", valor_conta);
		printf("\n Porcentagem da gorjeta: %u %%", porc_gorjeta);
		printf("\n Valor da gorjeta: %.2f", gorjeta);
		printf("\n Valor da conta com gorjeta: %.2f", conta_gorjeta );
		printf("\n Porcentagem do desconto: %.2f %%", porc_desc2 * 100 );
		printf("\n Valor do desconto: %.2f", desconto);
		printf("\n Valor total a pagar: %.2f", valor_total);
		printf("\n Valor pago por pessoa: %.2f", valor_pessoa);
	}
	else
	{
		desconto = porc_desc3 * conta_gorjeta;
		valor_total = conta_gorjeta - desconto;
		valor_pessoa = valor_total / pessoas;
		printf("\n Valor da Conta sem a gorjeta: %.2f", valor_conta);
		printf("\n Porcentagem da gorjeta: %u %%", porc_gorjeta);
		printf("\n Valor da gorjeta: %.2f", gorjeta);
		printf("\n Valor da conta com gorjeta: %.2f", conta_gorjeta );
		printf("\n Porcentagem do desconto: %.2f %%", porc_desc3 * 100 );
		printf("\n Valor do desconto: %.2f", desconto);
		printf("\n Valor total a pagar: %.2f", valor_total);
		printf("\n Valor pago por pessoa: %.2f", valor_pessoa);
	}


	
	printf("\n\n");
	system("pause");			
	
	return 0;					
	
}								



