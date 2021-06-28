#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

void ASCII()
{

	char c;  // c: ASCII �ڵ�� ��ȯ�� ����
	cout << "Input a single character: ";
	cin >> c;  // ASCII �ڵ�� ��ȯ�� ���ڸ� �Է¹���

	int c1 = c;  // c1: ASCII �ڵ�� ��ȯ�� ���� ����(c)
	cout << "Its ASCII code value is: " << c1 << endl;  // ASCII �ڵ� ���

	int n;  // n: ASCII �ڵ�� ��ȯ�� ����
	do{
		cout << "Input a number to convert to ASCII code (32-126): ";
		cin >> n;  // ASCII �ڵ�� ��ȯ�� ���ڸ� �Է¹���

	}while( !(n>=32 && n<=126) );  // �Է¹��� ���ڰ� 32~126 ���̿��߸� ��ȯ�� ���� ���

	char n1 = n;  // n1: ASCII �ڵ�� ��ȯ�� ���� ����(n)
	cout << "The ASCII code value of " << n << " is " << n1 << endl;  // ASCII �ڵ� ���

}

void Diamond()
{

	int n;  // n: ���̾Ƹ���� �ִ� ���̸� �����ϴ� ����

	do{

		cout << "Input a maximum with (1-30) : ";
		cin >> n;  // n�� ���� �Է¹���

		if(n>=1 && n<=30){  // n�� ���� 1~30 ������ ��쿡�� ���̾Ƹ�� ���

			int num_form;  // num_form: n�� ���� ¦���̸� 0, Ȧ���̸� 1
			if(n%2 == 0) num_form = 0;
			else num_form = 1;  // n�� ���� ¦������ �ƴ��� �Ǻ�

			int a;  // a: ���� n�� ����ϱ� ���� ����
			if(num_form == 0) a = n+1;
			else  a = n;  // n�� ���� a�� �־���

			int i,j;  // i: �ﰢ���� ��, j: �ﰢ���� ��

			a = a/2 +1;  // ù°, ���ﰢ���� ����ϱ� ���� ���
			for(i=1; i<=a; i++){

				for(j=a-i; j>=1; j--)
					cout << " ";

				cout << "*";

				for(j=2; j<=i; j++)
					cout << "**";

				cout << "\n";
			}                 // ���ﰢ���� ����ϴ� �κ�

			a = a-1;  // ��°, ��-���ﰢ���� ����ϱ� ���� ���
			for(i=1; i<=a; i++){

				for(j=1; j<=i; j++)
					cout << " ";

				cout << "*";

				for(j=a-i; j>=1; j--)
					cout << "**";

				cout << "\n";
			}                 // ��-���ﰢ���� ����ϴ� �κ�

			cout << endl;
		}

	}while(n>=1 && n<=30);  // n�� ���� 1~30 ���̰� �ƴ� ��� ������ ��������

}

void PrimeNumber()
{

	int a, b;  // a: �Է¹��� ù��° ����, b: �Է¹��� �ι�° ����

	do{

		cout << "Input the first positive integer : ";
		cin >> a;
		cout << "Input the second positive integer : ";
		cin >> b;  // �� ���� ���ڸ� �Է¹���(a~b)

		if(a < b){  // b�� a���� Ŀ�� ��� ���

			int cnt = 0;  // cnt: a~b ������ ���� �� �Ҽ��� ����
			for(int n=a; n<=b; n++){  // n: a~b ������ �Ҽ��� ���ϱ� ���� ���

				int prime = 1;  // prime: �Ҽ��̸� 1, �Ҽ��� �ƴϸ� 0
				if(n == 1) prime = 0;  // 1�� �Ҽ��� �ƴ�
				for(int k=2; k<=n-1; k++)  // k: a~b ������ �Ҽ��� �Ǻ��ϱ� ���� ���
					if(n%k == 0) prime = 0;  // �Ҽ� �Ǻ�
				
				if(prime == 1) cnt++;  // �Ҽ��� ��� cnt�� +1��
			}

			cout << "There are " << cnt << " prime number(s) between " << a << " and " << b << endl;
			cout << endl;  // a~b ������ �Ҽ� ���� ���

		}

	}while(a < b);  // b�� a���� ũ�� ������ ������ ��������

}

void PerfectNumber()
{

	int n;
	cout << "Input the number (1-1,000,000): ";
	cin >> n;  // n�� ���� �Է¹���

	if( !(n>=2 && n<=1000000) ){  // n�� ���� ���� �ȿ� �ִ� ���ڰ� �ƴ� ��� ���α׷��� �������
		cout << "n�� ���� ���� �ȿ� �ִ� ���ڰ� �ƴմϴ�" << endl;
		return 1;
	}

	cout << "The perfect numbers between 1 and " << n << " are: ";  // �� ��¹�

	for(int a=2; a<=n; a++){  // a: �������� ã�� ���� ����

		int k = 0; // k: �ڱ� �ڽ��� ������ ������� ��� ���� ���� �����ϴ� ����
		for(int b=1; b<=a-1; b++){  // b: �������� �Ǻ��ϱ� ���� ����
			if(a%b == 0) k = k+b;  // ����� ��� k�� ����
		}
		if(a == k) cout << a << " ";  // ������� ��� ���� ���̶� ���ؼ� ������ �Ǻ�
	}

	cout << endl;

}

void Lotto()
{

	srand((unsigned)time(NULL));  // initialize a random seed

	char c;  // c: ���� ���� ��� ���θ� �Է¹ޱ� ���� ����
	int number;  // number: ���� 6���� �� �� �Է¹������� ���� ����

	do{

		cout << "Do you want to generate lotto number? (y/n) : ";
		cin >> c;  // ���� ���� ��� ���θ� �Է¹���

		if(c == 'y'){

			cout << "How many lottos do you want to generate : ";
			cin >> number;  // ���� 6���� �� �� �Է¹����� ����

			for(int k=1; k<=number; k++){

				int n1, n2, n3, n4, n5, n6;  // n1~n6: ������ ���ڰ� ���� ������

				do{

					n1 = rand() % 45 + 1;
					n2 = rand() % 45 + 1;
					n3 = rand() % 45 + 1;
					n4 = rand() % 45 + 1;
					n5 = rand() % 45 + 1;
					n6 = rand() % 45 + 1;  // 1~45 ������ ���� �� ������ ���ڸ� �������

				}while( n1==n2 || n1==n3 || n1==n4 || n1==n5 || n1==n6
					 || n2==n3 || n2==n4 || n2==n5 || n2==n6
					 || n3==n4 || n3==n5 || n3==n6
					 || n4==n5 || n4==n6
					 || n5==n6 );  // ���� 6���� ��� �޶�� ������ �������� �� ����
	
				cout << n1 << " " << n2 << " " << n3 << " " << n4 << " " << n5 << " " << n6 << endl;	  // 6�� ���� ��� �ٸ� ��� ���
			}
		}

	}while(c == 'y');

}

void Baseball()
{

	srand((unsigned)time(NULL));  // initialize a random seed

	char c;  // c: ���� ���� ���θ� �Է¹ޱ� ���� ����

	do{

		cout << "Are you ready to play the baseball game? (y/n) : ";
		cin >> c;  // ���� ���� ���θ� �Է¹���

		if(c == 'y'){

			int n1, n2, n3;  // n1~n3: 0~9 ������ ������ ���ڰ� ��
			do{

				n1 = rand() % 10;
				n2 = rand() % 10;
				n3 = rand() % 10;  // ������ ���ڸ� �������

			}while(n1==n2 || n1==n3 || n2==n3);  // ���� 3���� ��� �޶�� ������ �������� �� ����

			int a1, a2, a3;  // a1~a3: ���� 3���� �Է¹ޱ� ���� ����
			int cnt = 1;  // cnt: ����ڰ� �Է��� Ƚ��

			int strike=0, ball;  // strike: ��Ʈ����ũ�� ���� �����ϴ� ����, ball: ���� ���� �����ϴ� ����
			while( cnt<=9 && strike!=3 ){  // �Է� Ƚ���� 9�� �ʰ��߰ų� 3-��Ʈ����ũ�� ��� ����

				strike = 0, ball = 0;

				cout << "*** BASEBALL GAME ... ROUND " << cnt << endl;
				cout << "USER : ";
				cin >> a1 >> a2 >> a3;  // ���� 3���� �Է¹���

				if(n1 == a1) strike++;
				if(n2 == a2) strike++;
				if(n3 == a3) strike++;  // ��Ʈ����ũ(strike) ���

				if(n1 == a2 || n1 == a3) ball++;
				if(n2 == a1 || n2 == a3) ball++;
				if(n3 == a1 || n3 == a2) ball++;  // ��(ball) ���

				if(strike==0 && ball==0)
					cout << "COMPUTER : O U T  !!!!" << endl;
				else if(strike==0 && ball>=1)
					cout << "COMPUTER : " << ball << " BALL !!!!" << endl;
				else if(strike>=1 && ball==0)
					cout << "COMPUTER : " << strike << " STRIKE !!!!" << endl;
				else
					cout << "COMPUTER : " << ball << " BALL & " << strike << " STRIKE !!!!" << endl;

				cnt++;  // ��Ʈ����ũ�� ���� ���� ����ϰ� Ƚ���� +1��

				cout << endl;
			}

			if(strike == 3)
				cout << "PLAYER WINNER !!!!" << endl;
			else{
				cout << "COMPUTER WINNER !!!!" << endl;
				cout << "The hidde number was " << n1 << " " << n2 << " " << n3 << endl;
			}  // �º� ����

			cout << endl;
		}

	}while(c == 'y');  // ���� ���� ���ΰ� n�̸� ���� ����

}


int main()
{
	ASCII();
	Diamond();
	PrimeNumber();
	PerfectNumber();
	Lotto();
	Baseball();

	return 0;
}