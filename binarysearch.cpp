#include<iostream.h>
void masukan (int x[],int jumlah);   //prototype memasukkan data
void tampilan(int x[],int jumlah);   //Prototype membuat tampilan/cetak
void BubbleSort(int x[],int jumlah); //Prototype melakukan pengurutan ada dengan bubble sort
void tukar (int &i,int &j);          //Prototype melakukan pertukaran data
void selection_sort(int x[], int jumlah);
void binarySearch (int x[], int jumlah);
main()
{
	int jumlah;
	int temp;
	int cari;
	cout<<"Berapa jumlah data yang di Input";
	cin>>jumlah;
	
	int data[jumlah];  //deklarasi jumlah data
	
	masukan(data,jumlah);
	
	cout<<"Data sebelum diurutkan\n";
	tampilan(data,jumlah);
	
	BubbleSort(data,jumlah);
	cout<<"Data setelah diurutkan\n";
	tampilan(data,jumlah);
	
	cout<<"Input data yang akan dicari";
	cin>>cari;
	
	binarySearch(data,jumlah,cari); // "Data ditemukan sebanyak " atau  Data tidak ditemukan";  
}
void masukan (int x[],int jumlah)
{
	for(int i=0; i<jumlah; i++){
	    cout<<"Data ke ["<<i+1<<"]:";
	    cin>>x[i];
	}
}
void tampilan(int x[], int jumlah)
{
	for(int i=0; i<jumlah; i++)
		cout<<" "<<x[i];
	{
		
	}
	cout<<"\n";
}
void BubbleSort(int x[],int jumlah){
	int temp;
	for(int i=0; i<jumlah; i++)
		for(int j=i+1; j<jumlah; j++)
			if(x[i]>x[j])
			tukar(x[i],x[j]);
}
void tukar (int &i,int &j)
{
	int temp;
				temp=i;
				i=j;
				j=temp;
}
void selection_sort(int x[], int jumlah)
{
      int temp, min, i, j;

      for(i=0; i<jumlah;i++)
      {
            min = i;
            for(j = i+1; j<jumlah; j++)
            {
                  if(data[j]<data[min])
                  {
                        min=j;
                  }
            }
            temp = data[i];
            data[i]  = data[min];
            data[min] = temp;
      }
}

void binarysearch()
{
      //searching
      int awal, akhir, tengah, b_flag = 0;
      awal = 0;
      akhir = 7;
      while (b_flag == 0 && awal<=akhir)
      {
            tengah = (awal + akhir)/2;
            if(data[tengah] == cari)
            {
                  b_flag = 1;
                  break;
            }
            else if(data[tengah]<cari)
                  awal = tengah + 1;
            else
                  akhir = tengah -1;
      }

        if(b_flag == 1)
            cout<<"\nData ditemukan pada index ke-"<<tengah<<endl;
      else
            cout<<"\nData tidak ditemukan\n";
}
