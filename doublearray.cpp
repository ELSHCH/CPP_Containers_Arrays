#include <iostream>
#include <algorithm>

using namespace std;

int main(){

int* p_a; 
p_a = new int[2];
int **pp_a[4];

p_a[0]=1;p_a[1]=0;
for (int j=0; j < 4; j++){
	
       pp_a[j] = &p_a;	
}       

for (int i=0; i < 2; i++){
	for (int j=0; j < 4; j++){
      // pp_a[i][j] = j+ i*2;	   
	   printf("%d\n",pp_a[i][j]);  
//} 	
}
}  
//free(d);	
}