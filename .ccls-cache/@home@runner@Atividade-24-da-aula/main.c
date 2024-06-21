// Peça ao usuário para inserir um nome de usuário e senha. Verifique se o nome de usuário está correto e, em seguida, se a senha corresponde ao usuário fornecido. Se ambos estiverem OK, retornar como “login realizado”. Senão, “falha no login”

#include <stdio.h>

int main() {
    char username[50];
    char password[50];

    // Define o nome de usuário e senha corretos
    char usernameCorreto[] = "carlos";
    char passwordCorreto[] = "123";

    // Solicita ao usuário que insira o nome de usuário e a senha
    printf("Insira o nome de usuario: ");
    scanf("%s", username);

    printf("Insira a senha: ");
    scanf("%s", password);

    // Verifica se o nome de usuário está correto e se a senha corresponde
    if (strcmp(username, usernameCorreto) == 0 && strcmp(password, passwordCorreto) == 0) {
        printf("Login realizado.\n");
    } else {
        printf("Falha no login.\n");
    }

    return 0;
}