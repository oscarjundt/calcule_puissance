/*
#############################################################
PROGRAMME DE CALCULE DE PUISSANCE
ECRIE PAR OSCAR JUNDT-SCHMITTER
#############################################################
*/
#include <stdio.h>

int calcule(int x,int y);
void affichage(int x3,int y3,int y5);


//fonction qui calcule le resultat de x2 pussiance y2 qui ce dit en math f(x2,y2) = x2^y2. le "^" veux dire puissance
//type int donc de type entier
//retourne le resultat de x2 puissance y2
int calcule(int x2, int y2){
    //declaration et initialisation de la variable res
    int res=1;
    //utilisation d'une boucle pour incrementer la variable res
    for(int i=0;i<y2;i++){
        res=res*x2;
    }
    return res;
}
//procedure d'affichage donc de type void
//affiche la valeur donner, la puissance donner et le resultat de la fonction calcule
void affichage(int x3,int y3, int y5){
    printf("le resultat de %d avec la puissance %d est %d\n",x3,y3,y5);
}
//le main est la fonction d'execution
int main(){
    //declaration de la variable a(le nombre) et b(la puissance)
    int a;
    int b;
    int resultat;
    //demander a l'utilisateur la valeur de la variable a et b
    printf("donner nombre: ");
    //initialisation de la variable avec la valeur donner par l'utilisateur
    scanf("%d",&a);
    printf("donner puissance: ");
    scanf("%d",&b);
    //appelle de la fonction de calcule
    resultat = calcule(a,b);
    //appelle de la procedure d'affichage
    affichage(a,b,resultat);
}