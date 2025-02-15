#include <WiFi.h>
#include <ESPAsyncWebServer.h>

const char* ssid = "Be e:)";       // Replace with your Wi-Fi SSID
const char* password = "*"; // Replace with your Wi-Fi password

const int ledPin = 2; // Onboard LED (GPIO2)

AsyncWebServer server(80); // Create AsyncWebServer on port 80

// HTML Web Page
const char index_html[] PROGMEM = R"rawliteral(
)rawliteral"; //place youre html file

void setup() {
    Serial.begin(115200);
    pinMode(ledPin, OUTPUT);
    digitalWrite(ledPin, LOW);

    // Connect to Wi-Fi
    WiFi.begin(ssid, password);
    Serial.print("Connecting to Wi-Fi");
    while (WiFi.status() != WL_CONNECTED) {
        delay(1000);
        Serial.print(".");
    }
    Serial.println("\nConnected to Wi-Fi");
    Serial.print("ESP32 IP Address: ");
    Serial.println(WiFi.localIP());

    // Serve the HTML page
    server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
        request->send_P(200, "text/html", index_html);
    });

    // Handle LED toggle
    server.on("/toggle", HTTP_GET, [](AsyncWebServerRequest *request){
        digitalWrite(ledPin, !digitalRead(ledPin));
        request->send(200, "text/plain", "Toggled");
    });

    server.begin(); // Start server
} 

void loop() {
    // Nothing needed in loop for AsyncWebServer
}
