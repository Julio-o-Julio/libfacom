#ifndef _UTILS_
#define _UTILS_

int heap_pai(int filho);
int heap_filho_esq(int pai);
int heap_filho_dir(int pai);
<<<<<<< HEAD
void heap_desce(int v[], int n, int i);
void heap_constroi(int v[], int n);

=======
void heap_desce(int v[], int n, int pai);
void heap_constroi(int v[],int n);
int  heap_extrai_max(int v[],int *n);
>>>>>>> ff9b165d4bd70a57d9ded728710c1a8942ce3437
int e_par(int v);

#endif 
