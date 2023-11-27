#include<stdio.h>
#include<stdlib.h>

int main(){ 
	float custoFolha, quantidadeFolhas;
	int num, precoVenda, porcentagemShopee, precoVendaShopee;
	int i = 0;
	
	do{
		printf("=============== Calculadora de precos TG Impressos =============== \n");
		printf("\n");
	    printf(" Digite o numero de acordo com a opcao desejada: \n");
	    printf(" (1) Cartao com corte na maquina;\n (2) Cartao com corte manual;\n (3) Folhetos apenas frente A6 120g;\n");
	    scanf("%d",&num);
	    
	    switch(num){
	        case 1 : 
	            printf(" Qual o Custo por Folha?\n");
	            scanf("%f",&custoFolha);
	            printf(" Qual a Quantidade de Folhas?\n");
	            scanf("%f",&quantidadeFolhas);
	        
	            if (quantidadeFolhas < 15) {
	                precoVenda = ((custoFolha * quantidadeFolhas) + 1) * 3 + 3;
	            } else {
	               precoVenda = ((custoFolha * quantidadeFolhas) + 2) * 3 + 3;
	            }
	        break;
	        
	        case 2 :
	            printf(" Qual o Custo por Folha?\n");
	            scanf("%f",&custoFolha);
	            printf(" Qual a Quantidade de Folhas?\n");
	            scanf("%f",&quantidadeFolhas);
	    
	            if (custoFolha < 0.30) {
	                precoVenda = ((custoFolha * quantidadeFolhas) + 1) * 3 + 3;
	            } else if (custoFolha >=0.30 && custoFolha < 0.70) {
	                precoVenda = ((custoFolha * quantidadeFolhas) + 3) * 3 + 3;
	            } else {
	                precoVenda = ((custoFolha * quantidadeFolhas) + 4) * 3 + 3;
	            }
	        break;
	        
	        case 3 : 
	            printf(" Qual o Custo por Folha?\n");
	            scanf("%f",&custoFolha);
	            printf(" Qual a Quantidade de Folhas?\n");
	            scanf("%f",&quantidadeFolhas);
	        
	            precoVenda = ((custoFolha * quantidadeFolhas) + 1) * 2.7 + 3;
	        break;
	        
	        default:
	            printf(" Numero invalido!\n");
	        break;
	    }
	    
		porcentagemShopee = 25 * precoVenda / 100;
		precoVendaShopee = precoVenda + porcentagemShopee;
		    
	    if (quantidadeFolhas >= 17 && custoFolha > 0.10){
		    precoVenda += 4;
			precoVendaShopee += 5;
		}
		
		printf("\n Preco de venda por fora ============ %d\n", precoVenda);
		printf(" Preco de venda pela Shopee: ======== %d\n", precoVendaShopee);
		printf("\n");
		printf("========================================================================\n");	
		printf("\nFazer um novo calculo?\n");
		printf("Digite o numero correspondente a resposta!\n");
		printf("(0) SIM\n");
		printf("(1) NAO\n");
		scanf("%d",&i);
		
	}while (i==0);

	system("pause");
    return 0;
}
