
int main(){
int n,i,j,spasi=0;
scanf("%d",&n);
char arr[n][50];
for(i=0;i<n;i++){
	scanf("%s",&arr[i]);
}
for(i=0;i<n;i++){
	for(j=0;j<spasi;j++){
		printf(" ");
	}
	printf("%c\n",arr[i]);
	spasi=spasi+strlen(arr[i]);

}

return 0;
}