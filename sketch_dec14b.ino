int NUMBER;
int NUM;

#define RED 13
#define YELLOW 12
#define BLUE 11
#define GREEN 10
#define WHITE 9

#define pinA 2
#define pinB 4
void setup() {
  int NUMBER=0;
  int NUM=0;

  pinMode(pinA,INPUT_PULLUP);
  pinMode(pinB,INPUT_PULLUP);

  
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(WHITE, OUTPUT);

  digitalWrite(RED, LOW); 
  digitalWrite(YELLOW, LOW); 
  digitalWrite(BLUE, LOW); 
  digitalWrite(GREEN, LOW); 
  digitalWrite(WHITE, LOW);
}

void loop() {
  if(digitalRead(pinA)==LOW){
    if(NUM<=32){
      NUM++;
    }
  }else if(digitalRead(pinB)==LOW){
    if(NUM>=0){
      NUM--;
    } 
  }
  NUMBER=NUM;

  for(int i=RED;i>=WHITE;i--){
    if((NUMBER%2)==1){
      digitalWrite(i, HIGH);
      NUMBER--;
    }else{
      digitalWrite(i, LOW);
    }
    NUMBER=NUMBER/2;
  }
  
  delay(200);
}
