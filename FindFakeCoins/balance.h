#define NUMBER 100 // 최대 100개 
#define EXITFLAG -1 // 배열에서의 값이 -1인 경우 배열의 끝으로 인식 
#define BAD 5 // 불량 동전의 무게 
#define CORRECT 7 // 정상 동전의 무게 
 
// scale 함수의 결과 형태 
// A와 B라는 묶음이 있을 때 A묶음이 B묶음보다 크면 LARGE, 작으면 SMALL이 return되고 
// 같으면 EQUAL이 return됨 
// 만약 A에 불량 동전이 모두 모이고, B에 아무 동전도 없을 때에는 SUCCESS 
// 그렇지 않고, 위의 제한 사항을 어긴 경우는 ERROR가 return됨 
typedef enum {ERROR = -1, A, B, C, EQUAL_AB, EQUAL_BC, EQUAL_AC, EQUAL_ALL, SUCCESS} status; 
  
// int 자료형으로 동전의 형태를 나타냄 
typedef int coins; 
   
//   // 초기화 시키는 루틴 (main 함수 내에 반드시 삽입시켜야 함) 
// p: 불량 동전의 발생 확률
// 100개의 동전이 생성된다.
void initialize (int p); 
    
// 양팔 저울 루틴 (A라는 배열과 B라는 배열을 parameter로 전달) 
// 리턴 형태는 위의 status 자료형을 참조할 것 
// a, b, c: 삼팔 저울 위에 올릴 세개의 동전 뭉치
// 동전의 index값들을 해당 배열에 넣고, 배열의 끝에 -1을 넣어 배열의 끝을 명시한다.
// 예) int a[5] = {1, 2, 3, -1};
// balance를 호줄할 때마다 총 비교횟수와 비교결과가 출력된다.
//status scale (int A[], int B[]); 
int balance(int a[], int b[], int c[]);

// Duplicated coin error check
int getSize(int target[]);