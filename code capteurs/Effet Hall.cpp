void setup() {
  // Initialiser la communication série pour le moniteur série
  Serial.begin(9600);

  // Configurer GPIO 24 comme une entrée
  pinMode(6, INPUT);
}

void loop() {
  // Lire la valeur du capteur connecté à GPIO 24
  int sensorValue = analogRead(6);

  // Afficher la valeur lue sur le moniteur série
  Serial.print("Valeur du capteur: ");
  Serial.println(sensorValue);

  // Attendre 500 millisecondes avant la prochaine lecture
  delay(500);
}