    #include <stdio.h> 
    int main(){ 
        int Matriks_A[100][100], Matriks_B[100][100], 
    Matriks_AXB[100][100]; 
        int i, j, a, n, jumlah =0; 
        scanf("%d",&n); 
        printf("Matriks A\n"); 
    
        for(i =0; i < n; i++){ 
            for(j = 0; j < n; j++){ 
                scanf("%d", &Matriks_A[i][j]);} 
        } 
        printf("Matriks B\n"); 
        for(i = 0; i < n; i++){ 
            for(j = 0; j < n; j++){ 
                scanf("%d",&Matriks_B[i][j]);} 
        } 
    
        for(i = 0; i < n; i++){ 
            for(j = 0; j < n; j++){ 
                for(a = 0; a < n ; a++){ 
                    jumlah = jumlah + Matriks_A[i][a] * Matriks_B[a][j]; 
                }
                Matriks_AXB[i][j] = jumlah; 
                jumlah = 0;
            } 
        } 
    
        printf("Matriks AXB\n"); 
        for (i = 0; i < n; i++){
            for(j = 0; j < n; j++){ 
                printf("%d ",Matriks_AXB[i][j]);} 
            printf("\n");} 
    }
