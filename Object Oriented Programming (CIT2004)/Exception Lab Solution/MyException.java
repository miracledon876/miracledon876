
//Inherit from Exception = Checked Exception
//Inherit from RuntimeException = Unchecked Exception

public class MyException extends Exception {
	
	public MyException(String message) {
		super(message);
	}

}
