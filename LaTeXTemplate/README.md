# A25-07<Magic Faucet Fountain>

![Logo](./Nano33BLESense/Images/Allgemein/LogoDataScienceGruenBlau.jpg "Our Logo")

# Autoren
1. Kornichenkova   Valeriia 7024769
2. Neumann         Sven     7025068
3. Yüce            Asena    7024749
4. Maschke         Carl     7024640
5. Braams          Nina     7024847

# Beschreibung
Das Projekt Magic Faucen Fountain beschäftigt sich mit der Umsetzung eines Brunnens, der die optische Täuschung eines schwebenden Wasserhahns erzeugt. Dabei scheint es, als würde Wasser kontinuierlich aus einem frei schwebenden Hahn fließen - ganz ohne sichtbare Verbindung zur Wasserquelle

# Problemlösung
Dieser Effekt wird durch ein transparentes Acrylrohr realisiert, das sowohl den Wasserfluss leitet als auch die tragende Struktur für den Hahn darstellt. Da das Rohr hinter dem gleichmäßig fließenden Wasser optisch kaum wahrnehmbar ist, entsteht der Eindruck eines schwebenden Hahns.

Der Wasserstrom wird über eine kleine elektrische Pumpe erzeugt, die über ein MOS-FET angesteuert wird. Der MOS-FET fungiert als elektronischer Schalter und wird von einem digitalen Ausgang des Arduino-Boards gesteuert. Der Arduino ist über Bluetooth mit einer mobilen App verbunden. Über die App kann der Benutzer den Brunnen bequem ein- und ausschalten.

Ein weiterer Bestandteil des Systems ist ein Ultraschallsensor, der den Wasserstand im Vorratsbehälter misst. Der aktuelle Füllstand wird ebenfalls in der App angezeigt, wodurch der Benutzer rechtzeitig erkennen kann, wann Wasser nachgefüllt werden muss.

# Verzeichnisstruktur
C:\USERS\CARLM\DOCUMENTS\LATEXTEMPLATE\LATEXTEMPLATE\LATEXTEMPLATE
│   author.xlsx
│   README.md
│
├───Demontageanleitung
│   │   Demontageanleitung.aux
│   │   Demontageanleitung.bbl
│   │   Demontageanleitung.bcf
│   │   Demontageanleitung.blg
│   │   Demontageanleitung.idx
│   │   Demontageanleitung.lof
│   │   Demontageanleitung.log
│   │   Demontageanleitung.lot
│   │   Demontageanleitung.nlo
│   │   Demontageanleitung.out
│   │   Demontageanleitung.pdf
│   │   Demontageanleitung.run.xml
│   │   Demontageanleitung.synctex.gz
│   │   Demontageanleitung.tex
│   │   Demontageanleitung.toc
│   │   Rename.pdf
│   │
│   ├───Chapters
│   │   ├───de
│   │   │       DisassemblyProcedure.tex
│   │   │       Functions.tex
│   │   │       Introduction.tex
│   │   │       Storage.tex
│   │   │       TitlePage.tex
│   │   │       ToolsAndEquipment.tex
│   │   │
│   │   └───en
│   │           AddOns.tex
│   │           Functions.tex
│   │           Hints.tex
│   │           ListOfParts.tex
│   │           MainFunction.tex
│   │           Maintenance.tex
│   │           SafetyGuidelines.tex
│   │           SetUp.tex
│   │           Sketch.tex
│   │           Specifications.tex
│   │           TitlePage.tex
│   │           Troubleshooting.tex
│   │
│   └───General
│           acronyms.tex
│           Commands.tex
│           Hyphenations.tex
│           Logo.png
│           Packages.tex
│           TikzDefs.tex
│
├───Haftungsübernahme
│   │   AssumptionOfLiability.aux
│   │   AssumptionOfLiability.log
│   │   AssumptionOfLiability.out
│   │   AssumptionOfLiability.pdf
│   │   AssumptionOfLiability.synctex.gz
│   │   Haftungsübernahme.tex
│   │
│   ├───Contents
│   │       TextDeutsch.log
│   │       TextDeutsch.tex
│   │       TextEnglish.tex
│   │
│   ├───General
│   │       packages.tex
│   │
│   └───Images
│           Technik.jpg
│
├───Handbuch Magic Faucet Fountain
│   │   Handbuch Magic Faucet Fountain.aux
│   │   Handbuch Magic Faucet Fountain.bbl
│   │   Handbuch Magic Faucet Fountain.bcf
│   │   Handbuch Magic Faucet Fountain.blg
│   │   Handbuch Magic Faucet Fountain.idx
│   │   Handbuch Magic Faucet Fountain.lof
│   │   Handbuch Magic Faucet Fountain.log
│   │   Handbuch Magic Faucet Fountain.lot
│   │   Handbuch Magic Faucet Fountain.nlo
│   │   Handbuch Magic Faucet Fountain.out
│   │   Handbuch Magic Faucet Fountain.pdf
│   │   Handbuch Magic Faucet Fountain.run.xml
│   │   Handbuch Magic Faucet Fountain.synctex(busy)
│   │   Handbuch Magic Faucet Fountain.synctex.gz
│   │   Handbuch Magic Faucet Fountain.tex
│   │   Handbuch Magic Faucet Fountain.toc
│   │   Rename.aux
│   │   Rename.bbl
│   │   Rename.bcf
│   │   Rename.blg
│   │   Rename.idx
│   │   Rename.lof
│   │   Rename.log
│   │   Rename.lot
│   │   Rename.nlo
│   │   Rename.out
│   │   Rename.pdf
│   │   Rename.run.xml
│   │   Rename.synctex.gz
│   │   Rename.toc
│   │
│   ├───Chapters
│   │   ├───de
│   │   │       AddOns.tex
│   │   │       Functions.tex
│   │   │       Hints.tex
│   │   │       ListOfParts.tex
│   │   │       MainFunction.tex
│   │   │       Maintenance.tex
│   │   │       SafetyGuidelines.tex
│   │   │       SetUp.tex
│   │   │       Sketch.tex
│   │   │       Specifications.tex
│   │   │       TitlePage.tex
│   │   │       Troubleshooting.tex
│   │   │
│   │   └───en
│   │           AddOns.tex
│   │           Functions.tex
│   │           Hints.tex
│   │           ListOfParts.tex
│   │           MainFunction.tex
│   │           Maintenance.tex
│   │           SafetyGuidelines.tex
│   │           SetUp.tex
│   │           Sketch.tex
│   │           Specifications.tex
│   │           TitlePage.tex
│   │           Troubleshooting.tex
│   │
│   └───General
│           acronyms.tex
│           blumentopf.jpg
│           Commands.tex
│           Hyphenations.tex
│           Logo.png
│           logo.png.aux
│           netzkabel.jpg
│           Packages.tex
│           schrauben.jpg
│           steine.jpg
│           TikzDefs.tex
│           wasserhahn.jpg
│           wasserhahn1.jpg
│           wasserhahn2.jpg
│
├───MLBib
│   │   Jetson.bib
│   │   Literature.bib
│   │   MyLiterature.bib
│   │
│   └───PDF Literatur
│           arduinoOnline.pdf
│           conradPumpe.pdf
│           DatenblattCOMMOSFET.pdf
│           falconOnline.pdf
│           flukeOnline.pdf
│           handbuchLED.pdf
│           handbuchMPM.pdf
│           handbuchPumpe.pdf
│           handbuchSchaltnetzteil.pdf
│           HC-05 Datasheet.pdf
│           HC-05 Modul online ALLNET REICHELT.pdf
│           HC-05 und HC-06 Bluetooth.pdf
│           indicatorOnline.pdf
│           kippschalterHandbuch.pdf
│           kippschalterOnline.pdf
│           ledOnline.pdf
│           MOSFETanleitung.pdf
│           newPingOnline.pdf
│           raj19Online.pdf
│           reicheltKippschalter.pdf
│           reicheltMOSFET.pdf
│           reicheltSchaltnetzteil.pdf
│           rev2Online.pdf
│           RSComponents.pdf
│
├───Montageanleitung
│   │   Montageanleitung Magic Faucet Fountain.aux
│   │   Montageanleitung Magic Faucet Fountain.bbl
│   │   Montageanleitung Magic Faucet Fountain.bcf
│   │   Montageanleitung Magic Faucet Fountain.blg
│   │   Montageanleitung Magic Faucet Fountain.idx
│   │   Montageanleitung Magic Faucet Fountain.lof
│   │   Montageanleitung Magic Faucet Fountain.log
│   │   Montageanleitung Magic Faucet Fountain.lot
│   │   Montageanleitung Magic Faucet Fountain.nlo
│   │   Montageanleitung Magic Faucet Fountain.out
│   │   Montageanleitung Magic Faucet Fountain.pdf
│   │   Montageanleitung Magic Faucet Fountain.run.xml
│   │   Montageanleitung Magic Faucet Fountain.synctex.gz
│   │   Montageanleitung Magic Faucet Fountain.tex
│   │   Montageanleitung Magic Faucet Fountain.toc
│   │   Rename.aux
│   │   Rename.bbl
│   │   Rename.bcf
│   │   Rename.blg
│   │   Rename.idx
│   │   Rename.lof
│   │   Rename.log
│   │   Rename.lot
│   │   Rename.nlo
│   │   Rename.out
│   │   Rename.run.xml
│   │   Rename.tex
│   │   Rename.toc
│   │
│   ├───Chapters
│   │   ├───de
│   │   │       Assembly.tex
│   │   │       BillOfMaterials.tex
│   │   │       FinalSteps.tex
│   │   │       FunctionalTest.tex
│   │   │       Introduction.tex
│   │   │       TitlePage.tex
│   │   │
│   │   └───en
│   │           AddOns.tex
│   │           Functions.tex
│   │           Hints.tex
│   │           ListOfParts.tex
│   │           MainFunction.tex
│   │           Maintenance.tex
│   │           SafetyGuidelines.tex
│   │           SetUp.tex
│   │           Sketch.tex
│   │           Specifications.tex
│   │           TitlePage.tex
│   │           Troubleshooting.tex
│   │
│   └───General
│           acronyms.tex
│           Commands.tex
│           Hyphenations.tex
│           Logo.png
│           Packages.tex
│           TikzDefs.tex
│
├───Nano33BLESense
│   ├───Code
│   │   ├───Arduino
│   │   │   ├───Applikation
│   │   │   │   └───ablaufApplikation
│   │   │   │           ablaufApplikation.ino
│   │   │   │
│   │   │   ├───Battery
│   │   │   │       TestBattery.ino
│   │   │   │
│   │   │   ├───Blink
│   │   │   │   │   Arduino.dox
│   │   │   │   │   Arduino.Doxyfile
│   │   │   │   │   Blink.ino
│   │   │   │   │   LogoDoxyGen.jpg
│   │   │   │   │   mainpage.dox
│   │   │   │   │   Readme.dox
│   │   │   │   │
│   │   │   │   └───html
│   │   │   │       │   bc_s.png
│   │   │   │       │   bc_sd.png
│   │   │   │       │   clipboard.js
│   │   │   │       │   closed.png
│   │   │   │       │   cookie.js
│   │   │   │       │   doc.svg
│   │   │   │       │   docd.svg
│   │   │   │       │   doxygen.css
│   │   │   │       │   doxygen.svg
│   │   │   │       │   doxygen_crawl.html
│   │   │   │       │   dynsections.js
│   │   │   │       │   files.html
│   │   │   │       │   folderclosed.svg
│   │   │   │       │   folderclosedd.svg
│   │   │   │       │   folderopen.svg
│   │   │   │       │   folderopend.svg
│   │   │   │       │   globals.html
│   │   │   │       │   globals_func.html
│   │   │   │       │   graph_legend.html
│   │   │   │       │   graph_legend.md5
│   │   │   │       │   graph_legend.png
│   │   │   │       │   index.html
│   │   │   │       │   jquery.js
│   │   │   │       │   LogoDoxyGen.jpg
│   │   │   │       │   mainpage_8dox.html
│   │   │   │       │   menu.js
│   │   │   │       │   menudata.js
│   │   │   │       │   minus.svg
│   │   │   │       │   minusd.svg
│   │   │   │       │   navtree.css
│   │   │   │       │   nav_f.png
│   │   │   │       │   nav_fd.png
│   │   │   │       │   nav_g.png
│   │   │   │       │   nav_h.png
│   │   │   │       │   nav_hd.png
│   │   │   │       │   open.png
│   │   │   │       │   pages.html
│   │   │   │       │   plus.svg
│   │   │   │       │   plusd.svg
│   │   │   │       │   resize.js
│   │   │   │       │   splitbar.png
│   │   │   │       │   splitbard.png
│   │   │   │       │   sync_off.png
│   │   │   │       │   sync_on.png
│   │   │   │       │   tabs.css
│   │   │   │       │   tab_a.png
│   │   │   │       │   tab_ad.png
│   │   │   │       │   tab_b.png
│   │   │   │       │   tab_bd.png
│   │   │   │       │   tab_h.png
│   │   │   │       │   tab_hd.png
│   │   │   │       │   tab_s.png
│   │   │   │       │   tab_sd.png
│   │   │   │       │   _arduino.html
│   │   │   │       │   _arduino_8dox.html
│   │   │   │       │   _blink_8ino.html
│   │   │   │       │
│   │   │   │       └───search
│   │   │   │               all_0.js
│   │   │   │               all_1.js
│   │   │   │               all_2.js
│   │   │   │               all_3.js
│   │   │   │               all_4.js
│   │   │   │               all_5.js
│   │   │   │               all_6.js
│   │   │   │               all_7.js
│   │   │   │               all_8.js
│   │   │   │               close.svg
│   │   │   │               files_0.js
│   │   │   │               files_1.js
│   │   │   │               files_2.js
│   │   │   │               functions_0.js
│   │   │   │               functions_1.js
│   │   │   │               mag.svg
│   │   │   │               mag_d.svg
│   │   │   │               mag_sel.svg
│   │   │   │               mag_seld.svg
│   │   │   │               pages_0.js
│   │   │   │               pages_1.js
│   │   │   │               pages_2.js
│   │   │   │               search.css
│   │   │   │               search.js
│   │   │   │               searchdata.js
│   │   │   │
│   │   │   ├───Bluetooth Modul
│   │   │   │   ├───bluetoothAnwendung
│   │   │   │   │       bluetoothAnwendung.ino
│   │   │   │   │
│   │   │   │   └───bluetoothBeispiel
│   │   │   │           bluetoothBeispiel.ino
│   │   │   │
│   │   │   ├───CAM
│   │   │   │   └───ov7675
│   │   │   │           CameraVisualizerHochkant320x240x2.ino
│   │   │   │           ConvertRawToRGB888AndSaveAspng.py
│   │   │   │           Nano33BLEProgramToReadov7670Data.ino
│   │   │   │           ReadCameraDataFromNano33BLEViaSerial.py
│   │   │   │           TestCameraRawBites320x240x2.ino
│   │   │   │           TestENC.ino
│   │   │   │           TestENCheader.ino
│   │   │   │           TestENCVoidLoop.ino
│   │   │   │           TestENCVoidSetup.ino
│   │   │   │
│   │   │   ├───EthernetENC28J60
│   │   │   │       CaptureSingleHexImage.ino
│   │   │   │       LinkStatus.ino
│   │   │   │       TestENC.ino
│   │   │   │
│   │   │   ├───Externe LED
│   │   │   │   ├───ansteuerungLED
│   │   │   │   │       ansteuerungLED.ino
│   │   │   │   │
│   │   │   │   └───blinkenLED
│   │   │   │           blinkenLED.ino
│   │   │   │
│   │   │   ├───HeartRate
│   │   │   │   ├───HeartRateApp
│   │   │   │   │       HeartRateApp.ino
│   │   │   │   │
│   │   │   │   └───TestHeartRateSensor
│   │   │   │           TestHeartRateSensor.ino
│   │   │   │
│   │   │   ├───MOSFET
│   │   │   │       simpleMOSFET.ino
│   │   │   │       testMOSFET.ino
│   │   │   │
│   │   │   ├───OLED
│   │   │   │   ├───DEBO - OLED2 0.96
│   │   │   │   │       TestDeboOLED.ino
│   │   │   │   │
│   │   │   │   └───Grove - OLED Display SSD1308
│   │   │   │           TestOLEDSSD1308.ino
│   │   │   │           TestSSD1306.ino
│   │   │   │
│   │   │   ├───Proximity
│   │   │   │       Proximity.ino
│   │   │   │
│   │   │   ├───Pumpe
│   │   │   │   ├───ansteuerungPumpe
│   │   │   │   │       ansteuerungPumpe.ino
│   │   │   │   │
│   │   │   │   └───fehlererkennungPumpe
│   │   │   │           fehlererkennungPumpe.ino
│   │   │   │
│   │   │   ├───Schaltnetzteil
│   │   │   │   └───anwendungSchaltnetzteil
│   │   │   │           anwendungSchaltnetzteil.ino
│   │   │   │
│   │   │   ├───SDCard
│   │   │   │       TestSDCard.ino
│   │   │   │
│   │   │   └───UltraSonicHCSR04
│   │   │       │   TestHCSR04.ino
│   │   │       │
│   │   │       ├───entfernungMessung
│   │   │       │       entfernungMessung.ino
│   │   │       │
│   │   │       ├───html
│   │   │       │   │   bc_s.png
│   │   │       │   │   bc_sd.png
│   │   │       │   │   clipboard.js
│   │   │       │   │   closed.png
│   │   │       │   │   cookie.js
│   │   │       │   │   doc.svg
│   │   │       │   │   docd.svg
│   │   │       │   │   doxygen.css
│   │   │       │   │   doxygen.svg
│   │   │       │   │   doxygen_crawl.html
│   │   │       │   │   dynsections.js
│   │   │       │   │   folderclosed.svg
│   │   │       │   │   folderclosedd.svg
│   │   │       │   │   folderopen.svg
│   │   │       │   │   folderopend.svg
│   │   │       │   │   index.html
│   │   │       │   │   jquery.js
│   │   │       │   │   minus.svg
│   │   │       │   │   minusd.svg
│   │   │       │   │   navtree.css
│   │   │       │   │   navtree.js
│   │   │       │   │   navtreedata.js
│   │   │       │   │   navtreeindex0.js
│   │   │       │   │   nav_f.png
│   │   │       │   │   nav_fd.png
│   │   │       │   │   nav_g.png
│   │   │       │   │   nav_h.png
│   │   │       │   │   nav_hd.png
│   │   │       │   │   open.png
│   │   │       │   │   plus.svg
│   │   │       │   │   plusd.svg
│   │   │       │   │   resize.js
│   │   │       │   │   splitbar.png
│   │   │       │   │   splitbard.png
│   │   │       │   │   sync_off.png
│   │   │       │   │   sync_on.png
│   │   │       │   │   tabs.css
│   │   │       │   │   tab_a.png
│   │   │       │   │   tab_ad.png
│   │   │       │   │   tab_b.png
│   │   │       │   │   tab_bd.png
│   │   │       │   │   tab_h.png
│   │   │       │   │   tab_hd.png
│   │   │       │   │   tab_s.png
│   │   │       │   │   tab_sd.png
│   │   │       │   │
│   │   │       │   └───search
│   │   │       │           close.svg
│   │   │       │           mag.svg
│   │   │       │           mag_d.svg
│   │   │       │           mag_sel.svg
│   │   │       │           mag_seld.svg
│   │   │       │           search.css
│   │   │       │           search.js
│   │   │       │           searchdata.js
│   │   │       │
│   │   │       ├───latex
│   │   │       │       doxygen.sty
│   │   │       │       etoc_doxygen.sty
│   │   │       │       longtable_doxygen.sty
│   │   │       │       make.bat
│   │   │       │       Makefile
│   │   │       │       refman.tex
│   │   │       │       tabu_doxygen.sty
│   │   │       │
│   │   │       ├───laufzeitMessung
│   │   │       │       laufzeitMessung.ino
│   │   │       │
│   │   │       └───schwellenwertMeldung
│   │   │               schwellenwertMeldung.ino
│   │   │
│   │   ├───EdgeImpulse
│   │   │       OpenMVFaceDetection.py
│   │   │
│   │   ├───JetsonNano
│   │   │   └───Cameracalib
│   │   │           calibrate.py
│   │   │           FindChessboardCorners.py
│   │   │
│   │   └───Nano33BLESense
│   │       │   Arduino.dox
│   │       │   Arduino.Doxyfile
│   │       │   LogoDoxyGen.jpg
│   │       │   mainpage.dox
│   │       │   Readme.dox
│   │       │
│   │       ├───APDS9960
│   │       │   ├───APDS9960Calibration
│   │       │   │       APDS9960Calibration.ino
│   │       │   │
│   │       │   ├───ApplicationAPDS9960
│   │       │   │       ApplicationAPDS9960.ino
│   │       │   │
│   │       │   ├───TestAPDS9960
│   │       │   │       TestAPDS9960.ino
│   │       │   │
│   │       │   ├───TestAPDS9960Color
│   │       │   │       TestAPDS9960Color.ino
│   │       │   │
│   │       │   ├───TestAPDS9960Gesture
│   │       │   │       TestAPDS9960Gesture.ino
│   │       │   │
│   │       │   └───TestAPDS9960Proximity
│   │       │           TestAPDS9960Proximity.ino
│   │       │
│   │       ├───Bluetooth
│   │       │       bluetooth.ino
│   │       │
│   │       ├───Doxygen
│   │       │   └───Test
│   │       │       │   annotated.html
│   │       │       │   bc_s.png
│   │       │       │   bc_sd.png
│   │       │       │   classes.html
│   │       │       │   class_l_p_s22_h_b.html
│   │       │       │   clipboard.js
│   │       │       │   closed.png
│   │       │       │   cookie.js
│   │       │       │   dir_000001_000000.html
│   │       │       │   dir_000002_000000.html
│   │       │       │   dir_37618a71d99bdfed5979e976980d5eec.html
│   │       │       │   dir_37618a71d99bdfed5979e976980d5eec_dep.map
│   │       │       │   dir_37618a71d99bdfed5979e976980d5eec_dep.md5
│   │       │       │   dir_37618a71d99bdfed5979e976980d5eec_dep.png
│   │       │       │   dir_9a504e095cfa9f9f676d6cdce2ad76b8.html
│   │       │       │   dir_e2d7ff1db1f36c60130e5ce19fd69e24.html
│   │       │       │   doc.svg
│   │       │       │   docd.svg
│   │       │       │   doxygen.css
│   │       │       │   doxygen.svg
│   │       │       │   doxygen_crawl.html
│   │       │       │   dynsections.js
│   │       │       │   files.html
│   │       │       │   folderclosed.svg
│   │       │       │   folderclosedd.svg
│   │       │       │   folderopen.svg
│   │       │       │   folderopend.svg
│   │       │       │   globals.html
│   │       │       │   globals_defs.html
│   │       │       │   globals_func.html
│   │       │       │   globals_vars.html
│   │       │       │   graph_legend.html
│   │       │       │   graph_legend.md5
│   │       │       │   graph_legend.png
│   │       │       │   index.html
│   │       │       │   jquery.js
│   │       │       │   LogoDoxyGen.jpg
│   │       │       │   mainpage_8dox.html
│   │       │       │   menu.js
│   │       │       │   menudata.js
│   │       │       │   minus.svg
│   │       │       │   minusd.svg
│   │       │       │   navtree.css
│   │       │       │   nav_f.png
│   │       │       │   nav_fd.png
│   │       │       │   nav_g.png
│   │       │       │   nav_h.png
│   │       │       │   nav_hd.png
│   │       │       │   open.png
│   │       │       │   pages.html
│   │       │       │   plus.svg
│   │       │       │   plusd.svg
│   │       │       │   resize.js
│   │       │       │   splitbar.png
│   │       │       │   splitbard.png
│   │       │       │   sync_off.png
│   │       │       │   sync_on.png
│   │       │       │   tabs.css
│   │       │       │   tab_a.png
│   │       │       │   tab_ad.png
│   │       │       │   tab_b.png
│   │       │       │   tab_bd.png
│   │       │       │   tab_h.png
│   │       │       │   tab_hd.png
│   │       │       │   tab_s.png
│   │       │       │   tab_sd.png
│   │       │       │   _arduino.html
│   │       │       │   _arduino_8dox.html
│   │       │       │   _builtin_l_e_d_8cpp.html
│   │       │       │   _builtin_l_e_d_8cpp__incl.map
│   │       │       │   _builtin_l_e_d_8cpp__incl.md5
│   │       │       │   _builtin_l_e_d_8cpp__incl.png
│   │       │       │   _builtin_l_e_d_8h.html
│   │       │       │   _builtin_l_e_d_8h_source.html
│   │       │       │   _builtin_l_e_d_8h__dep__incl.map
│   │       │       │   _builtin_l_e_d_8h__dep__incl.md5
│   │       │       │   _builtin_l_e_d_8h__dep__incl.png
│   │       │       │   _l_e_d_8cpp.html
│   │       │       │   _l_e_d_8cpp__incl.map
│   │       │       │   _l_e_d_8cpp__incl.md5
│   │       │       │   _l_e_d_8cpp__incl.png
│   │       │       │   _l_e_d_8h.html
│   │       │       │   _l_e_d_8h_source.html
│   │       │       │   _l_e_d_8h__dep__incl.map
│   │       │       │   _l_e_d_8h__dep__incl.md5
│   │       │       │   _l_e_d_8h__dep__incl.png
│   │       │       │   _l_p_s22_h_b_calibration_8ino.html
│   │       │       │   _l_p_s22_h_b_calibration_8ino__incl.map
│   │       │       │   _l_p_s22_h_b_calibration_8ino__incl.md5
│   │       │       │   _l_p_s22_h_b_calibration_8ino__incl.png
│   │       │       │   _l_p_s22_h_b_simple_example_8ino.html
│   │       │       │   _l_p_s22_h_b_simple_example_8ino__incl.map
│   │       │       │   _l_p_s22_h_b_simple_example_8ino__incl.md5
│   │       │       │   _l_p_s22_h_b_simple_example_8ino__incl.png
│   │       │       │   _l_p_s22_h_b_sleep_8ino.html
│   │       │       │   _l_p_s22_h_b_sleep_8ino__incl.map
│   │       │       │   _l_p_s22_h_b_sleep_8ino__incl.md5
│   │       │       │   _l_p_s22_h_b_sleep_8ino__incl.png
│   │       │       │   _power_l_e_d_8cpp.html
│   │       │       │   _power_l_e_d_8cpp__incl.map
│   │       │       │   _power_l_e_d_8cpp__incl.md5
│   │       │       │   _power_l_e_d_8cpp__incl.png
│   │       │       │   _power_l_e_d_8h.html
│   │       │       │   _power_l_e_d_8h_source.html
│   │       │       │   _power_l_e_d_8h__dep__incl.map
│   │       │       │   _power_l_e_d_8h__dep__incl.md5
│   │       │       │   _power_l_e_d_8h__dep__incl.png
│   │       │       │   _signs_of_life_8cpp.html
│   │       │       │   _signs_of_life_8cpp__incl.map
│   │       │       │   _signs_of_life_8cpp__incl.md5
│   │       │       │   _signs_of_life_8cpp__incl.png
│   │       │       │   _signs_of_life_8h.html
│   │       │       │   _signs_of_life_8h_source.html
│   │       │       │   _signs_of_life_8h__dep__incl.map
│   │       │       │   _signs_of_life_8h__dep__incl.md5
│   │       │       │   _signs_of_life_8h__dep__incl.png
│   │       │       │   _test_a_p_d_s9960_8ino.html
│   │       │       │   _test_a_p_d_s9960_8ino__incl.map
│   │       │       │   _test_a_p_d_s9960_8ino__incl.md5
│   │       │       │   _test_a_p_d_s9960_8ino__incl.png
│   │       │       │   _test_a_p_d_s9960_color_8ino.html
│   │       │       │   _test_a_p_d_s9960_color_8ino__incl.map
│   │       │       │   _test_a_p_d_s9960_color_8ino__incl.md5
│   │       │       │   _test_a_p_d_s9960_color_8ino__incl.png
│   │       │       │   _test_a_p_d_s9960_gesture_8ino.html
│   │       │       │   _test_a_p_d_s9960_gesture_8ino__incl.map
│   │       │       │   _test_a_p_d_s9960_gesture_8ino__incl.md5
│   │       │       │   _test_a_p_d_s9960_gesture_8ino__incl.png
│   │       │       │   _test_a_p_d_s9960_proximity_8ino.html
│   │       │       │   _test_a_p_d_s9960_proximity_8ino__incl.map
│   │       │       │   _test_a_p_d_s9960_proximity_8ino__incl.md5
│   │       │       │   _test_a_p_d_s9960_proximity_8ino__incl.png
│   │       │       │   _test_l_e_d_8ino.html
│   │       │       │   _test_l_e_d_8ino__incl.map
│   │       │       │   _test_l_e_d_8ino__incl.md5
│   │       │       │   _test_l_e_d_8ino__incl.png
│   │       │       │   _test_l_e_d_brightness_8ino.html
│   │       │       │   _test_l_e_d_builtin_8ino.html
│   │       │       │   _test_l_e_d_builtin_application_8ino.html
│   │       │       │   _test_l_e_d_builtin_application_8ino__incl.map
│   │       │       │   _test_l_e_d_builtin_application_8ino__incl.md5
│   │       │       │   _test_l_e_d_builtin_application_8ino__incl.png
│   │       │       │   _test_l_e_d_power_8ino.html
│   │       │       │   _test_l_e_d_power_battery_8ino.html
│   │       │       │   _test_l_e_d_power_battery_8ino__incl.map
│   │       │       │   _test_l_e_d_power_battery_8ino__incl.md5
│   │       │       │   _test_l_e_d_power_battery_8ino__incl.png
│   │       │       │   _test_l_e_d_power_brightness_8ino.html
│   │       │       │   _test_l_e_d_r_g_b_8ino.html
│   │       │       │   _test_l_e_d_r_g_b_application_8ino.html
│   │       │       │   _test_l_e_d_r_g_b_application_8ino__incl.map
│   │       │       │   _test_l_e_d_r_g_b_application_8ino__incl.md5
│   │       │       │   _test_l_e_d_r_g_b_application_8ino__incl.png
│   │       │       │   _test_l_e_d_r_g_b_brightness_8ino.html
│   │       │       │   _test_l_e_d_r_g_b_colors_8ino.html
│   │       │       │   _test_l_p_s22_h_b_8ino.html
│   │       │       │   _test_l_p_s22_h_b_8ino__incl.map
│   │       │       │   _test_l_p_s22_h_b_8ino__incl.md5
│   │       │       │   _test_l_p_s22_h_b_8ino__incl.png
│   │       │       │   _test_microphone_8ino.html
│   │       │       │   _test_microphone_8ino__incl.map
│   │       │       │   _test_microphone_8ino__incl.md5
│   │       │       │   _test_microphone_8ino__incl.png
│   │       │       │   _test_push_button_8ino.html
│   │       │       │   _test_push_button_8ino__incl.map
│   │       │       │   _test_push_button_8ino__incl.md5
│   │       │       │   _test_push_button_8ino__incl.png
│   │       │       │   _test_push_button_interrupt_8ino.html
│   │       │       │   _test_push_button_interrupt_8ino__incl.map
│   │       │       │   _test_push_button_interrupt_8ino__incl.md5
│   │       │       │   _test_push_button_interrupt_8ino__incl.png
│   │       │       │
│   │       │       └───search
│   │       │               all_0.js
│   │       │               all_1.js
│   │       │               all_10.js
│   │       │               all_11.js
│   │       │               all_12.js
│   │       │               all_2.js
│   │       │               all_3.js
│   │       │               all_4.js
│   │       │               all_5.js
│   │       │               all_6.js
│   │       │               all_7.js
│   │       │               all_8.js
│   │       │               all_9.js
│   │       │               all_a.js
│   │       │               all_b.js
│   │       │               all_c.js
│   │       │               all_d.js
│   │       │               all_e.js
│   │       │               all_f.js
│   │       │               classes_0.js
│   │       │               close.svg
│   │       │               defines_0.js
│   │       │               defines_1.js
│   │       │               defines_2.js
│   │       │               defines_3.js
│   │       │               defines_4.js
│   │       │               defines_5.js
│   │       │               defines_6.js
│   │       │               files_0.js
│   │       │               files_1.js
│   │       │               files_2.js
│   │       │               files_3.js
│   │       │               files_4.js
│   │       │               files_5.js
│   │       │               files_6.js
│   │       │               functions_0.js
│   │       │               functions_1.js
│   │       │               functions_2.js
│   │       │               functions_3.js
│   │       │               functions_4.js
│   │       │               functions_5.js
│   │       │               functions_6.js
│   │       │               functions_7.js
│   │       │               mag.svg
│   │       │               mag_d.svg
│   │       │               mag_sel.svg
│   │       │               mag_seld.svg
│   │       │               pages_0.js
│   │       │               pages_1.js
│   │       │               pages_2.js
│   │       │               pages_3.js
│   │       │               pages_4.js
│   │       │               pages_5.js
│   │       │               search.css
│   │       │               search.js
│   │       │               searchdata.js
│   │       │               variables_0.js
│   │       │               variables_1.js
│   │       │               variables_2.js
│   │       │               variables_3.js
│   │       │               variables_4.js
│   │       │               variables_5.js
│   │       │               variables_6.js
│   │       │               variables_7.js
│   │       │               variables_8.js
│   │       │               variables_9.js
│   │       │               variables_a.js
│   │       │               variables_b.js
│   │       │               variables_c.js
│   │       │
│   │       ├───hello_world
│   │       │   │   BUILD
│   │       │   │   constants.cc
│   │       │   │   constants.h
│   │       │   │   create_sine_model.ipynb
│   │       │   │   hello_world.tflite
│   │       │   │   hello_world_binary_test.sh
│   │       │   │   hello_world_test.cc
│   │       │   │   main.cc
│   │       │   │   main_functions.cc
│   │       │   │   main_functions.h
│   │       │   │   Makefile.inc
│   │       │   │   output_handler.cc
│   │       │   │   output_handler.h
│   │       │   │   output_handler_test.cc
│   │       │   │   README.md
│   │       │   │
│   │       │   ├───images
│   │       │   │       animation_on_arduino_mkrzero.gif
│   │       │   │       animation_on_sparkfun_edge.gif
│   │       │   │       animation_on_STM32F746.gif
│   │       │   │       model_architecture.png
│   │       │   │
│   │       │   └───train
│   │       │           compare_models.sh
│   │       │           README.md
│   │       │           train_hello_world_model.ipynb
│   │       │           train_hello_world_model.py
│   │       │
│   │       ├───IMU
│   │       │   ├───Arduino
│   │       │   │       IMU.ino
│   │       │   │       model.h
│   │       │   │
│   │       │   ├───Pycharm
│   │       │   │       Erkennung.py
│   │       │   │       WISDM.txt
│   │       │   │
│   │       │   ├───Test
│   │       │   │       WireEx.ino
│   │       │   │
│   │       │   └───Word
│   │       │           Erkennungscode(C++ in Arduino IDE).docx
│   │       │           Model trainieren mit Python auf Pycharm.docx
│   │       │
│   │       ├───LEDs
│   │       │   │   LEDBuiltin.cpp
│   │       │   │   LEDBuiltin.h
│   │       │   │   LEDGeneral.cpp
│   │       │   │   LEDGeneral.h
│   │       │   │   LEDPower.cpp
│   │       │   │   LEDPower.h
│   │       │   │   LEDRGB.cpp
│   │       │   │   LEDRGB.h
│   │       │   │   LEDSignsOfLife.cpp
│   │       │   │   LEDSignsOfLife.h
│   │       │   │
│   │       │   └───examples
│   │       │       ├───TestLED
│   │       │       │       TestLED.ino
│   │       │       │
│   │       │       ├───TestLEDBrightness
│   │       │       │       TestLEDBrightness.ino
│   │       │       │       TestLEDRGBBrightness.ino
│   │       │       │
│   │       │       ├───TestLEDBuiltin
│   │       │       │       TestLEDBuiltin.ino
│   │       │       │
│   │       │       ├───TestLEDBuiltinApplication
│   │       │       │       TestLEDBuiltinApplication.ino
│   │       │       │
│   │       │       ├───TestLEDPower
│   │       │       │       TestLEDPower.ino
│   │       │       │
│   │       │       ├───TestLEDPowerBattery
│   │       │       │       TestLEDPowerBattery.ino
│   │       │       │
│   │       │       ├───TestLEDPowerBrightness
│   │       │       │       TestLEDPowerBrightness.ino
│   │       │       │
│   │       │       ├───TestLEDRGB
│   │       │       │       TestLEDRGB.ino
│   │       │       │
│   │       │       ├───TestLEDRGBApplication
│   │       │       │       TestLEDRGBApplication.ino
│   │       │       │
│   │       │       └───TestLEDRGBColors
│   │       │               TestLEDRGBColors.ino
│   │       │
│   │       ├───Libs
│   │       │       links.txt
│   │       │
│   │       ├───MagicWand
│   │       │       MagicWandOnOff.ino
│   │       │       MagicWandPWM.ino
│   │       │
│   │       ├───magic_wand_code
│   │       │   │   accelerometer_handler.h
│   │       │   │   arduino_accelerometer_handler.cpp
│   │       │   │   arduino_main.cpp
│   │       │   │   arduino_output_handler.cpp
│   │       │   │   constants.h
│   │       │   │   gesture_predictor.cpp
│   │       │   │   gesture_predictor.h
│   │       │   │   link.txt
│   │       │   │   magic_wand.ino
│   │       │   │   magic_wand_model_data.cpp
│   │       │   │   magic_wand_model_data.h
│   │       │   │   main_functions.h
│   │       │   │   output_handler.h
│   │       │   │   tensorflow_lite_2020_02_25.zip
│   │       │   │   tflite-micro-arduino-examples-main.zip
│   │       │   │
│   │       │   └───magic_wand
│   │       │           magic_wand.ino
│   │       │
│   │       ├───MikrophoneMP34DT05
│   │       │   └───MikrophoneMP34DT05
│   │       │           MikrophoneMP34DT05.ino
│   │       │
│   │       ├───Nano33BLESenseLED
│   │       │   │   LEDBuiltin.cpp
│   │       │   │   LEDbuiltin.h
│   │       │   │   LEDGeneral.cpp
│   │       │   │   LEDGeneral.h
│   │       │   │   LEDPower.cpp
│   │       │   │   LEDPower.h
│   │       │   │   LEDRGB.cpp
│   │       │   │   LEDRGB.h
│   │       │   │   LEDSignsOfLife.cpp
│   │       │   │   LEDSignsOfLife.h
│   │       │   │
│   │       │   └───examples
│   │       │       └───TestLEDBuiltin
│   │       │               TestLEDBuiltin.ino
│   │       │
│   │       ├───person_detection
│   │       │   │   BUILD
│   │       │   │   detection_responder.cc
│   │       │   │   detection_responder.h
│   │       │   │   detection_responder_test.cc
│   │       │   │   image_provider.cc
│   │       │   │   image_provider.h
│   │       │   │   image_provider_test.cc
│   │       │   │   main.cc
│   │       │   │   main_functions.cc
│   │       │   │   main_functions.h
│   │       │   │   Makefile.inc
│   │       │   │   model_settings.cc
│   │       │   │   model_settings.h
│   │       │   │   no_person_image_data.h
│   │       │   │   person_detection_binary_test.sh
│   │       │   │   person_detection_test.cc
│   │       │   │   person_detect_model_data.h
│   │       │   │   person_image_data.h
│   │       │   │   README.md
│   │       │   │   training_a_model.md
│   │       │   │
│   │       │   ├───arc_emsdp
│   │       │   │       emsdp.lcf
│   │       │   │       Makefile.inc
│   │       │   │
│   │       │   ├───arduino
│   │       │   │       detection_responder.cc
│   │       │   │       HM01B0_platform.h
│   │       │   │       image_provider.cc
│   │       │   │       main.cc
│   │       │   │       Makefile.inc
│   │       │   │
│   │       │   └───utils
│   │       │           BUILD
│   │       │           raw_to_bitmap.py
│   │       │           raw_to_bitmap_test.py
│   │       │
│   │       ├───person_detection_int8
│   │       │       no_person_image_data.cc
│   │       │       no_person_image_data.h
│   │       │       person_detect_model_data.cc
│   │       │       person_detect_model_data.h
│   │       │       person_image_data.cc
│   │       │       person_image_data.h
│   │       │
│   │       ├───PushButton
│   │       │   ├───TestPushButton
│   │       │   │       TestPushButton.ino
│   │       │   │
│   │       │   └───TestPushButtonInterrupt
│   │       │           Test.ino
│   │       │           TestPushButtonInterrupt.ino
│   │       │
│   │       ├───SensorLPS22HB
│   │       │       LPS22HBCalibration.ino
│   │       │       LPS22HBSimpleExample.ino
│   │       │       LPS22HBSleep.ino
│   │       │
│   │       ├───Serial
│   │       │       TestSerial.ino
│   │       │       TestSerialPC.py
│   │       │
│   │       ├───Test
│   │       │       APDS9960Calibration.ino
│   │       │       ApplicationAPDS9960.ino
│   │       │       TestAPDS9960.ino
│   │       │       TestAPDS9960Color.ino
│   │       │       TestAPDS9960Gesture.ino
│   │       │       TestAPDS9960Proximity.ino
│   │       │       TestLED.ino
│   │       │       TestLEDBrightness.ino
│   │       │       TestLEDBuiltin.ino
│   │       │       TestLEDBuiltinApplication.ino
│   │       │       TestLEDPower.ino
│   │       │       TestLEDPowerBattery.ino
│   │       │       TestLEDPowerBrightness.ino
│   │       │       TestLEDRGB.ino
│   │       │       TestLEDRGBApplication.ino
│   │       │       TestLEDRGBBrightness.ino
│   │       │       TestLEDRGBColors.ino
│   │       │       TestLPS22HB.ino
│   │       │       TestMicrophone.ino
│   │       │       TestPushButton.ino
│   │       │       TestPushButtonInterrupt.ino
│   │       │
│   │       ├───TestPushButton
│   │       │       TestPushButton.ino
│   │       │
│   │       └───TestPushButtonInterrupt
│   │               TestPushButtonInterrupt.ino
│   │
│   ├───Contents
│   │   ├───General
│   │   │   │   AccelerationDetectionAlgorithms.tex
│   │   │   │   AdapterBoard.tex
│   │   │   │   ArduinoCLI.tex
│   │   │   │   ArduinoIDE2 - Kopie.tex
│   │   │   │   ArduinoIDE2.tex
│   │   │   │   ArduinoIDESetup.tex
│   │   │   │   ArduinoIDESetupNano33.tex
│   │   │   │   ArduinoIDEWeb.tex
│   │   │   │   ArduinoSerial.tex
│   │   │   │   Barcode.tex
│   │   │   │   Battery.tex
│   │   │   │   BLENRFConnect.tex
│   │   │   │   BlueTooth.tex
│   │   │   │   ButtonGrove.tex
│   │   │   │   CAMov7675.tex
│   │   │   │   doxygen.tex
│   │   │   │   EinleitungProjekt.tex
│   │   │   │   ElektroMagnet.tex
│   │   │   │   Encoder.tex
│   │   │   │   EthernetENC28J60.tex
│   │   │   │   GearDrive.tex
│   │   │   │   Grove.tex
│   │   │   │   Hardware-Beschreibung.log
│   │   │   │   Hardware-Beschreibung.tex
│   │   │   │   I2C.tex
│   │   │   │   IMUCalibration.tex
│   │   │   │   IMUErrors.tex
│   │   │   │   IMULibFunctions.tex
│   │   │   │   IMUSoftware.tex
│   │   │   │   JSTConnector.tex
│   │   │   │   L298N.tex
│   │   │   │   LEDBuiltIn.tex
│   │   │   │   LEDExternal.tex
│   │   │   │   LEDPower.tex
│   │   │   │   LEDRGB.tex
│   │   │   │   LEDRGBExternal.tex
│   │   │   │   LensCalibrationTool.tex
│   │   │   │   Materialliste Magic Faucet Fountain.tex
│   │   │   │   mqtt.tex
│   │   │   │   OLED.tex
│   │   │   │   OPenCVCalibration.tex
│   │   │   │   Powerbank.tex
│   │   │   │   PowerTinyMLShield.tex
│   │   │   │   PushButton.tex
│   │   │   │   RenameActorXY.tex
│   │   │   │   RenameAppXY.tex
│   │   │   │   RenameIntroductionXY.tex
│   │   │   │   RenameSensorXY.tex
│   │   │   │   RenameToDoXY.tex
│   │   │   │   ResetButton.tex
│   │   │   │   Schlussfolgerung.tex
│   │   │   │   SDCard.tex
│   │   │   │   SensorAPDS9960.tex
│   │   │   │   SensorAPDS9960AmbientLightSensor.tex
│   │   │   │   SensorAPDS9960Color.tex
│   │   │   │   SensorAPDS9960Gesture.tex
│   │   │   │   SensorAPDS9960Proximity.tex
│   │   │   │   SensorBME280.tex
│   │   │   │   SensorDHT22.tex
│   │   │   │   SensorHCSR04.log
│   │   │   │   SensorHCSR04.tex
│   │   │   │   SensorLPS22HB.tex
│   │   │   │   ServoDrive.tex
│   │   │   │   SpannungswandlerMPM3610.tex
│   │   │   │   SPI.tex
│   │   │   │
│   │   │   ├───DokuProjektMagicFaucetFountain
│   │   │   │       BeschreibungSystem.tex
│   │   │   │
│   │   │   ├───en
│   │   │   │       Acronymlist.tex
│   │   │   │       AppADPS9960.tex
│   │   │   │       Appendix.tex
│   │   │   │       AppendixTikz.tex
│   │   │   │       AppHeartRateSensor.tex
│   │   │   │       ArcStrategy.tex
│   │   │   │       Bezier.tex
│   │   │   │       CAMov2640.tex
│   │   │   │       CodeArduino.tex
│   │   │   │       CodePython.tex
│   │   │   │       ConstraintsCamera.tex
│   │   │   │       databases.tex
│   │   │   │       FirstChapter.tex
│   │   │   │       HeartRate.tex
│   │   │   │       Hints.tex
│   │   │   │       IMU.tex
│   │   │   │       IMULSM6DS0XTR.tex
│   │   │   │       MapleFiles.tex
│   │   │   │       MicrophoneMP34DT05.tex
│   │   │   │
│   │   │   ├───HardwareBeschreibung
│   │   │   │       BeschreibungSystem.tex
│   │   │   │       BluetoothModul.tex
│   │   │   │       externeLED.tex
│   │   │   │       Kippschalter.tex
│   │   │   │       Mosfet.tex
│   │   │   │       Netzteil.tex
│   │   │   │       Pumpe.tex
│   │   │   │
│   │   │   ├───Programmierung
│   │   │   │       Programmcode.tex
│   │   │   │
│   │   │   ├───Schaltplan
│   │   │   │       Schaltplan.tex
│   │   │   │
│   │   │   └───Templates
│   │   │           Package.tex
│   │   │           Sensor.tex
│   │   │
│   │   └───Nano33BLESense
│   │       │   DatenblattArduCAM.tex
│   │       │   DatenblattNano.tex
│   │       │   gpio.tex
│   │       │   ImageClassification.tex
│   │       │   Installation.tex
│   │       │   MateriallisteNano.tex
│   │       │   Nano33BLESense.tex
│   │       │   Project.tex
│   │       │   SWTest.tex
│   │       │   Symbollist.tex
│   │       │   TensorFlowLiteHelloWorld.tex
│   │       │   TinyMLExamples.tex
│   │       │   TinyMLKit.tex
│   │       │   Titelseite.tex
│   │       │
│   │       ├───de
│   │       │       gpio.tex
│   │       │
│   │       └───en
│   │               gpio.tex
│   │
│   ├───General
│   │       .gitignore
│   │       .gitkeep
│   │       acronyms.tex
│   │       ArduinoFormatting.tex
│   │       commands.tex
│   │       Hyphenations.tex
│   │       Logo.png
│   │       packages.tex
│   │       tikzdefs.tex
│   │
│   ├───Images
│   │   ├───AccelerationDetectionAlgorithms
│   │   │       Baseline.png
│   │   │
│   │   ├───AdapterBoard
│   │   │       shield.jpg
│   │   │
│   │   ├───Allgemein
│   │   │       LogoDataScienceGruenBlau.jpg
│   │   │
│   │   ├───Arduino
│   │   │   │   .gitkeep
│   │   │   │   AddDataset.png
│   │   │   │   ardinst2.JPG
│   │   │   │   ardportinst.JPG
│   │   │   │   ArduCAM2MP.jpg
│   │   │   │   arduino-cli-compile-cmd.png
│   │   │   │   arduino-cli.png
│   │   │   │   ArduinoBlinkNicla.png
│   │   │   │   ArduinoIcons.PNG
│   │   │   │   ArduinoIDEBoard.png
│   │   │   │   ArduinoIDEBoardAdmin.PNG
│   │   │   │   ArduinoIDEBoardCom.jpg
│   │   │   │   ArduinoIDEBootloader.png
│   │   │   │   ArduinoIDECom.png
│   │   │   │   ArduinoIDEExamples.png
│   │   │   │   arduinoidefrist.PNG
│   │   │   │   arduinoidefristEng.PNG
│   │   │   │   arduinoidefrst.JPG
│   │   │   │   ArduinoIDESerialMonitor.png
│   │   │   │   arduinoinst1.JPG
│   │   │   │   ArduinoNano33BLESense.jpg
│   │   │   │   ArduinoNano33BLESense2.jpg
│   │   │   │   basicportentapinout.png
│   │   │   │   blinksketch.png
│   │   │   │   CNN.png
│   │   │   │   connectededge.png
│   │   │   │   createimpulse.png
│   │   │   │   DataAcquisition.png
│   │   │   │   Datasetclass.png
│   │   │   │   Deployment.png
│   │   │   │   edgecli.png
│   │   │   │   edgeimpulse.JPG
│   │   │   │   EditProgram.png
│   │   │   │   examplesketch.png
│   │   │   │   exportedgeimpulse.png
│   │   │   │   Facedetetcted.png
│   │   │   │   facefilter.png
│   │   │   │   face_tracking.png
│   │   │   │   FeatureExplorer.png
│   │   │   │   featuregenerate.png
│   │   │   │   find_circles.png
│   │   │   │   firmwareinstalled.png
│   │   │   │   flowchart2.JPG
│   │   │   │   GenerateFeatures.png
│   │   │   │   h7b.JPG
│   │   │   │   ImpulseDesign.png
│   │   │   │   IntroductiontoArduinoIDE-for--researchegate-fezari.pdf
│   │   │   │   kdd3.JPG
│   │   │   │   kddprocess.JPG
│   │   │   │   KDD_process.png
│   │   │   │   labelface.png
│   │   │   │   liveclassification.png
│   │   │   │   Machine Learning Pipeline.PNG
│   │   │   │   menubar.JPG
│   │   │   │   MicroPythonBlinkH7.png
│   │   │   │   Modeloutput.png
│   │   │   │   nodejs.png
│   │   │   │   openmvide.png
│   │   │   │   openmvideDE.png
│   │   │   │   OpenMVIDEStart.png
│   │   │   │   openmvins1.JPG
│   │   │   │   openmvins10DE.png
│   │   │   │   openmvins1DE.png
│   │   │   │   openmvins2.JPG
│   │   │   │   openmvins2DE.png
│   │   │   │   openmvins3DE.png
│   │   │   │   openmvins4DE.png
│   │   │   │   openmvins5.JPG
│   │   │   │   openmvins5DE.png
│   │   │   │   openmvins6DE.png
│   │   │   │   openmvins7DE.png
│   │   │   │   openmvins8DE.png
│   │   │   │   openmvins9DE.png
│   │   │   │   openmvinst.png
│   │   │   │   outLedlia.JPG
│   │   │   │   OutputLEDs.jpeg
│   │   │   │   outputmerged.JPG
│   │   │   │   Parameters.png
│   │   │   │   Penoutput.png
│   │   │   │   PortentaH7.jpg
│   │   │   │   PortentaH7a.jpg
│   │   │   │   PortentaH7b.jpg
│   │   │   │   PortentaH7c.jpg
│   │   │   │   PortentaH7d.jpg
│   │   │   │   PortentaVisionShield.png
│   │   │   │   PortentaVisionShield2.png
│   │   │   │   PortentaVisionShield3.png
│   │   │   │   PortentaVisionShield4.png
│   │   │   │   PortentaVisionShield5.png
│   │   │   │   QRcodedetection.png
│   │   │   │   rescaling.JPG
│   │   │   │   roses.png
│   │   │   │   sampldata.jpg
│   │   │   │   saveparameters.png
│   │   │   │   SerialBlinkM4.png
│   │   │   │   SerialBlinkM7.png
│   │   │   │   setdataset.JPG
│   │   │   │   SON_X-UCC020_02.png
│   │   │   │   STARTECH_USB2CC50CM_03.png
│   │   │   │   startinled.jpg
│   │   │   │   testing.JPG
│   │   │   │   testmodel.png
│   │   │   │   tfLiteAblauf.PNG
│   │   │   │   tinyML9-2.png
│   │   │   │   tinyML9-3.png
│   │   │   │   tinyML9-4.png
│   │   │   │   tinyML9-5.png
│   │   │   │   Trainedmodel.png
│   │   │   │   trainingmodel.JPG
│   │   │   │   updatebootloader.png
│   │   │   │   updatingootloader.png
│   │   │   │   uploadBootloadersketch.png
│   │   │   │
│   │   │   ├───Alvik
│   │   │   │       AKX00066_05.BACK.png
│   │   │   │       AKX00066_06.ISO.png
│   │   │   │       AKX00066_07.UNBOX.png
│   │   │   │       AKX00066_08.BOX.png
│   │   │   │       AKX00066_09.EXTRA.png
│   │   │   │       AKX00066_10.EXTRA.png
│   │   │   │       AKX00066_11.EXTRA.png
│   │   │   │       down-components.png
│   │   │   │       main-components.png
│   │   │   │       robot-on.png
│   │   │   │       up-components.png
│   │   │   │
│   │   │   ├───APDS9960
│   │   │   │       APDS9960Install.png
│   │   │   │       APDS9960Installed.png
│   │   │   │       APDS9960Prepare.png
│   │   │   │
│   │   │   ├───ArdiunoIDE2
│   │   │   │       ArduinoCreateAgentInstallation.png
│   │   │   │       ArduinoIcons.png
│   │   │   │       ArduinoIDECreateAgentInstallation.png
│   │   │   │       ArduinoIDESketch.png
│   │   │   │       ArduinoIDESketch2.png
│   │   │   │       ArduinoMbedOSNanoBoardsInstallation.png
│   │   │   │       ArduinoMbedOSPortentaBoardsInstallation.png
│   │   │   │       ArduinoNano33BLESenseOrangeLEDGlow.jpg
│   │   │   │       ArduinoNano33BLESenseResetButton.jpg
│   │   │   │       ArduinoPortentaH7Connectedtoalaptop.png
│   │   │   │       ArduinoSetupInstallationFolder.jpg
│   │   │   │       ArduinoSetupInstallationOptions.jpg
│   │   │   │       ArduinoSketch.jpg
│   │   │   │       autocomplete.png
│   │   │   │       BlinkExampleIDE2.3.3.png
│   │   │   │       Blinksketch.png
│   │   │   │       blink_example_IDE2.3.3.png
│   │   │   │       board-manager.png
│   │   │   │       boardManager.png
│   │   │   │       boardmanager1.png
│   │   │   │       boardmanager_installation1.png
│   │   │   │       cmdSynthax.png
│   │   │   │       cmd_synthax.png
│   │   │   │       CompileBlinkSketch.png
│   │   │   │       CopyToTheApplicationsFolder.png
│   │   │   │       Debug.png
│   │   │   │       DownloadArduinofile.png
│   │   │   │       downloading-and-installing-img01.png
│   │   │   │       downloading-and-installing-img02.png
│   │   │   │       DownloadingAndInstallingImg02.png
│   │   │   │       DownloadInstallation2.2.3.png
│   │   │   │       Download_Installation2.2.3.png
│   │   │   │       examplesketches.png
│   │   │   │       finding-an-example.png
│   │   │   │       greenorangeled.png
│   │   │   │       ide-2-overview.png
│   │   │   │       ide2Overview.png
│   │   │   │       Images
│   │   │   │       includelibrary.png
│   │   │   │       LedBlinkCode.png
│   │   │   │       ledblinking.png
│   │   │   │       ledblink_code.png
│   │   │   │       LEDExampleTest.png
│   │   │   │       library-manager.png
│   │   │   │       libraryManager.png
│   │   │   │       local-sketchbook.png
│   │   │   │       localSketchbook.png
│   │   │   │       LSM6DSboard.png
│   │   │   │       LSM9DS1.png
│   │   │   │       macDownload.png
│   │   │   │       mac_Download.png
│   │   │   │       MenuBarOption.png
│   │   │   │       MenuBarOptions.png
│   │   │   │       menuboard.png
│   │   │   │       MenuButton.png
│   │   │   │       MenuButtons.png
│   │   │   │       mklinkCmd.png
│   │   │   │       mklink_cmd.png
│   │   │   │       new-cloud.png
│   │   │   │       OpenMV.png
│   │   │   │       OpenTheDownloadFolder.png
│   │   │   │       OutputWindow.png
│   │   │   │       playpause.gif
│   │   │   │       portentaboard.png
│   │   │   │       PortentaH7.png
│   │   │   │       Portselection.png
│   │   │   │       potentiometer-plotter.gif
│   │   │   │       remote-sketchbook.gif
│   │   │   │       resetbutton.png
│   │   │   │       SelectAvailablePortForUploadingArduinoSketch.png
│   │   │   │       SelectTheConnectedBoardArduinoNano33BLESense.png
│   │   │   │       serial-monitor.png
│   │   │   │       serialMonitor.png
│   │   │   │       SerialMonitorIcon.png
│   │   │   │       SettingThePort.png
│   │   │   │       SummaryOfOptions.png
│   │   │   │       Summary_of_Options.png
│   │   │   │       UploadTheProgramInArduinoBoard.png
│   │   │   │       usb_cable.png
│   │   │   │       web-editor.png
│   │   │   │       WindowsDownload.png
│   │   │   │       Windows_Download.png
│   │   │   │       wire.png
│   │   │   │
│   │   │   ├───ArduinoIDE
│   │   │   │       arduinoAuto.png
│   │   │   │       arduinoBeispiele.png
│   │   │   │       arduinoBibliothek.png
│   │   │   │       arduinoBibliothekEinbinden.png
│   │   │   │       arduinoBlink.png
│   │   │   │       arduinoBlink2.png
│   │   │   │       arduinoBoard.png
│   │   │   │       arduinoCMD.png
│   │   │   │       arduinoConnect.png
│   │   │   │       arduinoMbed.png
│   │   │   │       arduinoPort.png
│   │   │   │       arduinoSidebar.png
│   │   │   │       arduinoSketchbook.png
│   │   │   │       downloadArduinoIDE.png
│   │   │   │       downloadArduinoIDErot.png
│   │   │   │       downloadBenutzer.png
│   │   │   │       downloadIDE.png
│   │   │   │       downloadVerzeichnis.png
│   │   │   │       lizenzabkommen.png
│   │   │   │       menuAnzeige.png
│   │   │   │
│   │   │   ├───CLI
│   │   │   │       ArduinoCLIconfigfileUpdation.jpg
│   │   │   │       ArduinocliPATH.png
│   │   │   │       Blink.png
│   │   │   │       boardlist.png
│   │   │   │       CLIBoardList.png
│   │   │   │       CLIBoardList1.png
│   │   │   │       CLIDefaultConfigSettings.png
│   │   │   │       CLIInstallation.png
│   │   │   │       CLIInstallationCore.png
│   │   │   │       CLIpath.png
│   │   │   │       CLItemp.png
│   │   │   │       CompileSketch.png
│   │   │   │       CoreIndex.png
│   │   │   │       CoreInstall.png
│   │   │   │       Hochladen.png
│   │   │   │       KernInstallieren.png
│   │   │   │       Kompilieren.png
│   │   │   │       LEDtesten.jpeg
│   │   │   │       Listall.png
│   │   │   │       NewSketch.png
│   │   │   │       StandardConfig.png
│   │   │   │       UploadSketch.png
│   │   │   │
│   │   │   ├───EdgeControl
│   │   │   │       ABX00044_00.DEFAULT.png
│   │   │   │       ABX00044_01.ISO.jpg
│   │   │   │       ABX00044_01.ISO.png
│   │   │   │       ABX00044_02.FRONT.png
│   │   │   │       ABX00044_03.BACK.png
│   │   │   │       AKX00031.pdf
│   │   │   │       AKX00031_1.png
│   │   │   │       AKX00031_2.png
│   │   │   │       AKX00031_3.png
│   │   │   │       AKX00031_4.png
│   │   │   │       AKX00034-pinout.png
│   │   │   │       AKX00034_02.UNBOX.png
│   │   │   │       AKX00034_05.BOX.png
│   │   │   │       AKX00044-step.zip
│   │   │   │       Arduino-Pro-Edge-Control-IoT-Board-Example-Application-1.jpg
│   │   │   │       Arduino-Pro-Edge-Control-IoT-Board-Layout-2.png
│   │   │   │       ch.21.01.036-044.pdf
│   │   │   │       Hydrokultur-main.zip
│   │   │   │       Pinout_EdgeControl_latest.pdf
│   │   │   │       Pinout_EdgeControl_latest.png
│   │   │   │       VertikalerGarten.pdf
│   │   │   │
│   │   │   ├───IMU
│   │   │   │       LSM6DSboard.png
│   │   │   │       lsm9ds1.pdf
│   │   │   │       LSM9DS1.png
│   │   │   │       wire.png
│   │   │   │
│   │   │   ├───LoRa
│   │   │   │       Activation.png
│   │   │   │       AddingApplication.png
│   │   │   │       AppParameter.png
│   │   │   │       ClassAProfile.png
│   │   │   │       ClassBProfile.png
│   │   │   │       ClassCProfile.png
│   │   │   │       DeviceEUI.png
│   │   │   │       InstallMKRWAN.png
│   │   │   │       LCommunication.png
│   │   │   │       LoRa1.HEIC
│   │   │   │       LORA1.jpg
│   │   │   │       LoRa2.HEIC
│   │   │   │       LORA2.jpg
│   │   │   │       LoRaA.jpg
│   │   │   │       LoRaB.jpg
│   │   │   │       LoraConnection.png
│   │   │   │       LoRAConnectivity.png
│   │   │   │       LoRaWAN Topology.png
│   │   │   │       LoRaWANArch.png
│   │   │   │       LoRAwanRange.png
│   │   │   │       MCore.png
│   │   │   │       MKRWANStandalone.png
│   │   │   │       NetworkLayer.png
│   │   │   │       OTAA.png
│   │   │   │       Overview.png
│   │   │   │       P2P LoRa.png
│   │   │   │       RegisteringDevice.png
│   │   │   │       Secondstep.png
│   │   │   │       SelectApplication.png
│   │   │   │       SerialMonitor.png
│   │   │   │       ThingsNetwork.png
│   │   │   │       TTN.png
│   │   │   │       TTN1.png
│   │   │   │       UploadCode.png
│   │   │   │
│   │   │   ├───Memory
│   │   │   │       arduino.png
│   │   │   │       arduino_niwe.png
│   │   │   │       atmega_niwe.png
│   │   │   │       aufmacher_digital.jpg
│   │   │   │       bg_kit_ohne_deckel_digital.jpg
│   │   │   │       bus.jpg
│   │   │   │       dab.ahb_asb.mbr_ig.png
│   │   │   │       eprom.jpg
│   │   │   │       espcam.jpg
│   │   │   │       flash.jpg
│   │   │   │       heap_niwe.png
│   │   │   │       memory.jpg
│   │   │   │       memorymap_niwe.png
│   │   │   │       pasted_image_20240312185837.png
│   │   │   │       pasted_image_20240313203605.png
│   │   │   │       pasted_image_20240313204454.png
│   │   │   │       pasted_image_20240314140030.png
│   │   │   │       pasted_image_20240314172121.png
│   │   │   │       pasted_image_20240319093023.png
│   │   │   │       pasted_image_20240319130454.png
│   │   │   │       pico.jpg
│   │   │   │       serial.jpg
│   │   │   │       stack_neu_niwe.png
│   │   │   │       waswohntwo_niwe.png
│   │   │   │
│   │   │   ├───MKRWan1310
│   │   │   │       ARD_MKR_WAN_1310.jpg
│   │   │   │
│   │   │   ├───MotorCarrier
│   │   │   │       ABX00041_00.ISO_1000X750.jpg
│   │   │   │       ABX00041_01.UNBOX_1000X750.jpg
│   │   │   │       ABX00041_02.FRONT_1000X750.jpg
│   │   │   │
│   │   │   ├───Nano33BLE
│   │   │   │       ARD-NANO-33BS-f.jpg
│   │   │   │       arduino-nano-33-ble-sense-pinout-1024x805.png
│   │   │   │       Nano33BLESense.JPG
│   │   │   │       NanoPowerLED.jpeg
│   │   │   │
│   │   │   ├───NanoESP32
│   │   │   │       ABX00092_01.ISO.png
│   │   │   │       ABX00092_03.FRONT.png
│   │   │   │       ABX00092_04.BACK.png
│   │   │   │       NanoEPS32.png
│   │   │   │
│   │   │   ├───PortentaH7
│   │   │   │   │   ABX00042-Primary-Image.jpg
│   │   │   │   │   ArduinoHardware.jpg
│   │   │   │   │   BluetoothLibrary.png
│   │   │   │   │   BluetoothPortentaH7.png
│   │   │   │   │   BluetoothScan.png
│   │   │   │   │   CompileBlinkSketch.png
│   │   │   │   │   CompileSketch.png
│   │   │   │   │   Connectedtoalaptop.png
│   │   │   │   │   DSC00368.JPG
│   │   │   │   │   DSC00369.JPG
│   │   │   │   │   DSC00370.JPG
│   │   │   │   │   DSC00371.JPG
│   │   │   │   │   DSC00372.JPG
│   │   │   │   │   DSC00373.JPG
│   │   │   │   │   DSC00374.JPG
│   │   │   │   │   DSC00375.JPG
│   │   │   │   │   DSC00376.JPG
│   │   │   │   │   DSC00377.JPG
│   │   │   │   │   DSC00378.JPG
│   │   │   │   │   DSC00379.JPG
│   │   │   │   │   DSC00380.JPG
│   │   │   │   │   DSC00381.JPG
│   │   │   │   │   DSC00382.JPG
│   │   │   │   │   DSC00383.JPG
│   │   │   │   │   DSC00384.JPG
│   │   │   │   │   MenuBarOptions.png
│   │   │   │   │   NRFConnect.jpg
│   │   │   │   │   Output.png
│   │   │   │   │   PortentaH7Connection.png
│   │   │   │   │   PortentaH7Port.png
│   │   │   │   │   SelectBoardH7.png
│   │   │   │   │   SelectPort.png
│   │   │   │   │   SerialBlink.png
│   │   │   │   │   TypesofPortentaH7.png
│   │   │   │   │   UploadSketch.png
│   │   │   │   │
│   │   │   │   ├───PortentaVisionEthernet
│   │   │   │   │       arduino-portenta-vision-shield-ethernet.jpg
│   │   │   │   │       OIP.jpg
│   │   │   │   │
│   │   │   │   └───PortentaVisionLoRa
│   │   │   │           41rFggopIDL._AC_.jpg
│   │   │   │           ARD-ASX00026_1-1532x1022h.jpg
│   │   │   │           ARD_SHD_ASX00026-1.png
│   │   │   │           ARD_SHD_ASX00026.png
│   │   │   │           ASX00026_03.front_1000x750.webp
│   │   │   │
│   │   │   ├───TensorFlowLite
│   │   │   │       BoardsManager.png
│   │   │   │       colab.png
│   │   │   │       create-lib.gif
│   │   │   │       create-lib.JPG
│   │   │   │       gestureClassifier.png
│   │   │   │       GuessingGesture.png
│   │   │   │       HelloWorldScreenshot.png
│   │   │   │       libManager.png
│   │   │   │       micro.gif
│   │   │   │       microNo.JPG
│   │   │   │       microYes.JPG
│   │   │   │       modelTab.png
│   │   │   │       nanosenseble.png
│   │   │   │       plot-1.gif
│   │   │   │       plot-1.jpg
│   │   │   │       trainingData.png
│   │   │   │       upload.png
│   │   │   │
│   │   │   └───VisionShield
│   │   │           AntennaConnector.png
│   │   │           ArduinoPortentaH7.png
│   │   │           BitmapImage.png
│   │   │           BoardBack.png
│   │   │           BoardFront.png
│   │   │           BoardShieldHDConnectors.png
│   │   │           BoardTopology.png
│   │   │           BottomView.png
│   │   │           CameracaptureProcessing.png
│   │   │           CameraOutput.png
│   │   │           Connection VS.png
│   │   │           CoreInstallation.png
│   │   │           Discription.png
│   │   │           GSMClientCode.png
│   │   │           HaarCascade.png
│   │   │           ImageOutput.png
│   │   │           images
│   │   │           PinDiagram.png
│   │   │           PortentaIoTGNSSShieldpinouts.png
│   │   │           PortentaVisionShield.png
│   │   │           SavingImage.png
│   │   │           TechSpecifications.png
│   │   │           TopView.png
│   │   │           VisionShield.png
│   │   │
│   │   ├───Barcode
│   │   │       2DMatrix.PNG
│   │   │       Barcode.png
│   │   │       BarcodeComponents.png
│   │   │       Buchstabenerkennung.png
│   │   │       CODE128.PNG
│   │   │       EAN.PNG
│   │   │       EAN0.png
│   │   │       EAN1.png
│   │   │       EAN2.png
│   │   │       EAN3.png
│   │   │       EAN4.png
│   │   │       Figure1.jpg
│   │   │       image.png
│   │   │       ISBN.png
│   │   │       KarTrak_ACI_codes.png
│   │   │       Kreiscode.jpg
│   │   │       Lochkameramodell mit und ohne radiale Linseverzeichnung.png
│   │   │       MultipleQRCode.png
│   │   │       PatternInQRCode.PNG
│   │   │       QR-CodeInformation.png
│   │   │       QR-CodeOriginal.png
│   │   │       QR-CodePositionMarker.png
│   │   │       QR-CodePositionMarkerDirection.png
│   │   │       QR-CodeQuietZone.png
│   │   │       QR-CodeTimingMarker.png
│   │   │       qr.png
│   │   │       QRCode.png
│   │   │       TestCameraCode128.jpg
│   │   │       TypeOf2DCode.PNG
│   │   │       UPC.PNG
│   │   │       Version1-3.PNG
│   │   │       Version1.PNG
│   │   │       Version10.PNG
│   │   │       Version38-40.PNG
│   │   │       Version40.PNG
│   │   │
│   │   ├───Battery
│   │   │       batteryDone.png
│   │   │       batteryScrew.png
│   │   │       BatteryTest.png
│   │   │       clip.jpg
│   │   │       VoltageSensor.jpg
│   │   │
│   │   ├───BLE
│   │   │       BlueToothIcon.jpg
│   │   │       BluetoothLibrary.png
│   │   │       BluetoothPortentaH7.png
│   │   │       BluetoothScan.png
│   │   │       ListOfDevices.jpg
│   │   │       NRFConnect.jpg
│   │   │       NRFConnect2.jpg
│   │   │       PortentaH7Connection.png
│   │   │       SelectBoardH7.png
│   │   │       SelectPort.png
│   │   │
│   │   ├───BlueTooth
│   │   │       AndroidMenu.png
│   │   │       Arduino-NANO-33-Made-Easy-BLE-Sense-and-IoT.pdf
│   │   │       BatteryApp.png
│   │   │       BatteryAppAcc.png
│   │   │       BatteryAppAcc2.png
│   │   │       BatteryAppAcc3.png
│   │   │       BleBulletinBoardModel.png
│   │   │       BlueToothApp01.png
│   │   │       BlueToothApp02.png
│   │   │       BlueToothApp03.png
│   │   │       connectionBLE.png
│   │   │       Nanos.jpg
│   │   │
│   │   ├───ButtonGrove
│   │   │       DualButtonOben.png
│   │   │       DualButtonUnten.png
│   │   │       Pulldown.png
│   │   │
│   │   ├───CAM
│   │   │   ├───IMX477
│   │   │   │       FSM-IMX477_-V1A-_Datasheet_v1-1_Brief.pdf
│   │   │   │       FSM-IMX477_Datasheet_v1-0f_BriefvmSDSTDKJN5Mc-1815684.pdf
│   │   │   │       Gid1515Pdf_LI-JETSON-KIT-IMX477CS-X_datasheet.pdf
│   │   │   │       IMX477-AACK_Flyer.pdf
│   │   │   │       imx477.jpg
│   │   │   │       imx477B10.jpg
│   │   │   │       imx477B11.jpg
│   │   │   │       imx477B2.jpg
│   │   │   │       imx477B3.jpg
│   │   │   │       imx477B4.jpg
│   │   │   │       imx477B5.jpg
│   │   │   │       imx477B6.jpg
│   │   │   │       imx477B7.jpg
│   │   │   │       imx477B8.jpg
│   │   │   │       imx477B9.jpg
│   │   │   │
│   │   │   ├───LensCalibrationTool
│   │   │   │       LensCalibrationTool.jpg
│   │   │   │       LensCalibrationTool.mp4
│   │   │   │       LensCalibrationTool2.jpg
│   │   │   │       LensCalibrationTool3.jpg
│   │   │   │       LensCalibrationTool4.jpg
│   │   │   │       LensCalibrationTool5.jpg
│   │   │   │
│   │   │   ├───ov2640
│   │   │   │       Arducam Camera Shield V2 Demo Tutorial for Arduino.mp3
│   │   │   │       Arducam Mini 2MP SPI Camera Module for Arduino Tutorial.mp3
│   │   │   │       ov2640.jpg
│   │   │   │       ov2640B1.jpg
│   │   │   │       ov2640B2.jpg
│   │   │   │       ov2640B3.jpg
│   │   │   │       ov2640B4.jpg
│   │   │   │       ov2640B5.jpg
│   │   │   │       ov2640B6.jpg
│   │   │   │       OV2640_DS.pdf
│   │   │   │       TestCam.png
│   │   │   │       TestCam02.png
│   │   │   │
│   │   │   └───ov7675
│   │   │           ArduinoLib.JPG
│   │   │           Blockdiagramm.JPG
│   │   │           CameraConnected.JPG
│   │   │           CameraModule.JPG
│   │   │           ConnectionTable.JPG
│   │   │           modulOV7675.png
│   │   │           NeopixelLEDSkirt.pdf
│   │   │           ov7670_2006_RosayTyKQe.pdf
│   │   │           RawPixelNet.JPG
│   │   │           RGB565.JPG
│   │   │           Screenshot.jpg
│   │   │
│   │   ├───Camera
│   │   │       .gitkeep
│   │   │       cable.jpg
│   │   │       cable2.jpg
│   │   │       calib.io_charuco_200x150_8x11_15_11_DICT_4X4.pdf
│   │   │       calib.io_checker_200x150_8x11_15.pdf
│   │   │       CalibrateCard.png
│   │   │       camera-calibration-checker-board_9x7.pdf
│   │   │       camera.jpg
│   │   │       pattern-a4.pdf
│   │   │       siemens-star.pdf
│   │   │       Testtafel.jpg
│   │   │
│   │   ├───doxygen
│   │   │       behavior1.png
│   │   │       behavior2.png
│   │   │       DescriptionFile.png
│   │   │       DescriptionFunction.png
│   │   │       DOSCommand.png
│   │   │       doxydot2.jpg
│   │   │       DoxyGenInstall1.JPG
│   │   │       DoxyGenInstall2.jpg
│   │   │       DoxygenLogo.png
│   │   │       doxygenWizard.png
│   │   │       DoxyWizardDiagrams.png
│   │   │       DoxyWizardExpertBuild.png
│   │   │       DoxywizardExpertDot.png
│   │   │       DoxywizardExpertDot2.png
│   │   │       DoxywizardLogo.png
│   │   │       DoxyWizardMode.png
│   │   │       DoxyWizardOutput.png
│   │   │       DoxyWizardProject.png
│   │   │       DoxywizardRun.png
│   │   │       DoxywizardWizard.png
│   │   │       DoxywizardWizardDiagrams.png
│   │   │       DoxywizardWizardMode.png
│   │   │       ExampleGraph.png
│   │   │       GitLogo.png
│   │   │       GPLLogo.png
│   │   │       GraphvizInstall1.JPG
│   │   │       GraphvizInstall2.jpg
│   │   │       GraphvizInstall3.jpg
│   │   │       GraphvizLogo.png
│   │   │       GraphvizWebsite.JPG
│   │   │       GraphvizWebsiteDownload.jpg
│   │   │       PrivateFunction.png
│   │   │       website.JPG
│   │   │       WebsiteDownload.JPG
│   │   │
│   │   ├───Drive
│   │   │       ServoCircuit.png
│   │   │       ServoDataSheet.png
│   │   │       Servomotor.png
│   │   │       ServoPMW.png
│   │   │
│   │   ├───EthernetENC28J60
│   │   │       GUI.png
│   │   │       NetzadapterPA0217.png
│   │   │       NetzwerkschnittstelleENC28J60.png
│   │   │
│   │   ├───GearDrive
│   │   │       GearDrive.jpg
│   │   │
│   │   ├───Grove
│   │   │       Grove2Pin.jpg
│   │   │       Shield.jpg
│   │   │       UniversalCable.jpg
│   │   │
│   │   ├───HeartRate
│   │   │       GRVCircuit.png
│   │   │       HeartRateSensor.png
│   │   │       HeartRateTestDiagramm.png
│   │   │
│   │   ├───I2C
│   │   │       I2C.png
│   │   │       I2C31.png
│   │   │       I2C32.png
│   │   │       I2C33.png
│   │   │       I2CProtocol.png
│   │   │
│   │   ├───IMU
│   │   │       drift.png
│   │   │       FlowChart.png
│   │   │       Hallsensor.png
│   │   │       Kapazitaet.png
│   │   │       LSM9DS1Bibliothek.jpg
│   │   │       Magnetometer.png
│   │   │       nicla-vision-imu.png
│   │   │       nicla-vision-tof.png
│   │   │       nicla_vision_acceleration.png
│   │   │       nicla_vision_gyroscope.png
│   │   │       simpleaccelerometer.jpg
│   │   │       SupportEmail.jpg
│   │   │
│   │   ├───JSTConnectors
│   │   │       JSTPH.jpg
│   │   │       JSTVH.jpg
│   │   │       PHR-2.jpg
│   │   │
│   │   ├───L298N
│   │   │       AnschlussDriver.JPG
│   │   │       L298N.png
│   │   │
│   │   ├───LensCalibrationTool
│   │   │       3DCalibratorCourier.jpg
│   │   │       Arducam.jpg
│   │   │       BayerMosaik.jpg
│   │   │       CentralDiscreteProjection.jpg
│   │   │       CentralProjection.jpg
│   │   │       Chess.png
│   │   │       ColorPlate.png
│   │   │       ColorPlates.png
│   │   │       CurveFit.jpg
│   │   │       DivisionOfTheLetterMatrixIntoFourQuadrants.png
│   │   │       FilterPrinzip.png
│   │   │       Fokus.jpg
│   │   │       GrayCard.jpg
│   │   │       LettersInBinaryMatrix.png
│   │   │       LineRecognition.png
│   │   │       Linsenverzeichnungen.jpg
│   │   │       Prinzip.png
│   │   │       RadialDistortion.png
│   │   │       SectioningTheLetterMatrix.png
│   │   │       SpyderLens.jpg
│   │   │       TabeleColorValue.jpg
│   │   │       TangentialDistortion.png
│   │   │       Transformation-Weltkoordinaten2.png
│   │   │       TransformationCoordinates.png
│   │   │
│   │   ├───MagicWand
│   │   │   │   Bluetoothconnection.png
│   │   │   │   Creatingdataset.png
│   │   │   │   flowlite.png
│   │   │   │   fusionBasD.png
│   │   │   │   fusionBasS.png
│   │   │   │   fusionHautD.png
│   │   │   │   fusionHautS.png
│   │   │   │   fusionMidD1.png
│   │   │   │   fusionMidD2.png
│   │   │   │   fusionMidExtD.png
│   │   │   │   fusionMidExtS.png
│   │   │   │   fusionMidS1.png
│   │   │   │   fusionMidS2.png
│   │   │   │   jumper.png
│   │   │   │   jumperphoto.jpg
│   │   │   │   MagicWand.png
│   │   │   │   MagicWandCAD01.jpg
│   │   │   │   MagicWandCAD02.jpg
│   │   │   │   MagicWandCAD03.jpg
│   │   │   │   MagicWandK.jpg
│   │   │   │   MagicWandPhoto.jpg
│   │   │   │   MagicWandS.jpg
│   │   │   │   PrusaPrint.png
│   │   │   │   PrusaSlicer.png
│   │   │   │   Ring.jpg
│   │   │   │   RingGreen.jpg
│   │   │   │   Slope.jpg
│   │   │   │   SlopeBlue.jpg
│   │   │   │   STLfile.png
│   │   │   │   Unknown.jpg
│   │   │   │   UnknownWhite.jpg
│   │   │   │   Wing.jpg
│   │   │   │   WingRed.jpg
│   │   │   │   ziplib.png
│   │   │   │
│   │   │   ├───ArduinoIDE
│   │   │   │       Arduino IDE Creat Agent Installation.png
│   │   │   │       Arduino IDE Sketch.png
│   │   │   │       Arduino Nano 33 BLE Sense Orange LED Glow.jpg
│   │   │   │       Arduino Nano 33 BLE Sense Reset Button.jpg
│   │   │   │       ArduinoCreateAgentInstallation.png
│   │   │   │       ArduinoIcons.PNG
│   │   │   │       ArduinoMbedOSNanoBoardsInstallation.png
│   │   │   │       ArduinoSetupInstallationFolder.jpg
│   │   │   │       ArduinoSetupInstallationOptions.jpg
│   │   │   │       ArduinoSketch.jpg
│   │   │   │       LED-Example Test.png
│   │   │   │       Menu Bar Option.png
│   │   │   │       Menu Button.png
│   │   │   │       MenuBarOptions.png
│   │   │   │       Output Window.PNG
│   │   │   │       Select Available Port for Uploading Arduino Sketch.png
│   │   │   │       Select the Connected board -here Arduino Nano 33 BLE Sense.png
│   │   │   │       Serial Monitor Icon.png
│   │   │   │       Setting the Port.png
│   │   │   │       Upload the Program in Arduino board.png
│   │   │   │
│   │   │   └───KDD
│   │   │           Classifygestures.jpeg
│   │   │           CNNsequence.png
│   │   │           Convolutionwindow.png
│   │   │           IMU.png
│   │   │           IMUAccelero.png
│   │   │           KDDMonitoring.jpeg
│   │   │           MaxPooling.png
│   │   │
│   │   ├───MateriallisteBilder
│   │   │       blaueLED.png
│   │   │       bluetoothModul.png
│   │   │       greenLED.png
│   │   │       kippschalterBild.png
│   │   │       mosfetBild.png
│   │   │       netzteilBild.png
│   │   │       pumpeBild.png
│   │   │       spannungswandlerBild.png
│   │   │
│   │   ├───Microphon
│   │   │       AD-Wandler.png
│   │   │       ASCII.png
│   │   │       AufbauWaveDatei.png
│   │   │       AusgabeSampleFrequenzanalyse.png
│   │   │       BeispielAnzeigenZweiAudiodatein.png
│   │   │       BeispielKondensatorMikrofon.png
│   │   │       MicrophonCode1.png
│   │   │       MicrophonCode2.png
│   │   │       MicrophonCode3.png
│   │   │       MicrophonCode4.png
│   │   │       MicrophonCode5.png
│   │   │       MicrophonCode6.png
│   │   │       MicrophonCode7.png
│   │   │       MikrofonArten.png
│   │   │       MikrofonTechnischeDaten.png
│   │   │       MikrophonCP.png
│   │   │       PhaseVocoder.jpg
│   │   │
│   │   ├───MPM3610
│   │   │       aamRegelbetrieb.png
│   │   │       BeispielanwendungSpannungswandler.png
│   │   │       BlockdiagrammSpannungswandler.png
│   │   │       dcmSteuerungsbetrieb.png
│   │   │       spannungswandlerWirkungsgrad.png
│   │   │
│   │   ├───mqtt
│   │   │       Connection.jpg
│   │   │       LibraryManager.jpg
│   │   │
│   │   ├───Nano33BLESense
│   │   │   │   1.1.PNG
│   │   │   │   1.png
│   │   │   │   10.png
│   │   │   │   1212.png
│   │   │   │   129.png
│   │   │   │   2.2.PNG
│   │   │   │   2.jpeg
│   │   │   │   21.png
│   │   │   │   3.3.PNG
│   │   │   │   337.png
│   │   │   │   3D_Magnetsensor.jpg
│   │   │   │   4.4.PNG
│   │   │   │   4.PNG
│   │   │   │   5.5.PNG
│   │   │   │   5.png
│   │   │   │   6.png
│   │   │   │   7.png
│   │   │   │   8.png
│   │   │   │   9.png
│   │   │   │   9_achsigen.jpg
│   │   │   │   absolmax.png
│   │   │   │   abx00031_front_1_2.jpg
│   │   │   │   acceandgyroblock.png
│   │   │   │   accel.png
│   │   │   │   AccelorometerGraph.jpg
│   │   │   │   Anschlussplan.jpg
│   │   │   │   apds-9960_website.jpg
│   │   │   │   APDS-Output.png
│   │   │   │   APDS.png
│   │   │   │   ARDNanano33BSH2.png
│   │   │   │   Arducam 2.PNG
│   │   │   │   Arducam 2MP.webp
│   │   │   │   Arducam.jpg
│   │   │   │   Arduino DIE 1.8.13 herunterladen.png
│   │   │   │   Arduino DIE 1.8.13.png
│   │   │   │   Arduino Gesture.PNG
│   │   │   │   Arduino Mbed OS Nano Boards installieren.png
│   │   │   │   Arduino Nano 33 BLE Sense.png
│   │   │   │   Arduino.jpg
│   │   │   │   ArduinoCreatAgent.jpg
│   │   │   │   ArduinoKit.png
│   │   │   │   ArduinoMbedCore.jpg
│   │   │   │   ArduinoMbedCore2.jpg
│   │   │   │   ArduinoNano33.jpg
│   │   │   │   ArduinoNano33BLESenseTopology.png
│   │   │   │   Bedienung.jpg
│   │   │   │   BibliothekInstall.jpg
│   │   │   │   capture.png
│   │   │   │   case.png
│   │   │   │   CFM.png
│   │   │   │   Check-board.png
│   │   │   │   Click-Reset.jpg
│   │   │   │   CNN.png
│   │   │   │   CNN1.png
│   │   │   │   CNN2.png
│   │   │   │   Computer Vision.png
│   │   │   │   constbool.png
│   │   │   │   constexpr.png
│   │   │   │   Datei-Einstellungen-Projekt.jpg
│   │   │   │   DateiHochladen1.jpg
│   │   │   │   DateiHochladen2.jpg
│   │   │   │   DateiHochladen3.jpg
│   │   │   │   DateiHochladen4.jpg
│   │   │   │   DistanceControlPoints.jpg
│   │   │   │   EdgeImpulse.gif
│   │   │   │   EdgeImpulse.PNG
│   │   │   │   elecon.png
│   │   │   │   ErgebinisPC.jpg
│   │   │   │   ErgebnisHandy1.jpg
│   │   │   │   ErgebnisHandy2.jpg
│   │   │   │   ErgebnisseIMUTests.jpg
│   │   │   │   FaceDetection.PNG
│   │   │   │   Fast.PNG
│   │   │   │   Fast1.PNG
│   │   │   │   gest.png
│   │   │   │   GGOOD.PNG
│   │   │   │   HandLandmarks.PNG
│   │   │   │   HandleOutput.png
│   │   │   │   Holistic.PNG
│   │   │   │   img1.png
│   │   │   │   img12.png
│   │   │   │   img2.png
│   │   │   │   img3.png
│   │   │   │   img4.png
│   │   │   │   img5.png
│   │   │   │   img6.png
│   │   │   │   img7.png
│   │   │   │   img8.png
│   │   │   │   img9.png
│   │   │   │   IMU-Data.gif
│   │   │   │   IMU.png
│   │   │   │   IMUAccelero.png
│   │   │   │   IMUData.PNG
│   │   │   │   imupin.png
│   │   │   │   imupin1.png
│   │   │   │   install.png
│   │   │   │   Installation-1.PNG
│   │   │   │   instillness.png
│   │   │   │   isMoving.png
│   │   │   │   KDDProcess.png
│   │   │   │   KraefteInKoordinatenachsen.jpg
│   │   │   │   Landmarks.PNG
│   │   │   │   LED.png
│   │   │   │   Logitech.jpg
│   │   │   │   loop.png
│   │   │   │   LSTMResults.PNG
│   │   │   │   MachineLearningPipeline.PNG
│   │   │   │   magnetometerblock.png
│   │   │   │   mainf.png
│   │   │   │   MediaPipeCheck.PNG
│   │   │   │   Nano Family Comparison.PNG
│   │   │   │   Nano Mbed.PNG
│   │   │   │   NANO-33-BLE-Sense_sensor-indentification.png
│   │   │   │   Nano33.png
│   │   │   │   nRF-Connet.png
│   │   │   │   nRF52840 QIAA.png
│   │   │   │   Orange LED.jpg
│   │   │   │   ov2640B4.jpg
│   │   │   │   pending.png
│   │   │   │   Pending1.png
│   │   │   │   pin config.PNG
│   │   │   │   Pinout-NANOsense.png
│   │   │   │   pinout.png
│   │   │   │   Port-Select.png
│   │   │   │   Port.png
│   │   │   │   powertree.png
│   │   │   │   ProjektPython.jpg
│   │   │   │   Pyfirmata.jpg
│   │   │   │   Python.PNG
│   │   │   │   qrcode_www.nordicsemi.com.png
│   │   │   │   Realiesierung.png
│   │   │   │   RecognizeGesture.png
│   │   │   │   RecordingGesture.png
│   │   │   │   reset.PNG
│   │   │   │   Ring.png
│   │   │   │   Run.PNG
│   │   │   │   Run1.PNG
│   │   │   │   schem.png
│   │   │   │   Schnittstellen.png
│   │   │   │   sensorchara.png
│   │   │   │   Serial Monitor.png
│   │   │   │   Slope.png
│   │   │   │   Slow.PNG
│   │   │   │   Slow1.PNG
│   │   │   │   spec.jpeg
│   │   │   │   Stop.PNG
│   │   │   │   Stop1.PNG
│   │   │   │   SymHermiteProblem.jpg
│   │   │   │   SymHermiteProblemBezier.jpg
│   │   │   │   SymHermiteProblemControlPoints.jpg
│   │   │   │   tempchara.png
│   │   │   │   Temperatur,Feuchtigkeit_HTS221.png
│   │   │   │   Test-1.jpg
│   │   │   │   Testergebnisse.jpg
│   │   │   │   TestsoftwareBluetooth.jpg
│   │   │   │   Testware3Sensoren.jpg
│   │   │   │   timl_0602.png
│   │   │   │   timl_0603.png
│   │   │   │   timl_0604.png
│   │   │   │   timl_0605.png
│   │   │   │   timl_0606.png
│   │   │   │   timl_0607.png
│   │   │   │   timl_0608.png
│   │   │   │   timl_0610.png
│   │   │   │   Turn Left.PNG
│   │   │   │   Turn Right.PNG
│   │   │   │   Unknown.png
│   │   │   │   Upload.png
│   │   │   │   usbb.jpeg
│   │   │   │   Verlustfunktion.jpg
│   │   │   │   Versuchsablauf.jpg
│   │   │   │   vier_Modelle.jpg
│   │   │   │   Wing.png
│   │   │   │   WISDM-Datensatz.jpg
│   │   │   │   YOLO.png
│   │   │   │
│   │   │   └───TinyMLKit
│   │   │           CircuitDiagram.jpg
│   │   │           display.jpg
│   │   │           OV7675.jpg
│   │   │           powerbank.jpg
│   │   │           TinyMachineLearningKit.png
│   │   │           TinyMachineLearningShield.png
│   │   │           TinyMachineLearningShieldRotated.png
│   │   │           USBCable.png
│   │   │           USBCable90.jpg
│   │   │
│   │   ├───NiclaVision
│   │   │   └───SlopeControl
│   │   │           AngularSpeedofGyroscopeSensor.PNG
│   │   │           AxisAccelerationofAccelerometerSensor.PNG
│   │   │           BodyFrameandInertiaFrameonFlatSurface.PNG
│   │   │           BodyFrameandInertiaFrameonSlopeSurface.PNG
│   │   │           Cfile.png
│   │   │           deployment.png
│   │   │           development1.png
│   │   │           filesize.png
│   │   │           GoogleCollab.png
│   │   │           IMUFlow.png
│   │   │           InterpreterError.png
│   │   │           LibrarySetup.png
│   │   │           trainingdata1.png
│   │   │           trainingdata2.png
│   │   │
│   │   ├───OLED
│   │   │   │   OLEDBereit1.jpg
│   │   │   │   OLEDBereit2.jpg
│   │   │   │   OLEDBibliothek.jpg
│   │   │   │   OLEDCircuit.png
│   │   │   │   OLEDCircuit2.png
│   │   │   │   OLEDCircuit3.png
│   │   │   │   OLEDCode1.png
│   │   │   │   OLEDCode2.png
│   │   │   │   OLEDCode3.png
│   │   │   │   OLEDCode4.png
│   │   │   │   OLEDCode5.png
│   │   │   │   OLEDCode6.png
│   │   │   │   OLEDCode7.png
│   │   │   │   OLEDDisplay.png
│   │   │   │   OLEDSWStructure.png
│   │   │   │   OLEDTest.png
│   │   │   │   Output.png
│   │   │   │   TestprogrammDisplay.png
│   │   │   │
│   │   │   └───GroveOLEDisplaySSD1308
│   │   │           104030008_2017_01.png
│   │   │           104030008_2017_02.png
│   │   │
│   │   ├───OpenCVCalibration
│   │   │       camcalib_flowchart.PNG
│   │   │       cc1.PNG
│   │   │       cc10.PNG
│   │   │       cc2.PNG
│   │   │       cc3.PNG
│   │   │       cc4.PNG
│   │   │       cc5.PNG
│   │   │       cc6.PNG
│   │   │       cc7.PNG
│   │   │       cc8.PNG
│   │   │       cc9.PNG
│   │   │       pinhole.PNG
│   │   │       rad.PNG
│   │   │       tan.PNG
│   │   │
│   │   ├───QRCode
│   │   │       QRGenerate.jpg
│   │   │       QRGenerateBody.jpg
│   │   │       QRGenerateFrame.jpg
│   │   │       QRGenerateText.jpg
│   │   │
│   │   ├───SDCard
│   │   │       SDCard.png
│   │   │       SDCardSlot.png
│   │   │       SDCardTest.png
│   │   │
│   │   └───Sensor
│   │       │   BMECircuit.png
│   │       │   BMEsensor.png
│   │       │
│   │       ├───DHT22
│   │       │       AbweichungDruck.PNG
│   │       │       AbweichungFeuchte.PNG
│   │       │       AbweichungTemperatur.PNG
│   │       │       DHT22.png
│   │       │       Opus20THI.jpg
│   │       │       Schaltplan.jpeg
│   │       │
│   │       ├───HCSR04
│   │       │       HCSR04.jpg
│   │       │       HCSR04Test.png
│   │       │
│   │       ├───LED
│   │       │       circuitLED.png
│   │       │       LED.jpg
│   │       │       LED2.jpg
│   │       │       LEDDesign.jpg
│   │       │       RGB-LEDs-Pinout.png
│   │       │       RGB.png
│   │       │
│   │       ├───Phoenix
│   │       │       00013257_full_b1500.jpg
│   │       │       00013289_full_b1500.jpg
│   │       │       00061458_full_b1500.jpg
│   │       │       00061505_full_b1500.jpg
│   │       │       00123954_full_b1500.jpg
│   │       │       1844646.jpg
│   │       │
│   │       └───Resistor
│   │               R.jpg
│   │
│   ├───System
│   │   └───Nano33BLESense
│   │           Nano33BLESense-blx.bib
│   │           Nano33BLESense.aux
│   │           Nano33BLESense.bbl
│   │           Nano33BLESense.blg
│   │           Nano33BLESense.fdb_latexmk
│   │           Nano33BLESense.fls
│   │           Nano33BLESense.idx
│   │           Nano33BLESense.ilg
│   │           Nano33BLESense.ind
│   │           Nano33BLESense.locode
│   │           Nano33BLESense.lof
│   │           Nano33BLESense.log
│   │           Nano33BLESense.nlo
│   │           Nano33BLESense.out
│   │           Nano33BLESense.pdf
│   │           Nano33BLESense.run.xml
│   │           Nano33BLESense.synctex.gz
│   │           Nano33BLESense.tex
│   │           Nano33BLESense.toc
│   │
│   └───tikz
│           Arc.tex
│           Function.tex
│           Line.tex
│           Line2.tex
│           Node.tex
│           Node2.tex
│           Node3.tex
│           Rectangle.tex
│           Variable.tex
│
├───Poster
│   │   Poster Magic Faucet Fountain.tex
│   │   tikzposter.pdf
│   │
│   └───images
│           logo.png
│           logo_hs_technik.png
│           Rendering10.png
│           Rendering8.png
│           Rendering9.png
│
├───Präsentation
│   └───Template
│       │   Presentation Magic Faucet Fountain.tex
│       │   rename-blx.bib
│       │   rename.aux
│       │   rename.bbl
│       │   rename.blg
│       │   rename.log
│       │   rename.nav
│       │   rename.out
│       │   rename.pdf
│       │   rename.run.xml
│       │   rename.snm
│       │   rename.synctex.gz
│       │   rename.toc
│       │   rename.vrb
│       │
│       ├───Code
│       │   └───PDFExtractTable
│       │           output.csv
│       │           PDFExtractTable.py
│       │           weather.pdf
│       │
│       ├───Documents
│       │       MyLiterature.bib
│       │
│       ├───images
│       │       Aktor_Pumpe.jpg
│       │       Aktor_Pumpe.tex
│       │       Rostock.jpg
│       │       s0-nach-s1-1dim.tex
│       │       s0-nach-s1.tex
│       │       Sensor_Ultraschall.webp
│       │       WaterTaxi.png
│       │
│       ├───img
│       │       hintergrund2.png
│       │       technik.jpg
│       │
│       └───slides
│               end.aux
│               end.tex
│               header.tex
│               quellen.aux
│               quellen.tex
│               rename.aux
│               rename.tex
│               start.aux
│               start.tex
│
└───Xmind
        Automatisierungssystem.xmind