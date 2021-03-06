# 33167-Capteur sonore basse GROVE

Capteur sonore basse GROVE [33167](https://www.pierron.fr/capteur-sonore-basse-grove.html)

<div style="text-align: justify">Ce module, compatible Grove, est conçu pour détecter le volume du son ambiant. Il dispose d'un microphone intégré, associé à un amplificateur LM2904. Il filtre les hautes fréquences. Un potentiomètre permet d'ajuster manuellement le gain en sortie.
Ce module se raccorde sur une entrée analogique du Base Shield via un câble 4 conducteurs.</div>
<br>

Caractéristiques techniques :
- Alimentation : 3.5 à 10 V
- Plage de mesure : 50 à 2 000 Hz
- Sensibilité : -48 à 66 dB

![L-33167](/img/L-33167.jpg)

# Usage :
Pour l’utilisation de ce module, référez-vous aux indications présentes sur le circuit imprimé GROVE.

# Schémas :

![SCH-33167](/img/SCH-33167.jpg)
![BRD-33167](/img/BRD-33167.jpg)

# RESSOURCES À TÉLÉCHARGER :

Ressource utilisation : [LM2904DR](https://github.com/pierron-asco-celda/33167-Capteur_sonore_basse_GROVE/blob/main/src/Datasheet_LM2904DR.pdf)

# Exemple :
### Arduino / C++
```cpp
/*
    ** Mesure intensité son ambiant module Grove **
       PIN A0 Module shield GROVE
       Moniteur série -> Baud rate 9600.*
*/

int iBru = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  iBru = analogRead(A0);
  Serial.print("Son ambiant : ");
  Serial.println(iBru);
  delay(200);
}
```
## À propos :
<div style="text-align: justify">*Le débit en bauds est un taux de transfert de données en unités de bits par seconde (bps). Si le débit en bauds est de 9600, cela signifie que la possibilité d’envoyer des données est de 9600 bits en une seconde. 1 caractère est identique à 1 octet.</div>
<br>
PIERRON ASCO-CELDA (https://www.pierron.fr).
