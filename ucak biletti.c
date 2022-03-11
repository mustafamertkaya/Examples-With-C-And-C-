#include<stdio.h>
#include<conio.h>


int main(){
	
	int koltuklar[11] = { 0 };
	int f=1;
	int e=6;
    int secim;
programbasi:;
	
	
	printf("\nLutfen first class icin 1'e basiniz:\n");
	printf("Lutfen ekonomik class icin 2'ye basiniz: ");
	scanf("%d",&secim);
	
	if(secim == 1){
	    if(koltuklar[5]==1){
	    	printf("\nfirst class doldu.\n");
	    	goto programbasi;
		}
	
	    else{
	    	koltuklar[f]=1;
	    	printf("\nfirst class koltuk numaraniz:%d\n",f);
	    	f++;
	    	goto programbasi;
	   	}
    
     }
    
	if(secim==2){
    	
    	if(koltuklar[10]==1){
	    	printf("\nekonomik class doldu.\n");
	    	goto programbasi;
		}
	    
	    else{
	    	koltuklar[e]=1;
	    	printf("\nekonomik class koltuk numaraniz:%d\n",e);
	    	e++;
	    	goto programbasi;
	   	}
    	
    }	
	
		getch();
	return 0;
}
