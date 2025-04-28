#include <stdio.h>

int main() {
    int ilksayi, ikincisayi;
    int ebob = 1;

    scanf("%d", &ilksayi);
    scanf("%d", &ikincisayi);

    while (ilksayi != 0 && ikincisayi != 0) {
        if (ilksayi % 2 == 0 && ikincisayi % 2 == 0) { 
            ilksayi /= 2;
            ikincisayi /= 2;
            ebob *= 2;
        } 
		else if (ilksayi % 2 == 0 && ikincisayi % 2 != 0) {
            ilksayi /= 2;
        } 
		else if (ilksayi % 2 != 0 && ikincisayi % 2 == 0) {
            ikincisayi /= 2;
        } 
		else { 
            if (ilksayi >= ikincisayi) {
                ilksayi -= ikincisayi;
            } else {
                ikincisayi -= ilksayi;
            }
        }
    }

    if (ilksayi == 0) {
        ebob *= ikincisayi;
    } else {
        ebob *= ilksayi;
    }

    printf("%d\n", ebob);
    return 0;
}
