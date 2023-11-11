#ifndef PROJETOLISTADETAREFASSALVAEMBINARIO_BIBLIOTECA_H
#define PROJETOLISTADETAREFASSALVAEMBINARIO_BIBLIOTECA_H

struct tarefa {
    int prioridade;
    char desc[300];
    char categoria[100];
};

void lerTarefas(struct tarefa lista[], int *quantidadeDeTarefas);
void salvarTarefas(struct tarefa lista[], int quantidadeDeTarefas);
void deletarTarefa(struct tarefa lista[], int *quantidadeDeTarefas, int pos);
void listarTarefas(struct tarefa lista[], int quantidadeDeTarefas);
void criarNovaTarefa(struct tarefa lista[], int *quantidadeDeTarefas, int tamanhoMaximo);
void alterarTarefa(struct tarefa lista[], int quantidadeDeTarefas);
void filtrarPorPrioridade(struct tarefa lista[], int quantidadeDeTarefas, int prioridade);
void filtrarPorEstado(struct tarefa lista[], int quantidadeDeTarefas, char estado[]);
void filtrarPorCategoriaEPrioridade(struct tarefa lista[], int quantidadeDeTarefas, int prioridade, char categoria[]);
void exportarPorPrioridade(struct tarefa lista[], int quantidadeDeTarefas, int prioridade);
void exportarPorCategoria(struct tarefa lista[], int quantidadeDeTarefas, char categoria[]);
void exportarPorPrioridadeECategoria(struct tarefa lista[], int quantidadeDeTarefas, int prioridade, char categoria[]);

#endif //PROJETOLISTADETAREFASSALVAEMBINARIO_BIBLIOTECA_H
