#include <iostream.h>
#include <string.h>
#include <iomanip.h>
main()
{
	char n[100];
		char nama[27][100];
		char alamat[27][100];
		char no_telp[27][100];
		
		strcpy(nama[0],"Komang Kertayasa");
		strcpy(nama[1],"Nengah Wartawan");
		strcpy(nama[2],"Kadekyogi Darmayana");
		strcpy(nama[3],"Komang Setiawan");
		strcpy(nama[4],"Made Riadi");
		strcpy(nama[5],"Kadeksomo");
		strcpy(nama[6],"Putu Sudarsana");
		strcpy(nama[7],"Abdul Kudir");
		strcpy(nama[8],"Misran");
		strcpy(nama[9],"Sarka");
		strcpy(nama[10],"Ketut Surya Dana");
		strcpy(nama[11],"Wayan Sodrem");
		strcpy(nama[12],"Dekandok");
		strcpy(nama[13],"Made Karya");
		strcpy(nama[14],"Gede Suyadna");
		strcpy(nama[15],"Ketut Sulasa");
		strcpy(nama[16],"Wayan Mara");
		strcpy(nama[17],"Gede Wiyana");
		strcpy(nama[18],"Kadek Putra Wisana");
		strcpy(nama[19],"Gst Putu Suardana");
		strcpy(nama[20],"Wayan Suradyana");
		strcpy(nama[21],"Hjali Bashori");
		strcpy(nama[22],"Wayan Sugama");
		strcpy(nama[23],"Wayan Sucita");
		strcpy(nama[24],"Komang Sukadana");
		strcpy(nama[25],"Kadek Sugianta");
		strcpy(nama[26],"Kadek Riama");
		
		strcpy(alamat[0],"Mekarsari");
		strcpy(alamat[1],"Pangkung Buluh");
		strcpy(alamat[2],"Tetelan");
		strcpy(alamat[3],"Tetelan");
		strcpy(alamat[4],"Moding");
		strcpy(alamat[5],"Tukad Daya");
		strcpy(alamat[6],"Tukad Daya");
		strcpy(alamat[7],"Air Anakan");
		strcpy(alamat[8],"Air Anakan");
		strcpy(alamat[9],"Tukad Daya");
		strcpy(alamat[10],"Pangkung Buluh");
		strcpy(alamat[11],"Mo Ding");
		strcpy(alamat[12],"Tukad Daya");
		strcpy(alamat[13],"Warna Sari");
		strcpy(alamat[14],"Pangkung Buluh");
		strcpy(alamat[15],"Brawantangi");
		strcpy(alamat[16],"Pangkung Buluh");
		strcpy(alamat[17],"Pangkung Buluh");
		strcpy(alamat[18],"Brawantangi");
		strcpy(alamat[19],"Sari Kuning");
		strcpy(alamat[20],"Mekarsari");
		strcpy(alamat[21],"Pangkung Dedari");
		strcpy(alamat[22],"Awan Lelateng");
		strcpy(alamat[23],"Awan Lelateng");
		strcpy(alamat[24],"Awan Lelateng");
		strcpy(alamat[25],"Mekarsari");
		strcpy(alamat[26],"Mekarsari");
	
		strcpy(no_telp[0],"087 725 053 212");
		strcpy(no_telp[1],"087 860 120 853");
		strcpy(no_telp[2],"087 862 120 043");
		strcpy(no_telp[3],"087 761 119 912");
		strcpy(no_telp[4],"087 863 044 280");
		strcpy(no_telp[5],"087 953 770 741");
		strcpy(no_telp[6],"087 861 576 522");
		strcpy(no_telp[7],"");
		strcpy(no_telp[8],"");
		strcpy(no_telp[9],"");
		strcpy(no_telp[10],"");
		strcpy(no_telp[11],"087 861 817 661");
		strcpy(no_telp[12],"");
		strcpy(no_telp[13],"087 866 003 580");
		strcpy(no_telp[14],"081 936 014 324");
		strcpy(no_telp[15],"081 999 270 733");
		strcpy(no_telp[16],"");
		strcpy(no_telp[17],"");
		strcpy(no_telp[18],"085 737 218 480");
		strcpy(no_telp[19],"085 638 389 68");
		strcpy(no_telp[20],"");
		strcpy(no_telp[21],"081 339 046 038");
		strcpy(no_telp[22],"087 762 149 469");
		strcpy(no_telp[23],"087 760 237 108");
		strcpy(no_telp[24],"081 797 028 75");
		strcpy(no_telp[25],"081 236 007 791");
		strcpy(no_telp[26],"081 936 447 476");
	
	cout<<("Tabel Sebelum Diurutkan")<<endl;
	for(int p=0;p<27;p++)
	{
		cout<<setiosflags(ios::left)<<setw(25)<<nama[p]<<setiosflags(ios::left)<<setw(25)<<alamat[p]<<no_telp[p]<<endl;
	}cout<<endl;
	
	for(int p=0;p<27;p++)
	{
		for(int q=p+1;q<27;q++)
		{
			if(strcmp(nama[p],nama[q])>0)
			{
				strcpy(n,nama[q]);
				strcpy(nama[q],nama[p]);
				strcpy(nama[p],n);
				
				strcpy(n,alamat[q]);
				strcpy(alamat[q],alamat[p]);
				strcpy(alamat[p],n);
				
				strcpy(n,no_telp[q]);
				strcpy(no_telp[q],no_telp[p]);
				strcpy(no_telp[p],n);
			}
		}
	}
	
	cout<<("Tabel Nama Yang sudah Diurutkan")<<endl;
	for(int p=0;p<27;p++)
	{
		cout<<setiosflags(ios::left)<<setw(25)<<nama[p]<<setiosflags(ios::left)<<setw(25)<<alamat[p]<<no_telp[p]<<endl;
	}cout<<endl;
	
	for(int p=0;p<27;p++)
	{
		for(int q=p+1;q<27;q++)
		{
			if(strcmp(nama[p],nama[q])>0)
			{
				strcpy(n,nama[q]);
				strcpy(nama[q],nama[p]);
				strcpy(nama[p],n);
				
				strcpy(n,alamat[q]);
				strcpy(alamat[q],alamat[p]);
				strcpy(alamat[p],n);
				
				strcpy(n,no_telp[q]);
				strcpy(no_telp[q],no_telp[p]);
				strcpy(no_telp[p],n);
			}
		}
	}
	cout<<("Tabel Alamat Yang Sudah Diurutkan")<<endl;
	for(int p=0;p<27;p++)
	{
		cout<<setiosflags(ios::left)<<setw(25)<<nama[p]<<setiosflags(ios::left)<<setw(25)<<alamat[p]<<no_telp[p]<<endl;
	}cout<<endl;
	
	for(int p=0;p<27;p++)
	{
		for(int q=p+1;q<27;q++)
		{
			if(strcmp(alamat[p],alamat[q])>0)
			{
				strcpy(n,nama[q]);
				strcpy(nama[q],nama[p]);
				strcpy(nama[p],n);
				
				strcpy(n,alamat[q]);
				strcpy(alamat[q],alamat[p]);
				strcpy(alamat[p],n);
				
				strcpy(n,no_telp[q]);
				strcpy(no_telp[q],no_telp[p]);
				strcpy(no_telp[p],n);
			}
		}
	}
	cout<<("Tabel No Telepon Yang Sudah Di Urutkan")<<endl;
	for(int p=0;p<27;p++)
	{
		cout<<setiosflags(ios::left)<<setw(25)<<nama[p]<<setiosflags(ios::left)<<setw(25)<<alamat[p]<<no_telp[p]<<endl;
	}cout<<endl;
	
	for(int p=0;p<27;p++)
	{
		for(int q=p+1;q<27;q++)
		{
			if(strcmp(no_telp[p],no_telp[q])>0)
			{
				strcpy(n,nama[q]);
				strcpy(nama[q],nama[p]);
				strcpy(nama[p],n);
				
				strcpy(n,alamat[q]);
				strcpy(alamat[q],alamat[p]);
				strcpy(alamat[p],n);
				
				strcpy(n,no_telp[q]);
				strcpy(no_telp[q],no_telp[p]);
				strcpy(no_telp[p],n);
			}
		}
	}
	
}