//Ketlyn Gomes de oliveira -- lista 1

///// exercicio 1
#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[100], curso[100];
    int idade, ano_nascimento;

    printf("=== PROGRAMA DE APRESENTAÇÃO ===\n");
    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu curso: ");
    scanf(" %99[^\n]", curso);

    ano_nascimento = 2025 - idade;

    printf("\n=== BEM VINDA ===\n");
    printf("Olá, %s\n", nome);
    printf("Você tem %d anos e estuda %s\n", idade, curso);
    printf("Você nasceu aproximadamente em %d\n", ano_nascimento);
    return 0;
}


/////// Exercicio 2
#include <stdio.h>
#include <stdlib.h>

int main() {
    float n1, n2, soma, sub, mul;

printf("Digite o 1° número: \n");
scanf("%f", &n1);
printf("Digite o 2° número: \n");
scanf("%f", &n2);

soma = n1 + n2;
sub = n1 - n2;
mul = n1 * n2;

printf("A soma dos números é: %.2f\n", soma);
printf("A subtração dos números é: %.2f\n", sub);
printf("A multiplicação dos números é: %.2f\n", mul);

if (n2 != 0) {
        printf("A divisão dos números é: %.2f\n", n1 / n2);
    } else {
        printf("Não e possivel dividir por zero.\n");
    }

    return 0;
}

///////exercicio 3 
#include <stdio.h>
#include <stdlib.h>

int main() {
    float cels, fahr, metros, km, libras, kg;  

    printf("\n===========\n");
    printf("Digite a temperatura em Celsius:");
    scanf("%f", &cels);
    fahr = (cels * 9/5) + 32;
    printf("A temperatura convertida em fahrenheit é : %.2f\n", fahr);
    //

    printf("\n===========\n");
    printf("Digite a distancia em metros: ");
    scanf("%f", &metros);
    km = metros/1000;
    printf("A distancia em quilômetros é: %.2f\n", km);
    
    //
    printf("\n===========\n");
    printf("Digite o peso em quilos(KG): ");
    scanf("%f", &kg);
    libras = kg * 2.2046;
    printf("O peso em libras é aproximadamente: %.2f\n", libras);

    return 0;
}

////// exercicio 4 
#include <stdio.h>
#include <stdlib.h>

int main() {
    float n1, n2, n3, n4, media;
    
    printf("Digite o 1° nota:");
    scanf("%f", &n1);
    //
    printf("Digite o 2° nota:");
    scanf("%f", &n2);
    //
    printf("Digite o 3° nota:");
    scanf("%f", &n3);
    //
    printf("Digite o 4° nota:");
    scanf("%f", &n4);

    media = (n1+n2+n3+n4) / 4;
    
    if (media >= 7.0)
        printf("Aprovado, media: %.2f\n", media);
    else
        printf("Reprovado, media: %.2f\n", media);

        return 0;
}
