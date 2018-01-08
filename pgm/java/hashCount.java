import java.util.*;
class hashCount
{
	public static void main(String... sd)
	{
	//	String a="hello world welcome java world ";
	//	String list[]=a.split(" ");
		int nid[]={1,2,3,4,5,1,2,1,2,0};
//                HashMap<String,Integer> hm=new HashMap<String,Integer>();
		HashMap<Integer,Integer> hm=new HashMap<Integer,Integer>();
		int getIdx=0;
		for(int i=0;i<nid.length;i++)
		{	
			if(hm.containsKey(nid[i]))
			{
				getIdx=hm.get(nid[i]);
				hm.put(nid[i],getIdx+1);
			}
			else
				hm.put(nid[i],getIdx+1);
		}
	        System.out.println(hm);
	}
}
