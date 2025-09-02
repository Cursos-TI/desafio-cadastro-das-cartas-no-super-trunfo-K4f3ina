#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // int cadastra população, pontos turisticos e o codigo da cidade
    int população, número_de_pontos_turisticos, código [3] ;
    // float cadastra PIB e Aréa da cidade
    float PIB, Área, Densidade_populacional, PIB_per_capita ;
    // Char registra o nome da cidade
    char  nome[50];

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
   
    //NIVEL NOVATO
 
    printf ("digite o código da cidade: \n");
    scanf ("%s", &código);
    
    printf ("digite o nome da cidade: \n");
    scanf ("%s", nome );

    printf ("digite a população da cidade: \n" );
    scanf ("%i", &população );

    printf ("digite o Número de pontos turisticos: \n");
    scanf ("%i", &número_de_pontos_turisticos );

    printf ("digite o PIB: \n");
    scanf ("%f", &PIB);

    printf ("digite a Área: \n");
    scanf ("%f", &Área);

    // Calcula a densidade populacional 
    Densidade_populacional = ( população / Área);
    // Calcula o PIB per capita
    PIB_per_capita = ( população / PIB );

    

    printf ("código da cidade: %s \n", código );
    printf ("nome da cidade: %s \n", nome);
    printf ("população da cidade: %i \n", população);
    printf ("Número de pontos turisticos: %i \n", número_de_pontos_turisticos);
    printf ("PIB: %f \n", PIB);
    printf ("Área: %f \n", Área);
    printf ("Densidade populacional: %f \n", Densidade_populacional);
    printf ("PIB per capita: %f \n", PIB_per_capita);

    // Registra a segunda carta
    printf ("digite o código da cidade 2: \n");
    scanf ("%s", &código);
    
    printf ("digite o nome da cidade: \n");
    scanf ("%s", nome );

    printf ("digite a população da cidade: \n" );
    scanf ("%i", &população );

    printf ("digite o Número de pontos turisticos: \n");
    scanf ("%i", &número_de_pontos_turisticos );

    printf ("digite o PIB: \n");
    scanf ("%f", &PIB);

    printf ("digite a Área: \n");
    scanf ("%f", &Área);

    

    printf ("código da cidade: %s \n", código );
    printf ("nome da cidade: %s \n", nome);
    printf ("população da cidade: %i \n", população);
    printf ("Número de pontos turisticos: %i \n", número_de_pontos_turisticos);
    printf ("PIB: %f \n", PIB);
    printf ("Área: %f \n", Área);
    printf ("Densidade populacional: %f \n", Densidade_populacional);
    printf ("PIB per capita: %f \n", PIB_per_capita);

    





    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
