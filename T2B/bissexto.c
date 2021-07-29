//-----------------------------
// 2016,2012,2008,2004,2000,
// 1916,1911,1908,1904,1900,
// 1861,1857,1852,1846,1844
// 1728,1727,1726,1725,1723
// Resultado esperado:
// Se linha 0: 2016,2012,2008,2004,2000,
// Se linha 1: 1916,1908,1904,
// Se linha 2: 1852,1844,
// Se linha 3: 1728,
//-----------------------------
#include <stdio.h> 
#define LINHA  4
#define COLUNA 5

int BISSEXTO[LINHA][COLUNA] = {
	2016,2012,2008,2004,2000,
	1916,1911,1908,1904,1900,
	1861,1857,1852,1846,1844,
	1728,1727,1726,1725,1723};

int cnt = 0;

int resultado[COLUNA] = {0,0,0,0,0};

void imprimir() {
	int i;
	printf("Total de anos bisextos: %d", cnt);
	printf("\nOs anos bisextos são: ");
  for(i = 0; i < COLUNA; i++){
		if(resultado[i] != 0){
			printf("%d,", resultado[i]);		
		}
	}
}

int f_bissexto(int l, int c){
	int a = BISSEXTO[l][c];
	if ((a % 4 == 0) && (a % 100 != 0 || a % 400 == 0))
		return a;
	else
		return 0;
}

int main() {
  int l, i, tmp; 

  do{
	  printf("Qual linha deseja verificar?");
		scanf("%d", &l);
  }while(l >= LINHA);

  for(i = 0; i < COLUNA; i++){
		tmp = f_bissexto(l, i);
		if(tmp){
			resultado[cnt] = tmp; 
			cnt++;			
		}
	}

	imprimir();

	return 0;  
}