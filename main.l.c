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
	printf("---------------------------------ENERJÝ TÜKETÝMÝ HESAPLAYICI VE VERÝMLÝLÝK YARDIMCISI---------------------------------\n");

	printf("\n 1 e basarak programa giriþ yapabilirsiniz.\n");
	scanf("%d", &a);
	switch (a) 
	{
	case 1:
		for(i=3;i>=0;i--)
		{
    printf("Kullanýcý adý oluþturun (MAX 20 KARAKTER): ");
    scanf("%s", kullanici_adi);

    printf("Þifre oluþturun (MAX 20 KARAKTER): ");
    scanf("%s", sifre);

    printf("\nHesabýnýz oluþturuldu. Þimdi giriþ yapýn.\n");
    
        printf("Kullanýcý adýnýzý girin: ");
        scanf("%s", girilen_kullanici_adi);

        printf("Þifrenizi girin: ");
        scanf("%s", girilen_sifre);

        if (strcmp(kullanici_adi, girilen_kullanici_adi) == 0  &&strcmp(sifre, girilen_sifre) == 0) 
			{
            printf("Giriþ baþarýlý! HOÞ GELDÝN %s .\n",kullanici_adi );
            break;
            }
        else if(i==0)
        {
        	printf("DENEME HAKKINIZ KALMADI PROGRAMDAN ATILDINIZ!!!!");
        	exit(0);
		}
       	 	{
        	printf("\nADINIZI VEYA ÞÝFRENÝZÝ YANLIÞ GÝRDÝNÝZ TEKRAR DENEYÝN KALAN DENEME HAKKI %d\n", i);
        	}
           }
    printf("Programa hoþgeldiniz.\nBurada aylýk faturanýzý en az hatayla hesaplayabilir ve güç tüketiminiz doðrultusunda size tavsiyede bulunulabilir.\n");
    int alet_sayisi[9];
    float ortalama_haftalik_kullanim[7];
    float haftalik_kw, aylik_kw, aylik_fatura, fonk;
    char gunes_paneli, haftaliksor, fazlakullanim, sor ;
    
   
    printf("\nSüpürge sayýsýný giriniz: ");
    scanf("%d", &alet_sayisi[0]);
    printf("Ortalama süpürge haftalýk kullaným süresini (saat) giriniz: ");
    scanf("%f", &ortalama_haftalik_kullanim[0]);

    printf("\nÜtü sayýsýný giriniz: ");
    scanf("%d", &alet_sayisi[1]);
    printf("Ortalama ütü haftalýk kullaným süresini (saat) giriniz: ");
    scanf("%f", &ortalama_haftalik_kullanim[1]);

    printf("\nAmpul sayýsýný giriniz: ");
    scanf("%d", &alet_sayisi[2]);
    printf("Ortalama ampul haftalýk kullaným süresini (saat) giriniz: ");
    scanf("%f", &ortalama_haftalik_kullanim[2]);

    printf("\nÇamaþýr ve bulaþýk makineleri toplam sayýsýný giriniz: ");
    scanf("%d", &alet_sayisi[3]);
    printf("Ortalama makineler haftalýk kullaným süresini (saat) olarak giriniz: ");
    scanf("%f", &ortalama_haftalik_kullanim[3]);

    printf("\nBuzdolabý sayýsýný giriniz: ");
    scanf("%d", &alet_sayisi[4]);

    printf("\nKombi veya termostatýnýz varsa sayýsýný giriniz: ");
    scanf("%d", &alet_sayisi[5]);
    
 	printf("\nEvdeki fýrýn sayýsýný giriniz: ");
    scanf("%d", &alet_sayisi[6]);
    printf("Ortalama fýrýn haftalýk kullaným süresini (saat) giriniz: ");
    scanf("%f", &ortalama_haftalik_kullanim[4]);
    
    printf("\nEvdeki bilgisayar sayýsýný giriniz: ");
    scanf("%d", &alet_sayisi[7]);
    printf("Ortalama bilgisayar haftalýk kullaným süresini (saat) giriniz: ");
    scanf("%f", &ortalama_haftalik_kullanim[5]);

    printf("\nEvdeki televizyon sayýsýný giriniz: ");
    scanf("%d", &alet_sayisi[8]);
    printf("Ortalama televizyon haftalýk kullaným süresini (saat) giriniz: ");
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
                  
    printf("\nHaftalýk tüketiminiz %.2f KW\n", haftalik_kw );
    

    aylik_kw = 4.3 * haftalik_kw;

    
    printf("\nAylýk KW tüketiminiz: %.2f kWh\n", aylik_kw);

    
    if (aylik_kw >= 240) 
	{
        printf("Güç tüketiminiz fazla seviyede, YÜKSEK kademe ücretten faturalandýrýlacaksýnýz.\n");
        printf("\nCebinizi ve çevreyi korumak için ampullerinizi LED'lerle deðiþtirebilir, enerji verimliliði A++ ve üstü olan beyaz eþyalara yönelebilirsiniz, kombiyi geceleri kapatabilirsiniz.\n");
         aylik_fatura = aylik_kw * 3.10 * (1 + 0.1 + 0.02 + 0.05);
    } 
	else 
	{
        printf("\nGüç tüketiminiz optimum seviyede, alt kademe ücretten faturalandýrýlacaksýnýz. Çevreyi ve bizi düþündüðünüz için teþekkür ederiz.\n");
        aylik_fatura = aylik_kw * 2.07 * (1 + 0.1 + 0.02 + 0.05);
    }

    
    printf("\nEvinizde güneþ paneli var mý, varsa büyük veya küçük e harfine basýn\n yoksa herhangi bir tuþa basýn\n");
    scanf("%s",& gunes_paneli);
    
    if (gunes_paneli == 'E' || gunes_paneli == 'e')
	{
        aylik_fatura=aylik_fatura/2 ;
    } 
	else 
	{
		aylik_fatura=aylik_fatura;
    }

    
    printf("\nSAYIN %s faturanýz hesaplanýyor, vergiler dahil aþaðýdaki þekilde olacaktýr\n" , kullanici_adi);
    printf("\nYaklaþýk aylýk faturanýz: %.2f TL\n", aylik_fatura);
	FILE*nokta;
	nokta=fopen("elektrik.txt","a");
	fprintf(nokta,"\n Sayýn %s aylýk faturanýz %f TL.\n",kullanici_adi, aylik_fatura);
	fclose(nokta);
   
    for(;;)
    {
    	printf("Hangi elektrikli eþyalarý gereðinden fazla kullandýðýnýzý görmek ister misiniz? Y/H: ");
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
		printf("Yanlýþ tuþladýnýz tekrar deneyin.\n");
		continue;
	}
	}
	
	printf("Sayýn %s yazýlan dosyanýn okunmasýný ister misiniz? Y/H:",kullanici_adi);
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
    printf("\nProgramdan çýktýnýz\n");
}	
    return 0;
}
	void fazla_kullanim_kontrolu(float ortalama_haftalik_kullanim[])
 {
 	int i=0;
	if (ortalama_haftalik_kullanim[0] >= 5) 
	{
   	 printf("\nSüpürge kullanýmýnýz FAZLA. Lütfen cebinizi ve çevreyi korumak için kullanýmýnýzý azaltýn.\n");
   	 	i++;
	FILE*nokta;
	nokta=fopen("elektrik.txt","a");
	fprintf(nokta,"\nSüpürge kullanýmýnýz FAZLA. Lütfen cebinizi ve çevreyi korumak için kullanýmýnýzý azaltýn.\n");
	fclose(nokta);
    }
    if (ortalama_haftalik_kullanim[1] >= 2) 
	{
    	printf("\nÜtü kullanýmýnýz FAZLA. Lütfen cebinizi ve çevreyi korumak için kullanýmýnýzý azaltýn.\n");
    	i++;
	FILE*nokta;
	nokta=fopen("elektrik.txt","a");
	fprintf(nokta,"\nÜtü kullanýmýnýz FAZLA. Lütfen cebinizi ve çevreyi korumak için kullanýmýnýzý azaltýn.\n");
	fclose(nokta);
    }
    if (ortalama_haftalik_kullanim[2] >= 10) 
	{
    	printf("\nAmpul kullanýmýnýz FAZLA. Lütfen cebinizi ve çevreyi korumak için kullanýmýnýzý azaltýn.\n");
    	i++;
	FILE*nokta;
	nokta=fopen("elektrik.txt","a");
	fprintf(nokta,"\nAmpul kullanýmýnýz FAZLA. Lütfen cebinizi ve çevreyi korumak için kullanýmýnýzý azaltýn.\n");
	fclose(nokta);
    }
    if (ortalama_haftalik_kullanim[3] >= 14) 
	{
        printf("\nÇamaþýr ve bulaþýk makinesi kullanýmýnýz FAZLA. Lütfen cebinizi ve çevreyi korumak için kullanýmýnýzý azaltýn.\n");
        i++;
	FILE*nokta;
	nokta=fopen("elektrik.txt","a");
	fprintf(nokta,"\nÇamaþýr ve bulaþýk makinesi kullanýmýnýz FAZLA. Lütfen cebinizi ve çevreyi korumak için kullanýmýnýzý azaltýn.\n");
	fclose(nokta);
    }
    if (ortalama_haftalik_kullanim[4] >= 10) 
	{
        printf("\nFýrýn kullanýmýnýz FAZLA. Lütfen cebinizi ve çevreyi korumak için kullanýmýnýzý azaltýn.\n");
        i++;
	FILE*nokta;
	nokta=fopen("elektrik.txt","a");
	fprintf(nokta,"\nFýrýn kullanýmýnýz FAZLA. Lütfen cebinizi ve çevreyi korumak için kullanýmýnýzý azaltýn.\n");
	fclose(nokta);
    }
    if (ortalama_haftalik_kullanim[5] >= 20) 
	{
        printf("\nPC kullanýmýnýz FAZLA. Lütfen cebinizi ve çevreyi korumak için kullanýmýnýzý azaltýn.\n");
        i++;
	FILE*nokta;
	nokta=fopen("elektrik.txt","a");
	fprintf(nokta,"\nPC kullanýmýnýz FAZLA. Lütfen cebinizi ve çevreyi korumak için kullanýmýnýzý azaltýn.\n");
	fclose(nokta);
    }
    if (ortalama_haftalik_kullanim[6] >= 20) 
	{
        printf("\nTV kullanýmýnýz FAZLA. Lütfen cebinizi ve çevreyi korumak için kullanýmýnýzý azaltýn.\n");
        i++;  
	FILE*nokta;
	nokta=fopen("elektrik.txt","a");
	fprintf(nokta,"\nTV kullanýmýnýz FAZLA. Lütfen cebinizi ve çevreyi korumak için kullanýmýnýzý azaltýn.\n");
	fclose(nokta);
    }
    if(i==0)
    {
		printf("\nElektrikli aletleri gündelik olarak saðlýklý seviyelerde kullanýyorsunuz kendinizi ve doðayý düþündüðünüz için teþekkür eder iyi günler dileriz :D .\n");
	FILE*nokta;
	nokta=fopen("elektrik.txt","a");
	fprintf(nokta,"\nElektrikli aletleri gündelik olarak saðlýklý seviyelerde kullanýyorsunuz kendinizi ve doðayý düþündüðünüz için teþekkür eder iyi günler dileriz :D .");
	fclose(nokta);
	}
}	


