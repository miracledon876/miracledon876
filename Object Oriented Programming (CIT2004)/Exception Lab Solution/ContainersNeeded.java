import java.io.IOException;
import java.util.Scanner;

public class ContainersNeeded {
	
	public int EnterSizeOfRetailContainer() {
		try {
		Scanner in = new Scanner(System.in);
		int size;
		System.out.println("Now in EnterSizeOfRetailContainer()");
		System.out.println("Enter the size of the retail container - ");
		size = in.nextInt();
		System.out.println(" ");
		return size;
		}catch(Exception e) {
			System.out.println("ss");
			return 0;
		}
	}

	// calculates the number of retail containers needed
	// and returns the result
	public int CalculateRetailContainersNeeded(int wcSize, int rcSize) throws ArithmeticException {
		int var = 0;
		//try {
			System.out.println("Now in CalculateRetailContainersNeeded()");
			var = wcSize / rcSize;
		//}
		//catch(ArithmeticException ex) {
			//System.out.println("ARITHMETICEXCEPTION");
		//}
		return var;
	}

	//Since MyException is a checked exception, it must be included in the exception specifiers
	public void Demonstrate() throws IOException, MyException {
		int WholesaleSize; // size of ws container
		int RetailSize; // size of rt container
		int NumberRetailNeeded;// num of containers needed
		char ans; // single char needed to store 'y' or 'n'
		System.out.println("Now in Demonstrate()");
		while (true) {
			try {
				WholesaleSize = EnterSizeOfWholesaleContainer();
				RetailSize = EnterSizeOfRetailContainer();
				NumberRetailNeeded = CalculateRetailContainersNeeded(WholesaleSize, RetailSize);
				
				if(NumberRetailNeeded == 0) {
					 throw new MyException("ZERO Exception");
				}
//				
				System.out.println("Back in Demonstrate()");
				System.out.println("The number of retail containers" + " needed is " + NumberRetailNeeded);
				System.out.print("Perform another calculation?" + " [y/n] ");
				ans = ' ';
				while (ans != 'y' && ans != 'Y' && ans != 'n' && ans != 'N')
					ans = (char) System.in.read();
				System.out.println(" ");
				if (ans == 'n' || ans == 'N')
					break;
			}catch(ArithmeticException e) {
				System.out.println("Exception caught in demonstrate");
				throw e;
			}
		}
	}

	// enters the size of the wholesale container
	public int EnterSizeOfWholesaleContainer() {
		Scanner in = new Scanner(System.in);
		int size;
		System.out.println("Now in EnterSizeOfWholesaleContainer()");
		System.out.println("Enter the size of the wholesale" + " container - ");
		size = in.nextInt();
		System.out.println(" ");
		return size;
	}
	
	// main method – program starts running here
	public static void main(String[] args) throws IOException {
		try {
		ContainersNeeded X = new ContainersNeeded();
		System.out.println("Calling Demonstrate() from main()");
		X.Demonstrate();
	
//		System.out.println("Returned from Demonstrate()," + " now back in main()");
		}
		catch(MyException e) {
			System.out.println(e.getMessage());
		}
		catch(ArithmeticException e) {
			System.out.println("Exception caught in main");
		}
	}

}
