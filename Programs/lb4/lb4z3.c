#include <stdio.h>
#include <stdlib.h>
#include <math.h>



double sr(int a[], int n) 

{ double s=0; int i, kol=0; 

for (i=0; i<n; i++) 

if (a[i]) { s+=a[i]; kol++; } 

if (kol) s/=kol; 

return s; 

} 

int main () 

{ setlocale(0,".1251"); 

int a[10], i; 

cout<<" ����i�� 10 �i��� �����:\n"; 

for(i=0; i<10; i++) cin >> a[i]; 

cout<<"\n ������� ����������� "<<10<<" �������i� - " <<sr(a,10) <<endl; 

cout<<" ������� ����������� "<< 5 << " �������i� - " << sr(a,5) <<endl; 

system ("pause>>void"); 

return 0; 

} 
