String command;  // To store received command

void setup() {
  Serial.begin(9600);  // Start Serial communication (same as HC-05 baud rate)
  pinMode(8, OUTPUT);  // Device 1
  pinMode(7, OUTPUT);  // Device 2
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  Serial.println("Bluetooth Home Automation Ready");
}

void loop() {
  if (Serial.available() > 0) {
    command = Serial.readStringUntil('\n'); // Read input until newline
    command.trim();  // Remove extra spaces

    if (command == "ON1") {
      digitalWrite(8, HIGH);
      Serial.println("Device 1 ON");
    } 
    else if (command == "OFF1") {
      digitalWrite(8, LOW);
      Serial.println("Device 1 OFF");
    } 
    else if (command == "ON2") {
      digitalWrite(7, HIGH);
      Serial.println("Device 2 ON");
    } 
    else if (command == "OFF2") {
      digitalWrite(7, LOW);
      Serial.println("Device 2 OFF");
    }
    else {
      Serial.println("Invalid Command");
    }
  }
}
