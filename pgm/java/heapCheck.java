class heapCheck
{
	public static void main(String[] args) {
		System.out.println("hello heap..");

		heapCheck hc=new heapCheck();
		// new heapCheck().call();
		hc.call();
	}
	 void call()
	{
		System.out.println(Runtime.freeMemory());
	}
}