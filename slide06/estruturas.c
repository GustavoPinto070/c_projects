// declaração de uma estrutura simples
// todas os campos de variáveis são do mesmo tipo
// pode ser substituida por um array, mas ao usar uma struct
// especificamos o que cada variável é (para que servem)
// em vez de procurar ponto[0] ou ponto[1], procuramos ponto.x ou ponto.y
struct ponto {
  double x;
  double y;
};

// declaração de uma função que recebe duas estruturas do tipo struct ponto
// e retorna uma estrutura do tipo struct ponto
struct ponto adicionaPonto(struct ponto p1, struct ponto p2) {
  struct ponto res;
  res.x = p1.x + p2.x;
  res.y = p1.y + p2.y;
  return res;
};

// declaração de uma estrutura composta por outras estruturas
// utilização de typedef para simplificar a declaração de variáveis do tipo
// struct rectangulo, permitindo usar apenas Rectangulo
typedef struct rectangulo {
  struct ponto a, b;
} Rectangulo;

// declaração de um array de estruturas do tipo struct ponto
struct ponto figura[] = {{1.2, 3.4}, {4.5, 12.6}, {1.2, 10.8}};

// declaração de uma estrutura mais complexa
// os campos de variáveis são de tipos diferentes
// contendo também um array de caracteres (string)
struct inscricao {
  int numero;
  char disciplina[7];
  int nota;
};

// declaração de uma variável do tipo struct ponto
// a variável centro é do tipo struct ponto e tem os campos x e y
struct ponto centro = {12.3, 5.2};

// nao é possível modificar os campos de uma variável do tipo struct ponto fora
// de uma função, pois a variável centro é global e não pode ser modificada
// diretamente: centro.x = 15.0; centro.y = 10.0; leva a um erro de compilação

int main() {
  Rectangulo r = {{0.0, 0.0}, {10.0, 5.0}};
  struct inscricao i = {12345, "C11", 85};
  struct ponto p1 = {3.0, 4.0};
  struct ponto imagem[100]; // array de 100 pontos, cada um com os campos x e y

  // modificar os campos de uma variável do tipo struct ponto
  centro.x = 15.0; // modificando o campo x da variável centro
  centro.y = 10.0; // modificando o campo y da variável centro

  double distancia = sqrt((p1.x - centro.x) * (p1.x - centro.x) +
                          (p1.y - centro.y) * (p1.y - centro.y));
  printf("Distância entre p1 e centro: %f\n", distancia);

  double area = (r.b.x - r.a.x) * (r.b.y - r.a.y);
  printf("Área do retângulo: %f\n", area);

  struct ponto p2 = adicionaPonto(p1, centro);
  printf("Resultado da adição de pontos: (%f, %f)\n", p2.x, p2.y);

  return 0;
}