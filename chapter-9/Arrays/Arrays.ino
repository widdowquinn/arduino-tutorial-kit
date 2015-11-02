// Arrays example from Arduino Tutorial Kit Manual

int Array_1[3];
int Array_2[] = {1, 2, 3};

void setup() {
  Serial.begin(9600);
  Serial.println("Arduino Arrays");
  Serial.println();  
}

void loop() {
  byte x;
  
  Array_1[0] = 1;
  Array_1[1] = 2;
  Array_1[2] = 3;
  
  Serial.println("Output of array 1 ");
  Serial.println("------------------");
  
  // Output data from first array
  for (x=0; x<3; x++)
  {
    Serial.print(Array_1[x]);
    Serial.println();
  }
  
  Serial.println("Output of array 2 ");
  Serial.println("------------------");
  
  // Output data from the second array
  Serial.print(Array_2[0]);
  Serial.println();
  Serial.print(Array_2[1]);
  Serial.println();
  Serial.print(Array_2[2]);
  Serial.println();  
  
  while(1);
}
