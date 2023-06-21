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
	Projektfelelősök:
		- Labview Email : 	
				Maró Melinda
				Csík Ákos
				Schmidt Anikó
				Kenyeres Tamás

		- Labview Adatbázis: 	
				Schmidt Anikó 
				Maró Melinda
				Kenyeres Tamás
				Csík Ákos

		- Teszt 	
				Kenyeres Tamás
				Schmidt Anikó
				Csík Ákos
				Maró Melinda

		- Arduino UNO programozás + Soros port kommunikáció:	
				Csík Ákos
				Kenyeres Tamás
				Maró Melinda
				Schmidt Anikó
	Minden részlegnél az első megnevezett személy a fő felelős, a többiek támogató szerepkört vesznek fel.      

# 4. Ütemterv
	Ütemterv szerint, minden héten kettő alkalommal csoportmegbeszélés létrehozása online meeting keretében a Microsoft Teams program segítségével.
	Minden alkalommal megbeszélésre kerülnek az alábbi témakörök:
		- Mit csináltam a legutóbbi meeting óta
		- Mit fogok csinálni a következő meetingig
		- Milyen akadályba ütköztem
	Feladatok átbeszélése közben a Trello oldalán kártyákat hozunk létre a feladatokról, azokat menedzseljük. 
	A kész verziót Júniusi vizsgaidőszakban nyújtuk bemutatásra. 

# 5. Mérföldkövek
	Több mérföldkő szerepel terveink között. Első mindenképp a specifikációk létrehozása. Ennek a mérföldkő lezárása 2022.11.20.
	Ezzel egy időben a frontend kezelhető verziójának létrehozása is cél. Amit folyamatos tesztelés és csiszolgatás követ a projekt lezárásáig.
	Ha már közel használható frontend verzióval rendelkezünk, elkezdődik az adatbázis létrehozása.
	Adatbázis létrehozása közben szerencsénk van tesztelés végett már rendelkezésre álló hírportálok dokumentumait felhasználni. Természetesen ezek törlésre kerülnek a weboldal indulásakor.
	Ha az adatbázis tartalmaz adatokat, akkor Node.JS-ben a kapcsolatok létrehozására kerül sor. 
	Terveink közt szerpeel, hogy a 2022.December hónapjának végétől csak tesztelés fog történni.

# 6. Követelmények
	Funkciónális követelmények
		- Admin rögzítés
		- Admin módosítás
		- Felhasználó rögzítés
		- Felhasználó módosítás
		- Hír létrehozás
		- Hír szerkesztés
	Nem funkcinális követelmények:
		- Problémamentes működés
		- Felhasználóbarát 
		- Reszponzív
		- Törvényi előírások, szabályok betartása

# 7. Funkcionális terv
	Szereplők:
		- Admin / Szerkesztő
		- Olvasó (bejelentkezés nélkül)
	Rendszerhasználati esetek és lefutásaik:
		-Admin
			- Cikk létrehozás, szerkesztés
		-Olvasó
			- Cikk olvasás
	Menü-hierarchiák:
		- Kezdőlap
		- Bemutatkozás
		- Kapcsolat
		- Kategóriák
		- Adatvédelmi irányelvek

# 8. Adatbázis terv
	Az adatbázis elérhető az alábbi github oldalon:
		https://github.com/Akos1992/Hiroldal_2022_01/tree/main/Database

	Híroldal cikkei: adatbázisba szervezve (sqlite)
	A cikkek tematikusan csoportosítva (kategóriák)
	Adminok bejelentkezési adatai is az adatbázisban tárolódnak

      - USER tábla
         - userID INTEGER PRIMARY KEY UNIQUE
         - userNev TEXT (40)
         - email TEXT (40)
         - pword TEXT (4)
         - regDatum DATETIME

	Az ÁSZF oszlop segítségével jogilag igazolva van a hatóság felé, hogy a felhasználó elfogadta az 
	ÁSZF-et a regisztfáció során, vagyis többek közt a weboldal és webshop felhasználási feltételeit.

      - KATEGORIA tábla
         - katID INTEGER PRIMARY KEY UNIQUE
         - katNev TEÍXT (40)

      - CIKKEK tábla:
         - cikkID INTEGER PRIMARY KEY UNIQUE
         - cikkCim TEXT (100)
         - cikkLead TEXT (500)
         - cikkTorzs TEXT (4000)
         - cikkSzerzo TEXT (40)
         - cikkDate DATETIME
         - vezetoHir BOOLEAN DEFAULT FALSE
         - katID INTEGER FOREIGN KEY
         - Megkötések a táblához: a CIKKEK tábla katID-ja idegen kulcs, N:1 kapcsolatban van a KATEGORIA tábla katID-jával 

	Megkötések a táblához:
 	A KATEGORIA tábla katID attributuma, mint elsődleges kulcs 1:N 
    Lentebb megtalálható képmetszetek menüpontben az adatbázishoz tartozó egyed-kapcsolat ábra.

# 9. Backend végpontok(API leíró):

    - /news
	    - GET / - minden hírt visszaad
	    - GET /:id - az adott id-jú hírt adja vissza
	    - GET ?category=:id - adott kategóriájú híreket ad vissza
	    - POST ?newsData={newsObject} - új hír hozzáadása vagy szerkesztése
	    - DELETE /:id - az adott id-jú hírt törli
	    - PUT legyen a szerkesztésre külön?
	
    - /categories
	    - GET / - minden kategóriát visszaad
	
    - /auth
	    - POST / - adott felhasználónév és jelszó alapján bejelentkezik(csak adminok)



# 10. Fizikai környezet
	A webes hírportál jelenelg elérhető bármilyen eszközről ami képes letölteni a github oldalról a forrást

# 11. Architekturális tervezés:
	Az alkalmaos fő komponensei:
		- Frontend
		- Backend
		- Adatbázis
	Kapcsolatok:
		- Frontend: a felhasználók által elérhető felület kialakítása
		- Backend: A frontend kiszolgálás adatokkal
		- Adatbázis: SQL szerver létrehozása Backend kiszolgálási adatokkal

# 12. Biztonsági funkciók
	Az oldal biztonságossá tétele érdekében a hírek szerkesztése, létrehozása regisztrációhoz kötött.
	Amit hitelesítési eljárás következtében adható meg, egy tervező általi hozzárendelt kapcsolattal.

# 13. Tesztelés
	A tesztelések célja, hogy a termék megfeleljen minden korábban leírásra került rendszerspecifikációnak.
	
	12.1 Unit teszt
	Már a fejlesztési idő alatt is folyamatosan tesztelés történik, hogy a kódok, kódrészletek megfelelően működnek-e.
	Egy kódot vagy annak részletét csak akkor tekinthetünk késznek, ha a tesztesetek hiba nélkül lefutnak.


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
	Telepíteni nem szükséges. Egy böngészőre van szüksége a felhasználónak. Elérhető lesz a www.johirportal.hu weboldalon

# 15. Karbantartási terv
	A weboldal és az adatbázis tábláinak időszakonkénti karbantartása szükséges. Lehetőség lesz a kapcsolatok oldalon a megadott elérhetőségen panasszal, esetlegesen javaslatokkal élni
	a fejleszték részére, amik javításra, fejlesztésre fognak kerülni. 




# 16. 🛠 Felhasznált eszközök
	Javascript, HTML, CSS, Bootsrap, Node.js, MYSQL Workbench, SQLite

# 17. Képmetszetek

	Adatbázis kapcsolat diagram:
	![Kapcsolat diagram](https://i.imgur.com/eIJG3nA.png)


# 18. Szerzők

	- Csík Ákos
	- Maró Melinda
	- Kenyeres Tamás
	- Schmidt Anikó
# 19. Visszajelzés

	Ha bármilyen észrevételed van a projekttel kapcsolatosan, kérünk vedd fel velünk a kapcsolatot az alábbi email címem:
	johirportal@portalok.hu

