#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<fstream.h>

typedef struct tabel{
	char NAMA[30];
	char no_telp[30];
	char ALAMAT[30];
}data;

void masukan(data x[],int jumlah);
void tampilan(data x[],int jumlah);
void bubblesort(data x[],int jumlah);
void tukar(char *i,char *j);

ofstream filerico;

main(){

	int jumlah;
	printf("JUMLAH DATA : ");
	cin>>jumlah;
	
	filerico.open("fedrico.txt",ios::trunc);
	
	data pribadi[jumlah];
	masukan(pribadi,jumlah);
	
	filerico<<"DATA BEFORE BEING SORTED"<<endl;
	
	tampilan(pribadi,jumlah);

	
	bubblesort(pribadi,jumlah);
	
	puts("\n\nDATA AFTER BEING SORTED");
	filerico<<"DATA AFTER BEING SORTED"<<endl;
	tampilan(pribadi,jumlah);
	
	
	filerico.close();
	cout<<"TEXT TELAH DITULIS"<<endl;
	
}

void masukan(data x[],int jumlah){
	for(int i=0; i<jumlah; i++){
	    printf("Masukkan NAMA ke %i :",i+1);
	    scanf("%s",x[i].NAMA);
	    printf("Masukkan ALAMAT ke %i :",i+1);
	    scanf("%s",x[i].ALAMAT);
	    printf("Masukkan nomor telepon ke %i :",i+1);
	    scanf("%s",x[i].no_telp);
	    printf("\n");
	}
}

void tampilan(data x[],int jumlah){
	printf("NAMA\t\t\t ALAMAT\t\t\t No.Telp\t\t\t\n");
	
	if(!filerico.fail()){
	
	for(int i=0;i<jumlah;i++){
		printf("%s\t\t\t %s\t\t\t %s\t\t\t\n",x[i].NAMA,x[i].ALAMAT,x[i].no_telp);
		filerico<<x[i].NAMA<<endl;
		filerico<<x[i].ALAMAT<<endl;
		filerico<<x[i].no_telp<<endl;
	}
	}
}

void bubblesort(data x[],int jumlah){
	for(int i=0;i<jumlah;i++)
	{
		for(int j=i+1;j<jumlah;j++)
			{
			if(strcmp(x[j].NAMA	,x[i].NAMA	)<0){
				tukar(x[j].NAMA,x[i].NAMA);
				
				tukar(x[j].ALAMAT,x[i].ALAMAT);
				
				tukar(x[j].no_telp,x[i].no_telp);
			}
		}
	}
}


void tukar (char *i,char *j)
{
	char temp[30];
	strcpy(temp,i);
	strcpy(i,j);
	strcpy(j,temp);
}