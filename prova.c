#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char continuar;
    
    printf("Ola jogador, o jogo funciona na base do sorteio. Sera que voce e bom de chute?\n");
        sleep (3);
        printf("Aperte a tecla ENTER para iniciar!");
    getchar();
    
    do {
        srand(time(NULL)); 
        int num_sorteado = rand() % 16 + 1; 
        int chute;
        int acertou = 0;
        int tentativas = 0; 
		
        do {
            printf("\nDigite um numero de 1 a 16 (Tentativa %d de 4):\n", tentativas + 1);
            scanf("%d", &chute);
            tentativas++;

            if (chute == num_sorteado) {
                printf("\n\nVOCE ACERTOU!!! Meus parabens jogador. \nO numero sorteado foi %d.\n\n", num_sorteado);
                acertou = 1; 
            } else if (chute < num_sorteado) {
                printf("O numero sorteado e maior que %d. Tente novamente!\n", chute);
            } else {
                printf("O numero sorteado e menor que %d. Tente novamente!\n", chute);
            }
        } while (!acertou && tentativas < 4); 

        if (!acertou) {
            printf("\nSuas tentativas acabaram! O numero sorteado era %d.\n", num_sorteado);
        }

        printf("\nDeseja jogar novamente? \nAperte ENTER para continuar jogando ou digite sair + ENTER para sair: ");
        getchar(); // Limpa o buffer
        continuar = getchar(); 

    } while (continuar == '\n'); 

    printf("\nObrigado por jogar! Estarei te esperando para uma nova partida ^_^ \n");
    
    return 0;
}
