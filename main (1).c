#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int dia;
    
    printf("Digite o numero do dia\n");
    printf("1 - Domingo\n");
    printf("2 - Segunda\n");
    printf("3 - Terça\n");
    printf("4 - Quarta\n");
    printf("5 - Quinta\n");
    printf("6 - Sexta\n");
    printf("7 - Sabado\n");
    scanf("%d", &dia);
    
    switch(dia){
        case 1:
        printf("Hoje é domingo!\n");
        break;
        
        case 2:
        printf("Hoje é Segunda!\n");
        break;
        
        case 3:
        printf("Hoje é Terça!\n");
        break;
        
        case 4:
        printf("Hoje é Quarta!\n");
        break;
        
        case 5:
        printf("Hoje é Quinta!\n");
        break;
        
        case 6:
        printf("Hoje é Sexta!\n");
        break;
        
        case 7:
        printf("Hoje é Sábado!\n");
        break;
        
        default:
        printf("opçao invalida! programa encerrado");
        return 1;
    }
    return 0;
}