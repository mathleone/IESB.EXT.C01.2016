#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

main()
{
      int retorno=0, mf=0, of=0, delaytime=5, x, y, j, nx=0, ny=0, m, t, i;
      float coef[5], euler=2.718281, base;
      FILE *arquivo, *grafico;
      arquivo = fopen("Pares Ordenados.txt","w+");
      grafico = fopen("grafico.pbm","w+"); 
      //retorno = início, mf = menu de fun\x87ões, of = opera\x87ões com fun\x87ões, t = menu de trigonom\x82tricas
      printf("\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\n");
      printf("\xB0 Bem-Vindo \x85 Calculadora Grafica \xB0\n");
      printf("\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0 \xE3-K-2 \xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\n");
      printf("\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0 version 1.0\xE1 \xB0\n");
      printf("\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\n");
      printf("Um oferecimento: \n\t\t   T-P-M Enterprise\n\n\t\t\t   Thais\n\t\t\t   Pa\x87oca\n\t\t\t   Mathe\x81xx");
      printf("\n\n\nO programa est\xA0 iniciando, aguarde:");
      printf("\n\t\t\t Loading");
      printf(".");

      //Fim do menu principal   
      while (retorno==0)
      {
          retorno=2;  
          while ( mf<1 || mf>5 )
          {
              printf("\n   ## Para iniciar, escolha a fun\x87\x61o desejada ## \n\t1) Fun\x87oes Polinomiais. \n\t2) Fun\x87\x61o Modular. \n\t3) Fun\x87\x61o Exponencial. \n\t4) Fun\x87\x61o Hiperb\xa2lica. \n\t5) Fun\x87oes Trigonom\x82tricas.\n\n\n");
              scanf("%d", &mf);
              if (mf<1 || mf>6)
              {
                 printf("\n   \xa9\xa9' Valeu a tentativa, mas, por favor, digite um n\xa3mero v\xa0lido.\n");
              }
          }
          //Opcao 1 - Fun\x87ões Polinomiais
          if (mf==1)
          {
              mf=0;
              while ( of<1 || of>4 )
              {       
                     printf("Digite a: ");
                     scanf("%f", &coef[1]);
                     printf("Digite b: ");
                     scanf("%f", &coef[2]);
                     printf("Digite c: ");
                     scanf("%f", &coef[3]);
                     printf("Digite d: ");
                     scanf("%f", &coef[4]);
                     printf("Digite e: ");
                     scanf("%f", &coef[5]);
                     printf("\nA equacao digitada \x82 y = %1.0fx^4 + %1.0fx^3 + %1.0fx^2 + %1.0fx + %1.0f", coef[1], coef[2], coef[3], coef[4], coef[5]);
                     printf("\nEscolha a opcao desejada:\n1) Calcular a derivada da funcao\n2) Calcular a integral da funcao\n3) Listar pares ordenados\n4) Esbocar o grafico da funcao \n\nQualquer outro n\xa3mero para alterar os coeficientes da funcao\n\nAtencao! Coeficientes muito grandes podem gerar curvas fora do limite do grafico\n");
                     scanf("%d", &of);
              }
              if (of==1)
              {
                  of=0;
                  printf("\n\nA derivada de (y = %1.0fx^4 + %1.0fx^3 + %1.0fx^2 + %1.0fx + %1.0f) \x82:\n\n\ty = %1.0fx^3 + %1.0fx^2 + %1.0fx + %1.0f", coef[1], coef[2], coef[3], coef[4], coef[5], 4*coef[1], 3*coef[2], 2*coef[3], coef[4]);
                  fprintf(arquivo, "\n\nA derivada de (y = %1.0fx^4 + %1.0fx^3 + %1.0fx^2 + %1.0fx + %1.0f) \x82:\n\n\ty = %1.0fx^3 + %1.0fx^2 + %1.0fx + %1.0f", coef[1], coef[2], coef[3], coef[4], coef[5], 4*coef[1], 3*coef[2], 2*coef[3], coef[4], coef[5]);
                  printf("\n\nDigite 0 para voltar ao menu principal ou qualquer outra tecla para sair: ");
                  scanf("%d", &retorno);
              }
              if (of==2)
              {
                  of=0;
                  printf("\n\nA integral \x9f(y= %1.0fx^4 + %1.0fx^3 + %1.0fx^2 + %1.0fx + %1.0f) \x82:\n\n\ty = (%1.0f/5)x^5 + (%1.0f/4)x^4 + (%1.0f/3)x^3 + (%1.0f/2)x^2 + %1.0fx + k\n\n\tk \x82 uma constante arbitr\xa0ria", coef[1], coef[2], coef[3], coef[4], coef[5], coef[1], coef[2], coef[3], coef[4], coef[5]);
                  fprintf(arquivo, "\n\nA integral \x9f(y= %1.0fx^4 + %1.0fx^3 + %1.0fx^2 + %1.0fx + %1.0f) \x82:\n\n\ty = (%1.0f/5)x^5 + (%1.0f/4)x^4 + (%1.0f/3)x^3 + (%1.0f/2)x^2 + %1.0fx + k\n\n\tk \x82 uma constante arbitr\xa0ria", coef[1], coef[2], coef[3], coef[4], coef[5], coef[1], coef[2], coef[3], coef[4], coef[5]);
                  printf("\n\nDigite 0 para voltar ao menu principal ou qualquer outra tecla para sair: ");
                  scanf("%d", &retorno);
              }
              if (of==3)
              { 
                  of=0;      
                  printf("\nPares Ordenados da funcao y = %1.1fx^4 + %1.1fx^3 + %1.1fx^2 + %1.1fx + %1.1f\n", coef[1], coef[2], coef[3], coef[4], coef[5]);
                  fprintf(arquivo, "\nPares Ordenados da funcao y = %1.0fx^4 + %1.0fx^3 + %1.0fx^2 + %1.0fx + %1.0f\n",coef[1], coef[2], coef[3], coef[4], coef[5]);
                  for (x=-15;x<16 ;x++)
                  {
                      y=(coef[1]*pow(x,4))+(coef[2]*pow(x,3))+(coef[3]*pow(x,2))+(coef[4]*x)+coef[5];
                      printf("(%d , %d)\n", x, y);
                      fprintf(arquivo, "(%d,%d)\n", x, y);
                  }
                  printf("\nDigite 0 para voltar ao menu principal ou qualquer outra tecla para sair: ");
                  scanf("%d", &retorno);
              }
              if (of==4)
              {
                  of=0;      
                  for (i=12;i>-12;i--)
                  {
                  printf("\n");
                  for (j=-39;j<39;j++)
                  {
                    nx=j;
                    ny=(coef[1]*pow(nx,4))+(coef[2]*pow(nx,3))+(coef[3]*pow(nx,2))+(coef[4]*nx)+coef[5];
                    if((i!=ny || j!=nx) && i!=0 && j!=0) {printf(" ");fprintf(grafico, " ");}
                    if((i!=ny || j!=nx) && (i==0 && j!=0 || i!=0 && j==0)) {printf("\xC5");fprintf(grafico,"\xC5");}
                    if(i==0 && j==0 && (ny!=0||nx!=0)) {printf("\xC5");fprintf(grafico, "\xC5");}
                    if(i==ny&&j==nx) {printf("\xDB");fprintf(grafico, "\xDB");}
                  }
              }
              printf("\nDigite 0 para voltar ao menu principal ou qualquer outra tecla para sair: ");
              scanf("%d", &retorno);
              }
          }
          //Opcao 2 - Fun\x87ões Modulares
          if (mf==2)
          {
              mf=0;
              while ( of<1 || of>4 )
              {       
                     printf("Voce escolheu Funcao Modular, do tipo y = c*|ax + b| + d\n");
                     printf("Digite a: ");
                     scanf("%f", &coef[1]);
                     printf("Digite b: ");
                     scanf("%f", &coef[2]);
                     printf("Digite c: ");
                     scanf("%f", &coef[3]);
                     printf("Digite d: ");
                     scanf("%f", &coef[4]);
                     printf("\nA equacao digitada \x82 y = %1.0f*|%1.0fx + %1.0f| + %1.0f", coef[3], coef[1], coef[2], coef[4]);
                     printf("\nEscolha a opcao desejada:\n1) Listar pares ordenados\n2) Esbocar o grafico da funcao \n\nQualquer outro n\xa3mero para alterar os coeficientes da funcao\n\nAtencao! Coeficientes muito grandes podem gerar curvas fora do limite do grafico\n");
                     scanf("%d", &of);
              }
              if (of==1)
              {
                  of=0;   
                  printf("\nPares Ordenados da funcao y = %1.0f*|%1.0fx + %1.0f| + %1.0f", coef[3], coef[1], coef[2], coef[4]);   
                  fprintf(arquivo, "\nPares Ordenados da funcao y = %1.0f*|%1.0fx + %1.0f| + %1.0f", coef[3], coef[1], coef[2], coef[4]);   
                  for (x=-15;x<16 ;x++)
                  {
                        if (x<0)
                        {
                           m=x*(-1);
                           y = coef[3]*(coef[1]*m + coef[2]) + coef[4];
                        }
                        
                        if (x>=0)
                        {
                          y = coef[3]*(coef[1]*x + coef[2]) + coef[4];
                        }
                        
                        printf("(%1.1f , %1.1f)\n", x, y);
                        fprintf(arquivo, "(%1.1f , %1.1f)\n", x, y);
                  }
                  printf("\nDigite 0 para voltar ao menu principal ou qualquer outra tecla para sair: ");
                  scanf("%d", &retorno);
              }
              if (of==2)
              { 
                  of=0;      
                  for (i=12;i>-12;i--)
                  {
                      printf("\n");
                      for (j=-39;j<39;j++)
                      {
                          nx=j;
                          if (nx<0)
                          {
                              m=nx*(-1);
                              ny = coef[3]*(coef[1]*m + coef[2]) + coef[4];
                          }
                          if (nx>=0)
                          {
                             ny = coef[3]*(coef[1]*nx + coef[2]) + coef[4];
                          }  
                          if((i!=ny || j!=nx) && i!=0 && j!=0) {printf(" ");fprintf(grafico," ");}
                          if((i!=ny || j!=nx) && (i==0 && j!=0 || i!=0 && j==0)) {printf("\xC5");fprintf(grafico,"\xC5");}
                          if(i==0 && j==0 && (ny!=0||nx!=0)) {printf("\xC5");fprintf(grafico, "\xC5");}
                          if(i==ny&&j==nx) {printf("\xDB");fprintf(grafico, "\xDB");}
                      }
                  }
                  printf("\nDigite 0 para voltar ao menu principal ou qualquer outra tecla para sair: ");
                  scanf("%d", &retorno);
                  }
          }
          //Opcao 3 - Fun\x87ões Exponenciais
          if (mf==3)
          {
              mf=0;
              while ( of<1 || of>4 )
              {      
                     printf("Voce escolheu Funcao Exponencial, do tipo y = a^x + b .\n");
                     printf("Digite a.. Se desejar expoente natural, digite 0: ");
                     scanf("%f", &coef[1]);
                     if (coef[1]==0)
                     {
                             coef[1] = euler;
                     }
                     printf("Digite b: ");
                     scanf("%f", &coef[2]);
                     printf("\nA equacao digitada \x82 y = %1.0f^x + %1.0f", coef[1], coef[2]);
                     printf("\nEscolha a opcao desejada:\n1) Listar pares ordenados\n2) Esbocar o grafico da funcao \n\nQualquer outro n\xa3mero para alterar os coeficientes da funcao\n\nAtencao! Coeficientes muito grandes podem gerar curvas fora do limite do grafico\n");
                     scanf("%d", &of);
              }
              if (of==1)
              {
                  of=0;      
                  printf("Pares Ordenados da funcao y = %1.1f^x + %1.1f :\n\n", coef[1], coef[2]);
                  fprintf(arquivo, "Pares Ordenados da funcao y = %1.1f^x + %1.1f :\n\n", coef[1], coef[2]);
                  for (x=-15;x<16;x++)
                      {
                             y = pow(coef[1], x) + coef[2];
                             printf("(%d , %d)\n", x, y);
                             fprintf(arquivo, "(%d , %d)\n", x, y);
                      }
                  printf("\nDigite 0 para voltar ao menu principal ou qualquer outra tecla para sair: ");
                  scanf("%d", &retorno);
              }
              if (of==2)
              { 
                  of=0;      
                  for (i=12;i>-12;i--)
                  {
                      printf("\n");
                      for (j=-39;j<39;j++)
                      {
                          nx=j;
                          ny = pow(coef[1], nx) + coef[2];  
                          if((i!=ny || j!=nx) && i!=0 && j!=0) {printf(" ");fprintf(grafico," ");}
                          if((i!=ny || j!=nx) && (i==0 && j!=0 || i!=0 && j==0)) {printf("\xC5");fprintf(grafico, "\xC5");}
                          if(i==0 && j==0 && (ny!=0||nx!=0)) {printf("\xC5");fprintf(grafico, "\xC5");}
                          if(i==ny&&j==nx) {printf("\xDB");fprintf(grafico, "\xDB");}
                      }
                  }
                  printf("\nDigite 0 para voltar ao menu principal ou qualquer outra tecla para sair: ");    
                  scanf("%d", &retorno);
              }
          }
          //Opcao 4 - Funcao Hiperbólica
          if (mf==4)
          {
              mf=0;
              while ( of<1 || of>4 )
              {       
                     printf("Voce escolheu Funcao Hiperbolica, do tipo y = a/(b + x) + c .\n");
                     printf("Digite a: ");
                     scanf("%f", &coef[1]);
                     printf("Digite b: ");
                     scanf("%f", &coef[2]);
                     printf("Digite c: ");
                     scanf("%f", &coef[3]);
                     printf("\nA equacao digitada \x82 y = %1.0f/(%1.0 + x) + %1.0f", coef[1], coef[2], coef[3]);
                     printf("\nEscolha a opcao desejada:\n1) Listar pares ordenados\n2) Esbocar o grafico da funcao \n\nQualquer outro n\xa3mero para alterar os coeficientes da funcao\n\nAtencao! Coeficientes muito grandes podem gerar curvas fora do limite do grafico\n");
                     scanf("%d", &of);
              }
              if (of==1)
              {
                  of=0;      
                  printf("Pares Ordenados da funcao y = %1.0f/(%1.0 + x) + %1.0f", coef[1], coef[2], coef[3]);
                  fprintf(arquivo, "Pares Ordenados da funcao y = %1.0f/(%1.0 + x) + %1.0f", coef[1], coef[2], coef[3]);
                  for (x=-15;x<16;x++)
                  {
                         y = coef[1]/(coef[2] + x) + coef[3];
                         printf("(%d , %d)\n", x, y);
                         fprintf(arquivo, "(%d , %d)\n", x, y);
                  }
                  printf("\nDigite 0 para voltar ao menu principal ou qualquer outra tecla para sair: ");
                  scanf("%d", &retorno);
              }
              if (of==2)
              { 
                  of=0;      
                  for (i=12;i>-12;i--)
                  {
                      printf("\n");
                      for (j=-39;j<39;j++)
                      {
                          nx=j;
                          ny = coef[1]/(coef[2] + nx) + coef[3];  
                          if((i!=ny || j!=nx) && i!=0 && j!=0) {printf(" ");fprintf(grafico, " ");}
                          if((i!=ny || j!=nx) && (i==0 && j!=0 || i!=0 && j==0)) {printf("\xC5");fprintf(grafico, "\xC5");}
                          if(i==0 && j==0 && (ny!=0||nx!=0)) {printf("\xC5");fprintf(grafico, "\xC5");}
                          if(i==ny&&j==nx) {printf("\xDB");fprintf(grafico, "\xDB");}
                      }
                  }
                  printf("\nDigite 0 para voltar ao menu principal ou qualquer outra tecla para sair: ");    
                  scanf("%d", &retorno);
              }
          }
          //Opcao 5 - Fun\x87ões Trigonom\x82tricas
          if (mf==5)
          {
              mf=0;
              while ( of<1 || of>4 )
              {      
                     while (t<1 || t>3)
                     {
                         printf("Voce escolheu Funcao Trigonom\x82trica.\nEscolha o tipo:\n1)Seno _ y = a*sin(x+b) + c.\n2)Cosseno _ y = a*cos(x+b) + c. \n3)Tangente _ y = a*tan(x+b) + c.\n");
                         scanf("%d", &t);
                     }
                     if (t==1)
                     {
                         printf("Voce escolheu Funcao Seno, do tipo y = a . sen(x + b) + c .\n");
                         printf("Digite a: ");
                         scanf("%f", &coef[1]);
                         printf("Digite b: ");
                         scanf("%f", &coef[2]);
                         printf("Digite c: ");
                         scanf("%f", &coef[3]);
                     }
                    if (t==2)
                    {
                         printf("Voce escolheu Funcao Cosseno, do tipo y = a . cos(x + b) + c .\n");
                         printf("Digite a: ");
                         scanf("%f", &coef[1]);
                         printf("Digite b: ");
                         scanf("%f", &coef[2]);
                         printf("Digite c: ");
                         scanf("%f", &coef[3]);
                         
                    }
                    if (t==3)
                    {
                         printf("Voce escolheu Funcao Tangente, do tipo y = a . tan(x + b) + c .\n");
                         printf("Digite a: ");
                         scanf("%f", &coef[1]);
                         printf("Digite b: ");
                         scanf("%f", &coef[2]);
                         printf("Digite c: ");
                         scanf("%f", &coef[3]);
                         
                     }
                     printf("\nEscolha a opcao desejada:\n1) Calcular a derivada da funcao\n2) Calcular a integral da funcao\n3) Listar pares ordenados\n4) Esbocar o grafico da funcao \n\nQualquer outro n\xa3mero para alterar os coeficientes da funcao\n\nAtencao! Coeficientes muito grandes podem gerar curvas fora do limite do grafico\n");
                     scanf("%d", &of);
              }
              if (of==1)
              {
                  of=0;
                  if (t==1)
                    {
                         of=0;
                         t=0;
                         printf("\n\nA derivada de (y = %1.1f . sen(x + %1.1f) + %1.1f) \x82:\n\n\ty = %1.1f.cos(x + %1.1f)", coef[1], coef[2], coef[3], coef[1], coef[2]);
                         fprintf(arquivo, "\n\nA derivada de (y = %1.1f . sen(x + %1.1f) + %1.1f) \x82:\n\n\ty = %1.1f.cos(x + %1.1f)", coef[1], coef[2], coef[3], coef[1], coef[2]);
                    }
                    if (t==2)
                    {
                         t=0;
                         of=0;
                         printf("\n\nA derivada de (y = %1.1f . sen(x + %1.1f) + %1.1f) \x82:\n\n\ty = %1.1f. -sen(x + %1.1f)", coef[1], coef[2], coef[3], coef[1], coef[2]);
                         fprintf(arquivo, "\n\nA derivada de (y = %1.1f . sen(x + %1.1f) + %1.1f) \x82:\n\n\ty = %1.1f. -sen(x + %1.1f)", coef[1], coef[2], coef[3], coef[1], coef[2]);
                    }
                    if (t==3)
                    {
                         t=0;
                         of=0;
                         printf("\n\nA derivada de (y = %1.1f . sen(x + %1.1f) + %1.1f) \x82:\n\n\ty = %1.1f.sec(x + %1.1f)^2", coef[1], coef[2], coef[3], coef[1], coef[2]);
                         fprintf(arquivo, "\n\nA derivada de (y = %1.1f . sen(x + %1.1f) + %1.1f) \x82:\n\n\ty = %1.1f.sec(x + %1.1f)^2", coef[1], coef[2], coef[3], coef[1], coef[2]);
                    }  
                    printf("\nDigite 0 para voltar ao menu principal ou qualquer outra tecla para sair: ");    
                    scanf("%d", &retorno);
              }
              if (of==2)
              {
                  of=0;
                  if (t==1)
                    {
                         of=0;
                         t=0;
                         printf("\n\nA integral \x9f(y = %1.1f . sen(x + %1.1f) + %1.1f) \x82:\n\n\ty = %1.1f.-cos(x + %1.1f) + %1.1fx + k\n\n\tk \x82 uma constante arbitr\xa0ria", coef[1], coef[2], coef[3], coef[1], coef[2], coef[3]);
                         fprintf(arquivo, "\n\nA integral \x9f(y = %1.1f . sen(x + %1.1f) + %1.1f) \x82:\n\n\ty = %1.1f.-cos(x + %1.1f) + %1.1fx + k\n\n\tk \x82 uma constante arbitr\xa0ria", coef[1], coef[2], coef[3], coef[1], coef[2], coef[3]);
                    }
                    if (t==2)
                    {
                         t=0;
                         of=0;
                         printf("\n\nA integral \x9f(y = %1.1f . sen(x + %1.1f) + %1.1f) \x82:\n\n\ty = %1.1f. sen(x + %1.1f) + %1.1fx + k\n\n\tk \x82 uma constante arbitr\xa0ria", coef[1], coef[2], coef[3], coef[1], coef[2], coef[3]);
                         fprintf(arquivo, "\n\nA integral \x9f(y = %1.1f . sen(x + %1.1f) + %1.1f) \x82:\n\n\ty = %1.1f. sen(x + %1.1f) + %1.1fx + k\n\n\tk \x82 uma constante arbitr\xa0ria", coef[1], coef[2], coef[3], coef[1], coef[2], coef[3]);
                    }
                    if (t==3)
                    {
                         t=0;
                         of=0;
                         printf("\n\nA integral de (y = %1.1f . sen(x + %1.1f) + %1.1f) \x82:\n\n\ty = %1.0f(ln|sec(x + %1.0f)|) + %1.1fx + k\n\n\tk \x82 uma constante arbitr\xa0ria", coef[1], coef[2], coef[3], coef[1], coef[2], coef[3]);
                         fprintf(arquivo, "\n\nA integral de (y = %1.1f . sen(x + %1.1f) + %1.1f) \x82:\n\n\ty = %1.0f(ln|sec(x + %1.0f)|) + %1.1fx + k\n\n\tk \x82 uma constante arbitr\xa0ria", coef[1], coef[2], coef[3], coef[1], coef[2], coef[3]);
                    }  
                    printf("\nDigite 0 para voltar ao menu principal ou qualquer outra tecla para sair: ");    
                    scanf("%d", &retorno);
              }
              if (of==3)
              {
                 of=0;      
                 if (t==1)
                 {
                     t=0;
                     printf("Pares Ordenados da funcao y = %1.1f . sen(x + %1.1f) + %1.1f:\n\n", coef[1], coef[2], coef[3]);
                     fprintf(arquivo, "Pares Ordenados da funcao y = %1.1f . sen(x + %1.1f) + %1.1f:\n\n", coef[1], coef[2], coef[3]);
                     for (x=-15;x<16 ;x++)
                     {
                         y=coef[1]*sin(x + coef[2])+coef[3];
                         printf("(%1.1f , %1.2f)\n", x, y);
                         fprintf(arquivo, "(%1.1f , %1.2f)\n", x, y);
                     }
                 }
                 printf("\nDigite 0 para voltar ao menu principal ou qualquer outra tecla para sair: ");    
                 scanf("%d", &retorno);
                 if (t==2)
                 {
                     t=0;
                     printf("Pares Ordenados da funcao y = %1.1f . cos(x + %1.1f) + %1.1f:\n\n", coef[1], coef[2], coef[3]);
                     fprintf(arquivo, "Pares Ordenados da funcao y = %1.1f . cos(x + %1.1f) + %1.1f:\n\n", coef[1], coef[2], coef[3]);
                     for (x=-15;x<16 ;x++)
                     {
                         y=coef[1]*cos(x + coef[2])+coef[3];
                         printf("(%1.1f , %1.2f)\n", x, y);
                         fprintf(arquivo, "(%1.1f , %1.2f)\n", x, y);
                     }
                 }
                 printf("\nDigite 0 para voltar ao menu principal ou qualquer outra tecla para sair: ");    
                 scanf("%d", &retorno);
                 if (t==3)
                 {
                     t=0;
                     printf("Pares Ordenados da funcao y = %1.1f . tan(x + %1.1f) + %1.1f:\n\n", coef[1], coef[2], coef[3]);
                     fprintf(arquivo, "Pares Ordenados da funcao y = %1.1f . tan(x + %1.1f) + %1.1f:\n\n", coef[1], coef[2], coef[3]);
                     for (x=-15;x<16 ;x++)
                     {
                         y=coef[1]*tan(x + coef[2])+coef[3];
                         printf("(%1.1f , %1.2f)\n", x, y);
                         fprintf(arquivo, "(%1.1f , %1.2f)\n", x, y);
                     }
                 }
                 printf("\nDigite 0 para voltar ao menu principal ou qualquer outra tecla para sair: ");    
                 scanf("%d", &retorno);
              }
              if (of==4)
              { 
                  of=0;      
                  if (t==1)
                  {
                      t=0;
                      for (i=12;i>-12;i--)
                      {
                          printf("\n");
                          for (j=-39;j<39;j++)
                          {
                              nx=j;
                              ny=coef[1]*sin(nx + coef[2])+coef[3];;  
                              if((i!=ny || j!=nx) && i!=0 && j!=0) {printf(" ");fprintf(grafico, " ");}
                              if((i!=ny || j!=nx) && (i==0 && j!=0 || i!=0 && j==0)) {printf("\xC5");fprintf(grafico, "\xC5");}
                              if(i==0 && j==0 && (ny!=0||nx!=0)) {printf("\xC5");fprintf(grafico, "\xC5");}
                              if(i==ny&&j==nx) {printf("\xfe");fprintf(grafico, "\xfe");}
                          }
                      }
                  }
                  if (t==2)
                  {   
                      t=0; 
                      for (i=12;i>-12;i--)
                      {
                          printf("\n");
                          for (j=-39;j<39;j++)
                          {
                              nx=j;
                              ny=coef[1]*cos(nx + coef[2])+coef[3];;  
                              if((i!=ny || j!=nx) && i!=0 && j!=0) {printf(" ");fprintf(grafico, " ");}
                              if((i!=ny || j!=nx) && (i==0 && j!=0 || i!=0 && j==0)) {printf("\xC5");fprintf(grafico, "\xC5");}
                              if(i==0 && j==0 && (ny!=0||nx!=0)) {printf("\xC5");fprintf(grafico, "\xC5");}
                              if(i==ny&&j==nx) {printf("\xfe");fprintf(grafico, "\xfe");}
                          }
                      }
                  }    
                  if (t==3)
                  {
                     t=0;
                     for (i=12;i>-12;i--)
                     {
                          printf("\n");
                          for (j=-39;j<39;j++)
                          {
                              nx=j;
                              ny=coef[1]*(tan(nx + coef[2]))+coef[3];
                              if((i!=ny || j!=nx) && i!=0 && j!=0) {printf(" ");fprintf(grafico, " ");}
                              if((i!=ny || j!=nx) && (i==0 && j!=0 || i!=0 && j==0)) {printf("\xC5");fprintf(grafico, "\xC5");}
                              if(i==0 && j==0 && (ny!=0||nx!=0)) {printf("\xC5");fprintf(grafico, "\xC5");}
                              if(i==ny&&j==nx) {printf("\xfe");fprintf(grafico, "\xfe");}
                          }
                     }
                  }
                  printf("\nDigite 0 para voltar ao menu principal ou qualquer outra tecla para sair: ");    
                  scanf("%d", &retorno);
              }
          }
      }//while
      fclose(arquivo);
}//main

