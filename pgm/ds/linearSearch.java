
class linearSearch
{

	 static int search(int arr[], int n, int x)
        {
        for (int i = 0; i < n; i++)
        {
            // Return the index of the element if the element
            // is found
            if (arr[i] == x)
                return 0;
        }
  
        // return -1 if the element is not found
        return -1;
    }

	public static void main(String[] as)
	{
		int  a[]={10,5,25,75,2,5};
	        System.out.println(search(a,6,75));
		
		
	}
}
