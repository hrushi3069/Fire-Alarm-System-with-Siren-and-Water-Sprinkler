// Fire Alarm System with Siren and Water Sprinkler

const byte SENSOR_PIN = 2;
const byte BUZZER_PIN = 3;
const byte RELAY_PIN = 4;

const unsigned long SPRINKLER_DELAY = 5000;   // 5 seconds

bool fireDetected = false;
bool sprinklerStarted = false;
unsigned long fireStartTime = 0;

void setup()
{
  pinMode(SENSOR_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(RELAY_PIN, OUTPUT);

  digitalWrite(BUZZER_PIN, LOW);
  digitalWrite(RELAY_PIN, HIGH);   // Relay OFF (active LOW)
}

void loop()
{
  bool flame = (digitalRead(SENSOR_PIN) == LOW);

  if (flame)
  {
    if (!fireDetected)
    {
      fireDetected = true;
      sprinklerStarted = false;
      fireStartTime = millis();
    }

    digitalWrite(BUZZER_PIN, HIGH);

    if (!sprinklerStarted &&
        millis() - fireStartTime >= SPRINKLER_DELAY)
    {
      digitalWrite(RELAY_PIN, LOW);
      sprinklerStarted = true;
    }
  }
  else
  {
    fireDetected = false;
    sprinklerStarted = false;

    digitalWrite(BUZZER_PIN, LOW);
    digitalWrite(RELAY_PIN, HIGH);
  }
}
