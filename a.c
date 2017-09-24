#include <stdio.h>
int main(){
	int a[10][10],b[10][10],result[10][10],mul[10][10];
	int r1,c1,r2,c2,i,j,k;
	printf("Enter rows and column for first matrix:");
	scanf("%d %d",&r1,&c1);
	printf("Enter rows and column for second matrix:");
	scanf("%d %d",&r2,&c2);
	while(c1!=r2){
		printf("Error! column of first matrix not equal to row of second matrix.\n");
		printf("Enter rows and column for first matrix:");
	scanf("%d %d",&r1,&c1);
	printf("Enter rows and column for second matrix:");
	scanf("%d %d",&r2,&c2);
	}
	//storing elements of first matrix
	for(i=0; i<r1; ++i)
		for(j=0; j<c1; ++j){
			printf("Enter elements of first matrix a%d%d: ",i+1,j+1);
		scanf("%d",&a[i][j]);
	}
		printf("Enter rows and column for second matrix\n");
		for(i=0; i<r2; ++i)
			for(j=0; j<c2; ++j){
				printf("Enter elements of second matix b%d%d: ",i+1,j+1);
				scanf("%d",&b[i][j]);
			}
			for(i=0; i<r1; ++i)
				for(j=0; j<c1; ++j){
					mul[i][j]+=a[i][j]*b[j][i];
				}
				printf("%d",mul[i][j]);
				for(i=0; i<r2; ++i)
					for(j=0; j<c2; ++j){
						mul[i][j]+=a[i][j]*b[i][j];
					}
				//displaying the result
				printf("multiply of two matrix is:");
				for(i=0; i<r1; ++i)
					for(j=0; j<c1; ++j){
						printf("%d  ",mul[i][j]);
					if(j==c1-1){
						printf("\n\n");
					}
					for(i=0; i<r2; ++i)
						for(j=0; j<c2; ++j){
							printf("%d  ",mul[i][j]);
							if(j==c2-1){
								printf("\n\n");
							}
						}
					}
}


