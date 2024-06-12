const int ldrPin = 33; // Broche numérique où le signal de sortie du comparateur est connecté
int ldrValue = 0;

void setup() {
  Serial.begin(115200); // Initialiser la communication série
  pinMode(ldrPin, INPUT); // Configurer la broche comme entrée
}

void loop() {
  ldrValue = digitalRead(ldrPin); // Lire la valeur numérique de la sortie du comparateur

  if (ldrValue==0){
    Serial.println("Zone exposé");
  }
  else{
    Serial.println("Zone d'ombre");
  }
  delay(100); // Ajouter un délai pour éviter une lecture trop rapide
}