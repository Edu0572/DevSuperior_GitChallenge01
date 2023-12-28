#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declarar vari�veis
    int numeroAlunos, iterador;

    //Fazer uso da estrutura de repeti��o do-while para garantir que o n�mero m�ximo de alunos seja 10
    do
    {
        //Sa�da de mensagem e entrada de valor que determina o n�mero de alunos para o curso de l�gica
        printf("Informe o numero de alunos a ser cadastrado para o curso de Logica de Programacao (numero maximo de alunos deve ser 10): ");
        scanf("%i", &numeroAlunos);
        if(numeroAlunos <= 0)
        {
            printf("O numero de alunos nao pode ser maior do que zero!!!\n");
        }
        else if (numeroAlunos >10)
        {
            printf("A quantidade maxima de alunos eh de 10 alunos!!!\n");
        }

    }
    while(numeroAlunos <= 0 || numeroAlunos > 10);


    //Declarar vetores relacionados a cada campo do cadastro do aluno
    char nome [numeroAlunos][50];
    int idade [numeroAlunos];
    char genero [numeroAlunos];
    char localidade[numeroAlunos][50];
    char estado [numeroAlunos][2];
    char sexo [numeroAlunos];

    //Fazer uso da estrutura de repeti��o for para dar entrada de dados, em cada elemento do vetor
    for(iterador = 1; iterador <= numeroAlunos; iterador++)
    {
        printf("Digite o nome do %io aluno: ", iterador);
        fseek(stdin,0,SEEK_END);//LIMPEZA DE BUFFER
        gets(nome[iterador]);

        printf("Informe a idade: ");
        scanf("%d", &idade[iterador]);

        printf("Informe o genero (M/F/O): ");
        fseek(stdin,0,SEEK_END);//LIMPEZA DE BUFFER
        scanf("%c", &genero[numeroAlunos]);

        printf("Informe a cidade que o aluno mora:");
        fseek(stdin,0,SEEK_END);//LIMPEZA DE BUFFER
        gets(localidade[iterador]);

        printf("Informe o estado: ");
        fseek(stdin,0,SEEK_END);//LIMPEZA DE BUFFER
        gets(estado[iterador]);

        printf("Informe o curso que o aluno esta matriculado: ");
        fseek(stdin,0,SEEK_END);//LIMPEZA DE BUFFER

    }



    return 0;
}
