
void setup() 
{
  Serial.begin(9600);
  pinMode(9,INPUT);     
  digitalWrite(9,HIGH);

}
int state=0;  
  int z=0,xpos=0,ypos=0;
  int x=analogRead(A0);
  int y=analogRead(A1);
  int sensibilit√©=10;   
  if(x>=550)                     
  xpos=map(x,550,1023,0,sensib); 
  if(x<=450)                  
  xpos=map(x,450,0,0,sensib);   
  if(y>=550)                    
  ypos=map(y,550,1023,0,-sensib);  
  if(y<=450)                 
  ypos=map(y,450,0,0,-sensib); 
  int state1=digitalRead(9);
  if(state1==1 && state==0)   
  z=1;
  else
  z=0;
  if(xpos!=0 or ypos!=0 or z==1) 
  {
  Serial.print(xpos);    
  Serial.print(":");
  Serial.print(ypos);
  Serial.print(":");
  Serial.println(z);
  }
state=state1;
  delay(10);        
}
