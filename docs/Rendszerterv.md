# 1. A rendszer célja(i) és nem célja(i)
Rendszer célja, hogy bebizonyítsuk magunknak, hogy forgalomba helyezett és könnyedén megvásárolható okos eszközök építésére, készítésére vagyunk képesek.
Bármely elektronikai webshopban könnyedén megvásárolható termékek összeillesztésével érünk egy kézzelfogható saját, egyedi terméket. 
Nem célunk, hogy az adott eszközzel kiváltsunk más, forgalomban kapható terméket. Ennek oka, hogy míg a forgalomban kapható termék ára a tömeggyártást
tekintva alacsonyabb, mint az általunk létrehozott eszköz, még egy már neves cégek álltal előkészített egy csomagban kapható termékspecifikációkkal rendelkező
termékcsaládba könnyedén belesimul, addig a mi termékünkhöz egy külön szervert, és hálózatot, egyszóval minden lehetséges és szükséges eszközt az alapoktól kell definiálni.
Ez költségeket tekintve jócskán magasabb, mintha már meglévő termékcsaládot választunk az okosotthon részévé.
A terméknek képesnek kell lennie érzékelni a mozgásokat, és azokról információt közölni interneten keresztül a felhasználóval.

# 2. A rendszert, annak működését és általa nyújtott szolgáltatásokat a következőképpen gondoljuk
	A rendszer egy mozgásérzékelőből, egy mikrokontrollerből, és egy reléből áll. 
	A mozgásérzékelő mozgást érzékelve megváltozott feszültségértéket küldve a mikrokontrollernek, amit az eszköz feldolgoz, átkonvertál digitális adattá, és azt továbbítja egy PC-nek, amin egy szoftver fut és ezen adatot olvasni fogja. Majd ez a számítógépen lévő program fogja kiértékelni, logolni, és értesítést küldeni a felhasználónak emailben. 
	
# 3. Projektterv
	Szerepkörök és felelősségek
	Scrum master: Zsák József
	Feladatai: Kommunikáció a csoporttagokkal, akadályok feltárása, támogatás.
	Megrendelő: Közös feladat, új közös projekt, saját igények szerint, így az 
	Eszterházy Károly Katolikus Egyetem Informatika Tanszékét tekinthetjük megrendelőnek

## Projektfelelősök

- **Labview Email :**
	- Maró Melinda
	- Csík Ákos
	- Schmidt Anikó
	- Kenyeres Tamás
<br/><br/>
- **Labview Adatbázis:**
	- Schmidt Anikó 
	- Maró Melinda
	- Kenyeres Tamás
	- Csík Ákos
<br/><br/>
- **Teszt**
	- Kenyeres Tamás
	- Schmidt Anikó
	- Csík Ákos
	- Maró Melinda
<br/><br/>
- **Arduino UNO programozás + Soros port kommunikáció:**	
	- Csík Ákos
	- Kenyeres Tamás
	- Maró Melinda
	- Schmidt Anikó

*Minden részlegnél az első megnevezett személy a fő felelős, a többiek támogató szerepkört vesznek fel.*      

# 4. Ütemterv
	Ütemterv szerint, minden héten kettő alkalommal csoportmegbeszélés létrehozása online meeting keretében a Microsoft Teams program segítségével.
	Minden alkalommal megbeszélésre kerülnek az alábbi témakörök:
		- Mit csináltam a legutóbbi meeting óta
		- Mit fogok csinálni a következő meetingig
		- Milyen akadályba ütköztem
	Feladatok átbeszélése közben a Trello oldalán kártyákat hozunk létre a feladatokról, azokat menedzseljük. 
	A kész verziót Júniusi vizsgaidőszakban nyújtuk bemutatásra. 

# 5. Mérföldkövek
	Több mérföldkő szerepel terveink között. 
    Első: UNO programozás, adatok beolvasása, soros porton való kommunikáció, az IDE-n leolvasni az adatokat
    Második: LAbview programozás, az IDE-n látott soros porti adatok viszont látása egy labview programban
    Harmadik: Logolni az adatokat egy CSV fájlban, és excelben nyomon követni
    Negyedik: SMTP email használatával, csatolmányt küldeni egy kijelölt címre
    Ötödik: Mindezek kombinálása, és a program véglegesítése

# 6. Követelmények
	Funkciónális követelmények
        - Képes legyen mozgást érzékelni
        - Az adatokat interneten keresztül emailben elküldeni
	Nem funkcinális követelmények:
		- Problémamentes működés
		- Felhasználóbarát 
		- Törvényi előírások, szabályok betartása

# 7. Funkcionális terv
	Szereplők:
		- Felhasználó
		- Programozó
	Rendszerhasználati esetek és lefutásaik:
		- Programozó
		- Email cím megadása, változtatása
		- Küldendési frekvenciák meghatározása
			- Hány percenként küldje
			- Észleléskor küldje
	Menü-hierarchiák:
		- Indítás
		- STOP
		- Adatleolvasások


# 8. Adatbázis terv
    Adatbázis terv elhanyagolható, adatokat tekintve csak a mozgás kezdetét logoljuk időpontjént. később ez fejleszthető pl távolság kiegészítésével.

# 10. Fizikai környezet
        - Mikrokontroller
        - Mozgásérzékelő szenzor
        - Relé
        - Számítógép

# 11. Architekturális tervezés:
	Az alkalmazás fő komponensei:
        - Arduino IDE
        - Labview
	

# 12. Biztonsági funkciók
    Fejleszést követel, egyelőre az email cím jelszava még nem rejtett

# 13. Tesztelés
	A tesztelések célja, hogy a termék megfeleljen minden korábban leírásra került rendszerspecifikációnak.
	
	12.2 Alfa teszt
	A teszt elsődleges célja: a már meglévő funkciók megfelelő illetve (szándékos) hibás adatokkal történő tesztelése. A tesztet a fejlesztők végzik.
	A teszt akkor mondható sikeresnek ha  a megfelelő adatbevitel után a megfelelő funkció áll rendelkezésre. 
	A hibás adatok bevitele után pedig a hiba lekezelése megtörténik.
	(A teszt időtartama ~egy hét.)

	12.3 Béta teszt
	Tesztet nem a fejlesztők végzik,  hanem meghatározott számú a fejlesztők által kiválasztott külső tesztelő.
	A teszt időtartama ~egy hét.
	A tesztelés alatt a tesztelők dokumentálják a lépéseket.
	A tesztek után a fejlesztők a lehető leghamarabb kijavítják az esetleges hibákat illetve a tesztelők észrevételei alapján módosításokat hajthatnak végre.

# 14. Telepítési terv
	Labivew runtime telepítése a PC-re
    Arduino IDE telepítése, ami képes felégetni a programot a mikrokontrollerre

# 15. Karbantartási terv
	Időszakonkénti karbantartása szükséges. Lehetőség lesz a githubon talált adatokon a megadott elérhetőségen panasszal, esetlegesen javaslatokkal élni a fejlesztők részére, amik javításra, fejlesztésre fognak kerülni. 


# 16. 🛠 Felhasznált eszközök
	- Arduino IDE
	- LABVIEW
	- Arduino UNO
	- Egy csatornás relé modul Arduinohoz
	- Mozgásérzékelő szenzo


# 18. Szerzők

	- Csík Ákos
	- Maró Melinda
	- Kenyeres Tamás
	- Schmidt Anikó

# 19. Visszajelzés

	Ha bármilyen észrevételed van a projekttel kapcsolatosan, kérünk vedd fel velünk a kapcsolatot az alábbi email címem:
	jkleasdf66@freemail.hu

