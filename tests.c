/*
 * tests.c

 *
 *  Created on: Apr 2, 2015
 *      Author: matan
 */


#include "param.h"
#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
#include "fcntl.h"
#include "syscall.h"
#include "traps.h"
#include "memlayout.h"


int main() {
	int status;
	int gal=1;
	int pid = fork();
	if (pid==0) {
		exit(1);
	}
	else {
		printf(1,"the exit status address: %d\n",status);
		printf(1,"gal is: %d\n",gal);
		wait(&status);
		printf(1,"the exit status address: %d\n",status);
	}
	exit(0);
}





