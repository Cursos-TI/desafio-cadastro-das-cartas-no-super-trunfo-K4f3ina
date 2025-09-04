#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //população alterada para unsigned long int
    unsigned long int populaçãoA, populaçãoB;
    // int cadastra população, pontos turisticos e o codigo da cidade
    int número_de_pontos_turisticosA, número_de_pontos_turisticosB , códigoA [3], códigoB [3];
    // float cadastra PIB e Aréa da cidade
     float PIBA, PIBB, ÁreaA, ÁreaB;
    // Char registra o nome da cidade
    char  nome[50];

    unsigned Densidade_populacionalA, Densidade_populacionalB, PIB_per_capitaA, PIB_per_capitaB;

    
    // Armazena os resultados, tentei untilizar ''resultado1'' e ''resultado0'' porem os valores não alteravam
    int R1, R2, R3 ,R4, R5, R6, R7, R01, R02, R03, R04, R05, R06, R07 ;

    float Super_poderA, Super_poderB;

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
   
    //NIVEL NOVATO
 
    printf ("digite o código da cidade: \n");
    scanf ("%s", &códigoA);
    
    printf ("digite o nome da cidade: \n");
    scanf ("%s", nome );

    printf ("digite a população da cidade: \n" );
    scanf ("%u", &populaçãoA );

    printf ("digite o Número de pontos turisticos: \n");
    scanf ("%i", &número_de_pontos_turisticosA );

    printf ("digite o PIB: \n");
    scanf ("%f", &PIBA);

    printf ("digite a Área: \n");
    scanf ("%f", &ÁreaA);

    // !DENSIDADE E PIB MULTIPLICAM AO INVES DE DIVIDIR POR ALGUM MOTIVO?!

    // Calcula a densidade populacional 
    Densidade_populacionalA = ( populaçãoA / ÁreaA);
    
    // Calcula o PIB per capita
    PIB_per_capitaA = ( populaçãoA / PIBA );

    Super_poderA = (ÁreaA + PIBA + populaçãoA + número_de_pontos_turisticosA + PIB_per_capitaA) + (1/Densidade_populacionalA);
   

    

    printf ("código da cidade: %s \n", códigoA );
    printf ("nome da cidade: %s \n", nome);
    printf ("população da cidade: %u \n", populaçãoA);
    printf ("Número de pontos turisticos: %i \n", número_de_pontos_turisticosA);
    printf ("PIB: %.2f \n", PIBA);
    printf ("Área em Km²: %.2f \n", ÁreaA);
    printf ("Densidade populacional: %.2f \n", Densidade_populacionalA);
    printf ("PIB per capita: %.2f \n", PIB_per_capitaA);

    // Registra a segunda carta
    printf ("digite o código da cidade 2: \n");
    scanf ("%s", &códigoB);
    
    printf ("digite o nome da cidade: \n");
    scanf ("%s", nome );

    printf ("digite a população da cidade: \n" );
    scanf ("%u", &populaçãoB );

    printf ("digite o Número de pontos turisticos: \n");
    scanf ("%i", &número_de_pontos_turisticosB );

    printf ("digite o PIB: \n");
    scanf ("%f", &PIBB);

    printf ("digite a Área: \n");
    scanf ("%f", &ÁreaB);

    Densidade_populacionalB = ( populaçãoB / ÁreaB);

    PIB_per_capitaB = ( populaçãoB / PIBB );

     Super_poderB = (ÁreaB + PIBB + populaçãoB + número_de_pontos_turisticosB + PIB_per_capitaB) + (1/Densidade_populacionalB);

    

    printf ("código da cidade: %s \n", códigoB );
    printf ("nome da cidade: %s \n", nome);
    printf ("população da cidade: %u \n", populaçãoB);
    printf ("Número de pontos turisticos: %i \n", número_de_pontos_turisticosB);
    printf ("PIB: %.2f \n", PIBB);
    printf ("Área em Km²: %.2f \n", ÁreaB);
    printf ("Densidade populacional: %.2f \n", Densidade_populacionalB);
    printf ("PIB per capita: %.2f \n", PIB_per_capitaB);

    
   // Compara os dados entre as cartas
    R1 = populaçãoA > populaçãoB;
    R2 = número_de_pontos_turisticosA > número_de_pontos_turisticosB;
    R3 = PIBA > PIBB;
    R4 = ÁreaA > ÁreaB;
    R5 = Densidade_populacionalA < Densidade_populacionalB;
    R6 = PIB_per_capitaA > PIB_per_capitaB; 
    R7 = Super_poderA > Super_poderB;
    
    R01 = populaçãoA < populaçãoB;
    R02 = número_de_pontos_turisticosA < número_de_pontos_turisticosB;
    R03= PIBA < PIBB;
    R04 = ÁreaA < ÁreaB;
    R05 = Densidade_populacionalA > Densidade_populacionalB;
    R06 = PIB_per_capitaA < PIB_per_capitaB;
    R07 = Super_poderA < Super_poderB;

    printf ("População: Carta %i venceu\n", R1, R01);
    printf ("Pontos turisticos: Carta %i venceu \n", R2, R02);
    printf ("PIB: Carta %i venceu \n", R3, R03);
    printf ("Área em km²: Carta %i venceu \n" ,R4, R04 );
    printf ("Densidade populacional: Carta %i venceu \n", R5, R05 );         
    printf ("PIB per Capita: Carta %i venceu \n", R6, R06 );
    printf ("Super poder: Carta %i venceu \n", R7, R07 );
    





    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
