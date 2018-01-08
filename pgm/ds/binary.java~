class binary
{
	int print(int arr[],int b)
	{
		int r=arr.length-1;
		int l=0;
		int m=0;
		while(l<=r)
		{
			m=l+(r-l)/2;
			if(arr[m]==b)
				return arr[m];
			else if(arr[m]<b)
				l=m+1;
			else
				r=m-1;
		}
	return -1;	
	}
	public static void main(String[] as)
	{
		int[] a={2,5,7,10,25};
		binary b=new binary();
		System.out.println(b.print(a,75));			
	}
}
