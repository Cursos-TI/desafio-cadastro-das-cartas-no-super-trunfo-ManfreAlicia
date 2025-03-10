# include <stdio.h>


int main(){
char estado1 [50], estado2 [50];
char codestado1 [50], codestado2 [50];
char cidestado1 [50], cidestado2 [50];
int habestado1, habestado2;
float areacidade1, areacidade2;
float PIBestado1, PIBestado2;
int turisticos1, turisticos2;

printf("Digite o primeiro estado: \n");
scanf("%s", &estado1);

printf("Digite o codigo da cidade: \n");
scanf("%s", &codestado1);

printf("Digite a cidade do estado: \n");
scanf("%s", &cidestado1);

printf("Digite a quantidade de habitantes da ciadae: \n");
scanf("%s", &habestado1);

printf("Digite a area em km² da cidade: \n ");
scanf("%f", &areacidade1);

printf("digite o PIB da cidade: \n");
scanf("%f", &PIBestado1);

printf("Digite o quantidade de pontos turisticos: \n");
scanf("%d", &turisticos1);

printf("Digite o primeiro estado: \n");
scanf("%s", &estado2);

printf("Digite o codigo da cidade: \n");
scanf("%s", &codestado2);

printf("Digite a cidade do estado: \n", estado2);
scanf("%s", &cidestado2);

printf("Digite a quantidade de habitantes da ciadae: \n" , cidestado2);
scanf("%s", &habestado2);

printf("Digite a area em km² da cidade: \n ");
scanf("%f", &areacidade2);

printf("digite o PIB da cidade: \n");
scanf("%f", &PIBestado2);

printf("Digite o quantidade de pontos turisticos: \n");
scanf("%d", &turisticos2);


return 0;
}