#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){ 
	setlocale(LC_ALL, "Portuguese");
	float custoFolha, quantidadeFolhas, precoVenda, precoVendaShopee;
	int num, porcentagemShopee, i = 1;
	
	printf("=============== Calculadora de preços TG Impressos ===============\n");

	do{
		printf("==================================================================\n");	
	    printf(" \nDigite o número de acordo com a opção desejada: \n");
	    printf(" (1) Cartão com corte na máquina;\n");
	    printf(" (2) Cartão com corte manual;\n");
	    printf(" (3) Folhetos apenas frente A6;\n");
	    scanf("%d",&num);
	    fflush(stdin);
	    
	    printf(" Qual o Custo por Folha?\n");
	    scanf(" %f",&custoFolha);
	    fflush(stdin);
	    printf(" Qual a Quantidade de Folhas?\n");
	    scanf("%f",&quantidadeFolhas);
	    fflush(stdin);
	    
	    switch(num){
	        case 1 : 
	            if (quantidadeFolhas < 15) {
	                precoVenda = ((custoFolha * quantidadeFolhas) + 1) * 3 + 3;
	            } else {
	               precoVenda = ((custoFolha * quantidadeFolhas) + 2) * 3 + 3;
	            }
	        break;
	        
	        case 2 :
	            if (custoFolha < 0.30) {
	                precoVenda = ((custoFolha * quantidadeFolhas) + 1.5) * 3 + 3;
	            } else if (custoFolha >=0.30 && custoFolha < 0.70) {
	                precoVenda = ((custoFolha * quantidadeFolhas) + 3) * 3 + 3;
	            } else {
	                precoVenda = ((custoFolha * quantidadeFolhas) + 4) * 3 + 3;
	            }
	        break;
	        
	        case 3 : 
	            precoVenda = ((custoFolha * quantidadeFolhas) + 1) * 2.7 + 3;
	        break;
	        
	        default:
	            printf(" Número inválido!\n");
	        break;
	    }
	    
		porcentagemShopee = 25 * precoVenda / 100;
		precoVendaShopee = precoVenda + porcentagemShopee;
		    
	    if (quantidadeFolhas >= 17 && custoFolha > 0.10){
		    precoVenda += 4;
			precoVendaShopee += 5;
		}
		
		printf("\n Preço de venda por fora ============ %.2f\n", precoVenda);
		printf(" Preço de venda pela Shopee: ======== %.2f\n", precoVendaShopee);
		printf("\n");
		printf("==================================================================\n");	
		printf("\nFazer um novo calculo?\n");
		printf(" Digite o número correspondente a resposta!\n");
		printf(" (1) SIM\n");
		printf(" (2) NAO\n");
		scanf("%d",&i);
		fflush(stdin);
		
	}while (i==1);

	system("pause");
    return 0;
}
