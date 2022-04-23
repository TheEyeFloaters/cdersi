/*
Bu bizim yazacaðýmýz ilk program örneði olup, yüksek seviyeli dilin bir kaynak kod (source code) 
örneði bazý yazýlým kavramlarýný tanýtýmýna yardýmcý olacaktýr. Bu yazacaðýmýz kodlar günlük 
ingilizce deyimler içererek bizim anlayacaðýmýz þekilde yazýlacaktýr. Yazacaðýmýz kod bütünü makina
diline bir derleyici (compiler) tarafýndan çevrilecektir. Çoðu programlama dilleri ilk yýllarda yapýsal
diller olarak kullanýlýyordu. Bu dillerin en önemli özelliði fonksiyonlara dayalý olmasý ve yukarýdan
aþaðýya satýr satýr ilerlemesi. Þimdi aþaðýda basit bir kaynak C dili kodu yazacaðýz 
*/
#include<stdio.h>  //Bu kütüphane temel giriþ ve çýkýþ iþlemleri ve deðiþkenler kullanýmý için içerilmiþtir

int square(int);  //programci eklenti fonksiyonun prototipi main'den önce deklere edilmeli
void hello();     //Bu fonksiyonun da prototipi buraya yazýlmalý
void f1(int); 

int square(int z){
	return z*z;
}

int main() {   //bu bir tür ana fonksiyon olup program çalýþmaya main üzerinden baþlar
	int a,b;  //iki deðiþken deklere edildi, belleðe git ve bir tam sayý yeri belirle
	/*    Adres  Veri etiketi
	      127fa  a             5  15  
		  128f1  b	              
	*/
	//printf("b=%d\n",b); Herhangi bir deðer atanmadýðý için b deðeri çöp deðer olabilir.
	a=5;  //Bu iþleme atama denir, eþitlikle karýþtýrmayýn! sol taraf bir bellek bölgesi temsileden deðiþken 
		  //sað taraf ise deðeri bilinen bir þey olmalý
	printf("a=%d\n",a);
	a=a+10; // a nýn yeni deðeri 15 olacak þekilde belirlenmiþ, atamanýn eþitlik olmadýðný gösteren satýr
	printf("a=%d\n",a);
	printf("Bir tam sayi girin:");
	scanf("%d",&b);
	printf("b=%d\n",b);
	
	if(a>b)
		printf("a b den buyuktur\n");
	else
		printf("a b den kucuktur\n");
	
	printf("b nin karesi:%d\n ",square(b));
	
	hello();  //Bu da bir tür programcýnýn yazacaðý deðer döndürmeyen bir fonksiyondur
	f1(a);
	printf("** f1 fonksiyonu cagrildiktan sonra a=%d\n",a);
	a=20;
	f1(a);  //Bu yolla fonksiyon çaðýrma biçimine deðer yoluyla (call by value) fonksiyon çaðýrma denir. Orijinal 
	        //parametre fonksiyon çaðrýldýðýnda arguman deðeri deðiþse dahi kendi orjinal deðerini korur.  
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
  Bu programda 3 fonksiyon kullanýldý. Her bir fonksiyon derlendiðinde object kodlara dönüþtürüldü.
  Bu object kodlar linker (baðlayýcý) yazýlýmý sayesinde iliþkilendirilerek bir exe kod üretilir ve
  ram'e loader (ayrý bir yazýlým) aracýlýðýyla yüklenir. Artýk kod çalýþabilir.



*/
