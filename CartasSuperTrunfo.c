#include <stdio.h>


int main(){
    //Carta 01
    //Primeiro criei as variáveis
    //Usei o char[] para os textos, o int para  números inteiros e o float para números flutuantes.
    //Estabeleci uma quantidade de caracteres em cada char para ser possível digitar mais livrimente.
    char Estado1;
    char Codigo1[4];
    char Cidade1[50];
    int População1;
    float Area1;
    float Pib1;
    int Pontos1;
    float Densidade1, Pibpercapita1;

    //carta 2
    // Repeti o mesmo processo da carta 1.
    char Estado2;
    char Codigo2[4];
    char Cidade2[50];
    int População2;
    float Area2;
    float Pib2;
    int Pontos2; 
    float Densidade2, Pibpercapita2;


    // Usei o printf para imprimir as variáveis e o scanf para que seja possível digitar no terminal, ou seja, para dar valor as variáveis.
    printf("Desafio super Trunfo! \n\n");

    /* Usei os especificadores para sinalizar cada tipo de impressão. Sendo %d para números inteiros, %s para caracteres, %c para um caracter só,
     %f para numeros flutuantes, já o "\n" serve para pular uma linha. Quem da valor as variáveis são os usuários. */
    printf("Carta 01: \n");

    printf("Digite o Estado (A-H): \n");
    scanf(" %c", &Estado1);

    printf("Digite o Código da carta (Ex: A01): \n");
    scanf(" %s", Codigo1);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", Cidade1);

    printf("Digite a quantidade da População: \n");
    scanf("%d", &População1);

    printf("Digite a Área km²: \n");
    scanf("%f", &Area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &Pib1);

    printf("Digite o número de Pontos turísticos da cidade:\n");
    scanf("%d", &Pontos1);

    printf("\n");

    //usei o \n só para pular mais uma linha
    //Repeti o mesmo processo da carta 1

    printf("Carta 02: \n");

    printf("Digite o Estado (A-H): \n");
    scanf(" %c", &Estado2);

    printf("Digite o Código da Carta (Ex: A01): \n");
    scanf(" %s", Codigo2);

    printf("Digite o nome da Cidade:\n");
    scanf(" %s", Cidade2);

    printf("Digite a quantidade da População da cidade 2: \n");
    scanf("%d", &População2);

    printf("Digite a Área km² da cidade 2: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB da cidade 2: \n");
    scanf("%f", &Pib2);

    printf("Digite o número de Pontos turísticos da cidade 2:\n");
    scanf("%d", &Pontos2);

    printf("\n");

    //usei o comando print para listar em ordem todos os dados digitados pelo usuário, coloquei os com especificações iguais juntos para organizar.

    printf("Carta 01: \n");

    printf("Estado: %c\n", Estado1);

    printf("Código: %s\nCidade: %s\n", Codigo1, Cidade1);

    printf("População: %d Habitantes\n", População1);

    printf("Área: %.2f km²\n", Area1);

    printf("PIB: %.2f Bilhões de reais\n", Pib1);

    printf("Pontos Turisticos: %d\n", Pontos1);

    //para calcular a densidade dividi a população pela area
    Densidade1 = População1 / (float)Area1;
    printf("Densidade Populacional: %.2f Hab/km²\n", Densidade1);

    //Para calcular o Pib per capita multipliquei o pib por 1 bilhão e dividi pela população
    Pibpercapita1 = (Pib1 * 1000000000) / População1;
    printf("Pib per capita: %.2f reais\n", Pibpercapita1);

    printf("\n");

    printf("Carta 02: \n");

    printf("Estado: %c\n", Estado2);

    printf("Código: %s\nCidade: %s\n", Codigo2, Cidade2);

    printf("População: %d Habitantes\n", População2);

    printf("Área: %.2f km²\n", Area2);

    printf("PIB: %.2f Bilhões de reais\n", Pib2);

    printf("Pontos Turisticos: %d\n", Pontos2);

    //para calcular cada um utilizei o mesmo processo da carta 1

    Densidade2 = População2 / (float)Area2;
    printf("Densidade Populacional: %.2f Hab/km²\n", Densidade2);

    Pibpercapita2 = (Pib2 * 1000000000) / População2;
    printf("Pib per capita: %.2f reais\n", Pibpercapita2);

}