int isPrime(int num)
{
	int i; 
	int flag=0; 
	
	for(i=2; i<num/2; i++)
	{
		if(num%i ==0)
		{
			flag =1;
			break;
		}
	}
	
	if(flag==1)
		return 0;
	else
		return 1;
}

int main()
{
	int loop; //loop counter
	//declaring array with prime and not prime numbers
	int arr[]={100, 200, 31, 13, 97, 10, 20, 11};
	//calculate length of the array
	int len = sizeof(arr)/sizeof(arr[0]);
	
	//print array elements with message 
	//"prime" or "Not prime"
	for(loop=0; loop<len; loop++)
	{
		printf("%3d - %s\n",arr[loop],(isPrime(arr[loop])?"Prime":"Not Prime"));
	}
	
	printf("\n");
	
	return 0;	
}