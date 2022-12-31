#include <stdio.h>
#include <stdlib.h>
typedef enum day
{
    Sun,
    Mon,
    Tue,
    Wed,
    Tru,
    Fri,
    Sat
} gun;
int main()
{
    gun g = 1;
    gun u = Sat;
    printf("%d, %d", g, u);
    //Alttaki kod bloğu her ne kadar çalışıyor görünse de enum'un kullanım şekli daha çok yukarıdaki gibidir.
    gun *n = (gun *)malloc(sizeof(gun));
    printf("\nEnter the day:");
    scanf("%s", n);
    printf("Here is the %s!", n);
    //Üstteki kod bloğu nedense char gibi çalışmakta.
    //enum'lar uint tipindedir. Bu yüzden onlar için %u kullanılır.
    printf("%u, %u, %u", g, u, n);
    //Yukarıda n değişkeni yine farklı bir durumda olduğundan farklı bir çıktı vermektedir.
    printf("\n%d", sizeof(gun));
    int *i = (int *)malloc(sizeof(int));
    printf("\nEnter the new day:");
    scanf("%s", i);
    printf("The second day is: %s", i);
    printf("\nVoid: %d", sizeof(void));
    printf("\nEnter the new day:");
    void *v = malloc(sizeof(void));
    scanf("%s", v);
    printf("The third day is: %s", v);
    //malloc ile tanımlanmış bir pointer'a pointer'ın tuttuğu adresteki değerin tipinden bağımsız olarak herhangi bir string değer atanabilir.
}