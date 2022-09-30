#include <stdio.h>
#include <stdlib.h>

/* --------------- Question 1 --------------- 

int lance_un_de() {
	return 1 + rand() % 6;
}

int main() {
	printf('%d\n', lance_un_de());
	return 0;
}

*/

/* --------------- Question 2 --------------- 

int lancer() {
	for (i = 0; i < 1000; i++) {
		de = lancer_un_de();
		switch(de) {
			case 1 : de1++; break;
			case 2 : de2++; break;
			case 3 : de3++; break;
			case 4 : de4++; break;
			case 5 : de5++; break;
			case 6 : de6++; break;
			default : break;
		}
	}
}

*/ 

/* --------------- Question 3 --------------- 

void afficher_stat() {
	int n;
	printf('Nombre de lancers : ');
	scanf('%d', &n);
	
int lancer() {
	for (i = 0; i < 1000; i++) {
		de = lancer_un_de();
		switch(de) {
			case 1 : de1++; break;
			case 2 : de2++; break;
			case 3 : de3++; break;
			case 4 : de4++; break;
			case 5 : de5++; break;
			case 6 : de6++; break;
			default : break;
		}
	}
}

*/

/*  --------------- Question 4 --------------- */

voir afficher_max() {
	int n; // nombre de lancers
	int de;
	int max;
	printf('Nombre de lancers : ');
	scanf('%d', &n);
	for(int i = 0, i < n; i++) {
		de = lancer_un_de();
		if(max < de) {
			max = de
		}
	}
	printf('max : %d\n', max);
}
