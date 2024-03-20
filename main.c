#include "tarefas.h"
#include <stdio.h>

int main() {
  int opcao;

  Tarefa tarefas[TOTAL];

  int pos = 0;

  printf("gcc main.c && ./a.out");
  printf("added");

  printf("Menu");
  printf("1 - Criar novo");

  scanf("%d", opcao);

  if (opcao == 1) {
    criar(tarefas, &pos);
  } else if (opcao == 2) {
    deletar(tarefas, &pos);
  } else if (opcao == 3) {
    listar(tarefas, pos);
  } else if (opcao == 4) {
    salvar(tarefas, pos, TOTAL);
  } else if (opcao == 5) {
    carregar(tarefas, &pos, TOTAL);
  }
}
