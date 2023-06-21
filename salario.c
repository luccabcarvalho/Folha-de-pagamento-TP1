#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


    void lerFuncionario(char *funcao_funcionario, int *anos_experiencia, int *horas_contratadas, int *horas_trabalhadas)
    {
        printf("\n\nFun��es presentes na empresa: \nP - Programador \nA - Analista \nG- Gerente");

        printf("\n\nInsira a fun��o do funcion�rio: ");
        fflush(stdin);
        scanf("%c", funcao_funcionario);

        while(*funcao_funcionario != 'a' && *funcao_funcionario != 'A' && *funcao_funcionario != 'g' && *funcao_funcionario != 'G' && *funcao_funcionario != 'p' && *funcao_funcionario != 'P')
        {
            printf("ERRO. \nInsira uma op��o v�lida: ");
            fflush(stdin);
            scanf("%c", funcao_funcionario);
        }


        printf("\n\nInsira quantos anos de experi�ncia tem o funcion�rio: ");
        scanf("%d", anos_experiencia);

        while (*anos_experiencia <= 0)
        {
            printf("ERRO. \nInsira uma op��o v�lida: ");
            scanf("%d", anos_experiencia);
        }


        printf("\n\nInsira por quantas horas o funcion�rio foi contratado no m�s: ");
        scanf("%d", horas_contratadas);

        while (*horas_contratadas <= 0)
        {
            printf("ERRO. \nInsira uma op��o v�lida: ");
            scanf("%d", horas_contratadas);
        }


        printf("\n\nInsira quantas horas o funcion�rio trabalhou no m�s: ");
        scanf("%d", horas_trabalhadas);

        while (*horas_trabalhadas <= 0)
        {
            printf("ERRO. \nInsira uma op��o v�lida: ");
            scanf("%d", horas_trabalhadas);
        }
    }

    float calcularSalario (char funcao_funcionario, int anos_experiencia, int horas_contratadas, int horas_trabalhadas, float *horas_excedentes, float *salario_bruto, float *desconto_inss, float *desconto_ir)
    {

        float salario_liquido;

        *horas_excedentes = horas_trabalhadas - horas_contratadas;

        if (funcao_funcionario == 'p' || funcao_funcionario == 'P')
        {

            if(anos_experiencia <= 2)
            {
                if (*horas_excedentes > 0 && *horas_excedentes <= 13)
                    *salario_bruto = (25 * horas_contratadas) + (((25 * *horas_excedentes) * 123)/ 100);

                else if (*horas_excedentes > 13 && *horas_excedentes <= 22)
                    *salario_bruto = (25 * horas_contratadas) + (((25 * *horas_excedentes) * 137)/ 100);

                else if (*horas_excedentes > 22)
                    *salario_bruto = (25 * horas_contratadas) + (((25 * *horas_excedentes) * 156)/ 100);

                else
                    *salario_bruto = (25 * horas_trabalhadas);
            }

            else if (anos_experiencia >= 3 && anos_experiencia <= 5)
            {
                if (*horas_excedentes > 0 && *horas_excedentes <= 13)
                    *salario_bruto = (30 * horas_contratadas) + (((30 * *horas_excedentes) * 123)/ 100);

                else if (*horas_excedentes > 13 && *horas_excedentes <= 22)
                    *salario_bruto = (30 * horas_contratadas) + (((30 * *horas_excedentes) * 137)/ 100);

                else if (*horas_excedentes > 22)
                    *salario_bruto = (30 * horas_contratadas) + (((30 * *horas_excedentes) * 156)/ 100);

                else
                    *salario_bruto = (30 * horas_trabalhadas);

            }

            else if (anos_experiencia > 5)
            {
                if (*horas_excedentes > 0 && *horas_excedentes <= 13)
                    *salario_bruto = (38 * horas_contratadas) + (((38 * *horas_excedentes) * 123)/ 100);

                else if (*horas_excedentes > 13 && *horas_excedentes <= 22)
                    *salario_bruto = (38 * horas_contratadas) + (((38 * *horas_excedentes) * 137)/ 100);

                else if (*horas_excedentes > 22)
                    *salario_bruto = (38 * horas_contratadas) + (((38 * *horas_excedentes) * 156)/ 100);

                else
                    *salario_bruto = (38 * horas_trabalhadas);

            }

        }


        else if (funcao_funcionario == 'a' || funcao_funcionario == 'A')
        {

            if(anos_experiencia <= 2)
            {
                if (*horas_excedentes > 0 && *horas_excedentes <= 13)
                    *salario_bruto = (45 * horas_contratadas) + (((45 * *horas_excedentes) * 123)/ 100);

                else if (*horas_excedentes > 13 && *horas_excedentes <= 22)
                    *salario_bruto = (45 * horas_contratadas) + (((45 * *horas_excedentes) * 137)/ 100);

                else if (*horas_excedentes > 22)
                    *salario_bruto = (45 * horas_contratadas) + (((45 * *horas_excedentes) * 156)/ 100);

                else
                    *salario_bruto = (45 * horas_trabalhadas);
            }

            else if (anos_experiencia >= 3 && anos_experiencia <= 5)
            {
                if (*horas_excedentes > 0 && *horas_excedentes <= 13)
                    *salario_bruto = (55 * horas_contratadas) + (((55 * *horas_excedentes) * 123)/ 100);

                else if (*horas_excedentes > 13 && *horas_excedentes <= 22)
                    *salario_bruto = (55 * horas_contratadas) + (((55 * *horas_excedentes) * 137)/ 100);

                else if (*horas_excedentes > 22)
                    *salario_bruto = (55 * horas_contratadas) + (((55 * *horas_excedentes) * 156)/ 100);

                else
                    *salario_bruto = (55 * horas_trabalhadas);

            }

            else if (anos_experiencia > 5)
            {
                if (*horas_excedentes > 0 && *horas_excedentes <= 13)
                    *salario_bruto = (70 * horas_contratadas) + (((70 * *horas_excedentes) * 123)/ 100);

                else if (*horas_excedentes > 13 && *horas_excedentes <= 22)
                    *salario_bruto = (70 * horas_contratadas) + (((70 * *horas_excedentes) * 137)/ 100);

                else if (*horas_excedentes > 22)
                    *salario_bruto = (70 * horas_contratadas) + (((70 * *horas_excedentes) * 156)/ 100);

                else
                    *salario_bruto = (70 * horas_trabalhadas);

            }

        }


        else if (funcao_funcionario == 'g' || funcao_funcionario == 'G')
        {

            if(anos_experiencia <= 2)
            {
                if (*horas_excedentes > 0 && *horas_excedentes <= 13)
                    *salario_bruto = (85 * horas_contratadas) + (((85 * *horas_excedentes) * 123)/ 100);

                else if (*horas_excedentes > 13 && *horas_excedentes <= 22)
                    *salario_bruto = (85 * horas_contratadas) + (((85 * *horas_excedentes) * 137)/ 100);

                else if (*horas_excedentes > 22)
                    *salario_bruto = (85 * horas_contratadas) + (((85 * *horas_excedentes) * 156)/ 100);

                else
                    *salario_bruto = (85 * horas_trabalhadas);
            }

            else if (anos_experiencia >= 3 && anos_experiencia <= 5)
            {
                if (*horas_excedentes > 0 && *horas_excedentes <= 13)
                    *salario_bruto = (102 * horas_contratadas) + (((102 * *horas_excedentes) * 123)/ 100);

                else if (*horas_excedentes > 13 && *horas_excedentes <= 22)
                    *salario_bruto = (102 * horas_contratadas) + (((102 * *horas_excedentes) * 137)/ 100);

                else if (*horas_excedentes > 22)
                    *salario_bruto = (102 * horas_contratadas) + (((102 * *horas_excedentes) * 156)/ 100);

                else
                    *salario_bruto = (102 * horas_trabalhadas);

            }

            else if (anos_experiencia > 5)
            {
                if (*horas_excedentes > 0 && *horas_excedentes <= 13)
                    *salario_bruto = (130 * horas_contratadas) + (((130 * *horas_excedentes) * 123)/ 100);

                else if (*horas_excedentes > 13 && *horas_excedentes <= 22)
                    *salario_bruto = (130 * horas_contratadas) + (((130 * *horas_excedentes) * 137)/ 100);

                else if (*horas_excedentes > 22)
                    *salario_bruto = (130 * horas_contratadas) + (((130 * *horas_excedentes) * 156)/ 100);

                else
                    *salario_bruto = (130 * horas_trabalhadas);

            }

        }

        *desconto_inss = (*salario_bruto * 11)/ 100;

        if (*salario_bruto <= 1500)
            *desconto_ir = 0;

        else if (*salario_bruto > 1500 && *salario_bruto <= 2700)
            *desconto_ir = ((*salario_bruto - *desconto_inss) * 15)/ 100;

        else if (*salario_bruto > 2700 && *salario_bruto <= 4200)
            *desconto_ir = ((*salario_bruto - *desconto_inss)* 20)/ 100;

        else if (*salario_bruto > 4200)
            *desconto_ir = ((*salario_bruto - *desconto_inss)* 30)/ 100;

        salario_liquido = (*salario_bruto - *desconto_inss) - *desconto_ir;


        return (salario_liquido);
    }

    void imprimirFolhaPagamento (int contador, int quantidade_funcionarios, char funcao_funcionario, int anos_experiencia, int horas_contratadas, int horas_trabalhadas, float salario_bruto, float horas_excedentes, float desconto_inss, float desconto_ir, float sal_liquido)
    {
        printf("\nQtd: %d", quantidade_funcionarios);

        printf("\n===============");

        printf("\nFuncion�rio %d \n- Fun��o: %c \n- Anos de experi�ncia: %d \n- Horas contratadas: %d \n- Horas trabalhadas: %d", contador, funcao_funcionario, anos_experiencia, horas_contratadas, horas_trabalhadas);
        printf("\nFolha de pagamento do funcion�rio %d \n- Sal�rio Bruto   (R$): %.2f", contador, salario_bruto);

        if (horas_excedentes > 0)
            printf("\n- Horas Excedentes (h): %.0fhr", horas_excedentes);

        printf("\n- Desconto INSS   (R$): %.2f \n- Desconto IR     (R$): %.2f \n- Sal�rio L�quido (R$): %.2f", desconto_inss, desconto_ir, sal_liquido);

        printf("\n===============\n");

    }

    int main()
{
    setlocale(LC_ALL, "Portuguese");

    int qntd_funcionarios, contador = 1, anos_exp, horas_cont, horas_trab;
    float horas_exc, sal_bruto, desc_inss, desc_ir, sal_liquido;
    char funcao;


    printf("\nPrograma SALARIO.C\n");

    printf("\n\nInsira o n�mero de funcion�rios: ");
    scanf("%d", &qntd_funcionarios);

    while (contador <= qntd_funcionarios)
    {

        lerFuncionario(&funcao, &anos_exp, &horas_cont, &horas_trab);

        calcularSalario(funcao, anos_exp, horas_cont, horas_trab, &horas_exc, &sal_bruto, &desc_inss, &desc_ir);

        sal_liquido = calcularSalario(funcao, anos_exp, horas_cont, horas_trab, &horas_exc, &sal_bruto, &desc_inss, &desc_ir);

        imprimirFolhaPagamento(contador, qntd_funcionarios, funcao, anos_exp, horas_cont, horas_trab, sal_bruto, horas_exc, desc_inss, desc_ir, sal_liquido);

        contador++;

    }


    return 0;

}
