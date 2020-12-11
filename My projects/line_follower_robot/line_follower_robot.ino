void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

 pinMode(9,OUTPUT);//first motor
 pinMode(3,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(10,OUTPUT);//second motor
}
void moveForeward()
{
  analogWrite(9,70);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  analogWrite(10,70);
}

void stopMove()
{
  analogWrite(9,0);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  analogWrite(10,0);
}

void loop() {
  // put your main code here, to run repeatedly:
 
if(/*digitalRead(8)==1&&digitalRead(2)==1&&*/digitalRead(2)==1&&digitalRead(12)==1&&digitalRead(8)==1&&flag==0)
{
  flag=1;
  i=i+1;
  }
if(/*digitalRead(8)==0&&digitalRead(2)==0&&flag==1*/digitalRead(11)==0&&digitalRead(13)==0&&flag==1)
{
  flag=0;
  }
  if(i<=6)
{
goto label;
}
  if( i==6)
{
stopMove() ;
  }

label:
if(digitalRead(8)==0&&digitalRead(2)==0&&digitalRead(12)==1)
  {
  moveForeward();//11 and 2    8 and 13
    }
    if(digitalRead(12)==1&&digitalRead(8)==1&&digitalRead(2)==0)
    {
turnRight();  
  }
  if(digitalRead(12)==1&&digitalRead(2)==1&&digitalRead(8)==0)
  {
  turnLeft();  
    }
     if(digitalRead(11)==1||digitalRead(2)==1)
 {
      turnLeft(); 
}
if(digitalRead(11)==1||digitalRead(2)==1&&digitalRead(8)==1||digitalRead(13)==1)
{
  moveForeward();
  }
   if(digitalRead(11)==1&&digitalRead(2)==1&&digitalRead(8)==1)
   {
    moveForeward();
    }
     if(digitalRead(13)==1||digitalRead(8)==1)
 {
      turnRight(); 
 }
}
if(digitalRead(8)==1&&digitalRead(12)==0&&digitalRead(2)==0&&digitalRead(13)==1)
{
turnRight();   
}
if(digitalRead(8)==0&&digitalRead(12)==0&&digitalRead(2)==1&&digitalRead(11)==1)
{
  turnLeft();
}
if(digitalRead(11)==1)
{
turnRight();  
  }
}
 /*Serial.println(digitalRead(11));
 Serial.println(digitalRead(8));
 Serial.println(digitalRead(12));
 Serial.println(digitalRead(2));
 Serial.println(digitalRead(13));
delay(2000);*/
 

/*
// =============>  <50 white
// =============>  >50 Black
     if(analogRead(A0)<50&&analogRead(A1)>50&&analogRead(A2)<50){moveForeward();}
else if(analogRead(A0)>50&&analogRead(A1)>50&&analogRead(A2)<50){turnRight();}
else if(analogRead(A0)>50&&analogRead(A1)>50&&analogRead(A2)>50){stopMove();}
else {moveForeward();}
 }
  /*
 if(digitalRead(8)==0&&digitalRead(12)==1&&digitalRead(2)==0)
  {
  moveForeward();//11 and 2    8 and 13
    }
    if(digitalRead(12)==1&&digitalRead(8)==1&&digitalRead(2)==0)
    {
turnRight();  
  }
  if(digitalRead(12)==1&&digitalRead(2)==1&&digitalRead(8)==0)
  {
  turnLeft();  
    }
     if(digitalRead(11)==1||digitalRead(2)==1)
 {
      turnLeft(); 
}
if(digitalRead(11)==1||digitalRead(2)==1&&digitalRead(8)==1||digitalRead(13)==1)
{
  moveForeward();
  }
     if(digitalRead(13)==1||digitalRead(8)==1)
 {
      turnRight(); 
 }
 if(digitalRead(12)==10&&digitalRead(8)==0&&digitalRead(11)==1&&digitalRead(2)==1&&digitalRead(13)==1)
 {
  moveForeward();
  }
 
/*if(digitalRead(8)==1&&digitalRead(12)==0&&digitalRead(2)==0&&digitalRead(13)==1)
{
turnRight();   
}
if(digitalRead(8)==0&&digitalRead(12)==0&&digitalRead(2)==1&&digitalRead(11)==1)
{
  turnLeft();
}
/*if(digitalRead(11)==1)
{
turnRight();  
  }*/

 /*Serial.println(digitalRead(11));
 Serial.println(digitalRead(8));
 Serial.println(digitalRead(12));
 Serial.println(digitalRead(2));
 Serial.println(digitalRead(13));
delay(2000);*/
 

/*
// =============>  <50 white
// =============>  >50 Black
     if(analogRead(A0)<50&&analogRead(A1)>50&&analogRead(A2)<50){moveForeward();}
else if(analogRead(A0)>50&&analogRead(A1)>50&&analogRead(A2)<50){turnRight();}
else if(analogRead(A0)>50&&analogRead(A1)>50&&analogRead(A2)>50){stopMove();}
else {moveForeward();}
\*/
