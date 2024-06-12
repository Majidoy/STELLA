const int VoltBatIN[3] = {2, 3, 4}, VoltPanneauIN = 5;
float VoltBat[3] = {0.0, 0.0, 0.0}, VoltPanneau = 0.0;

void setup() {
  Serial.begin(9600);

  for(int i = 0; i < 3; i++){
    pinMode(VoltBatIN[i], INPUT);
  }
  pinMode(VoltPanneauIN, INPUT);
}

void loop() {
  for(int i = 0; i < 3; i++){
    VoltBat[i] = analogRead(VoltBatIN[i]);
    VoltBat[i] = (VoltBat[i] / 8191) * 4;
  }
  VoltPanneau = analogRead(VoltPanneauIN);
  VoltPanneau = (VoltPanneau / 8191) * 6.38; //(1053 pour 0.82V (1053/8191)*X = 0.82 X = 0.82 / (1053/8191))

  Serial.print("VoltBat 1 : ");
  Serial.println(String(VoltBat[0], 4));
  Serial.print("VoltBat 2 : ");
  Serial.println(String(VoltBat[1], 4));
  Serial.print("VoltBat 3 : ");
  Serial.println(String(VoltBat[2], 4));
  Serial.print("VoltPanneauIN : ");
  Serial.println(String(VoltPanneau, 4));

  delay(1000);
}