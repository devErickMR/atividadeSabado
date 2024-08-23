#include <stdio.h>
#include <stdlib.h>



int main() {
	
   	int tenho_compromisso, vou_estar_naCidade, tenho_dinheiro, esta_chovendo,  ePerto;
	int sim = 1, nao = 0;
	
	printf("digite 1 para sim e 0 para nao\n");
	
	printf("vou ter compromisso?:\n");
	scanf("%d" , &tenho_compromisso);
	
	
	printf("vou estar na cidade?:\n");
	scanf("%d" , &vou_estar_naCidade);
	
	printf("tenho dinheiro?:\n");
	scanf("%d" , &tenho_dinheiro);
	
	printf("o clima esta bom?:\n");
	scanf("%d" , &esta_chovendo);
	
	printf("e perto?:\n");
	scanf("%d" , &ePerto);
	
	if(!tenho_compromisso && vou_estar_naCidade && tenho_dinheiro && !esta_chovendo && ePerto){
		printf("vou viajar\n");
		
	} else if (tenho_compromisso || !vou_estar_naCidade || !tenho_dinheiro || esta_chovendo || !ePerto) {
		printf("nao vou viajar\n");
	}
	
	
	
	return 0;
}
