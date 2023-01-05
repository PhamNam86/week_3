#define DATA 2
#define CLK 3
#define LATCH 4
#define DATA1 5
void setup() {
  // put your setup code here, to run once:
for(int i=2;i<=13;i++){
  pinMode(i,OUTPUT);
  }
}
String number[]={"0000001","1001111","0010010","0000110","1001100","0100100","0100000","0001111","0000000","0000100"};
void makeclock(){
  digitalWrite(CLK,0);
  delay(20);
  digitalWrite(CLK,1);
  delay(20);
  }
String number1="1001111";
String number4="1001100";
String number2="0010010";
int numcount1=0;
int numcount2=0;
int numcount3=0;
void loop() {
  
  // put your main code here, to run repeatedly:
//BAI_4 TUAN-3
for(int i=7;i>=0;i--){
  digitalWrite(DATA1,String(number[numcount1][i]).toInt());
  makeclock();
 }
 for(int i=7;i>=0;i--){
  digitalWrite(DATA1,String(number[numcount2][i]).toInt());
  makeclock();
 }
 for(int i=7;i>=0;i--){
  digitalWrite(DATA1,String(number[numcount3][i]).toInt());
  makeclock();
 }
 numcount1++;
 if(numcount1==10){
  numcount1=0;
  numcount2++;
  if(numcount2==10){
    numcount2=0;
    numcount3++;
    if(numcount3==10){
      numcount1=0;
      numcount2=0;
      numcount3=0;
      }
    }
  }
  delay(10);

/* BAI_3 TUAN 3
 for(int i=7;i>=0;i--){
  digitalWrite(DATA1,String(number[2][i]).toInt());
  makeclock();
 }
 for(int i=7;i>=0;i--){
  digitalWrite(DATA1,String(number[4][i]).toInt());
  makeclock();
 }
 for(int i=7;i>=0;i--){
  digitalWrite(DATA1,String(number[1][i]).toInt());
  makeclock();
 }
 
  //delay(500);
  */
  /*BAI_2 CHUAN TUAN 3
    //int count = 6;
for(int i=6;i>=0;i--){
  digitalWrite(DATA1,String(number[numcount1][i]).toInt());
  //makeclock();
  digitalWrite(DATA,String(number[numcount2][i]).toInt());
  makeclock();
  }
  numcount2++;
 
  if(numcount2==10)
  {
    numcount2=0;
    numcount1++;
    if(numcount1==10){
      numcount1=0;
      numcount2=0;
      }
    } 
    delay(500);*/
/*BAI_2 TUAN-3 TEST EXAMPLE
int count = 6;
for(int i=6;i>=0;i--){
  digitalWrite(DATA1,String(number2[i]).toInt());
  //makeclock();
  digitalWrite(DATA,String(number1[i]).toInt());
  makeclock();
  }
  //numcount++;
  delay(500);
  */
/*digitalWrite(DATA,1);
makeclock();
digitalWrite(DATA,1);
makeclock();
digitalWrite(DATA,1);
makeclock();
digitalWrite(DATA,1);
makeclock();
digitalWrite(DATA,0);
makeclock();
digitalWrite(DATA,0);
makeclock();
digitalWrite(DATA,1);
makeclock();


*/
digitalWrite(LATCH,0);
delay(50);
digitalWrite(LATCH,1);
delay(50);
}
