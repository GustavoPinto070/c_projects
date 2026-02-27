typedef struct complexo {
  float real;
  float imag;
} Complexo;

Complexo k1;        /*exemplo de declaração de variavel */
struct complexo k2; /*exemplo equivalente ao anterior */

Complexo somaComplexo(Complexo a, Complexo b) {
  Complexo soma;
  soma.real = a.real + b.real;
  soma.imag = a.imag + b.imag;
  return soma;
}

Complexo leNumeroComplexo() {
  Complexo a;
  char sign, i;
  scanf("%f%c%f%c", &a.real, &sign, &a.imag, &i);
  if (sign == '-')
    a.imag *= -1;
  return a;
}

void escreveNumeroComplexo(Complexo a) {
  if (a.imag >= 0)
    printf("%f+%fi", a.real, a.imag);
  else
    printf("%f%fi", a.real, a.imag);
}

int main() {
  Complexo a, b, soma;
  a = leNumeroComplexo();
  b = leNumeroComplexo();
  soma = somaComplexo(a, b);
  escreveNumeroComplexo(soma);
  return 0;
}