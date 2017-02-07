#include <stdio.h>
#include <string.h>

int main () {
	char str[100];
	int i,j=0,k,vokal=0,konsonan=0;
	int kali;

	scanf("%s", &str);

	for (i = 0 ; i < strlen(str) ; i++) {
		if ((str[i]=='a')||(str[i]=='i')||(str[i]=='u')
			||(str[i]=='e')||(str[i]=='o')) {
			vokal++;
		} else {
			konsonan++;
		}
	}

	kali = (konsonan * vokal) % 2 ;
	// printf("%d\n", kali);
	int count=0;
	if (kali==1){
		while(j<strlen(str)) {
			if (j<strlen(str)) {
				for (i = 0 ; i < 3 ; i++) {
					if (count%2==0) {
						if (j<strlen(str)) {
							for (k=0 ; k < i ; k++) {
								printf(" ");
							}
							printf("%c",str[j]);
							j++;	
						}else {
							printf("\0");
							break;
						}
						printf("\n");
					} else {
						if (j<strlen(str)) {
							printf("%c",str[j]);
							j++;	
						}else {
							printf("\0");
						}
					}
				}
				if (count%2==1) {
					printf("\n");
				}
				count++;			
			}
		}
	} else if (kali==0){
		while(j<strlen(str)) {
			if (j<strlen(str)) {
				for (i = 0 ; i < 4 ; i++) {
					if (count%2==0) {
						if (j<strlen(str)) {
							for (k=0 ; k < i ; k++) {
								printf(" ");
							}
							printf("%c",str[j]);
							j++;	
						}else {
							printf("\0");
							break;						
						}
						printf("\n");
					} else {
						if (j<strlen(str)) {
							printf("%c",str[j]);
							j++;	
						}else {
							printf("\0");
						}
					}
				}
				if (count%2!=0) {
					printf("\n");
				}
				count++;			
			}
		}
	}
	return 0;
}

/*
mencarikebenaranadalahhalyangmembuathidupkitatenangpadaakhirnya
 */