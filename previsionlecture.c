//
// Created by Tom on 04/10/2022.
//

#include <stdio.h>

// Exercice 1
// Question 1 + 2 + 3 + 4

int mystere(int n) {
    int s = 0;

    while(n < 0) {
        s += n % 10;
    }
    n /= 10;
    return s;
}

// Question 5

int nombre_de_chiffre(int n) {
    int s = 0;

    while(n > 0) {
        s++;
        n /= 10;
    }
    return s;
}

// Question 6

int plus_grand_chiffre(int n){
    int s = 0;

    while(n > 0) {
        if(n % 10 > s) {
            s = n % 10;
        }
        n /= 10;
    }
    return s;
}


// Exercice 2

// Question 1 + 2 + 3 + 4

int mystere2(int a, int x) {
    int n = 0;
    for(int p=1; p <= x; p*=a) {
        n = n + 1;
    }
    return n - 1;
}


// Exercice 3

struct date{
    int j;
    int m;
    int a;
};

struct date cree_date1 () {
    struct date d1;
    scanf("%d %d %d", &(d1.j), &(d1.m), &(d1.a));
    return d1;
}

struct date cree_date2 () {
    struct date d2;
    scanf("%d %d %d", &(d2.j), &(d2.m), &(d2.a));
    return d2;
}

int main() {
    struct date d1 = cree_date1();
    struct date d2 = cree_date2();

    printf("La premiere date est : %d/%d/%d\n", d1.j, d1.m, d1.a);
    printf("La deuxieme date est : %d/%d/%d\n", d2.j, d2.m, d2.a);

    if(d1.j == d2.j && d1.m == d2.m && d1.a == d2.a) {
        printf("Les deux dates sont identiques.\n");
    } else {
        printf("Les deux dates sont différentes.\n");
    }
}