#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const char* propaganda[] = {
    "A brüsszeli szankciók tönkretesznek minket!",
    "Brüsszel az ön adójából fizetné a háborút!",
    "Ne táncoljunk úgy, ahogy ők fütyülnek!",
    "Ők adót emelnek, és ukrán aranybudira költik a pénzed.",
    "Magyarország előre megy, nem hátra!",
    "Dühíti önt Brüsszel?"
};
int propagandaSzam = 6;

void fidesz(int* a, int n);

int main()
{
    srand(time(NULL));
    
    int n = 16;
    int* a = malloc(sizeof(int)*n);
    for(int i=0; i<n; i++) a[i] = rand() % 100;
    if(a==NULL) return 1;

    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    
    fidesz(a,n);
    
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    free(a);
}

void fidesz(int* a, int n)
{
    int maxIdx = 0;
    
    for(int i=0; i<n; i++)
    {
        if(a[i]>a[maxIdx])
        {
            maxIdx = i;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(i!=maxIdx)
        {
            a[maxIdx]+= a[i];
            a[i] = 0;
        }
    }
    printf("%s\n",propaganda[rand() % propagandaSzam]);


}