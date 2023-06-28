# Követelményspecifikáció
# 1. Jelenlegi helyzet leírása
A biztonsági rendszerek fejlődése az informatika fejlődésével egyenes arányban növekszik. A II. világháború után még lakatok, zárak, biztonsági őrök, esetleg őrző kutyák játszották a főszerepet, majd jöttek a tűzjelző berendezések, rádiós jelzések, mágneskártyás beléptetők, távfelügyeletek, vezeték nélküli, internet alapú rendszerek. A nem is olyan távoli jövőben pedig a biometrikus azonosítás kibontakozásának lehetünk szemtanúi az objektumvédelem területén is: már nem csak a mobiltelefonon van lehetőség ujjlenyomattal és arcfelismeréssel feloldania billentyűzárat, hanem hamarosan a munkahelyünkre is biometrikus vizsgálattal léphetünk be.
    
# 2. Vágyálom rendszer leírása
A mozgásérzékelő rendszernek számos funkcionalitást kell biztosítania a felhasználók számára. Az alábbiakban felsorolok néhány fontos funkciót, amelyeket a követelményspecifikációba fel lehet venni:

- **Mozgásérzékelés**: A rendszernek képesnek kell lennie a mozgás észlelésére a környezetében. Ez magában foglalja az emberi mozgás, az állatok mozgása vagy más tárgyak mozgásának észlelését.

- **Automatizált vezérlés:** A rendszernek lehetővé kell tennie a felhasználók számára az automatizált vezérlést a mozgásérzékelés alapján. Ez magában foglalhatja például a világítás automatikus be- és kikapcsolását, a zárrendszer vezérlését vagy az otthoni biztonsági rendszer aktiválását.

- **Riasztás és értesítés:** A rendszernek képesnek kell lennie riasztások kibocsátására és értesítésekre, amikor mozgást észlel. Ez lehetővé teszi a felhasználók számára, hogy azonnal tudjanak a potenciálisan gyanús tevékenységekről vagy a kritikus helyzetekről.

- **Adatgyűjtés és elemzés:** A rendszernek képesnek kell lennie a mozgásérzékeléssel kapcsolatos adatok gyűjtésére és elemzésére. Ez segíti a felhasználókat a hosszú távú trendek és minták azonosításában, valamint a rendszer finomhangolásában és fejlesztésében.

- **Konfigurálhatóság:** A rendszernek lehetővé kell tennie a felhasználók számára a beállítások testreszabását és a rendszer konfigurálását. Ez magában foglalhatja a mozgás érzékelésének érzékenységét, a riasztás beállításait vagy a vezérlési preferenciákat.

- **Felhasználóbarát kezelőfelület:** A rendszernek rendelkeznie kell egy intuitív és felhasználóbarát kezelőfelülettel, amely lehetővé teszi a felhasználók számára a könnyű navigációt, beállítások módosítását és az adatok megtekintését.

- **Skálázhatóság és kompatibilitás:** A rendszernek képesnek kell lennie a skálázhatóságra, hogy különböző méretű környezetekben használható legyen, és több mozgásérzékelő eszközzel együttműködhessen. Emellett kompatibilisnak kell lennie más rendszerekkel és eszközökkel, például okos otthoni rendszerekkel vagy mobilalkalmazásokkal.

- **Biztonság és adatvédelem:** A rendszernek biztosítania kell a felhasználók személyes adatainak védelmét és a biztonságos adatkezelést. Az adatoknak titkosítottnak és hitelesítettnek kell lenniük, és az ügyfél hozzájárulásával kell kezelni őket.
A programot úgy tervezzük, hogy – ideális működése esetén – az alábbi funkciókat tartalmazza:
- Illetéktelen mozgás esetén jelzést adjon a felhasználónak
- Feszültségérték beállítása, hogy a berendezés mekkora érték felett jelezzen
- Mintavételi időzítő beállítása, hány milisecundumként vesz mintát
- E-mail értesítő küldése gyakoriságának beállítása

# 3. A rendszerre vonatkozó pályázat, törvények, rendeletek, szabványok és ajánlások felsorolása
Az alábbiakban néhány releváns jogszabály és szabvány, amelyek kapcsolódnak a mozgásérzékelők és biztonsági rendszerek használatához Magyarországon. Fontos azonban megjegyezni, hogy a jogszabályok és szabványok idővel változhatnak, ezért mindig érdemes ellenőrizni a legfrissebb verziókat és helyi előírásokat.

- Polgári Törvénykönyv (2013. évi V. törvény): A Polgári Törvénykönyv tartalmaz rendelkezéseket az ingatlanok tulajdonjogáról, valamint a biztonsági intézkedésekről és felelősségről.
- Országos Tűzvédelmi Szabályzat (OTSZ): Az OTSZ tartalmazza a tűzvédelemre vonatkozó előírásokat, ideértve a biztonsági rendszerek, például a tűzjelzők és riasztórendszerek telepítésével kapcsolatos követelményeket.
- Építési termékek forgalomba hozataláról és felhasználásáról szóló 2015. évi CCXXXV. törvény: Ez a törvény szabályozza az építési termékek forgalmazásával és felhasználásával kapcsolatos követelményeket és előírásokat.
- MSZ-EN szabványok: Az MSZ-EN (Magyar Szabvány - Európai Norma) szabványok relevánsak lehetnek a mozgásérzékelők és biztonsági rendszerek terén. Például az MSZ-EN 50131 sorozat a riasztórendszerek szabványai, amelyek a telepítési követelményeket és funkcionális jellemzőket határozzák meg.
- Adatvédelmi szabályozás: A személyes adatok védelmére vonatkozó jogszabályok, például az Európai Unió általános adatvédelmi rendelete (GDPR) és a magyarországi adatvédelmi törvények (pl. 2011. évi CXII. törvény) is fontosak a biztonsági rendszerek működése során kezelt adatok védelme szempontjából.

# 4. Jelenlegi üzleti folyamatok modellje.
Követelmény Specifikáció: Üzleti folyamatok modellje. Az üzleti modellünk alapja, hogy megismerkedjünk egy magyarországon még nem teljesen kialakult piaci rés kihasználásra. Megismerkedünk a szenzorokkal, azokk felhasználhatóságával. Programozási ismeretink kihasználva, saját és később a vevők személyes igényeinek kielégítése. Így nem egy bizonyos termékcsalád tagjait tudjuk ajánlani egy vásárlónak, hanem egyedi igényeit implementálhatjuk egy rendszerben. Az adatokat később szerveren rögzítjük, annak elérhetőségét, és vezérlését pedig VPN kapcsolattal megoldjuk a felhasználó részére.
A mozgásérzékelő rendszer célja egy olyan termék vagy szolgáltatás kialakítása és bevezetése, amely lehetővé teszi a mozgásérzékelés alapú automatizálást és ellenőrzést. A rendszernek a következő célokat kell szolgálnia:
- **Mozgásérzékelés:** A rendszernek képesnek kell lennie érzékelni a környezetében történő mozgást és pontosan azonosítani a mozgást.
- **Automatizálás:** A rendszernek lehetővé kell tennie az automatizált folyamatokat és tevékenységeket a mozgásérzékelés alapján. Ez magában foglalhatja például a világítás vagy az otthoni biztonsági rendszer vezérlését a mozgás észlelésekor.Esetünkben relé kapcsolása amit később felhasználhatunk bármilyen célre.
- **Riasztás és értesítés:** A rendszernek képesnek kell lennie riasztások kibocsátására és értesítésekre, amikor mozgást észlel. Ez lehetővé teszi a felhasználók számára, hogy azonnal tudjanak a kritikus helyzetekről vagy a potenciálisan gyanús tevékenységekről.
- **Adatgyűjtés és elemzés:** A rendszernek képesnek kell lennie a mozgásérzékeléssel kapcsolatos adatok gyűjtésére és elemzésére. Ez segíti a felhasználókat a hosszú távú trendek és minták azonosításában, valamint az automatizált rendszer finomhangolásában és fejlesztésében.
- **Felhasználóbarát kezelőfelület:** A rendszernek rendelkeznie kell egy felhasználóbarát kezelőfelülettel, amely lehetővé teszi a felhasználók számára a rendszer konfigurálását, a beállítások és preferenciák testre szabását, valamint az adatok megtekintését és elemzését.
- **Skálázhatóság és kompatibilitás:** A rendszernek képesnek kell lennie a skálázhatóságra, hogy különböző méretű környezetekben használható legyen, és több mozgásérzékelő eszközzel együttműködhessen. Emellett kompatibilisnek kell lennie más rendszerekkel és eszközökkel, például okos otthoni rendszerekkel vagy mobilalkalmazásokkal.
- **Üzleti modell fenntarthatóság:** A rendszer üzleti modelljének fenntarthatónak kell lennie hosszú távon. Ez magában foglalhatja a termék értékesítését, bérleti modellt vagy egyéb bevételi forrásokat, valamint a szerviz és támogatás hosszú távú biztosítását.
- **Ügyfélszolgálat és támogatás:** A rendszerhez megfelelő ügyfélszolgálati és támogatási csatornáknak kell rendelkezésre állniuk a felhasználók számára. Ez magában foglalhatja a technikai segítségnyújtást, az útmutatók és a dokumentáció biztosítását, valamint az esetleges hibák vagy problémák gyors és hatékony kezelését.

# 5. Követelménylista
- Műszaki ismeretek
    - Eszköz elhelyezése
    - akadálymentes látótér
    - zavarásmentes eszközelhelyezés
    - eszköz darabszámának meghatározása
- Igényes megjelenés, elhelyezés

# 6. Funkcionalitás
- Könnyű programozhatóság, kezelhetőség
    - Adat létrehozása
    - Admin képes meghatározni a mintavétel feltételeit
    - Adat továbbítás
    - Elektronikus üzenet a megjelölt személyek részére a feljegyzett interakciókról

# 7. Fogalomszótár
## 7.1 PIR (Passive Infra Red – passzív infravörös) mozgásérzékelő

A napjainkban használt mozgásérzékelők legnagyobb csoportját a passzív infravörös érzékelők adják. Népszerűségüket viszonylag olcsóságuknak, valamint széles felhasználási lehetőségeiknek köszönhetik.  Egy jól kiválasztott és megfelelően telepített mozgásérzékelő önmagában is képes egy teljes helyiség tér- és/vagy tárgyvédelmére.     
    
## 7.2 Arduino
      
Egy szabad szoftveres, nyílt forráskódú elektronikai fejlesztőplatform, arra tervezve, hogy a különböző projektekben az elektronikus eszközök könnyebben hozzáférhetőek, kezelhetőek legyenek. Széles tömegek számára elérhető, mivel olcsó, könnyen beszerezhető, egyszerűen programozható, és csatlakoztatható más eszközökhöz.

## 7.3 Labview

Grafikus programfejlesztő, amely elsősorban méréstechnikai és a hozzákapcsolódó jelfeldolgozási feladatok megoldására szolgál. A grafikus programozás egy látványos, látszólag könnyen követhető programozási módot jelent, amely a gyártó és forgalmazók véleménye szerint a hagyományos programnyelveket nem ismerőknek készült. Mivel a rendszer virtuális műszerezésre szolgál, így az elkészült forrásprogramok vi (virtual instrument) kiterjesztést kapnak.

## 7.4 Freemail
Talán a legismertebb magyarországi ingyenes e-mail szolgáltatás. 1996-ban indult, a Soros Alapítvány fejlesztette, de 1999-ben megvásárolta a T-Online. Rendkívül népszerű volt, és ma is több millió felhasználót szolgál ki, pedig az újabb, nemzetközi levelező-rendszerek nagyon erős versenyt okozott a piacon. A google letiltotta az SMTP alapú harmadik feles kommunikáció lehetőségét, ezért egy alternatív megoldást kellett találnunk, így választottuk a freemail.hu-t.

# 8. Telepítés
## 8.1 Arduino IDE
Ahhoz hogy a mekrovezérlőre feltölthessük a kívánt scriptet, szükséges az vezérlőhöz készített IDE eszköz letöltése, és annak telepítése.
A hivatalos oldalról mindig beszerezhető a legfrissebb változatt.
Link: https://www.arduino.cc/en/software
    
## 8.2 Labview
A PCs szoftverhez szükséges alapértelmezetten egy Labview keretprogram.
A program a National Instruments cég tulajdonában van, az ő oldalukról lehetséges a letöltése egy 45 napos teszt verziónak.
Ezzel a verzióval kipróbálhatjuk minden kiegészítőt amit valaha gyártottak a termékhez.
Ezen idő alatt telepítő fájl készíthető a forráskódból, amihez már csak egy Labview runtime szükséges, amit a telepítő készítő magába foglal.
Link: https://www.ni.com/hu-hu/support/downloads/software-products/download.labview.html

# 9. Képmetszetek
![Program design](https://i.imgur.com/YAAc5pf.png)

# 10. 🛠 Felhasznált eszközök
Labview, Arduino, freemail.hu

# 11. Szerzők
- Csík Ákos
- Kenyeres Tamás 
- Maró Melinda
- Schmidt Anikó

# 12. Visszajelzés
Ha bármilyen észrevételed van a projekttel kapcsolatosan, kérünk vedd fel velünk a kapcsolatot az alábbi email címem:
- asdfjkle6@gmail.com

