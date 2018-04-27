
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

int shmem_init(shmem_data *);

int llamadaSemaforo(int semId, int semNum, int op)
{
  struct sembuf sops;
  sops.sem_num = semNum;
  sops.sem_op = op;
  sops.sem_flg = 0;
  return (semop(semId, &sops, 1)); /** retorna -1 en caso de error **/
}

int main()
{

  int sem;

  system("clear");
  printf("\n\t--> proceso %d \n\n",getpid());
  srand(getpid());
  key_t id_shmem = ftok(ROUTE, ID);
  void *pto_shmem;
  shmem_data *pto_inf;
  int i = 0, shmem, pos, repeticion;

  if ((sem  = semget(SEM_ID, 1, 0644)) < 0) {
    perror("\tsemget");
    exit(EXIT_FAILURE);
  }

<<<<<<< HEAD

  
=======
  
>>>>>>> dev_sincronizacion
  
		perror("\tshmget");
		

<<<<<<< HEAD
  
=======
  
>>>>>>> dev_sincronizacion
	
		perror("\tshmat");
		

	
		  perror("\tshmdt");
		 
    printf("\t\tmonitor sin espacio!!!\n\n");
    
<<<<<<< HEAD
    
    usleep(400000);
=======
    
    usleep(500000);
>>>>>>> dev_sincronizacion
  
	  perror("\tshmdt");
	  
