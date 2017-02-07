#include <stdio.h>

int main () {
	//deklarasi array
	char c[6];

	//boolean dan for
	int vokal=0,konsonan=0,i;
	
	//perulangan
	for (i=1;i<=6;i++) {
		//inputan
		scanf(" %c",&c[i]);
		//pengkondisian
		if ((c[i]=='a')||(c[i]=='i')||(c[i]=='u')||(c[i]=='e')||(c[i]=='o')) {
			vokal++;
		} else {
			konsonan++;
		}
	}

	//ouputan
	if (konsonan>vokal) {
		printf("valid\n");
	} else {
		printf("tidak valid\n");
	}
	
	return 0;
}