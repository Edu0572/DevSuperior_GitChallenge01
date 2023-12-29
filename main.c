#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declarar vari�veis
    int numeroAlunos, iterador, contaletra;

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
    char estado [numeroAlunos][50];
    char sexo [numeroAlunos];

    //Fazer uso da estrutura de repeti��o for para dar entrada de dados, em cada elemento do vetor
    for(iterador = 1; iterador <= numeroAlunos; iterador++)
    {
        do
        {
            printf("\nDigite o nome do %io aluno: ", iterador);
            fseek(stdin,0,SEEK_END);//LIMPEZA DE BUFFER
            gets(nome[iterador]);
            contaletra = strlen(nome[iterador]);

            if(contaletra==0){
                printf("E OBRIGATORIO INFORMAR O NOME!!!\n");
            }
        }
        while(contaletra==0);

        printf("Informe a idade: ");
        scanf("%d", &idade[iterador]);

        do
        {
            printf("Informe o genero (M/F/O): ");
            fseek(stdin,0,SEEK_END);//LIMPEZA DE BUFFER
            scanf("%c", &genero[iterador]);
            if(genero[iterador]!='F'&&genero[iterador]!='f'&&genero[iterador]!='M'&&genero[iterador]!='m'&&genero[iterador]!='O'&&genero[iterador]!='o')
            {
                printf("Selecione um genero valido M(masculino), F(feminino) ou O (outros)\n");
            }
        }while(genero[iterador]!='F'&&genero[iterador]!='f'&&genero[iterador]!='M'&&genero[iterador]!='m'&&genero[iterador]!='O'&&genero[iterador]!='o');

        printf("Informe a cidade que o aluno mora: ");
        fseek(stdin,0,SEEK_END);//LIMPEZA DE BUFFER
        gets(localidade[iterador]);

        printf("Informe o estado: ");
        fseek(stdin,0,SEEK_END);//LIMPEZA DE BUFFER
        gets(estado[iterador]);

        printf("\n");

    }

    //Fazer uso da estrutura de repeti��o for para iterar por cada vetor e exibir o conte�do de cada elemento.
    printf("\nLista de Alunos Cadastrados para o Curso de Logica de Programacao\n");
    for(iterador = 1; iterador <= numeroAlunos; iterador++)
    {
        printf("Dados do %io aluno:\n", iterador);
        printf("Nome => %s\n", nome[iterador]);
        printf("Idade => %i\n", idade[iterador]);

        //criar uma vari�vel
        if(genero[iterador] == 'f' || genero[iterador] == 'F')
        {
            printf("Genero => Feminino\n");
        }else if(genero[iterador]=='m'|| genero[iterador]=='M')
        {
            printf("Genero => Masculino\n");
        }else
        {
            printf("Genero => Outros(nao definido)\n");
        }


        //printf("Genero => %c\n", genero[iterador]);
        printf("Cidade => %s\n", localidade[iterador]);
        printf("Estado => %s\n", estado[iterador]);
        printf("\n");
    }




    return 0;
}
