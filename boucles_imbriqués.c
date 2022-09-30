#include <stdio.h>


// Exercice 1

/* ----- Question 1 ----- 
void boucles_imbriques (int n) {
	for(int i = 0; i < n; i++) {
		for (int l = 0 ; l<n ; l++) {
			printf("*");
		}
		printf("\n");
	}
}

int main() {
	boucles_imbriques(5);
}

*/

/* ----- Question 2 ----- 

void boucles_imbriques (int n) {
	for (int i = 0; i < n; i++ ) {
		for (int l = 0; l < i; l++ ) {
			printf("*");
		}
		printf("\n");
	}
}

int main() {
	boucles_imbriques(6);
}

*/

/* ----- Question 3 ----- 

void boucles_imbriques (int n) {
	for (int i = 0; i < n; i++ ) {
		for (int l = 0; l < n - i; l++ ) {
			printf("*");
		}
		printf("\n");
	}
}

int main() {
	boucles_imbriques(6);
}

*/


// Exercice 2

/* ----- Question 1 ----- */

void boucles_imbriques (int n) {
	for (int i = 0; i < n; i++) {
		for (int l = 0; l < n; l++) {
			if(l == i || l + i + 1 == n) {
				printf("*");
			} else {
				printf(" ");
			}
			
		}
		printf("\n");
	}
}

int main() {
	boucles_imbriques(10);
}
	
