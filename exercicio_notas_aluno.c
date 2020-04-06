#include <stdio.h>
#include <stdlib.h>

int avaliaResultados(int pontosTotalAva, int pontosTotais);

int main()
{
  int notaPBimestre, notaSBimestre, pontosTotalAva, notaProvas, pontosTotais;
  //-------Pontos B1--------
  printf("Insira os pontos da prova B1\n");
  scanf("%d", &notaPBimestre);
  if(notaPBimestre > 1000){
    printf("Insira um valor entre 0 e 1000 pontos\n");
    scanf("%d", &notaPBimestre);
  }
  //-------Pontos B2--------
  printf("Insira os pontos da prova B2\n");
  scanf("%d", &notaSBimestre);
  if(notaSBimestre > 4000){
    printf("Insira um valor entre 0 e 4000 pontos\n");
    scanf("%d", &notaSBimestre);
  }
  //-------Pontos AVA--------
  printf("Insira os pontos do AVA, isso já inclui as atividades em sala de aula, atividades transversais e atividade virtual\n");
  scanf("%d", &pontosTotalAva);
  if(pontosTotalAva > 9000){
    printf("Entre com um valor entre 0 e 9000 pontos\n");
    scanf("%d", &pontosTotalAva);
  }

  notaProvas = notaPBimestre + notaSBimestre;
  pontosTotais = notaProvas + pontosTotalAva;

  if (notaProvas >= 1500){
    printf("Aluno obteve %d pontos nas provas B1 e B2.\n", notaProvas);
    avaliaResultados(pontosTotalAva, pontosTotais);
  } else {
    printf("Aluno obteve %d pontos nas provas B1 e B2,\n", notaProvas);
    printf("Aluno obteve %d pontos no AVA.\n", pontosTotalAva);
    printf("Aluno obteve %d pontos porém não obteve pontuação minina (1500 pontos) nas provas B1 e B2,\n", pontosTotais);
    printf("Aluno de exame");
    return 0;
  }
  return 0;
}

//Função separada para dar mais visual no codigo
int avaliaResultados(int pontosTotalAva, int pontosTotais){
  if(pontosTotalAva >= 6000){
      printf("Aluno obteve %d pontos no AVA.\n", pontosTotalAva);
      printf("Aluno obteve um total de %d pontos.\n", pontosTotais);
      printf("Aluno aprovado");
      return 0;
    } else {
      printf("Aluno obteve %d pontos no AVA,\n", pontosTotalAva);
      printf("Aluno obteve um total de %d pontos.\n", pontosTotais);
      printf("Aluno reprovado por não ter pontuação minima (6000 pontos) no AVA");
      return 0;
    }  
    return 0;
}
