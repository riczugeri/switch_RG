// Gomb állapotát tároló változó
int gombAllapot = 0;

void setup() {
  // Soros kommunikáció indítása
  Serial.begin(9600);

  // Nyomógomb bemeneti módra állítása
  pinMode(2, INPUT);
}

void loop() {
  // Nyomógomb állapotának beolvasása
  gombAllapot = digitalRead(2);

  // Gomb állapotának ellenőrzése és megjelenítése
  if (gombAllapot == HIGH) {
    Serial.println("A gomb lenyomva");
  } else {
    Serial.println("A gomb felengedve");
  }

  // Kis várakozás a soros monitor frissítése miatt
  delay(500);
}
