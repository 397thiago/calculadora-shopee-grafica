#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){ 
	setlocale(LC_ALL, "Portuguese");
	float custoFolha = 0, quantidadeFolhas = 0, precoVenda = 0,
	      precoVendaShopee = 0, porcentagemShopee = 0;
	int   num, i = 1;
	
	printf("===================================================================\n");	
	printf("===================== CALCULADORA TG IMPRESSOS ====================\n\n");
	printf(" Desenvolvedor: Thiago Vieira                         Versão 2.2.5\n");

	do{
		printf("===================================================================\n\n");	
	    printf(" Digite o número de acordo com a opção desejada:\n\n");
	    printf(" (1) Adesivos;\n");
	    printf(" (2) Etiquetas;\n");
	    printf(" (3) Cartão de Visitas 54x90mm;\n");
	    printf(" (4) Cartão com Corte Personalizado;\n");
	    printf(" (5) Folhetos Apenas Frente A6;\n");
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
	        	if(quantidadeFolhas <= 5){
	        		precoVenda = ((custoFolha * quantidadeFolhas) + 3) * 3 + 3;
				}else if(quantidadeFolhas > 5 && quantidadeFolhas < 10){
					precoVenda = ((custoFolha * quantidadeFolhas) + 6) * 3 + 3;
				}else if(quantidadeFolhas >= 10){
					precoVenda = ((custoFolha * quantidadeFolhas) + 9) * 3 + 3;
				}	
	        break;
	        
	        case 2 : 
	        	precoVenda = ((custoFolha * quantidadeFolhas) + 3) * 3 + 3;
	        break;
	        
	        case 3 : 
	            if(quantidadeFolhas < 12){
	                precoVenda = ((custoFolha * quantidadeFolhas) + 1.5) * 3 + 3;
	        	}else{
	            	precoVenda = ((custoFolha * quantidadeFolhas) + 2) * 3 + 3;
	        	}
	        break;
	        
	        case 4 :
	        	if(custoFolha < 0.40){
	                precoVenda = ((custoFolha * quantidadeFolhas) + 1.5) * 3 + 3;
	            }else if(custoFolha >=0.40 && custoFolha < 0.70){
	            	precoVenda = ((custoFolha * quantidadeFolhas) + 3) * 3 + 3;
	            }else{
	        		precoVenda = ((custoFolha * quantidadeFolhas) + 4) * 3 + 3;
	        	}
	        break;
	        
	        case 5 :
	        	precoVenda = ((custoFolha * quantidadeFolhas) + 1) * 2.5 + 3;
	        break;

	        default:
	            printf(" Número inválido!\n");
	        break;
	    }
		porcentagemShopee = 25 * precoVenda / 100;
		precoVendaShopee = precoVenda + porcentagemShopee;
		    
	    if(quantidadeFolhas >= 17 && custoFolha > 0.10){
		    precoVenda += 5;
			precoVendaShopee += 5;
		}
		printf(" Preço de venda por fora ================= %.2f\n", precoVenda);
		printf(" Preço de venda pela Shopee: ============= %.2f\n", precoVendaShopee);
		printf("\n");
		printf("==================================================================\n\n");	
		printf(" Deseja fazer um novo calculo?\n");
		printf(" Digite o número correspondente a resposta!\n");
		printf(" (1) SIM\n");
		printf(" (2) NAO\n");
		scanf("%d",&i);
		fflush(stdin);
	} while (i==1);

	system("pause");
    return 0;
}
