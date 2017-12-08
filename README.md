# README file for TEAM[4,5]:

This text file describes brief but precise and complete specification of project including:
- funtion descriptions: name, input/output parameters
- declaration of important data and data types to be included in user header file
- your team's brief ideas of implementations

****
## <프로그램 개요>
 - 사용자에게 프로그램을 실행시킬 것인지 묻고, 반복해서 문자열의 길이와 Rotation 횟수를 받을 수 있게 만든다.
 - 문자열, 문자열의 길이, 회전 횟수 등의 input을 받아서 4가지 방법에 따라 문자열을 rotate시키는 프로그램을 작성한다.
 - 문자열의 길이, 회전 횟수, 4가지 rotate 방법에 따라 실행시간을 측정하고 비교한다.
****

## <역할분담>

- header: 전현욱(Jeon1)
- main: 최윤호(yunho303)
- trivial: 박시현(sihyun98)
- juggling: 유호성(Youhoseong)
- block-swap: 전현욱(Jeon1)
- reverse: 김윤희(tngkrbb123)
 -README 파일: 모두

****

## <Declaration of important data and data types in user header file>

	a. name: Rotation.h 
	b. Headers included
   	   - <stdio.h>
   	   - <stdlib.h>
  	   - <string.h>
	   - <time.h>
    	c. ownership: Hyunuk Jeon

****

## <Function descriptions>

1. Trivial 
	a. name: Trivial
	b. input parameter: char str[], int n, int d
	c. output parameter: [void]
	d. file name:  trivial.c
	e. ownership: SiHyun Park

2. juggling
	a. name: Juggling
	b. input parameter: char* ary,int n,int d
	c. output parameter: [void]
	d. file name: Juggling.c
	e. ownership: Hoseong You

3. blockswap
	a. name: blockswap
	b. input parameter: char arr[], int n, int d
	c. output parameter: [void]
	d. file name: blockswap.c 
	e. ownership: Hyunuk Jeon

4. reverse 
	a. name: reverse
	b. input parameter: char *str, int n, int d 
	c. output parameter: [void]
	d. file name: reverse.c
	e. ownership: YoonHee Kim

5. main
	a. file name: main.c
	b. ownership : Yunho Choi 

****

## <TEAM 5's idea>
1. trivial
	a. 문자열과 n, d를 인수로 넘겨 받는다.
	b. temp를 초기화시킨다.
	c. d가 음수일 때와 양수일 때로 CASE를 구분한다.
	d. (d가 양수) temp에 첫번째 문자를 임시저장하고 다음칸의 문자를 앞칸으로 이동시킨다.
	e. (d가 음수) d를 음수로 변환한 후 temp를 n-1번째의 문자로 임시저장하고 다음칸의 문자를 앞칸의 문자로 저장한다.

2. juggling
	a. 문자열 포인터와 n, 그리고 d를 인수로 넘겨 받는다.
	b. d가 음수일 때와 양수일 때로 CASE를 구분한다.
	c. (d가 음수) 문자열의 첫 번째 index를 temp에 임시 저장하고, d칸 간격으로 문자열을 이동시킨 뒤
	마지막으로 마지막 index에 temp를 저장한다. 이 과정을 d와 n의 최대공약수 만큼 반복한다. 
	d. (d가 양수) 문자열의 마지막 index를 temp에 임시 저장하고, d칸 간격으로 문자열을 이동시킨 뒤
	마지막으로 첫 번째 index에 temp를 저장한다. 이 과정을 d와 n의 최대공약수 만큼 반복한다. 

3. blockswap
	-swap함수(arr, a, b, d): d번만큼 a+i번째 원소와 b+i번째 원소를 교체한다.
	a. A블럭의 크기를 n-d, B블럭의 크기를 d로 초기 설정한다
	b. 'A블럭의 크기 < B블럭의 크기'이면 swap함수를 호출해서 (A블럭 크기)번 만큼 ((n-d)- A블럭의 크기)번째 원소와 
            (n-d)+(B블럭의 크기-A블럭의 크기)번째 원소를 교체한다. 
	c. 그렇지 않은 경우는 ((n-d)-A블럭 크기)번째 원소와 (n-d)번째 원소를 (B블럭 크기)번 만큼 교체한다. 
	d. 이 과정을 A블럭의 크기와 B블럭의 크기가 같아질 때까지 반복한다.

4. reverse
	a. 문자열과 rotate시킬 크기 d, 문자열의 길이인 n을 reverse함수의 인수로 넘겨 받는다.
	b. 세번 호출할 sub_reverse함수를 추가하여 문자열을 reverse시킬 수 있게 한다. 
	c. d가 음수일 때아 양수일 때로 CASE를 구분하여  sub_reverse함수를 호출할때의 범위를 다르게 지정한다.
	d. d가 음수일 때는 d값을 기준으로 두개로 나누어서 각각 reverse시킨후 원하는 d만큼 rotate시킨다.
	e. d가 양수일때는 n - d값을 기준으로 두개로 나누어서 각각 reverse시킨후 원하는 d만큼 rotate시킨다.

****
## <TestCase>

### [STRLength]  [ROTATE distance]  [T.trivial]    [T.juggle]     [T.bw]      [T.reverse] 
10	     1                   0.000000       0.000000       0.000000    0.000000
100	     39			 0.000000       0.000000       0.000000    0.000000
1000	     754                 0.004000       0.000000       0.000000    0.000000
5000   	     4259                0.116000       0.000000       0.000000    0.000000
10000        8705                0.473000	0.001000       0.000000    0.000000
100000 	     54123               29.762000      0.001000       0.001000    0.001000
500000       12354               33.677000      0.005000       0.003000    0.003000
500000       20                  0.000000       0.005000       0.005000    0.004000
1000000      12354               67.666000      0.009000       0.007000    0.008000
10000000     200                 10.881000      0.151000       0.074000    0.074000
10000000     2000                109.10000      0.106000       0.068000    0.075000
****

## <결과 추론>

문자열 길이: N
Rotate 횟수: d

- trivial 알고리즘은 대략 N*d만큼의 계산을 수행해야 한다. 테스트한 컴퓨터는 1초에 약 1억 7000만번의 계산을 수행한다.
  그래서 N*d/170000000 의 값을 계산하면 trivial의 실행 시간을 대략적으로 추론할 수 있다.

- juggle 알고리즘은 적어도 trivial 알고리즘의 계산량에서 Rotate 횟수인 d로 나눈 만큼(즉, N만큼)의 계산을 수행해야 한다.
하지만 N과 d의 GCD(최대공약수)가 1이면, 그 계산량이 1이 아닐 때 보다 증가하므로 계산량이 N보다 커질 수 있다.
따라서 juggle 알고리즘은 "적어도 N만큼"의 계산량을 수행하므로 실행 시간을 t라하면, 그 시간은 t>=N/170000000초 정도로 추론할 수 있다.

- blockswap 알고리즘은 문자열을 d와 N-d 크기의 블록으로 묶고 재귀적으로 함수를 호출해서 swap을 수행한다.
때문에 원소를 하나씩 옮기는 trivial solution과 juggle 알고리즘보다 훨씬 빠르다.
d의 값이 N/2의 값에 가까워 질 수록 더 빨라진다. 예를 들어서 10만 자리의 문자열을 d를 5만으로 한다면 reverse보다 계산시간이 빠르게 된다.
  
- reverse 알고리즘은 3단계에 걸쳐서 rotate를 진행하는데, 처음에 d/2만큼의 문자열 원소를 reverse하고 두 번째는 n-d/2만큼, 세 번째는 n/2만큼 reverse를 한다.
따라서 총 계산량이 약 n번이라 할 수 있으므로 실행 시간이 t라 할 때 약 N/170000000초 정도 소요됨을 추론할 수 있다.

실행 시간이 오래걸리는 순으로 나열했을 때,

  	 trivial > juggle > block-swap > reverse   
   혹은, trivial > juggle > reverse > block-swap 임을 추론할 수 있다. 

 (d의 값이 N/2에 가까워 짐에 따라 아래 순서와 같아짐.)

















		
