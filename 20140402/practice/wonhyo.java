import java.util.*;

public class StringReverser {
	public StringReverser(String string) {
		System.out.println(reverseUsingToken(string));
	}

	public static String reverseUsingToken(String inputStr) {
		StringBuilder sb = new StringBuilder();
		StringTokenizer st = new StringTokenizer(inputStr);
		while (st.hasMoreTokens()) {
			sb.insert(0, st.nextToken() + " ");
		}

		return sb.toString().trim();
	}

	public static String reverseString(String inputStr) {
		StringBuilder sb = new StringBuilder();
		StringTokenizer st = new StringTokenizer(inputStr);
		inputStr = inputStr.replaceAll(" +", " ");
		String reversedStr = new StringBuilder(inputStr).reverse().toString();
		for (String each : reversedStr.split(" ")) {
			sb.append(new StringBuilder(each).reverse().toString());
			sb.append(" ");
		}
		String resultStr = sb.toString().trim();
		return resultStr;

	}
}