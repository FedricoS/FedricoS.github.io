#include<stdio.h>

typedef struct biodata{
	char nama[30];
	char alamat[30];
	char notelp[15];
}data;

void input (data x [], int jumlah);
void cetak (data x [], int jumlah);

int main()
{
	int jumlah;
	
	printf("Input banyaknya data");
	scanf("%d",&jumlah);
	
	data mahasiswa[jumlah];
	
	input(mahasiswa,jumlah);
	
	cetak(mahasiswa,jumlah);
}

void input(data x[], int jumlah){
	for(int i=0; i<jumlah;i++)
	{
		printf("input nama");
		scanf("%s",x[i].nama);
	}
}

void cetak(data x[],int jumlah){
	for(int i=0;i<jumlah;i++)
}