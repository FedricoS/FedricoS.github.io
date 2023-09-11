#include<stdio.h>
#include<iostream.h>
#include <fstream>
using namespace std;
typedef struct gaji
{
	char nama[50];
    int jumlah_jam;
	char grade;
} labor;

ofstream prak5;

int main(void)
{
	int jumlah, total ;
	
	cout<<"Input banyak data ";
	cin>>jumlah;
	
	prak5.open("fedrico.txt",ios::trunc);
	
	labor student[jumlah];
	
	for(int i=0;i<jumlah;i++)
	
	
	{

	cout<<"Input data ke- "<<i+1<<"\n";
	cout<<"Masukkan Nama ";
	cin>>student[i].nama;
	cout<<"Masukkan jumlah jam ";
	cin>>student[i].jumlah_jam;
	cout<<"Masukkan grade ";
	cin>>student[i].grade;
	cout<<"\n";
	
	prak5.close();
	cout<<"TEXT TELAH DITULIS"<<endl;
	
	}

	cout<<"Tabel gaji student labor \n";
	cout<<"\n";

	cout<<"_________________________\n";
	
	if(!prak5.fail())
		{
	for(int i=0;i<jumlah;i++)
	{
 		
		cout<<"|"<<i+1<<" | "<<student[i].nama<<" | "<<student[i].jumlah_jam<<" | "<<student[i].grade<<" | ";
		
		if(student[i].grade=='A')
		  total=student[i].jumlah_jam*6500;
  		else if(student[i].grade=='B')
  		  total=student[i].jumlah_jam*5000;
  		  if(student[i].grade=='C')
  		  total=student[i].jumlah_jam*4000;
  		  
  		  cout<<total<<"|"<<"\n";
	}