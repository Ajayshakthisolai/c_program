int main()
{
    int a,b,temp;
    
    printf("ENTER THE TWO NUMBERS:");
     scanf("%d %d",&a,&b);
     
    temp=a;
    a=b;
    temp=b;
 
    printf("after swaping:%d and %d",a,b);
    return 0;
    
}
