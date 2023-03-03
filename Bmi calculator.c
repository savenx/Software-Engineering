/******************************************************************************

                     Programa para calcular IMC do paciente

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int idade;
    char nome[30];
    float peso, altura, imc;
    
    printf("Nome do paciente: ");
    scanf("%s", nome);
    
    printf("Peso do paciente (utilize ponto para decimais): ");
    scanf("%f", &peso);

    printf("Altura do paciente (em metros, utilize ponto para decimais): ");
    scanf("%f", &altura);
    
     imc = peso/(pow(altura,2));
    
    printf("\n--------------------------------------");
    printf("\nNome do Paciente: %s", nome);
    printf("\nPeso: %.1f", peso);
    printf("\nAltura: %.2f", altura);
    printf("\nIMC: %.2f", imc);
    printf("\n---------------------------------------");
    
    if(imc < 17)
    {
        printf("\nPaciente muito abaixo do peso");
    }
    else
    {
        if(imc >= 17 && imc <= 18.4)
        {
            printf("\nPaciente abaixo do peso");
        }
        else
        {
            if(imc >= 18.5 && imc <= 24.9)
            {
                printf("\nPaciente com peso ideal");
            }
            else
            {
                if(imc >= 25 && imc <= 29.9)
                {
                    printf("\nPaciente acima do peso");
                }
                else
                {
                    if(imc >= 30 && imc <= 34.9)
                    {
                        printf("\nPaciente com Obesidade Grau 1");
                    }
                    else
                    {
                        if(imc >= 35 && imc <= 40)
                        {
                            printf("\nPaciente com Obesidade Grau 2");
                        }
                        else
                        {
                            if(imc >= 40)
                            {
                                printf("\nPaciente com Obesidade Mórbida");
                            }
                        }
                    }
                }
            }
        }
    }
    
    return 0;
}
