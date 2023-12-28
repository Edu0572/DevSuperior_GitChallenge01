#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declarar variáveis
    int numeroAlunos, iterador;

    //Fazer uso da estrutura de repetição do-while para garantir que o número máximo de alunos seja 10
    do
    {
        //Saída de mensagem e entrada de valor que determina o número de alunos para o curso de lógica
        printf("Informe o numero de alunos a ser cadastrado para o curso de Logica de Programacao (numero maximo de alunos deve ser 10): ");
        scanf("%i", &numeroAlunos);
        if(numeroAlunos <= 0)
        {
            printf("O numero de alunos nao pode ser maior do que zero!!!\n");
        }
        else if (numeroAlunos >10){
            printf("A quantidade maxima de alunos eh de 10 alunos!!!\n");
        }

    }while(numeroAlunos <= 0 || numeroAlunos > 10);


    //Declarar vetores relacionados a cada campo do cadastro do aluno
    char nome [numeroAlunos][50];
    int idade [numeroAlunos];
    char genero [numeroAlunos];
    char localidade[numeroAlunos][50];
    char sexo [numeroAlunos];



    return 0;
}
