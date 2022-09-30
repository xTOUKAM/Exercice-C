#include <stdio.h>
#include <stdlib.h>

// Exercice 1


// Question 1

int triplet_pythagoriens (int a, int b, int c) {
	if( a*a + b*b == c*c) {
		return 1;
	} else {
		return 0;
	}
}

// Question 2

void test_triplet() {
	if(triplet_pythagoriens(3,4,5)) {
		printf("3, 4, 5 : triplets pythagoriciens \n");
	} else {
		printf("FAUX : Ce n'est pas un triplet pythagoricien\n"); 
	}
	
	if(triplet_pythagoriens(63,16,65)) {
		printf("63, 16, 65 : triplets pythagoriciens\n");
	} else {
		printf("FAUX : Ce n'est pas un triplet pythagoricien\n"); 
	}
	
	if(triplet_pythagoriens(36,77,84)) {
		printf("OK : triplets pythagoriciens\n");
	} else {
		printf("36, 77, 84 : N'est pas un triplet pythagoricien\n");
	}
}

// Question 3

void nb_inferieur_pythagoricien (int n) {
	for (int a = 0 ; a < n ; a ++) {
		for (int b = a+1; b < n ; b++) {
			for (int c = b+1; c < n ; c++) {
				if(triplet_pythagoriens(a,b,c)) {
					printf("%d, %d, %d : Triplet pythagoricien\n", a,b,c);
				} 
			}
		}
	}
} 

// Question 4

void nb_triplets (int n) {
	int nb = 0;
	for (int a = 0 ; a < n ; a ++) {
		for (int b = a+1; b < n ; b++) {
			for (int c = b+1; c < n ; c++) {
				if(triplet_pythagoriens(a,b,c)) {
					printf("%d, %d, %d : Triplet pythagoricien\n", a,b,c);
					nb++;
				} 
			}
		}
	}
	printf("Le nombre de possibilités pythagoricien est de : %d", nb);
} 

// Exercice 2

// Question 1

void premier_chiffre(int n) {
	while (n > 10) {
		n = n / 10;
	}
	printf("%d", n);
}

// Question 2

void retourne_nb_chiffre(int n, int c) {
	while( n != 0) {
		n = n / 10;
		c++;
	}
	printf("%d", c);
}

int main() {
	retourne_nb_chiffre(589, 0);
}

