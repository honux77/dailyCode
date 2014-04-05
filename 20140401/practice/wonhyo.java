import java.util.*;

public class Fibonacci {
	static int numOfZero, numOfOne;
	public Fibonacci() {
		Scanner sc = new Scanner(System.in);
		int numOfTests = sc.nextInt();
		int[] testCases = new int[41];
		int idx;

		for (idx = 0; idx < numOfTests; idx++) {
			testCases[idx] = sc.nextInt();
		}
		for (idx = 0; idx < numOfTests; idx++) {
			fibonacci(testCases[idx]);
			printNums();
			zeroingVars();
		}
	}

	private static void printNums() {
		System.out.println(numOfZero + " " + numOfOne);
	}

	static int fibonacci(int n) {
		if (n == 0) {
			numOfZero++;
			return 0;
		} else if (n == 1) {
			numOfOne++;
			return 1;
		} else {
			return fibonacci(n - 1) + fibonacci(n - 2);
		}
	}

	static void zeroingVars() {
		numOfZero = 0;
		numOfOne = 0;
	}
}
