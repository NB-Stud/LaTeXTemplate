# Gruppe A25-07<Magic Faucet Fountain>

![Der Magic Faucet Fountain](Bilder/logoKursarbeit.jpg)

# Autoren
1. Kornichenkova   Valeriia 7024769
2. Neumann         Sven     7025068
3. Yüce            Asena    7024749
4. Maschke         Carl     7024640
5. Braams          Nina     7024847

# Beschreibung
Das Projekt Magic Faucen Fountain beschäftigt sich mit der Umsetzung eines Brunnens, der die optische Täuschung eines schwebenden Wasserhahns erzeugt. Dabei scheint es, als würde Wasser kontinuierlich aus einem frei schwebenden Hahn fließen - ganz ohne sichtbare Verbindung zur Wasserquelle

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

Der Wasserstrom wird über eine kleine elektrische Pumpe erzeugt, die über ein Relais angesteuert wird. Das Relais fungiert als elektronischer Schalter und wird von einem digitalen Ausgang des Arduino-Boards gesteuert. Der Arduino ist über Bluetooth mit einer mobilen App verbunden. Über die App kann der Benutzer den Brunnen bequem ein- und ausschalten.

Ein weiterer Bestandteil des Systems ist ein Ultraschallsensor, der den Wasserstand im Vorratsbehälter misst. Der aktuelle Füllstand wird ebenfalls in der App angezeigt, wodurch der Benutzer rechtzeitig erkennen kann, wann Wasser nachgefüllt werden muss.

