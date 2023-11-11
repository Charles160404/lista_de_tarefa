#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "biblioteca.h" // Inclui o cabeçalho que declara as funções
//#include "biblioteca.c" // inclui as funções
int main() {
    int quantidadeDeTarefas = 0; // Variável para rastrear a quantidade de tarefas
    struct tarefa lista[100]; // Array para armazenar as tarefas
    int tamanhoMaximo = 100; // Tamanho máximo da lista

    // Chama a função para ler as tarefas do arquivo
    lerTarefas(lista, &quantidadeDeTarefas);

    while (true) {//aqui é o menu, que é um laço infinito até ele digitar o 4

        printf("Seja bem-vindo às suas Tarefas!!\n");
        printf("1 Criar nova tarefa.\n");
        printf("2 Listar tarefas.\n");
        printf("3 Deletar tarefas.\n");
        printf("4 Sair e salvar.\n");
        int escolha;
        scanf("%d", &escolha); // Lê a escolha do usuário

        switch (escolha) {
            case 1:
                // Chama a função para criar uma nova tarefa
                criarNovaTarefa(lista, &quantidadeDeTarefas, tamanhoMaximo);
                break;
            case 2:
                // Chama a função para listar as tarefas
                listarTarefas(lista, quantidadeDeTarefas);
                break;
            case 3:
                printf("Qual posição você deseja apagar?\n");
                int pos;
                scanf("%d", &pos); // Lê a posição da tarefa a ser deletada
                // Chama a função para deletar a tarefa
                deletarTarefa(lista, &quantidadeDeTarefas, pos);
                break;
            case 4:
                // Chama a função para salvar as tarefas no arquivo e sai do programa
                salvarTarefas(lista, quantidadeDeTarefas);
                return 0;
                printf("Escolha inválida. Tente novamente.\n");
                break;

            case 5:
              alterarTarefa(lista, quantidadeDeTarefas);
              break;
            case 6:
              {
                  int prioridadeFiltro;
                  printf("Digite a prioridade para filtrar: ");
                  scanf("%d", &prioridadeFiltro);
                  filtrarPorPrioridade(lista, quantidadeDeTarefas, prioridadeFiltro);
              }
              break;
          case 7:
              {
                  char estadoFiltro[100];
                  printf("Digite o estado para filtrar: ");
                  getchar(); // Limpa o buffer do teclado
                  fgets(estadoFiltro, sizeof(estadoFiltro), stdin);
                  estadoFiltro[strcspn(estadoFiltro, "\n")] = '\0'; // Remove a quebra de linha do fgets
                  filtrarPorEstado(lista, quantidadeDeTarefas, estadoFiltro);
              }
              break;
          case 8:
              {
                  char categoriaFiltro[100];
                  int prioridadeFiltro;
                  printf("Digite a categoria para filtrar: ");
                  getchar(); // Limpa o buffer do teclado
                  fgets(categoriaFiltro, sizeof(categoriaFiltro), stdin);
                  categoriaFiltro[strcspn(categoriaFiltro, "\n")] = '\0'; // Remove a quebra de linha do fgets
                  printf("Digite a prioridade para filtrar: ");
                  scanf("%d", &prioridadeFiltro);
                  filtrarPorCategoriaEPrioridade(lista, quantidadeDeTarefas, prioridadeFiltro, categoriaFiltro);
              }
              break;
          case 9:
              {
                  int prioridadeExportacao;
                  printf("Digite a prioridade para exportar: ");
                  scanf("%d", &prioridadeExportacao);
                  exportarPorPrioridade(lista, quantidadeDeTarefas, prioridadeExportacao);
              }
              break;
          case 10:
              {
                  char categoriaExportacao[100];
                  printf("Digite a categoria para exportar: ");
                  getchar(); // Limpa o buffer do teclado
                  fgets(categoriaExportacao, sizeof(categoriaExportacao), stdin);
                  categoriaExportacao[strcspn(categoriaExportacao, "\n")] = '\0'; // Remove a quebra de linha do fgets
                  exportarPorCategoria(lista, quantidadeDeTarefas, categoriaExportacao);
              }
              break;
          case 11:
              {
                  char categoriaFiltro[100];
                  int prioridadeFiltro;
                  printf("Digite a categoria para filtrar: ");
                  getchar(); // Limpa o buffer do teclado
                  fgets(categoriaFiltro, sizeof(categoriaFiltro), stdin);
                  categoriaFiltro[strcspn(categoriaFiltro, "\n")] = '\0'; // Remove a quebra de linha do fgets
                  printf("Digite a prioridade para filtrar: ");
                  scanf("%d", &prioridadeFiltro);
                  exportarPorPrioridadeECategoria(lista, quantidadeDeTarefas, prioridadeFiltro, categoriaFiltro);
              }
              break;
          default:
              printf("Escolha inválida. Tente novamente.\n");
              break;
      }
  }


    return 0;
}