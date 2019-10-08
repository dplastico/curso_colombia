#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
        if(argc==2) {
		printf("Verificando licencia: %s\n", argv[1]);
                int sum = 0;
                for (int i = 0; i < strlen(argv[1]); i++) {
			sum+= (int)argv[1][i];	
		}
		if(sum==3430) {
			printf("Acceso Permitido!\n");
		} else {
			printf("Acceso Denegado!\n");
		}
	} else {
		printf("Usage: <key>\n");
	}
	return 0;
}

