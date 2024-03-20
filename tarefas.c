#include "tarefas.h"
#include <stdio.h>

Erro criar(Tarefa t[], int *pos) {
  printf("foi Criado");
  return OK;
};
Erro deletar(Tarefa t[], int *pos) {
  printf("foi deletado");
  return OK;
};
Erro listar(Tarefa t[], int pos) {
  printf("foi listado");
  return OK;
};

Erro salvar(Tarefa t[], int pos, int tamanho) {
  printf("foi salvo");
  return OK;
};
Erro carregar(Tarefa t[], int *pos, int tamanho) {
  printf("foi carregado");
  return OK;
};