#include <stdio.h>

void main() {
  int tmpTt, tmpHr, tmpMm, tmpSg;
  float msInicial, msFinal;

  printf("Massa Inicial (em Gramas):\n");
  scanf("%f", &msInicial);

  msFinal = msInicial;
  tmpTt = 0;
  while (msFinal >= msInicial) {
    msFinal = msFinal / 2;
    tmpTt = tmpTt + ;
  }

  printf("\n");
  printf("Tempo Total...: %d segundos.\n", tmpTt);
  tmpHr = (tmpTt / 3600);
  tmpMm = (tmpTt % 3600) / 60;
  tmpSg = (tmpTt % 3600) % 60;
  printf("Tempo Dividido: %d horas:%d minutos:%d segundos.", tmpHr, tmpMm, tmpSg);
}