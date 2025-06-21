# A25-07<Magic Faucet Fountain>

![Logo](./Nano33BLESense/Images/Allgemein/logoGruppe07.jpg "Magic Faucet Fountain")

# Autoren
1. Kornichenkova   Valeriia 7024769
2. Neumann         Sven     7025068
3. Yüce            Asena    7024749
4. Maschke         Carl     7024640
5. Braams          Nina     7024847

# Beschreibung
Der Magic Faucet Fountain ist eine dekorative Installation, bei der ein Wasserhahn scheinbar ohne sichtbare Stütze in der Luft schwebt und dabei kontinuierlich Wasser fördert. Ziel des Projekts ist es, diesen „magischen“ Effekt durch eine geschickte Kombination aus physischer Konstruktion, Sensorik und digitaler Steuerung zu realisieren.

# Herausforderung
1. Unsichtbare Tragstruktur:
Der zentrale Effekt des Brunnens, der scheinbar schwebende Wasserhahn, erfordert eine stabile, tragfähige Konstruktion.  
Diese muss gleichzeitig für den Benutzer möglichst unsichtbar bleiben. Damit einher gehen hohe Anforderungen an Materialwahl und Integration.
 
2. Enge Platzverhältnisse im Inneren:
Die mechanische Struktur im Brunneninneren bietet nur wenig Raum für Sensoren und Elektronik.      
Die Komponenten müssen kompakt, wasserfest und zuverlässig montierbar sein.

3. Stromversorgung in Wassernähe:
Die Kombination aus Wasser und Strom birgt ein erhöhtes Sicherheitsrisiko. Eine wasserdichte und dennoch zugängliche Stromversorgung ist zwingend erforderlich.

4. Kabellose Steuerung via App:
Die Steuerung soll benutzerfreundlich per Smartphone erfolgen – kabellos und möglichst ohne sichtbare Module.  
Die Verbindung muss stabil, sicher und reaktionsschnell sein.

# Problemlösung
Dieser Effekt wird durch ein transparentes Acrylrohr realisiert, das sowohl den Wasserfluss leitet als auch die tragende Struktur für den Hahn darstellt. Da das Rohr hinter dem gleichmäßig fließenden Wasser optisch kaum wahrnehmbar ist, entsteht der Eindruck eines schwebenden Hahns.

Der Wasserstrom wird über eine kleine elektrische Pumpe erzeugt, die über ein Relais angesteuert wird. Der Relais fungiert als elektronischer Schalter und wird von einem digitalen Ausgang des Arduino-Boards gesteuert. Der Arduino ist über Bluetooth mit einer mobilen App verbunden. Über die App kann der Benutzer den Brunnen bequem ein- und ausschalten.

Ein weiterer Bestandteil des Systems ist ein Ultraschallsensor, der den Wasserstand im Vorratsbehälter misst. Der aktuelle Füllstand wird ebenfalls in der App angezeigt, wodurch der Benutzer rechtzeitig erkennen kann, wann Wasser nachgefüllt werden muss.

# Verzeichnisstruktur
```
LATEXTEMPLATE/
├── CAD und 3D-Druck/
│   ├── GCode/
│   └── CAD Dateien/
├── Demontageanleitung/
│   ├── Chapters/
│   │   ├── de/
│   │   └── en/
│   └── General/
├── Haftungsübernahme/
│   ├── Contents/
│   ├── General/
│   └── Images/
├── Handbuch Magic Faucet Fountain/
│   ├── Chapters/
│   │   ├── de/
│   │   └── en/
│   └── General/
├── MLBib/
│   ├── PDF Literatur/
│   └── Präsentation der Literatur/
├── Montageanleitung/
│   ├── Chapters/
│   │   ├── de/
│   │   └── en/
│   └── General/
├── Nano33BLESense/
│   ├── Code/
│   │   ├── Arduino/
│   │   │   ├── Applikation/
│   │   │   │   └── ablaufApplikation/
│   │   │   ├── Battery/
│   │   │   ├── Blink/
│   │   │   │   └── html/
│   │   │   │       └── search/
│   │   │   ├── Bluetooth Modul/
│   │   │   │   ├── bluetoothAnwendung/
│   │   │   │   └── bluetoothBeispiel/
│   │   │   ├── CAM/
│   │   │   │   └── ov7675/
│   │   │   ├── EthernetENC28J60/
│   │   │   ├── Externe LED/
│   │   │   │   ├── ansteuerungLED/
│   │   │   │   └── blinkenLED/
│   │   │   ├── HeartRate/
│   │   │   │   ├── HeartRateApp/
│   │   │   │   └── TestHeartRateSensor/
│   │   │   ├── MOSFET/
│   │   │   ├── OLED/
│   │   │   │   ├── DEBO - OLED2 0.96/
│   │   │   │   └── Grove - OLED Display SSD1308/
│   │   │   ├── Proximity/
│   │   │   ├── Pumpe/
│   │   │   │   ├── ansteuerungPumpe/
│   │   │   │   └── fehlererkennungPumpe/
│   │   │   ├── Schaltnetzteil/
│   │   │   │   └── anwendungSchaltnetzteil/
│   │   │   ├── SDCard/
│   │   │   └── UltraSonicHCSR04/
│   │   │       ├── entfernungMessung/
│   │   │       ├── html/
│   │   │       │   └── search/
│   │   │       ├── latex/
│   │   │       ├── laufzeitMessung/
│   │   │       └── schwellenwertMeldung/
│   │   ├── EdgeImpulse/
│   │   ├── JetsonNano/
│   │   │   └── Cameracalib/
│   │   └── Nano33BLESense/
│   │       ├── APDS9960/
│   │       │   ├── APDS9960Calibration/
│   │       │   ├── ApplicationAPDS9960/
│   │       │   ├── TestAPDS9960/
│   │       │   ├── TestAPDS9960Color/
│   │       │   ├── TestAPDS9960Gesture/
│   │       │   └── TestAPDS9960Proximity/
│   │       ├── Bluetooth/
│   │       ├── Doxygen/
│   │       │   └── Test/
│   │       │       └── search/
│   │       ├── hello_world/
│   │       │   ├── images/
│   │       │   └── train/
│   │       ├── IMU/
│   │       │   ├── Arduino/
│   │       │   ├── Pycharm/
│   │       │   ├── Test/
│   │       │   └── Word/
│   │       ├── LEDs/
│   │       │   └── examples/
│   │       │       ├── TestLED/
│   │       │       ├── TestLEDBrightness/
│   │       │       ├── TestLEDBuiltin/
│   │       │       ├── TestLEDBuiltinApplication/
│   │       │       ├── TestLEDPower/
│   │       │       ├── TestLEDPowerBattery/
│   │       │       ├── TestLEDPowerBrightness/
│   │       │       ├── TestLEDRGB/
│   │       │       ├── TestLEDRGBApplication/
│   │       │       └── TestLEDRGBColors/
│   │       ├── Libs/
│   │       ├── MagicWand/
│   │       ├── magic_wand_code/
│   │       │   └── magic_wand/
│   │       ├── MikrophoneMP34DT05/
│   │       │   └── MikrophoneMP34DT05/
│   │       ├── Nano33BLESenseLED/
│   │       │   └── examples/
│   │       │       └── TestLEDBuiltin/
│   │       ├── person_detection/
│   │       │   ├── arc_emsdp/
│   │       │   ├── arduino/
│   │       │   └── utils/
│   │       ├── person_detection_int8/
│   │       ├── PushButton/
│   │       │   ├── TestPushButton/
│   │       │   └── TestPushButtonInterrupt/
│   │       ├── SensorLPS22HB/
│   │       ├── Serial/
│   │       ├── Test/
│   │       ├── TestPushButton/
│   │       └── TestPushButtonInterrupt/
│   ├── Contents/
│   │   ├── General/
│   │   │   ├── DokuProjektMagicFaucetFountain/
│   │   │   ├── en/
│   │   │   ├── HardwareBeschreibung/
│   │   │   ├── Programmierung/
│   │   │   ├── Schaltplan/
│   │   │   ├── Templates/
│   │   │   └── Veränderungen/
│   │   └── Nano33BLESense/
│   │       ├── de/
│   │       └── en/
│   ├── General/
│   ├── Images/
│   │   ├── AccelerationDetectionAlgorithms/
│   │   ├── AdapterBoard/
│   │   ├── Allgemein/
│   │   ├── Arduino/
│   │   │   ├── Alvik/
│   │   │   ├── APDS9960/
│   │   │   ├── ArdiunoIDE2/
│   │   │   ├── ArduinoIDE/
│   │   │   ├── CLI/
│   │   │   ├── EdgeControl/
│   │   │   ├── IMU/
│   │   │   ├── LoRa/
│   │   │   ├── Memory/
│   │   │   ├── MKRWan1310/
│   │   │   ├── MotorCarrier/
│   │   │   ├── Nano33BLE/
│   │   │   ├── NanoESP32/
│   │   │   ├── PortentaH7/
│   │   │   │   ├── PortentaVisionEthernet/
│   │   │   │   └── PortentaVisionLoRa/
│   │   │   ├── TensorFlowLite/
│   │   │   └── VisionShield/
│   │   ├── Barcode/
│   │   ├── Battery/
│   │   ├── BLE/
│   │   ├── BlueTooth/
│   │   ├── ButtonGrove/
│   │   ├── CAM/
│   │   │   ├── IMX477/
│   │   │   ├── LensCalibrationTool/
│   │   │   ├── ov2640/
│   │   │   └── ov7675/
│   │   ├── Camera/
│   │   ├── doxygen/
│   │   ├── Drive/
│   │   ├── EthernetENC28J60/
│   │   ├── GearDrive/
│   │   ├── Grove/
│   │   ├── HeartRate/
│   │   ├── I2C/
│   │   ├── IMU/
│   │   ├── JSTConnectors/
│   │   ├── L298N/
│   │   ├── LensCalibrationTool/
│   │   ├── MagicWand/
│   │   │   ├── ArduinoIDE/
│   │   │   └── KDD/
│   │   ├── MateriallisteBilder/
│   │   ├── Microphon/
│   │   ├── MPM3610/
│   │   ├── mqtt/
│   │   ├── Nano33BLESense/
│   │   │   └── TinyMLKit/
│   │   ├── NiclaVision/
│   │   │   └── SlopeControl/
│   │   ├── OLED/
│   │   │   └── GroveOLEDisplaySSD1308/
│   │   ├── OpenCVCalibration/
│   │   ├── QRCode/
│   │   ├── SDCard/
│   │   └── Sensor/
│   │       ├── DHT22/
│   │       ├── HCSR04/
│   │       ├── LED/
│   │       ├── Phoenix/
│   │       └── Resistor/
│   ├── System/
│   │   └── Nano33BLESense/
│   └── tikz/
├── Poster/
│   └── images/
├── Präsentation/
│   └── Template/
│       ├── Code/
│       │   └── PDFExtractTable/
│       ├── Documents/
│       ├── images/
│       ├── img/
│       └── slides/
├── Schnelleinstieg/
├── Software Dokumentation/
├── Xmind/
├── author/
├── Bewertungsschema/
└── README
```