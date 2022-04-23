/*
Bu bizim yazaca��m�z ilk program �rne�i olup, y�ksek seviyeli dilin bir kaynak kod (source code) 
�rne�i baz� yaz�l�m kavramlar�n� tan�t�m�na yard�mc� olacakt�r. Bu yazaca��m�z kodlar g�nl�k 
ingilizce deyimler i�ererek bizim anlayaca��m�z �ekilde yaz�lacakt�r. Yazaca��m�z kod b�t�n� makina
diline bir derleyici (compiler) taraf�ndan �evrilecektir. �o�u programlama dilleri ilk y�llarda yap�sal
diller olarak kullan�l�yordu. Bu dillerin en �nemli �zelli�i fonksiyonlara dayal� olmas� ve yukar�dan
a�a��ya sat�r sat�r ilerlemesi. �imdi a�a��da basit bir kaynak C dili kodu yazaca��z 
*/
#include<stdio.h>  //Bu k�t�phane temel giri� ve ��k�� i�lemleri ve de�i�kenler kullan�m� i�in i�erilmi�tir

int square(int);  //programci eklenti fonksiyonun prototipi main'den �nce deklere edilmeli
void hello();     //Bu fonksiyonun da prototipi buraya yaz�lmal�
void f1(int); 

int square(int z){
	return z*z;
}

int main() {   //bu bir t�r ana fonksiyon olup program �al��maya main �zerinden ba�lar
	int a,b;  //iki de�i�ken deklere edildi, belle�e git ve bir tam say� yeri belirle
	/*    Adres  Veri etiketi
	      127fa  a             5  15  
		  128f1  b	              
	*/
	//printf("b=%d\n",b); Herhangi bir de�er atanmad��� i�in b de�eri ��p de�er olabilir.
	a=5;  //Bu i�leme atama denir, e�itlikle kar��t�rmay�n! sol taraf bir bellek b�lgesi temsileden de�i�ken 
		  //sa� taraf ise de�eri bilinen bir �ey olmal�
	printf("a=%d\n",a);
	a=a+10; // a n�n yeni de�eri 15 olacak �ekilde belirlenmi�, ataman�n e�itlik olmad��n� g�steren sat�r
	printf("a=%d\n",a);
	printf("Bir tam sayi girin:");
	scanf("%d",&b);
	printf("b=%d\n",b);
	
	if(a>b)
		printf("a b den buyuktur\n");
	else
		printf("a b den kucuktur\n");
	
	printf("b nin karesi:%d\n ",square(b));
	
	hello();  //Bu da bir t�r programc�n�n yazaca�� de�er d�nd�rmeyen bir fonksiyondur
	f1(a);
	printf("** f1 fonksiyonu cagrildiktan sonra a=%d\n",a);
	a=20;
	f1(a);  //Bu yolla fonksiyon �a��rma bi�imine de�er yoluyla (call by value) fonksiyon �a��rma denir. Orijinal 
	        //parametre fonksiyon �a�r�ld���nda arguman de�eri de�i�se dahi kendi orjinal de�erini korur.  
	printf("a=%d\n",a);  
	return 0;
}

void f1(int y){
	y=y+100;
	printf("y=%d\n",y);
}
void hello(){
	printf("Hello programlama dunyasi\n");
}
/*
  Bu programda 3 fonksiyon kullan�ld�. Her bir fonksiyon derlendi�inde object kodlara d�n��t�r�ld�.
  Bu object kodlar linker (ba�lay�c�) yaz�l�m� sayesinde ili�kilendirilerek bir exe kod �retilir ve
  ram'e loader (ayr� bir yaz�l�m) arac�l���yla y�klenir. Art�k kod �al��abilir.



*/
