int main()
{
	int a, b, c;
	sscanf(Stdio.stdin.gets(),"%d %d %d",a,b,c);
	write((((a == c ? 1: 2) * ((a / c) + (a % c > 0 ? 1: 0))) <= b) ?"YES":"NO");
	return 0;
}
