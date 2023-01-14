#include"HyperExample.h"
#include"PETScExample.h"

int main(){
	HyperExample MA{};
	MA.run();
	if(MA.run() != 0){
		exit(1);
		}

	PETScExample MB{};
	MB.run();
	if(MB.run() != 0){
		exit(1);}
	return 0;
}


