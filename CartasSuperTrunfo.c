#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int C1_NPT,C1_POP,C2_NPT,C2_POP; //C1_NPT e C2_NPT = Numero de Pontos Turisticos; C1_POP e C2_POP = Quantidade de População
    float C1_PIB,C1_AREA,C2_PIB,C2_AREA; //Variaveis que armazenam Area e PIB de cada carta
    char C1_EST,C2_EST; // Codigos do Estado digitado (de A até H)
    char C1_CIDADE[50], C2_CIDADE[50]; // Nome de cada cidade
    char C1_COD[3],C2_COD[3]; // Codiga de cada carta digitado

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
    printf("PIB:  %.2f bilhões de reais\n",C1_PIB);
    printf("Numero de Pontos Turistico:  %d\n",C1_NPT);
    
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

    return 0;
}
