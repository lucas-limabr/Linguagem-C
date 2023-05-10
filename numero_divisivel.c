void main()
{
    int n1,n2;
    apresentacao();
    printf("\nInforme o dividendo: ");
    scanf("%d", &n1);
    printf("\nInforme o divisor: ");
    scanf("%d", &n2);

    if ( eDivisivel(n1,n2))
    {
        printf("%d NAO e divisivel por %d", n1, n2);
    }
    else
    {
        printf("%d E divisivel por %d", n1, n2);
    }
}

void apresentacao(void)
{
    printf("\n***********************");
    printf("\nPROGRAMA QUE EXPLICA O USO DE FUNCOES");

}


int eDivisivel( int a, int b)
{
    if ((a%b) == 0 )
    {
        return 0;

    }
}
