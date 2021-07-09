int main() 
{
	int c,d,l,t;
	scanf("%d",&t);
	while(t--){
	scanf("\n %d %d %d",&c,&d,&l);
	if((c+d)*4>=l && d*4<=l && l%4==0)
	printf("\n yes");
    else
	printf("\n no");}
	return 0;
}
