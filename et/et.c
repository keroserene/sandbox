/** @brief Tests execve's envp parameter. 
 *  	
 *  Execs itself with a different environment.
 *
 *  @author keroserene
 */ 

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

extern char **environ;

void printEnv();
char *args[] = {"execveTest", "forkeded", NULL};
char *envs[] = {"im=a","kiddy=lol", NULL};
        		
int main(int argc, char * argv[]) {

	/* Exec'd Child */
	if (argc > 1) {
		printf("Environmental variables of child:\n");
		printEnv();
		return 0;
	} 

	/* Parent */
	printf("Environmental variables of parent:\n");	
	printEnv();

	printf("\n\n---Execve for kiddy!---\n\n");
	execve("et", args, envs);

	printf("Execve failed... :(\n");
	return -1;
}

void printEnv() {
	int i = 0;
	while (NULL != environ[i]) {
		printf("%d] %s\n", i, environ[i]);
		i++;
	}
}
