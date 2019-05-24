#include <stdio.h>
#include <stdlib.h>
#include "bojeu.h"

int main() {
	while(shouldWin) {
		doThePoints();
		
		if(somethingInTheWay) {
			avoidIt();
		}
	}
}