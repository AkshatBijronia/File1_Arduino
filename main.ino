int g = 8;
int f = 7;
int e = 6;
int d = 5;
int c = 4;
int b = 3;
int a = 2;  //7 Segment pin

int de=1000;  // delay time


void setup() {


  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(a, OUTPUT);
pinMode(13, OUTPUT);

}


void loop() 
{
 digitalWrite(a,1); 
 digitalWrite(b,1);  
 digitalWrite(c,1);  
 digitalWrite(d,1);  
 digitalWrite(e,1);  
 digitalWrite(f,1);  
 digitalWrite(g,0);   // 0
 digitalWrite(13, HIGH);
  delay(de);  
  
 digitalWrite(a,0); 
 digitalWrite(b,1);  
 digitalWrite(c,1);  
 digitalWrite(d,0);  
 digitalWrite(e,0);  
 digitalWrite(f,0);  
 digitalWrite(g,0);   // 1
 digitalWrite(13, LOW);
  delay(de);
  
 digitalWrite(a,1); 
 digitalWrite(b,1);  
 digitalWrite(c,0);  
 digitalWrite(d,1);  
 digitalWrite(e,1);  
 digitalWrite(f,0);  
 digitalWrite(g,1);  // 2
 digitalWrite(13, HIGH);
 delay(de);
 
 digitalWrite(a,1); 
 digitalWrite(b,1);  
 digitalWrite(c,1);  
 digitalWrite(d,1);  
 digitalWrite(e,0);  
 digitalWrite(f,0);  
 digitalWrite(g,1);   // 3
 digitalWrite(13, LOW);
  delay(de); 
 
  digitalWrite(a,0); 
 digitalWrite(b,1);  
 digitalWrite(c,1);  
 digitalWrite(d,0);  
 digitalWrite(e,0);  
 digitalWrite(f,1);  
 digitalWrite(g,1);   // 4
 digitalWrite(13, HIGH);
  delay(de);   


 digitalWrite(a,1); 
 digitalWrite(b,0);  
 digitalWrite(c,1);  
 digitalWrite(d,1);  
 digitalWrite(e,0);  
 digitalWrite(f,1);  
 digitalWrite(g,1);   // 5
 digitalWrite(13, LOW);
  delay(de);  
  
   digitalWrite(a,1); 
 digitalWrite(b,0);  
 digitalWrite(c,1);  
 digitalWrite(d,1);  
 digitalWrite(e,1);  
 digitalWrite(f,1);  
 digitalWrite(g,1);   // 6
 digitalWrite(13, HIGH);
  delay(de); 
 
  digitalWrite(a,1); 
 digitalWrite(b,1);  
 digitalWrite(c,1);  
 digitalWrite(d,0);  
 digitalWrite(e,0);  
 digitalWrite(f,0);  
 digitalWrite(g,0);   // 7
 digitalWrite(13, LOW);
  delay(de);  
 
 digitalWrite(a,1); 
 digitalWrite(b,1);  
 digitalWrite(c,1);  
 digitalWrite(d,1);  
 digitalWrite(e,1);  
 digitalWrite(f,1);  
 digitalWrite(g,1);   // 8
 digitalWrite(13, HIGH);
  delay(de);  
 
  digitalWrite(a,1); 
 digitalWrite(b,1);  
 digitalWrite(c,1);  
 digitalWrite(d,1);  
 digitalWrite(e,0);  
 digitalWrite(f,1);  
 digitalWrite(g,1);   // 9
 digitalWrite(13, LOW);
  delay(de);   

 digitalWrite(a,1); 
 digitalWrite(b,1);  
 digitalWrite(c,1);  
 digitalWrite(d,0);  
 digitalWrite(e,1);  
 digitalWrite(f,1);  
 digitalWrite(g,1);   // a
  delay(de); 

 digitalWrite(a,0); 
 digitalWrite(b,0);  
 digitalWrite(c,1);  
 digitalWrite(d,1);  
 digitalWrite(e,1);  
 digitalWrite(f,1);  
 digitalWrite(g,1);   // b
  delay(de);   

 digitalWrite(a,1); 
 digitalWrite(b,0);  
 digitalWrite(c,0);  
 digitalWrite(d,1);  
 digitalWrite(e,1);  
 digitalWrite(f,1);  
 digitalWrite(g,0);   // c
  delay(de);   

 digitalWrite(a,0); 
 digitalWrite(b,1);  
 digitalWrite(c,1);  
 digitalWrite(d,1);  
 digitalWrite(e,1);  
 digitalWrite(f,0);  
 digitalWrite(g,1);   // d
  delay(de);   

  digitalWrite(a,1); 
 digitalWrite(b,0);  
 digitalWrite(c,0);  
 digitalWrite(d,1);  
 digitalWrite(e,1);  
 digitalWrite(f,1);  
 digitalWrite(g,1);   // e
  delay(de);   

  digitalWrite(a,1); 
 digitalWrite(b,0);  
 digitalWrite(c,0);  
 digitalWrite(d,0);  
 digitalWrite(e,1);  
 digitalWrite(f,1);  
 digitalWrite(g,1);   // f
  delay(de);   
}
