import java.lang.Math;
import java.util.Scanner;

public class LameKing {
	static Scanner sc = new Scanner(System.in);

	public static void main(String args[]) {
		int t = sc.nextInt();
		while (t-- > 0) {
			int a = sc.nextInt(), b = sc.nextInt();
			a = Math.abs(a);
			b = Math.abs(b);
			if (a < b) {
				a += b;
				b = a - b;
				a = a - b;
			}
			System.out.println(a + b + Math.max(0, a - b - 1));
		}
	}
}
