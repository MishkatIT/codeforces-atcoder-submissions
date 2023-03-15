import java.util.*;

public class Remaining {
	static Scanner sc = new Scanner(System.in);
	static List<Character> list = Arrays.asList('1', '4', '6', '8', '9');
	static Set<Character> st = new HashSet<>(list);
	static int[] prime = new int[110];

	public static void go() {

		int k = sc.nextInt();
		String str = sc.next();
		for (int i = 0; i < k; i++) {
			char x = str.charAt(i);
			if (st.contains(x)) {
				System.out.print(1 + "\n" + x + "\n");
				return;
			}
		}
		for (int i = 0; i < k; i++) {
			for (int j = i + 1; j < k; j++) {
				int temp;
				temp = (str.charAt(i) - '0') * 10 + str.charAt(j) - '0';
				if (prime[temp] == 1) {
					System.out.print(2 + "\n" + temp + "\n");
					return;
				}

			}
		}
	}

	public static void main(String args[]) {
		for (int i = 2; i * i <= 100; i++) {
			if (prime[i] == 0) {
				for (int j = i * i; j <= 100; j += i) {
					prime[j] = 1;
				}
			}
		}
		int t = sc.nextInt();
		while (t > 0) {
			go();
			t--;
		}
	}

}
