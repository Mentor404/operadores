#include <stdio.h>

int main(){

	int a, b, c;
	
	a = 2;
	b = 4;	
		
	//operadores aritm�ticos:
	//	+ adi��o;
	//	- subtra��o;
	//	* multiplica��o;
	//	/ divis�o;
	//	% m�dulo;
		
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
	//	+= ou (a = a+b) adi��o entre vari�veis;
	//	-= ou (a = a-b) subtra��o entre vari�veis;
	//	*= ou (a = a*b) multiplica��o entre vari�veis;
	//	/= ou (a = a/b) divis�o entre vari�veis;
	//	%= ou (a = a%b) m�dulo de duas vari�veis;

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
	//	++ soma 1 ao valor da vari�vel;
	//	-- subtrai 1 ao valor da vari�vel;
	
	
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
	
	//exemplo dos tr�s operadores acima

	for(int i = a; i <= 10; i++){
		printf("%i, ", i);
	}
	
	
	//operador l�gico
	//	&& ambas condi��es devem ser verdadeiras;
	//	|| no m�nimo uma condi��o deve ser verdadeira;
	//	!  a condi��o deve ser falsa;
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
