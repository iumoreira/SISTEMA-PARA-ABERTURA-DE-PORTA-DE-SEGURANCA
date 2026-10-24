// SISTEMA PARA ABERTURA DE PORTA DE SEGURANÇA
// PROJETO 02 - Iury Moreira Lopes | 24/10/2026

#include <stdio.h>
#include <string.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    char user_name [30];
    printf("Quem está acessando o laboratório? ");
    fgets(user_name, 30, stdin);
    user_name[strcspn(user_name, "\n")] = '\0';

    int  id_credency = 0;
    printf("%s, digite o seu id do crachá: ", user_name);
    scanf(" %d", &id_credency);

    float lab_temperature = 0;
    printf("%s, digite a temperatura do laboratório: ", user_name);
    scanf(" %f", &lab_temperature);

    if(id_credency != 1024)
        printf("Acessso negado!\n");
    if(lab_temperature >= 35.5)
        printf("Acesso negado!\n");
    else if(id_credency == 1024 && lab_temperature < 35)
        printf("Bem vindo, %s.\n", user_name);

    return 0;
}