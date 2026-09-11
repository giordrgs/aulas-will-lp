#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    //Variável da escolha
    int escolha;
    //Variáveis do depósito
    float deposito, total_guard = 0;
    int quant_deposito = 0;
    //Variável média
    float media = 0;
    //Variável maior depósito
    float recorde = 0;
    //Variável meta de economia
    float meta;
    //Variável saque
    float saque;

    //Pergunta da meta
    printf("Digite uma meta a ser guardada: ");
    scanf("%f", &meta);
    while (escolha != 9){
        printf("\n=== Cofrinho Digital ===\n");
        printf("1 - Depositar\n");
        printf("2 - Ver total guardado\n");
        printf("3 - Ver quantos depositos fez\n");
        printf("4 - Ver media por deposito\n");
        printf("5 - Ver maior deposito unico\n");
        printf("6 - Ver progresso da meta\n");
        printf("7 - Sacar (gastar uma parte)\n");
        printf("8 - Resetar tudo\n");
        printf("9 - Sair\n");

        printf("\nDigite uma opção: ");
        scanf("%d", &escolha);
        switch(escolha){
            case 1:
                printf("\nVocê escolheu a opção 1 - Depositar\n");
                printf("\nDigite o valor a ser depositado: ");
                scanf("%f", &deposito);
                total_guard = total_guard + deposito;
                printf("\nDepósito feito com sucesso!\n");
                //Quantidade de depósitos
                quant_deposito++;
                //Maior depósito
                if(deposito > recorde){
                    recorde = deposito;
                }
                break;
            case 2:
                printf("\nVocê escolheu a opção 2 - Ver total guardado\n");
                printf("O total na sua conta é de: R$%.2f\n", total_guard);
                break;
            case 3:
                printf("\nVocê escolheu a opção 3 - Ver quantos depositos fez\n");
                printf("Até o momento você fez %d depósitos\n", quant_deposito);
                break;
            case 4:
                printf("\nVocê escolheu a opção 4 - Ver media por deposito\n");
                if(quant_deposito == 0){
                    printf("\nVocê não tem nenhum depósito ainda\n");
                }
                else{
                    media = total_guard / quant_deposito;
                    printf("\nA média por depósitos é de R$%.2f", media);
                }
                break;
            case 5:
                printf("\nVocê escolheu a opção 5 - Ver maior deposito unico\n");
                printf("\nO maior depósito é de R$%.2f\n", recorde);
                break;
            case 6:
                printf("\nVocê escolheu a opção 6 - Ver progresso da meta\n");
                if(total_guard >= meta){
                    printf("\nVocê bateu sua meta!\n");
                }
                else{
                    printf("\nVocê fez %.2f%% da sua meta, ainda faltam R$%.2f\n", (total_guard/meta)*100, meta - total_guard);
                }
                break;
            case 7:
                printf("\nVocê escolheu a opção 7 - Sacar (gastar uma parte)\n");
                printf("\nQuanto deseja sacar?\n");
                scanf("%f", &saque);
                if(saque >= total_guard){
                    printf("\nVocê tentou sacar mais do que tem na conta. Então o saque foi somente de R$%.2f\n", total_guard);
                    total_guard = 0;
                }
                else{
                    total_guard = total_guard - saque;
                    printf("\nVocê sacou R$%.2f\n", saque);
                }
                break;
            case 8:
                printf("\nVocê escolheu a opção 8 - Resetar tudo\n");
                char reset;
                printf("\nTem certeza que deseja resetar tudo? (s/n)\n");
                scanf(" %c", &reset);
                if(reset == 's' || reset == 'S'){
                    total_guard = 0;
                    quant_deposito = 0;
                    recorde = 0;
                }
                break;
            case 9:
                printf("\nO valor guardado em conta foi de R$%.2f", total_guard);
                printf("\nA quantidade de depósitos foi de %d", quant_deposito);
                media = total_guard / quant_deposito;
                printf("\nA média por depósito é de R$%.2f", media);
                printf("\nO maior depósito único feito foi de R$%.2f", recorde);
                if(total_guard >= meta){
                    printf("\nVocê bateu sua meta!\n");
                }
                else{
                    printf("\nVocê fez %.2f%% da sua meta, faltaram R$%.2f\n", (total_guard/meta)*100, meta - total_guard);
                }
                printf("\nObrigado por estar conosco\n");
                break;
            default:
                printf("\nOpção Inválida, digite novamente\n");
                break;
        }
    }

    return 0;
}