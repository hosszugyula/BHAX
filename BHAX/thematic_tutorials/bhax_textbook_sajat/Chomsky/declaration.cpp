#include <cstdlib>


int main(){


int a;  //egész

int *b; // Egeszre mutato mutato

int *r = &a; //Egesz referenciaja

int tomb[5]; //Egeszek tombje

int (&d)[5] = tomb; //Egeszek tombjenek referenciaja

int **e[5]; //Egeszre mutato mutatok tombje

int *g(void); // Egeszre mutato mutatot visszaado fuggveny

int *(*(*f)(void)) = f;  //Egeszre mutato mutatot visszaado fuggvenyre mutato mutato 

int (*(*i)(int))(int, int);  // Egeszet visszaado es ket egeszet kapo fuggvenyre mutato mutatot visszaado, egeszet kapo fuggveny

int (*(*j)(int))(int, int) = i; // Fuggvenymutato egy egeszet visszaado  es ket egeszet kapo fuggvenyre mutato mutatot visszaado, egeszet kapo fuggvenyre

return 0;

}