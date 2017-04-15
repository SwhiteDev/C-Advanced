void main()
{   /*********************
	union
	{
		char a[10];
		int i;
	}u;
	int *p = (int *)&(u.a[1]);
	*p = 11;
	****************/

	int *p = 0;
	*p = 11;
}
