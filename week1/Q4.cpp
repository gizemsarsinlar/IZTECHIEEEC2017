#include<stdio.h>
#include<conio.h>
int main()
{
    int secim=0, hedef;
	float miktar, sonuc;
	printf("1.Turk Lirasi\n");
	printf("2.Dolar\n");
	printf("3.Euro\n");

	
	printf("Elinizdeki Para Turunu Seciniz");
	scanf("%d", &secim);
	printf("Elinizdeki Para Miktarýný Seciniz");
	scanf("%f", &miktar);
	printf("Cevirmek Istediginiz Para Turunu Seciniz");
	scanf("%d", &hedef);
	
	if(secim==1)
	{
		if(hedef==2)
		{
			sonuc=miktar*(0.25);
		}
		else if(hedef==3)
		{
			sonuc=miktar*(0.21);
		}
	}
		
	if(secim==2)
	{
		if(hedef==1)
		{
			sonuc=miktar*(3.88);
		}
		else if(hedef==3)
		{
			sonuc=miktar*(0.84);
		}
	}
		
	if(secim==3)
	{
		if(hedef==1)
		{
			sonuc=miktar*(4.60);
		}
		else if(hedef==2)
		{
			sonuc=miktar*(1.18);
		}
	}
		printf("Sonuc= %.0f",sonuc);
	
	return 0;
}
