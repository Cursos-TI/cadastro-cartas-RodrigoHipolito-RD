#include <stdio.h>

    int main(){
        char estado[30], nome[30], codigo[5];
        int ptur, pop;
        float pib, area;
        printf("◘•Seja bem vindo ao Super Trunfo em C!•◘ \n");
        printf("Crie sua primeira carta inserindo as informações solicitadas abaixo: \n");
        printf("De um nome para seu estado: \n");
        scanf("%s", estado);

        printf("Crie um código para sua carta: \n");
        scanf("%s", codigo);

        printf("De um nome para sua cidade: \n");
        scanf("%s", nome);

        printf("Defina a quantidade populacional: \n");
        scanf("%d", &pop);

        printf("Defina a área da cidade em km²: \n");
        scanf("%f", &area);

        printf("Defina o PIB: \n");
        scanf("%f", &pib);

        printf("Defina a quantidade de pontos turísticos: \n");
        scanf(" %d", &ptur);

        printf("\n--- Dados da carta 1 ---\n");
        printf("Estado: %s\n", estado);
        printf("Código: %s\n", codigo);
        printf("Cidade: %s\n", nome);
        printf("População: %d\n", pop);
        printf("Área: %.3f km²\n", area);
        printf("PIB: %.3f\n", pib);
        printf("Pontos turísticos: %d\n", ptur);
        printf("-------------------------\n");

        printf("\nAgora crie sua segunda carta!\n");
        char estado2[30], nome2[30], codigo2[5];
        int ptur2, pop2;
        float pib2, area2;

        printf("De um nome para seu estado: \n");
        scanf("%s", estado2);

        printf("Crie um código para sua carta: \n");
        scanf("%s", codigo2);

        printf("De um nome para sua cidade: \n");
        scanf("%s", nome2);

        printf("Defina a quantidade populacional: \n");
        scanf("%d", &pop2);

        printf("Defina a área da cidade em km²: \n");
        scanf("%f", &area2);

        printf("Defina o PIB: \n");
        scanf("%f", &pib2);

        printf("Defina a quantidade de pontos turísticos: \n");
        scanf(" %d", &ptur2);

        printf("\n--- Dados da carta 2 ---\n");
        printf("Estado: %s\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Cidade: %s\n", nome2);
        printf("População: %d\n", pop2);
        printf("Área: %.3f km²\n", area2);
        printf("PIB: %.3f\n", pib2);
        printf("Pontos turísticos: %d\n", ptur2);
        printf("-------------------------\n");

        printf("\nParabéns, você concluiu o cadastro das cartas!\n");
    

    return 0;
}
