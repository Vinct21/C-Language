#include<stdio.h>
#include<math.h>
#define kons 57.2958
#define phi 3.14
int main()
{
	int a, b, c, d, e, menu1, menu2, menu3, hasil, kalkulator;
	int luas, keliling;
	float z;
	printf("====================================\n");
    printf("=             Kalkulator           =\n");
    printf("====================================\n\n");
    printf("      Jenis Kalkulator :\n");
    printf("      1. Kalkulator Dasar\n");
    printf("      2. Kalkulator Trigonometri\n");
    printf("      3. Kalkulator Luas dan Keliling Bidang datar\n\n");
    printf("Pilih Jenis Kalkulator :");
    scanf("%d", &kalkulator);
    getchar;
    printf("--------------------------------------\n");
    if (kalkulator == 1 )
    {
    		printf("====================================\n");
    		printf("=         Kalkulator Dasar         =\n");
    		printf("====================================\n\n");
    		printf("      Menu :\n");
    		printf("      1. Penjumlahan\n");
    		printf("      2. Pengurangan\n");
    		printf("      3. Perkalian\n");
    		printf("      4. Pembagian\n");
    		printf("      5. Pangkat kuadrat\n");
    		printf("      6. Pangkat 3\n\n");
    		printf("Pilih Menu :");
    		scanf("%d", &menu1);
    		getchar;
    		printf("------------------------------------\n");
    		if (menu1 == 1)
    		{
    			printf("\nPenjumlahan :\n");
        		printf("Masukan angka pertama : ");
        		scanf("%d", &a);
        		printf("Masukan angka kedua   : ");
        		scanf("%d", &b);
        		hasil = a + b;
        		printf("------------------------------- \n");
        		printf("Hasil:\t\t\t%d\n",hasil);}
        	else if (menu1 == 2)
    		{		
				printf("\nPengurangan :\n");
        		printf("Masukan angka pertama : ");
        		scanf("%d", &a);
        		printf("Masukan angka kedua   : ");
        		scanf("%d", &b);
        		hasil = a - b;
        		printf("------------------------------- \n");
        		printf("Hasil:\t\t\t%d\n",hasil);}
        	else if (menu1 == 3)
        	{
    			printf("\nPerkalian :\n");
        		printf("Masukan angka pertama : ");
        		scanf("%d", &a);
        		printf("Masukan angka kedua   : ");
        		scanf("%d", &b);
        		hasil = a * b;
        		printf("------------------------------- \n");
        		printf("Hasil:\t\t\t%d\n",hasil);}
        	else if (menu1 == 4)
        	{
    			printf("\nPembagian :\n");
        		printf("Masukan angka pertama : ");
        		scanf("%d", &a);
        		printf("Masukan angka kedua   : ");
        		scanf("%d", &b);
        		hasil = a / b;
        		printf("------------------------------- \n");
        		printf("Hasil:\t\t\t%d\n",hasil);}
        	else if (menu1 == 5)
        	{
    			printf("\nPangkat kuadrat :\n");
        		printf("Masukan angka : ");
        		scanf("%d", &a);
        		hasil = a * a;
        		printf("------------------------------- \n");
        		printf("Hasil:\t\t\t%d\n",hasil);}
        	else if (menu1 == 6)
        	{			
    			printf("\nPangkat 3 :\n");
        		printf("Masukan angka : ");
        		scanf("%d", &a);
        		hasil = a * a * a;
        		printf("------------------------------- \n");
        		printf("Hasil:\t\t\t%d\n",hasil);}
        	else
        	{
        		printf("Maaf Menu belum ada.");
			}
	}
			
	else if (kalkulator == 2)
	{
		printf("====================================\n");
    	printf("=      Kalkulator Trigonometri     =\n");
    	printf("====================================\n\n");
    	printf("      Menu :\n");
    	printf("      1. Sin\n");
    	printf("      2. Cos\n");
    	printf("      3. Tan\n\n");
    	printf("Pilih Menu :");
    	scanf("%d",&menu2);
    	getchar;
    	printf("-------------------------------------\n");
    	if (menu2 == 1)
    	{
    		printf("\nSin:\n");
        	printf("Masukan derajat : ");
        	scanf("%f", &z);
        	printf("------------------------------- \n");
        	printf("Hasil:\t\t\t%.4f\n",sin(z/kons));}
        else if (menu2 == 2)
        {
        	printf("\nCos:\n");
        	printf("Masukan derajat : ");
        	scanf("%f", &z);
        	printf("------------------------------- \n");
        	printf("Hasil:\t\t\t%.4f\n",cos(z/kons));}
        else if (menu2 == 3)
        {
        	printf("\nTan:\n");
        	printf("Masukan derajat : ");
        	scanf("%f", &z);
        	printf("------------------------------- \n");
        	printf("Hasil:\t\t\t%.4f\n",tan(z/kons));}
        else 
        {
        	printf("Maaf Menu belum ada.");
		}
	}
	else if (kalkulator == 3)
	{
		printf("===============================================\n");
    	printf("=   Kalkulator Luas & Keliling Bangun Datar   =\n");
    	printf("===============================================\n\n");
    	printf("      Menu :\n");
    	printf("      1. Persegi\n");
    	printf("      2. Persegi Panjang\n");
    	printf("      3. Layang Layang\n");
    	printf("      4. Segitiga\n");
    	printf("      5. Lingkaran\n");
    	printf("      6. Jajargenjang\n");
    	printf("      7. Belah Ketupat\n");
    	printf("      8. Trapesium\n\n");
    	printf("Pilih Menu :");
    	scanf("%d", &menu3);
    	getchar;
    	printf("------------------------------------------------\n");
    	if ( menu3 == 1)
		{
			printf("\nLuas & Keliling Persegi :\n");
        	printf("Masukan panjang sisi (cm) :  ");
        	scanf("%d", &a);
        	luas = a * a;
        	keliling = 4 * a;
        	printf("------------------------------- \n\n");
        	printf("Luas dari Persegi     :\t%dcm\n",luas);
			printf("Keliling dari Persegi :\t%dcm\n",keliling);}	
		else if (menu3 == 2)
		{
			printf("\nLuas & Keliling Persegi Panjang :\n");
        	printf("Masukan ukuran panjang (cm) : ");
        	scanf("%d", &a);
        	getchar;
        	printf("Masukan ukuran lebar   (cm) : ");
        	scanf("%d", &b);
        	getchar;
        	luas = a * b;
        	keliling = 2 * (a + b);
        	printf("------------------------------- \n\n");
        	printf("Luas dari Persegi Panjang     :\t%dcm\n",luas);
			printf("Keliling dari Persegi Panjang :\t%dcm\n",keliling);}
		else if (menu3 == 3)
		{
			printf("\nLuas & Keliling Layang-Layang :\n");
        	printf("Masukan ukuran Diagonal pertama (cm) : ");
        	scanf("%d", &a);
        	getchar;
        	printf("Masukan ukuran Diagonal kedua   (cm) : ");
        	scanf("%d", &b);
        	getchar;
        	printf("Masukan ukuran sisi panjang     (cm) : ");
        	scanf("%d", &c);
        	getchar;
        	printf("Masukan ukuran sisi pendek      (cm) : ");
        	scanf("%d", &d);
        	getchar;
        	luas = 0.5 * a * b;
        	keliling = 2 * (c + d);
        	printf("------------------------------- \n\n");
        	printf("Luas dari Layang-Layang     :\t%dcm\n",luas);
			printf("Keliling dari Layang-Layang :\t%dcm\n",keliling);}
		else if (menu3 == 4)
		{
			printf("\nLuas & Keliling Segitiga :\n");
        	printf("Masukan ukuran Alas             (cm) : ");
        	scanf("%d", &a);
        	getchar;
        	printf("Masukan ukuran Tinggi           (cm) : ");
        	scanf("%d", &b);
        	getchar;
        	printf("Masukan ukuran sisi pertama     (cm) : ");
        	scanf("%d", &c);
        	getchar;
        	printf("Masukan ukuran sisi kedua       (cm) : ");
        	scanf("%d", &d);
        	getchar;
        	printf("Masukan ukuran sisi ketiga      (cm) : ");
        	scanf("%d", &e);
        	getchar;
        	luas = 0.5 * a * b;
        	keliling = c + d + e;
        	printf("------------------------------- \n\n");
        	printf("Luas dari Segitiga      :\t%dcm\n",luas);
			printf("Keliling dari Segitiga  :\t%dcm\n",keliling);}	
		else if (menu3 == 5)
		{
			printf("\nLuas & Keliling Lingkaran :\n");
        	printf("Masukan ukuran jari-jari (cm) : ");
        	scanf("%d", &a);
        	getchar;
        	luas = phi * a * a;
        	b = 2 * a;
        	keliling = phi * b;
        	printf("------------------------------- \n\n");
        	printf("Luas dari Lingkaran     :\t%dcm\n",luas);
			printf("Keliling dari Lingkaran :\t%dcm\n",keliling);}
		else if (menu3 == 6)
		{
			printf("\nLuas & Keliling Jajargenjang :\n");
        	printf("Masukan ukuran Alas             (cm) : ");
        	scanf("%d", &a);
        	getchar;
        	printf("Masukan ukuran Tinggi           (cm) : ");
        	scanf("%d", &b);
        	getchar;
        	printf("Masukan ukuran sisi pertama     (cm) : ");
        	scanf("%d", &c);
        	getchar;
        	printf("Masukan ukuran sisi kedua       (cm) : ");
        	scanf("%d", &d);
        	getchar;
        	luas = a * b;
        	keliling = 2 * (c + d);
        	printf("------------------------------- \n\n");
        	printf("Luas dari Jajargenjang     :\t%dcm\n",luas);
			printf("Keliling dari Jajargenjang :\t%dcm\n",keliling);}
		else if (menu3 == 7)
		{
			printf("\nLuas & Keliling Belah Ketupat :\n");
        	printf("Masukan ukuran Diagonal pertama (cm) : ");
        	scanf("%d", &a);
        	getchar;
        	printf("Masukan ukuran Diagonal kedua   (cm) : ");
        	scanf("%d", &b);
        	getchar;
        	printf("Masukan ukuran sisi             (cm) : ");
        	scanf("%d", &c);
        	getchar;
        	luas = 0.5 * a * b;
        	keliling = 4 * c;
        	printf("------------------------------- \n\n");
        	printf("Luas dari Jajargenjang     :\t%dcm\n",luas);
			printf("Keliling dari Jajargenjang :\t%dcm\n",keliling);}
		else if (menu3 == 8)
		{
			printf("\nLuas & Keliling Trapesium :\n");
        	printf("Masukan ukuran sisi pertama                               (cm) : ");
        	scanf("%d", &a);
        	getchar;
        	printf("Masukan ukuran sisi yang berhadapan dengan sisi pertama   (cm) : ");
        	scanf("%d", &b);
        	getchar;
        	printf("Masukan ukuran sisi kiri                                  (cm) : ");
        	scanf("%d", &c);
        	getchar;
        	printf("Masukan ukuran sisi kanan                                 (cm) : ");
        	scanf("%d", &d);
        	getchar;
        	printf("Masukan ukuran Tinggi                                     (cm) : ");
        	scanf("%d", &e);
        	luas = 0.5 * (a + b) * e;
        	keliling = a + b + c +d;
        	printf("------------------------------- \n\n");
        	printf("Luas dari Layang-Layang     :\t%dcm\n",luas);
			printf("Keliling dari Layang-Layang :\t%dcm\n",keliling);}	
			else
			{
				printf("Maaf Menu belum ada.");
			}			
	}	
	else 
	{
		printf("Maaf Kalkulator belum ada.");
	}
	return(0);
}
