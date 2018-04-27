
/* universidad de los andes
 * sincronizacion de procesos
 * asignatura: sistemas operativos
 * autor: alvaro araujo
 * fecha: 20/04/2018
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/shm.h>
#include <signal.h>
#include <sys/sem.h>
#include "memsh.h"

void shmem_init(shmem_data *);
void show_mon(shmem_data *);
void exit_signal(int);

int main() {
  system("clear");
  printf("\n\t_______________________  monitor de procesos _______________________\n\n");

  key_t id_shmem = ftok(ROUTE, ID);
  void * pto_shmem;
  shmem_data *pto_inf;
  int i = 0, shmem;
  signal(2, exit_signal);

  int sem;

<<<<<<< HEAD
  

=======
 
>>>>>>> dev_sincronizacion
  

<<<<<<< HEAD
  
  semctl(sem, 0, SETVAL, 5);


=======
  
  semctl(sem, 0, SETVAL, 4);

  
>>>>>>> dev_sincronizacion
  

<<<<<<< HEAD
  
=======
  
>>>>>>> dev_sincronizacion
	

<<<<<<< HEAD
 
=======
  
>>>>>>> dev_sincronizacion
  



  printf("\n\t_______________________  monitor de procesos %d _______________________\n\n",pto_inf->pid_mon);
  printf("\t\t pid\tnumero\ttermino\n");
  printf("\t\t-------------------------\n");
  
      printf(" \t\t%d\t%d\t", pto_inf->array_p[i].pid,pto_inf->array_p[i].numero);
      
        printf("\tno \n");
      
        printf("\tsi \n");

      


    perror("\tsemget");
   

  
    perror("\terror al eliminar el semaforo");
    

  
		perror("\tshmget");
		

	
		perror("\tshmctl");
		
	system("clear");
	printf("\thasta luego!\n");
  
