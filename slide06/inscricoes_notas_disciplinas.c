#include <stdio.h>

#define MAX_COD_DISC 7
#define MAX_INSCRICOES 10000

typedef struct {
  int numero;                    /* número do aluno */
  int nota;                      /* nota à disciplina */
  char disciplina[MAX_COD_DISC]; /* nome/código da disciplina*/
} Inscricao;

int leTodasInscricoes(Inscricao v[]);
void mostraNotasAluno(Inscricao v[], int n, int aluno);
void mostraNotasDisciplina(Inscricao v[], int n, char disc[]);

int main() {
  Inscricao insc[MAX_INSCRICOES];
  int numInscricoes = 0, aluno;

  numInscricoes = leTodasInscricoes(insc);
  scanf("%d", &aluno);
  while (aluno > 0) {
    mostraNotasAluno(insc, numInscricoes, aluno);
    scanf("%d", &aluno);
  }
  return 0;
}

int leTodasInscricoes(Inscricao v[]) {
  int n, i;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
    scanf("%d%d%s", &v[i].numero, &v[i].nota, v[i].disciplina);
  return n;
}

void mostraNotasAluno(Inscricao v[], int n, int aluno) {
  int i;
  for (i = 0; i < n; i++)
    if (aluno == v[i].numero)
      printf("%s %d\n", v[i].disciplina, v[i].nota);
}

// função que mostra as notas de uma disciplina, dado o nome da disciplina
void mostraNotasDisciplina(Inscricao v[], int n, char disc[]) {
  int i;
  for (i = 0; i < n; i++)
    if (strcmp(v[i].disciplina, disc) == 0)
      printf("%d %d\n", v[i].numero, v[i].nota);
}