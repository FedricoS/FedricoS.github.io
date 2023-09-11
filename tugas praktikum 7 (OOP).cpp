#include <stdio.h>
#include <conio.h> 
class Bilangan_Terbesar{
	int A; int B; int C;
	public:
	
	void set_value (int,int,int);
	int area ( ) { if (A>B&&A>C)
        printf("Bilangan Terbesar adalah Angka KE-1\n",A,B,C);
   
    if (B>A&&B>C)
        printf("Bilangan Terbesar adalah Angka KE-2\n",A,B,C);
    if (C>A&&C>B)
        printf("Bilangan Terbesar adalah Angka KE-3\n",A,B,C);}};
	
		
	
void Bilangan_Terbesar	::set_value (int x,int y,int z){
	A=x; B=y; C=z;
        
}
int main()
{	
	Bilangan_Terbesar bil;
    int A,B,C;
    printf("Perbandingan Tiga Angka\n");
    printf("INPUT ANGKA KE-1=	");
    scanf("%d",&A);
    printf("INPUT ANGKA KE-2=	");
    scanf("%d",&B);
    printf("INPUT ANGKA KE-3=	");
    scanf("%d",&C);
    bil.set_value(A,B,C);
   
   printf("%s",bil.area());
   
   
    getch();
    return 0;
}