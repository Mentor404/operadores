#include <stdio.h>

int main(){

	int a, b, c;
	
	a = 2;
	b = 4;	
		
	//operadores aritméticos:
	//	+ adição;
	//	- subtração;
	//	* multiplicação;
	//	/ divisão;
	//	% módulo;
		
	printf("a+b = %i\n", a+b);
	printf("a-b = %i\n", a-b);
	printf("a.b = %i\n", a*b);
	printf("a/b = %f\n", (float)a/b);
	
	printf("a modulo b = %i\n\n", b%a);
	
	//exemplo
	
	if(a%2==0){
		printf("%i e par\n\n", a);
	}else{
		printf("%i e impar\n\n", a);
	}
	
	
	// operadores atributivos
	//	= igual a;
	//	+= ou (a = a+b) adição entre variáveis;
	//	-= ou (a = a-b) subtração entre variáveis;
	//	*= ou (a = a*b) multiplicação entre variáveis;
	//	/= ou (a = a/b) divisão entre variáveis;
	//	%= ou (a = a%b) módulo de duas variáveis;

	c = a;
	printf("c = a: %i\n", c);
	c = 1;
	c += a;
	printf("c + a: %i\n", c);
	c = 1;
	c -= a;
	printf("c - a: %i\n", c);
	c = 1;
	c *= a;
	printf("c * a: %i\n", c);
	c = 1;
	c /= a;
	printf("c / a: %i\n", c);
	c = 4;
	c %= a;
	printf("c modulo a: %i\n", c);
	
	
	
	//operador para acrescentar e descontar
	//	++ soma 1 ao valor da variável;
	//	-- subtrai 1 ao valor da variável;
	
	
	c = 0;
	printf("\n\nvalor de c: %i\n", c);
	c++;
	printf("valor de c: %i\n", c);
	c--;
	printf("valor de c: %i\n\n", c);
	
	
	//operador relacional
	//	c == a		 igual;
	//	c != a;	 	 diferente;
	//	c > a;		 maior;
	//	c < a;	 	 menor;
	//	c >= a;		 maior ou igual;
	//	c <= a;		 menor ou igual;
	
	//exemplo dos três operadores acima

	for(int i = a; i <= 10; i++){
		printf("%i, ", i);
	}
	
	
	//operador lógico
	//	&& ambas condições devem ser verdadeiras;
	//	|| no mínimo uma condição deve ser verdadeira;
	//	!  a condição deve ser falsa;
	c = 4;
	b = 4;
	a = 4;
	
	printf("\n\na: %i\n", a);
	printf("b: %i\n", b);
	printf("c: %i\n", c);

	if((a == b) && (a == c)){
	printf("\ntodas condicoes verdadeiras\n");	
	}

	c = 0;
	printf("\nc: %i\n", c);
	
	if((a == b) || (a == c)){
	printf("no minimo uma condicao e verdadeira\n");	

	}
	
	printf("\na: %i\n", a);
	
	if(!(a<1)){
	printf("\ncondicao e falsa\n");	
	}

	return 0;
}
