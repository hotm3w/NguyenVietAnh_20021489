#include <iostream>
#include<cmath> 
#include <iomanip>
using namespace std;
 
int main() {
   int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int i;
   float total = 0;
   // tinh do dai cua mang
   int size = sizeof arr / sizeof arr[0];
     
   printf("In tat ca phan tu cua mang: \n");
   for(i = 0; i < size; i++) {
       printf("%d ", arr[i]);
    }
     
   // tinh tong cac phan tu cua mang
   for(i = 0; i < size; i++) {
      total = total + arr[i];
    }
	total/=size;
		printf("TBC= %f",total);
	float s=0;
	for(i=0;i<size;i++){
		s+=pow((arr[i]-total),2);
	}
	s/=size;

	s=sqrt(s);
   printf("\nPhuong sai= %f",s);
   return 0;
}
