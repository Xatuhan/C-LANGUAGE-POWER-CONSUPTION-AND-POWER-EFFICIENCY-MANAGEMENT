#include <locale.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main() 
{
	 int a=0, i=0 ;
	 char kullanici_adi[20], sifre[20];
     char girilen_kullanici_adi[20], girilen_sifre[20];
	setlocale(LC_ALL, "Turkish");
	printf("---------------------------------ENERJ� T�KET�M� HESAPLAYICI VE VER�ML�L�K YARDIMCISI---------------------------------\n");

	printf("\n 1 e basarak programa giri� yapabilirsiniz.\n");
	scanf("%d", &a);
	switch (a) 
	{
	case 1:
		for(i=3;i>=0;i--)
		{
    printf("Kullan�c� ad� olu�turun (MAX 20 KARAKTER): ");
    scanf("%s", kullanici_adi);

    printf("�ifre olu�turun (MAX 20 KARAKTER): ");
    scanf("%s", sifre);

    printf("\nHesab�n�z olu�turuldu. �imdi giri� yap�n.\n");
    
        printf("Kullan�c� ad�n�z� girin: ");
        scanf("%s", girilen_kullanici_adi);

        printf("�ifrenizi girin: ");
        scanf("%s", girilen_sifre);

        if (strcmp(kullanici_adi, girilen_kullanici_adi) == 0  &&strcmp(sifre, girilen_sifre) == 0) 
			{
            printf("Giri� ba�ar�l�! HO� GELD�N %s .\n",kullanici_adi );
            break;
            }
        else if(i==0)
        {
        	printf("DENEME HAKKINIZ KALMADI PROGRAMDAN ATILDINIZ!!!!");
        	exit(0);
		}
       	 	{
        	printf("\nADINIZI VEYA ��FREN�Z� YANLI� G�RD�N�Z TEKRAR DENEY�N KALAN DENEME HAKKI %d\n", i);
        	}
           }
    printf("Programa ho�geldiniz.\nBurada ayl�k faturan�z� en az hatayla hesaplayabilir ve g�� t�ketiminiz do�rultusunda size tavsiyede bulunulabilir.\n");
    int alet_sayisi[9];
    float ortalama_haftalik_kullanim[7];
    float haftalik_kw, aylik_kw, aylik_fatura, fonk;
    char gunes_paneli, haftaliksor, fazlakullanim, sor ;
    
   
    printf("\nS�p�rge say�s�n� giriniz: ");
    scanf("%d", &alet_sayisi[0]);
    printf("Ortalama s�p�rge haftal�k kullan�m s�resini (saat) giriniz: ");
    scanf("%f", &ortalama_haftalik_kullanim[0]);

    printf("\n�t� say�s�n� giriniz: ");
    scanf("%d", &alet_sayisi[1]);
    printf("Ortalama �t� haftal�k kullan�m s�resini (saat) giriniz: ");
    scanf("%f", &ortalama_haftalik_kullanim[1]);

    printf("\nAmpul say�s�n� giriniz: ");
    scanf("%d", &alet_sayisi[2]);
    printf("Ortalama ampul haftal�k kullan�m s�resini (saat) giriniz: ");
    scanf("%f", &ortalama_haftalik_kullanim[2]);

    printf("\n�ama��r ve bula��k makineleri toplam say�s�n� giriniz: ");
    scanf("%d", &alet_sayisi[3]);
    printf("Ortalama makineler haftal�k kullan�m s�resini (saat) olarak giriniz: ");
    scanf("%f", &ortalama_haftalik_kullanim[3]);

    printf("\nBuzdolab� say�s�n� giriniz: ");
    scanf("%d", &alet_sayisi[4]);

    printf("\nKombi veya termostat�n�z varsa say�s�n� giriniz: ");
    scanf("%d", &alet_sayisi[5]);
    
 	printf("\nEvdeki f�r�n say�s�n� giriniz: ");
    scanf("%d", &alet_sayisi[6]);
    printf("Ortalama f�r�n haftal�k kullan�m s�resini (saat) giriniz: ");
    scanf("%f", &ortalama_haftalik_kullanim[4]);
    
    printf("\nEvdeki bilgisayar say�s�n� giriniz: ");
    scanf("%d", &alet_sayisi[7]);
    printf("Ortalama bilgisayar haftal�k kullan�m s�resini (saat) giriniz: ");
    scanf("%f", &ortalama_haftalik_kullanim[5]);

    printf("\nEvdeki televizyon say�s�n� giriniz: ");
    scanf("%d", &alet_sayisi[8]);
    printf("Ortalama televizyon haftal�k kullan�m s�resini (saat) giriniz: ");
    scanf("%f", &ortalama_haftalik_kullanim[6]);

   
    haftalik_kw = alet_sayisi[5] * 168 * 0.08 + 
    			  alet_sayisi[6] * ortalama_haftalik_kullanim[4] * 1.5 +
                  alet_sayisi[4] * 168 * 0.021 + 
                  alet_sayisi[0] * 1.4 * ortalama_haftalik_kullanim[0] + 
                  alet_sayisi[1] * ortalama_haftalik_kullanim[1] * 2.4 + 
                  alet_sayisi[2] * ortalama_haftalik_kullanim[2] * 0.06 + 
                  alet_sayisi[3] * ortalama_haftalik_kullanim[3] * 0.8 + 
                  alet_sayisi[7] * ortalama_haftalik_kullanim[5] * 0.2 + 
                  alet_sayisi[8] * ortalama_haftalik_kullanim[6] * 0.15;
                  
    printf("\nHaftal�k t�ketiminiz %.2f KW\n", haftalik_kw );
    

    aylik_kw = 4.3 * haftalik_kw;

    
    printf("\nAyl�k KW t�ketiminiz: %.2f kWh\n", aylik_kw);

    
    if (aylik_kw >= 240) 
	{
        printf("G�� t�ketiminiz fazla seviyede, Y�KSEK kademe �cretten faturaland�r�lacaks�n�z.\n");
        printf("\nCebinizi ve �evreyi korumak i�in ampullerinizi LED'lerle de�i�tirebilir, enerji verimlili�i A++ ve �st� olan beyaz e�yalara y�nelebilirsiniz, kombiyi geceleri kapatabilirsiniz.\n");
         aylik_fatura = aylik_kw * 3.10 * (1 + 0.1 + 0.02 + 0.05);
    } 
	else 
	{
        printf("\nG�� t�ketiminiz optimum seviyede, alt kademe �cretten faturaland�r�lacaks�n�z. �evreyi ve bizi d���nd���n�z i�in te�ekk�r ederiz.\n");
        aylik_fatura = aylik_kw * 2.07 * (1 + 0.1 + 0.02 + 0.05);
    }

    
    printf("\nEvinizde g�ne� paneli var m�, varsa b�y�k veya k���k e harfine bas�n\n yoksa herhangi bir tu�a bas�n\n");
    scanf("%s",& gunes_paneli);
    
    if (gunes_paneli == 'E' || gunes_paneli == 'e')
	{
        aylik_fatura=aylik_fatura/2 ;
    } 
	else 
	{
		aylik_fatura=aylik_fatura;
    }

    
    printf("\nSAYIN %s faturan�z hesaplan�yor, vergiler dahil a�a��daki �ekilde olacakt�r\n" , kullanici_adi);
    printf("\nYakla��k ayl�k faturan�z: %.2f TL\n", aylik_fatura);
	FILE*nokta;
	nokta=fopen("elektrik.txt","a");
	fprintf(nokta,"\n Say�n %s ayl�k faturan�z %f TL.\n",kullanici_adi, aylik_fatura);
	fclose(nokta);
   
    for(;;)
    {
    	printf("Hangi elektrikli e�yalar� gere�inden fazla kulland���n�z� g�rmek ister misiniz? Y/H: ");
    	scanf("%s", &fazlakullanim);
    if(fazlakullanim =='Y'|| fazlakullanim =='y')
    {
    	fazla_kullanim_kontrolu(ortalama_haftalik_kullanim);
    	break;
	}
    else if(fazlakullanim =='H'||fazlakullanim =='h')
    {
    	break;
	}
	else
	{
		printf("Yanl�� tu�lad�n�z tekrar deneyin.\n");
		continue;
	}
	}
	
	printf("Say�n %s yaz�lan dosyan�n okunmas�n� ister misiniz? Y/H:",kullanici_adi);
	scanf("%s",&sor);
	if(sor == 'Y'||sor =='y')
	{
		int c;
		FILE*nokta;
		nokta=fopen("elektrik.txt","r");
		while(c!=EOF)
		{
			c=getc(nokta);
			putchar(c);
		}
		fclose(nokta);
	}
	
	default:
    printf("\nProgramdan ��kt�n�z\n");
}	
    return 0;
}
	void fazla_kullanim_kontrolu(float ortalama_haftalik_kullanim[])
 {
 	int i=0;
	if (ortalama_haftalik_kullanim[0] >= 5) 
	{
   	 printf("\nS�p�rge kullan�m�n�z FAZLA. L�tfen cebinizi ve �evreyi korumak i�in kullan�m�n�z� azalt�n.\n");
   	 	i++;
	FILE*nokta;
	nokta=fopen("elektrik.txt","a");
	fprintf(nokta,"\nS�p�rge kullan�m�n�z FAZLA. L�tfen cebinizi ve �evreyi korumak i�in kullan�m�n�z� azalt�n.\n");
	fclose(nokta);
    }
    if (ortalama_haftalik_kullanim[1] >= 2) 
	{
    	printf("\n�t� kullan�m�n�z FAZLA. L�tfen cebinizi ve �evreyi korumak i�in kullan�m�n�z� azalt�n.\n");
    	i++;
	FILE*nokta;
	nokta=fopen("elektrik.txt","a");
	fprintf(nokta,"\n�t� kullan�m�n�z FAZLA. L�tfen cebinizi ve �evreyi korumak i�in kullan�m�n�z� azalt�n.\n");
	fclose(nokta);
    }
    if (ortalama_haftalik_kullanim[2] >= 10) 
	{
    	printf("\nAmpul kullan�m�n�z FAZLA. L�tfen cebinizi ve �evreyi korumak i�in kullan�m�n�z� azalt�n.\n");
    	i++;
	FILE*nokta;
	nokta=fopen("elektrik.txt","a");
	fprintf(nokta,"\nAmpul kullan�m�n�z FAZLA. L�tfen cebinizi ve �evreyi korumak i�in kullan�m�n�z� azalt�n.\n");
	fclose(nokta);
    }
    if (ortalama_haftalik_kullanim[3] >= 14) 
	{
        printf("\n�ama��r ve bula��k makinesi kullan�m�n�z FAZLA. L�tfen cebinizi ve �evreyi korumak i�in kullan�m�n�z� azalt�n.\n");
        i++;
	FILE*nokta;
	nokta=fopen("elektrik.txt","a");
	fprintf(nokta,"\n�ama��r ve bula��k makinesi kullan�m�n�z FAZLA. L�tfen cebinizi ve �evreyi korumak i�in kullan�m�n�z� azalt�n.\n");
	fclose(nokta);
    }
    if (ortalama_haftalik_kullanim[4] >= 10) 
	{
        printf("\nF�r�n kullan�m�n�z FAZLA. L�tfen cebinizi ve �evreyi korumak i�in kullan�m�n�z� azalt�n.\n");
        i++;
	FILE*nokta;
	nokta=fopen("elektrik.txt","a");
	fprintf(nokta,"\nF�r�n kullan�m�n�z FAZLA. L�tfen cebinizi ve �evreyi korumak i�in kullan�m�n�z� azalt�n.\n");
	fclose(nokta);
    }
    if (ortalama_haftalik_kullanim[5] >= 20) 
	{
        printf("\nPC kullan�m�n�z FAZLA. L�tfen cebinizi ve �evreyi korumak i�in kullan�m�n�z� azalt�n.\n");
        i++;
	FILE*nokta;
	nokta=fopen("elektrik.txt","a");
	fprintf(nokta,"\nPC kullan�m�n�z FAZLA. L�tfen cebinizi ve �evreyi korumak i�in kullan�m�n�z� azalt�n.\n");
	fclose(nokta);
    }
    if (ortalama_haftalik_kullanim[6] >= 20) 
	{
        printf("\nTV kullan�m�n�z FAZLA. L�tfen cebinizi ve �evreyi korumak i�in kullan�m�n�z� azalt�n.\n");
        i++;  
	FILE*nokta;
	nokta=fopen("elektrik.txt","a");
	fprintf(nokta,"\nTV kullan�m�n�z FAZLA. L�tfen cebinizi ve �evreyi korumak i�in kullan�m�n�z� azalt�n.\n");
	fclose(nokta);
    }
    if(i==0)
    {
		printf("\nElektrikli aletleri g�ndelik olarak sa�l�kl� seviyelerde kullan�yorsunuz kendinizi ve do�ay� d���nd���n�z i�in te�ekk�r eder iyi g�nler dileriz :D .\n");
	FILE*nokta;
	nokta=fopen("elektrik.txt","a");
	fprintf(nokta,"\nElektrikli aletleri g�ndelik olarak sa�l�kl� seviyelerde kullan�yorsunuz kendinizi ve do�ay� d���nd���n�z i�in te�ekk�r eder iyi g�nler dileriz :D .");
	fclose(nokta);
	}
}	


