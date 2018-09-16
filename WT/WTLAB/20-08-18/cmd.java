class cmd
{
		public static void main(String[]args)
		{
				//int large=args[0];
				int sum=0;
				int n=0;
				int large=Integer.parseInt(args[0]);
				for(int i=0;i<args.length;i++)
				{
					if(large<Integer.parseInt(args[i]))
					{
						large=Integer.parseInt(args[i]);
						
					}
					sum=sum+Integer.parseInt(args[i]);
					n=n+1;
				}
				System.out.println("largest:"+large);
				System.out.println("Average "+(sum/n));
		}
}