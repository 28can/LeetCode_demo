#include <stdio.h>
int main(){
	int targe = 10;
	int i = 0;
	int j=i+1;
	int arr[5] = {1, 2, 4, 6, 9};
	for (; i < 5; i++){
		for ( j = i + 1; j < 5; j++){
			if(arr[i] + arr[j]==targe ){
				if(i > j){                                                                          
					printf ("[%d,%d]",j,i);
				}else{
					printf ("[%d,%d]",i,j);
				}
			}
		}
	}
	
	
	/*for (;i < 5 ; i++){
		for (int j =0; j < 5; j++){
			if(arr[i] + arr[j]==targe ){
				if(i > j){                                                                          
					printf ("[%d,%d]",j,i);
				}else{
					printf ("[%d,%d]",i,j);
				}
			}
		}
	}*/
	return 0;
}
