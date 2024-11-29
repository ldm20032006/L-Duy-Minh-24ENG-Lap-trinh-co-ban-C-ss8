#include<stdio.h>
int main(){
	int n[100][100];
	int a,b, tong = 0;
	printf("Nhap so hang: ");scanf("%d",&a);
	printf("Nhap so cot: ");scanf("%d",&b);
	//Nhap ma tran tu ban phim 
	for(int i = 0; i < a; i++){
		for(int j=0;j<b;j++){ 
		printf("Nhap phan tu hang %d cot %d: ", i,j);
		scanf("%d", &n[i][j]); 
	}
	}
        printf("Duong cheo phu cua ma tran la: \n");
        for (int i = 0; i < a; i++) {
            printf("%d ", n[i][a - i - 1]);
            tong+=n[i][a-i-1];
        }
        printf("\n"); 
    printf("Tong cua duong cheo phu la %d",tong);
}

