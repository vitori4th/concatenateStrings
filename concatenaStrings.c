/*concatenar as duas frases e colocar um espaço entre elas, além disso
sua função devolverá duas informações: o número total de caracteres na string resultante e
também o número de espaços (entre as palavras) no resultado. Como as funções em C só
permitem o retorno de um valor, o número de espaços deverá ser passado por uma variável
que sua função receberá como referência. As strings também serão recebidas por
referência.  */

#include <stdio.h>

int concatena(char* s1, char* s2, char* sres, int* espacos, int tamanho){
	int i,j;
	*espacos=1;
	tamanho=0;
	for(i=0; i<40;i++){
		if(s1[i]==' '){
			*espacos=*espacos+1;
		}
		
		if(s1[i]=='\0')
			break;		
		sres[i]=s1[i];
		
		tamanho++;
	}

	sres[i-1]=' ';
	
	for(j=0; j<40;j++){
		if(s2[j]==' '){
			*espacos=*espacos+1;
		}
		sres[i]=s2[j];
		if(s2[j]=='\0'){
			break;
		}
		i++;
		tamanho++;

	}
	
	sres[i-1]='\0';	
	return tamanho;
}

//Funcao para imprimir uma string
void print_string(char* str){
  int k = 0;
  while(str[k] != '\0'){
    printf("%c", str[k]);
    k++;
  }
  printf("\n");
}

int main(int argc, char * argv[]){
  char frase1[40];
  char frase2[40];
  char fraseResultado[80];
  int tamResultado;
  int espacos;

  fgets(frase1, 40, stdin);
  fgets(frase2, 40, stdin);
  
  tamResultado = concatena(frase1, frase2, fraseResultado, &espacos,tamResultado);
  
  print_string(fraseResultado);
  printf("String com %d caracteres e %d espacos.\n", tamResultado, espacos);
  
  return 0;
}
