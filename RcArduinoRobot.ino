
const int motorPin1  = 9;  
const int motorPin2  = 8;  

const int motorPin3  = 6;
const int motorPin4  = 5;  
 
int ch1; 
int ch2;   
int ch3;
int y;
int x;
int z;
void setup() {

  pinMode(10, INPUT); 
  pinMode(11, INPUT);
  pinMode(12, INPUT);
 //Set pins as outputs
    pinMode(motorPin1, OUTPUT);
    pinMode(motorPin2, OUTPUT);
    pinMode(motorPin3, OUTPUT);
    pinMode(motorPin4, OUTPUT);
  Serial.begin(9600); 

}

void loop() {

  ch1 = pulseIn(10, HIGH, 25000); 
  ch2 = pulseIn(11, HIGH, 25000); 
  ch3 = pulseIn(12, HIGH, 25000);
x= map(ch1, 996, 1975, 0, 255);
y= map(ch3, 993,1983,0,255);
Serial.println(ch1);

if(y < 10)
{
  y = 0;}
  if(x < 100)
  {
   
    z = map(x,110,0,0,255);
      analogWrite(motorPin1, z);
    analogWrite(motorPin2, 0);
    analogWrite(motorPin3, 0 );
    analogWrite(motorPin4, z);

  }
else if(x > 130)
 {
    
        analogWrite(motorPin1, 0);
    analogWrite(motorPin2, x);
    analogWrite(motorPin3, x);
    analogWrite(motorPin4, 0);
  }
 else if(y > 10)
  {
    x = 110;
        analogWrite(motorPin1, y);
    analogWrite(motorPin2, 0);
    analogWrite(motorPin3, y);
    analogWrite(motorPin4, 0);
  }
  else{
        analogWrite(motorPin1, 0);
    analogWrite(motorPin2, 0);
    analogWrite(motorPin3, 0);
    analogWrite(motorPin4, 0);
    
    }
  
 
  

}
