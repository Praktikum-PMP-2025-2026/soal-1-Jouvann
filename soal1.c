#include <stdio.h>
#include <stdbool.h>

bool cekDigit(int N){
    int temp, sum = 0;
    if (N > 10){
        while (N >= 1){
            temp = N % 10;
            sum += temp;
            N /= 10;
        }
        if (sum % 2 == 0){
            return true;
        }
        else {
            return false;
        }
    }
    else {
        return false;
    }
}

int main(){
    int N;
    printf("Masukan Tingkatan Lampu Merah : ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++){
        if (i % 3 == 0 && i % 2 == 0){
            printf("BIRU\n");
        }
        else if (i % 3 == 0){
            printf("MERAH\n");
        }
        else if (i % 2 == 0){
            printf("KUNING\n");
        }
        else if (cekDigit(i)){
            printf("HIJAU\n");
        }
        else {
            printf("%d\n", i);
        }
    }

    return 0;
}
