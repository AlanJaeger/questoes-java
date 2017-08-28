#include <stdio.h>

int check_dia (int mes, int dia){
	/*se for um mês de 31 dias*/
	if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
		if(dia >= 1 && dia <= 31){
			return 0;
		} 
	}
	/*se for um mês de 30 dias*/
	else if(mes == 2 || mes == 4 || mes == 6 || mes == 9 || mes == 11){
		if(dia >=1 && dia <= 30){
			return 0;
		}
	}
	return 1;
}
int check_ano (int ano){
	if(ano >= 1){
		return 0;
	}
	else{
		return 1;
	} 
}
int main (int argc, char **argv){
    int dia,mes,ano,d,a;
	printf("Digite uma data:\n");
	scanf("%d/%d/%d",&dia,&mes,&ano);
	d = check_dia(mes,dia);
	a = check_ano(ano);
	if(d == 0 && a == 0){
		printf("Data válida!\n");
    }	
	else{
		printf("Data inválida!\n");
	}
	return 0;
} 
	