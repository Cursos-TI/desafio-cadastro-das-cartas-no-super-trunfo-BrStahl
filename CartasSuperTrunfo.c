#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int C1_NPT,C2_NPT;
    unsigned long int C1_POP, C2_POP; //C1_NPT e C2_NPT = Numero de Pontos Turisticos; C1_POP e C2_POP = Quantidade de População
    char C1_CIDADE[50], C2_CIDADE[50],C1_COD[3],C2_COD[3],C1_EST,C2_EST; // Nome de cada cidade, Codiga de cada carta digitado e Codigos do Estado digitado (de A até H)
    float  C1_DENSIDADE,C2_DENSIDADE,C1_PIB,C1_AREA,C2_PIB,C2_AREA,C1_SUPER_PODER,C2_SUPER_PODER; //Variaveis que armazenam Area e PIB de cada carta e Variaveis de Densidade Populacional e PIB per Capita;
    double C1_PIB_CAPITA,C2_PIB_CAPITA;

    //Cadastro Carta Nª1 
    printf("Cadastro Carta Nª 01\n");
    
    // Solicita o Estado para o usuario
    printf("\nDigite a letra do Estado (A á H):\n");
    scanf("%c",&C1_EST);
    
    // Solicita o Códgo para o usuario
    printf("\nDigite o codigo da carta (01 á 04):\n");
    scanf("%s",&C1_COD);
    getchar();

    // Solicita o Nome da Cidade para o usuario
    printf("\nDigite o Nome da Cidade: \n");
    fgets(C1_CIDADE,50,stdin);

    C1_CIDADE[strcspn(C1_CIDADE,"\n")] = 0;

    // Solicita o numero de Habitantes para o usuario
    printf("\nDigite a quantidade da População(Valor sem Virgula):\n");
    scanf("%d",&C1_POP);
    
    // Solicita Área para o usuario
    printf("\nDigite a Área da cidade (Ex: 123.45):\n");
    scanf("%f",&C1_AREA);

    //Solicita o PIB para o usuario
    printf("\nDigite o PIB da Cidade(123.45): \n");
    scanf("%f",&C1_PIB);

    //Solciita a Qtd de pontos turistico.
    printf("\nDigite a quantidade de Pontos Turisticos:\n");
    scanf("%d",&C1_NPT);
    
    // Calculo de Densidade Populacional e PIB per Capita
    C1_DENSIDADE =  C1_POP/C1_AREA;
    C1_PIB_CAPITA = (C1_PIB/C1_POP) * 1000000000;

    C1_SUPER_PODER = (float)C1_POP + C1_AREA + C1_PIB + C1_PIB_CAPITA + (float)C1_NPT + (1/C1_DENSIDADE);

    printf("\nFim Cadastro Carta Nª 01!\n"); 

    printf("---------------------------------------------\n");

    //Cadastro Carta Nª2
    printf("Cadastro Carta Nª 02\n");
    
    // Solicita o Estado para o usuario
    printf("\nDigite a letra do Estado (A á H):\n");
    scanf(" %c",&C2_EST);
    
    // Solicita o Códgo para o usuario
    printf("\nDigite o codigo da carta (01 á 04):\n");
    scanf("%s",&C2_COD);
    getchar();

    // Solicita o Nome da Cidade para o usuario
    printf("\nDigite o Nome da Cidade: \n");
    fgets(C2_CIDADE,50,stdin);

    C2_CIDADE[strcspn(C2_CIDADE,"\n")] = 0;
    
    // Solicita o numero de Habitantes para o usuario
    printf("\nDigite a quantidade da População(Valor sem Virgula):\n");
    scanf("%d",&C2_POP);
    
    // Solicita Área para o usuario
    printf("\nDigite a Área da cidade(Ex: 123.45):\n");
    scanf("%f",&C2_AREA);

    // Solicita o PIB para o usuario
    printf("\nDigite o PIB da Cidade*(Ex: 123.45): \n");
    scanf("%f",&C2_PIB);

    // Solicita Qtd de pontos turistico.
    printf("\nDigite a quantidade de Pontos Turisticos:\n");
    scanf("%d",&C2_NPT);

    // Calculo de Densidade Populacional e PIB per Capita
    C2_DENSIDADE =  C2_POP/C2_AREA;
    C2_PIB_CAPITA = (C2_PIB/C2_POP) * 1000000000;

    C2_SUPER_PODER = (float)C2_POP + C2_AREA + C2_PIB + C2_PIB_CAPITA + (float)C2_NPT + (1/C2_DENSIDADE);

    printf("\nFim Cadastro Carta Nª 02!\n");
    
    //Exibiação Carta Nª1
    printf("---------------------------------------------\n");

    //Exibi os dados da Carta 01
    printf("\nDados Carta Nª 01\n");
    printf("Estado:  %c\n",C1_EST);
    printf("Código:  %c%s\n",C1_EST,C1_COD);
    printf("Nome da Cidade:  %s\n",C1_CIDADE);
    printf("População:  %d\n",C1_POP);
    printf("Área:  %.2f km²\n",C1_AREA);
    printf("PIB:  R$ %.2f bilhões de reais\n",C1_PIB);
    printf("Numero de Pontos Turistico:  %d\n",C1_NPT);
    printf("Densidade Populaciona: %.2f hab/km².\n",C1_DENSIDADE);
    printf("PIB Per Capita: R$ %5.2f Reais\n",C1_PIB_CAPITA);
    printf("Super Poder: %.2f\n",C1_SUPER_PODER);

    //Exibiação Carta Nª2
    printf("---------------------------------------------\n");

    //Exibi os dados da Carta 02
    printf("\nDados Carta Nª 02\n");
    printf("Estado:  %c\n",C2_EST);
    printf("Código:  %c%s\n",C2_EST,C2_COD);
    printf("Nome da Cidade:  %s\n",C2_CIDADE);
    printf("População:  %d\n",C2_POP);
    printf("Área:  %.2f km²\n",C2_AREA);
    printf("PIB:  %.2f bilhões de reais\n",C2_PIB);
    printf("Numero de Pontos Turistico:  %d\n",C2_NPT);
    printf("Densidade Populaciona: %.2f hab/km².\n",C2_DENSIDADE);
    printf("PIB Per Capita: R$ %5.2f Reais\n",C2_PIB_CAPITA);
    printf("Super Poder: %.2f\n",C2_SUPER_PODER);

    //Exibiação de Comparação entre as Duas Cartas
    printf("---------------------------------------------\n");

    printf("\nResultado Comparação entre as cartas\n");
    // Compara População
    if (C1_POP > C2_POP){
        printf("População: Carta 1 venceu (1)\n");
    } else if (C2_POP > C1_POP){
        printf("População: Carta 2 venceu (0)\n");
    } else if (C1_POP == C2_POP){
        printf("População: Empate\n");
    }

    //Compara Area
    if (C1_AREA > C2_AREA){
        printf("Área: Carta 1 venceu (1)\n");
    } else if (C2_AREA > C1_AREA){
        printf("Área: Carta 2 venceu (0)\n");
    } else if (C1_AREA == C2_AREA){
        printf("Área: Empate\n");
    }

    //Compara PIB
    if (C1_PIB > C2_PIB){
        printf("PIB: Carta 1 venceu (1)\n");
    } else if (C2_PIB > C1_PIB){
        printf("PIB: Carta 2 venceu (0)\n");
    } else if (C1_PIB == C2_PIB){
        printf("PIB: Empate\n");
    }

    //Compara NPT 
    if (C1_NPT > C2_NPT){
        printf("Numeros de Pontos Turisticos: Carta 1 venceu (1)\n");
    } else if (C2_NPT > C1_NPT){
        printf("Numeros de Pontos Turisticos: Carta 2 venceu (0)\n");
    } else if (C1_NPT == C2_NPT){
        printf("Numeros de Pontos Turisticos: Empate\n");
    }

    //Compara PIB Per Capita 
    if (C1_PIB_CAPITA > C2_PIB_CAPITA){
        printf("PIB Per Capita: Carta 1 venceu (1)\n");
    } else if (C2_PIB_CAPITA > C1_PIB_CAPITA){
        printf("PIB Per Capita: Carta 2 venceu (0)\n");
    } else if (C1_PIB_CAPITA == C2_PIB_CAPITA){
        printf("PIB Per Capita: Empate\n");
    }

    //Compara Densidade Populacional
    if (C1_DENSIDADE > C2_DENSIDADE){
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
    } else if (C2_DENSIDADE > C1_DENSIDADE){
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    } else if (C1_DENSIDADE == C2_DENSIDADE){
        printf("Densidade Populacional: Empate\n");
    }

    //Compara Densidade Populacional
    if (C1_SUPER_PODER > C2_SUPER_PODER){
        printf("Super Poder: Carta 1 venceu (1)\n");
    } else if (C2_SUPER_PODER > C1_SUPER_PODER){
        printf("Super Poder: Carta 2 venceu (0)\n");
    } else if (C1_SUPER_PODER == C2_SUPER_PODER){
        printf("Densidade Populacional: Empate\n");
    }   
    return 0;
}
