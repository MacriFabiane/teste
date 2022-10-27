#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int busca_binaria_int(int chave, int v[], int n){
    int ini =0, fim= n-1, m;
    
    while (ini<=fim){
        m=(ini+fim)/2;
        
        if(v[m]==chave)
            return m;
        else if (chave<v[m])
            fim= m-1;
        else 
            ini =m+1;
    }
    return -1;
}
int main() {
    int n, i, item, ct;
    int *v;
    
    scanf("%d", &n);
    v= malloc(sizeof(int)*n);
    
    for (i=0; i<n; i++){
        scanf("%d", &item);
        
        v[i]=item;
    }
    
    scanf("%d", &ct);
    
    while(ct>0){
        scanf("%d", &item);
        
        printf("%d\n", busca_binaria_int(item, v, n));
        
        ct--;
    }
    free(v);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

