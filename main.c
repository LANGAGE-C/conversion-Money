#include <stdio.h>

int ariaryEnfranc(int m)
{
    return m*5;
}
int francEnariary(int m)
{
    return m/5;
}
int main()
{
    int money, resultat;
    char choix;
    printf("Tapez A si la conversion Ariary en Franc et B si Franc en Ariary \n");
    scanf("%c", &choix);
    if(choix == 'A')
    {
        printf("Tapez la valeur en Ar :\n");
        scanf("%d", &money);
        printf("La valeur de %d en Franc = %d", money, ariaryEnfranc(money));
    }
    else
    {
        printf("Tapez la valeur en Franc :\n");
        scanf("%d", &money);
        printf("La valeur de %d en Ariary = %d", money, francEnariary(money));
    }
    return 0;
}