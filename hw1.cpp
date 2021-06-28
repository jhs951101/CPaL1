#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

void ASCII()
{

	char c;  // c: ASCII 코드로 변환할 문자
	cout << "Input a single character: ";
	cin >> c;  // ASCII 코드로 변환할 문자를 입력받음

	int c1 = c;  // c1: ASCII 코드로 변환된 값을 저장(c)
	cout << "Its ASCII code value is: " << c1 << endl;  // ASCII 코드 출력

	int n;  // n: ASCII 코드로 변환할 숫자
	do{
		cout << "Input a number to convert to ASCII code (32-126): ";
		cin >> n;  // ASCII 코드로 변환할 숫자를 입력받음

	}while( !(n>=32 && n<=126) );  // 입력받은 숫자가 32~126 사이여야만 변환된 값을 출력

	char n1 = n;  // n1: ASCII 코드로 변환된 값을 저장(n)
	cout << "The ASCII code value of " << n << " is " << n1 << endl;  // ASCII 코드 출력

}

void Diamond()
{

	int n;  // n: 다이아몬드의 최대 길이를 저장하는 변수

	do{

		cout << "Input a maximum with (1-30) : ";
		cin >> n;  // n의 값을 입력받음

		if(n>=1 && n<=30){  // n의 값이 1~30 사이일 경우에만 다이아몬드 출력

			int num_form;  // num_form: n의 값이 짝수이면 0, 홀수이면 1
			if(n%2 == 0) num_form = 0;
			else num_form = 1;  // n의 값이 짝수인지 아닌지 판별

			int a;  // a: 변수 n을 대신하기 위한 변수
			if(num_form == 0) a = n+1;
			else  a = n;  // n의 값을 a에 넣어줌

			int i,j;  // i: 삼각형의 행, j: 삼각형의 열

			a = a/2 +1;  // 첫째, 정삼각형을 출력하기 위해 사용
			for(i=1; i<=a; i++){

				for(j=a-i; j>=1; j--)
					cout << " ";

				cout << "*";

				for(j=2; j<=i; j++)
					cout << "**";

				cout << "\n";
			}                 // 정삼각형을 출력하는 부분

			a = a-1;  // 둘째, 역-정삼각형을 출력하기 위해 사용
			for(i=1; i<=a; i++){

				for(j=1; j<=i; j++)
					cout << " ";

				cout << "*";

				for(j=a-i; j>=1; j--)
					cout << "**";

				cout << "\n";
			}                 // 역-정삼각형을 출력하는 부분

			cout << endl;
		}

	}while(n>=1 && n<=30);  // n의 값이 1~30 사이가 아닐 경우 루프를 빠져나옴

}

void PrimeNumber()
{

	int a, b;  // a: 입력받을 첫번째 숫자, b: 입력받을 두번째 숫자

	do{

		cout << "Input the first positive integer : ";
		cin >> a;
		cout << "Input the second positive integer : ";
		cin >> b;  // 두 개의 숫자를 입력받음(a~b)

		if(a < b){  // b가 a보다 커야 결과 출력

			int cnt = 0;  // cnt: a~b 사이의 숫자 중 소수의 갯수
			for(int n=a; n<=b; n++){  // n: a~b 사이의 소수를 구하기 위해 사용

				int prime = 1;  // prime: 소수이면 1, 소수가 아니면 0
				if(n == 1) prime = 0;  // 1은 소수가 아님
				for(int k=2; k<=n-1; k++)  // k: a~b 사이의 소수를 판별하기 위해 사용
					if(n%k == 0) prime = 0;  // 소수 판별
				
				if(prime == 1) cnt++;  // 소수일 경우 cnt를 +1함
			}

			cout << "There are " << cnt << " prime number(s) between " << a << " and " << b << endl;
			cout << endl;  // a~b 사이의 소수 갯수 출력

		}

	}while(a < b);  // b가 a보다 크지 않으면 루프를 빠져나옴

}

void PerfectNumber()
{

	int n;
	cout << "Input the number (1-1,000,000): ";
	cin >> n;  // n의 값을 입력받음

	if( !(n>=2 && n<=1000000) ){  // n의 값이 범위 안에 있는 숫자가 아닐 경우 프로그램을 실행안함
		cout << "n의 값이 범위 안에 있는 숫자가 아닙니다" << endl;
		return 1;
	}

	cout << "The perfect numbers between 1 and " << n << " are: ";  // 선 출력문

	for(int a=2; a<=n; a++){  // a: 완전수를 찾기 위한 변수

		int k = 0; // k: 자기 자신을 제외한 약수들을 모두 더한 값을 저장하는 변수
		for(int b=1; b<=a-1; b++){  // b: 완전수를 판별하기 위한 변수
			if(a%b == 0) k = k+b;  // 약수일 경우 k에 누적
		}
		if(a == k) cout << a << " ";  // 약수들을 모두 더한 값이랑 비교해서 완전수 판별
	}

	cout << endl;

}

void Lotto()
{

	srand((unsigned)time(NULL));  // initialize a random seed

	char c;  // c: 랜덤 숫자 출력 여부를 입력받기 위한 변수
	int number;  // number: 숫자 6개를 몇 줄 입력받을지에 대한 변수

	do{

		cout << "Do you want to generate lotto number? (y/n) : ";
		cin >> c;  // 랜덤 숫자 출력 여부를 입력받음

		if(c == 'y'){

			cout << "How many lottos do you want to generate : ";
			cin >> number;  // 숫자 6개를 몇 줄 입력받을지 질문

			for(int k=1; k<=number; k++){

				int n1, n2, n3, n4, n5, n6;  // n1~n6: 임의의 숫자가 들어가는 변수들

				do{

					n1 = rand() % 45 + 1;
					n2 = rand() % 45 + 1;
					n3 = rand() % 45 + 1;
					n4 = rand() % 45 + 1;
					n5 = rand() % 45 + 1;
					n6 = rand() % 45 + 1;  // 1~45 사이의 숫자 중 임의의 숫자를 집어넣음

				}while( n1==n2 || n1==n3 || n1==n4 || n1==n5 || n1==n6
					 || n2==n3 || n2==n4 || n2==n5 || n2==n6
					 || n3==n4 || n3==n5 || n3==n6
					 || n4==n5 || n4==n6
					 || n5==n6 );  // 숫자 6개가 모두 달라야 루프를 빠져나올 수 있음
	
				cout << n1 << " " << n2 << " " << n3 << " " << n4 << " " << n5 << " " << n6 << endl;	  // 6개 값이 모두 다를 경우 출력
			}
		}

	}while(c == 'y');

}

void Baseball()
{

	srand((unsigned)time(NULL));  // initialize a random seed

	char c;  // c: 게임 진행 여부를 입력받기 위한 변수

	do{

		cout << "Are you ready to play the baseball game? (y/n) : ";
		cin >> c;  // 게임 진행 여부를 입력받음

		if(c == 'y'){

			int n1, n2, n3;  // n1~n3: 0~9 사이의 임의의 숫자가 들어감
			do{

				n1 = rand() % 10;
				n2 = rand() % 10;
				n3 = rand() % 10;  // 임의의 숫자를 집어넣음

			}while(n1==n2 || n1==n3 || n2==n3);  // 숫자 3개가 모두 달라야 루프를 빠져나올 수 있음

			int a1, a2, a3;  // a1~a3: 숫자 3개를 입력받기 위한 변수
			int cnt = 1;  // cnt: 사용자가 입력한 횟수

			int strike=0, ball;  // strike: 스트라이크의 수를 저장하는 변수, ball: 볼의 수를 저장하는 변수
			while( cnt<=9 && strike!=3 ){  // 입력 횟수가 9를 초과했거나 3-스트라이크일 경우 종료

				strike = 0, ball = 0;

				cout << "*** BASEBALL GAME ... ROUND " << cnt << endl;
				cout << "USER : ";
				cin >> a1 >> a2 >> a3;  // 숫자 3개를 입력받음

				if(n1 == a1) strike++;
				if(n2 == a2) strike++;
				if(n3 == a3) strike++;  // 스트라이크(strike) 계산

				if(n1 == a2 || n1 == a3) ball++;
				if(n2 == a1 || n2 == a3) ball++;
				if(n3 == a1 || n3 == a2) ball++;  // 볼(ball) 계산

				if(strike==0 && ball==0)
					cout << "COMPUTER : O U T  !!!!" << endl;
				else if(strike==0 && ball>=1)
					cout << "COMPUTER : " << ball << " BALL !!!!" << endl;
				else if(strike>=1 && ball==0)
					cout << "COMPUTER : " << strike << " STRIKE !!!!" << endl;
				else
					cout << "COMPUTER : " << ball << " BALL & " << strike << " STRIKE !!!!" << endl;

				cnt++;  // 스트라이크와 볼의 값을 출력하고 횟수를 +1함

				cout << endl;
			}

			if(strike == 3)
				cout << "PLAYER WINNER !!!!" << endl;
			else{
				cout << "COMPUTER WINNER !!!!" << endl;
				cout << "The hidde number was " << n1 << " " << n2 << " " << n3 << endl;
			}  // 승부 결정

			cout << endl;
		}

	}while(c == 'y');  // 게임 진행 여부가 n이면 게임 종료

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