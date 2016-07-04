// MoboSensors
// Utilizing mobile sensors for arduino
String x[3]={"","",""};// xrot , yrot ,zrot
char a,b;
int i=0,k=0,l=0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  while(Serial.available()>0)
    {  if(k == 0)   // To reset the strings
       {
        x[0] = "";
        x[1] = "";
        x[2] = "";
        k = 1;
        i = 0;
        l = 0;
        }
       b = Serial.read();delay(20);
       if(b != ' ') // To store values 
          {
            a = b;
            x[i]=x[i]+a;
            }
       
       if(a != b)  // The data is separated by multiple spaces
      {
        i++;
        a=b;
        }
      }
  k = 0;
  if(l == 0)
  {
    
      Serial.print(x[0]);
      Serial.println("");
      Serial.print(x[1]);
      Serial.println("");
      Serial.print(x[2]);
      Serial.println("");
      l = 1; 
    }
  
  }
