# 1. Áttekintés

Az általunk meghatározott cél lényege, hogy egy soros porton számítógéppel kommunikáló PIR LED érzékelőt, vagyis egy olyan biztonsági eszközt hozzunk létre, amely szinte vizuálisan észrevehetetlen, de pontosan érzékeli egy objektumba történő belépés vagy kilépés eseményét, és az erről összegyűjtött információhalmazt továbbítja a felhasználók részére elektronikus úton. Ehhez szükséges eszközök az Arduino UNO mikrovezérlő, és egy általános felhasználásó számítógép lesz. Ehhez szükséges kevés  programozási ismeret, főleg az Arduinohoz. Ehhez sok oktatási anyagot megtalálhatunk az intereneten. Emellett a LAbview nem egy szokványos programozási eszköz. Grafikusan kell programozni. Ennek használata pofonegyszerű. Sok helyen már általános iskolában is használják a gyerekek programozás megszerettetésére. Ehhez a LEGO által gyártott Minstorm különböző elemekből akár csak egy lego összeállított robotjának programozására használják.

# 2. Jelenlegi helyzet leírása

A biztonsági rendszerek fejlődése az informatika fejlődésével egyenes arányban növekszik. A II. világháború után még lakatok, zárak, biztonsági őrök, esetleg őrző kutyák játszották a főszerepet, majd jöttek a tűzjelző berendezések, rádiós jelzések, mágneskártyás beléptetők, távfelügyeletek, vezeték nélküli, internet alapú rendszerek. A nem is olyan távoli jövőben pedig a biometrikus azonosítás kibontakozásának lehetünk szemtanúi az objektumvédelem területén is: már nem csak a mobiltelefonon van lehetőség ujjlenyomattal és arcfelismeréssel feloldania billentyűzárat, hanem hamarosan a munkahelyünkre is biometrikus vizsgálattal léphetünk be.
Alapértelmezetten úgy vesszük mint egy teljesen buta otthont szeretnénk átalakítani okosotthonná. Ha azt nézzük mivel érdemes elkezdeni az okosítást, hamar szembe fog jönni velünk a mozgásérzékelés. Ha a boltok polcain szétnézünk, körül-belül 10 ezer forinttól kezdődnek az olcsóbb érzékelők, amit bele lehet integrálni különböző okosotthon szerverekhez. Ennek tükrében, a mi általunk létrehozott eszköz, egy 1000 Ft-os mozgásérzékelő, illetve egy 2-3 ezer forintos mikrovezérlő lesz segítségünkre. Funkcióját tekintve ugyanaz, viszont jócskán spórolni tudunk, mivel egy egyszerű 3 szobás+nappali+fürdős 100-120nm-es s lakás esetén akár 8-10 érzékelőről is beszélhetünk, a különbözetet felszorozva a eszközök számával, könnyedén észrevehető, hogy akár súlyos 10 ezer forintokat is meg tudunk spórolni.

# 3. Vágyálom rendszer
   
A programot úgy tervezzük, hogy – ideális működése esetén – az alábbi funkciókat tartalmazza:
-   Illetéktelen mozgás esetén jelzést adjon a felhasználónak
-   Feszültségérték beállítása, hogy a berendezés mekkora érték felett jelezzen
-   Mintavételi időzítő beállítása, hány milisecundumként vesz mintát
-   E-mail értesítő küldése gyakoriságának beállítása

Egy stabil, általunk létrehozott okosotthon kezdetleges eszközrendszerének első szenzorainak létrehozása. Későbbiekben kiegészíthető a projekt több érzékelővel. Csak egy Arduino UNI eszközön 6 db analóg bemenet található, ez azt jelenti, hogy portjára köthetünk 1-1 érzékelőt. Akár egy vezérlő szabályozhat 1 bizonyos szenzorcsoportot, pl.: mozgásérzékelők. Egy másik mikrokontroller pedig gyűjtheti a hőmérséklet-páratartalom adatokat a különböző szobákból. Mivel a digitális portjait nem is használtuk még; akár egy fűtés vezérlésére is felhasználjuk annak függvényébe, hogy a 6 érzékelőnek az átlag hőmérsékletét vesszük alapul és annak függvényébe vezéreljük a fűtést.
Egy másik eszköz gyűjtheti a fényérzékelést, és a digitális portjai vezérelhetik a árnyékolástechnikát, mert a kábeles adatkommunikáció mindig is megbízhatóbb volt mint a vezeték nélküli. Érdemes a gépész szobába egy felhelyezett kapcsolószekrénybe gyűjteni a vezérlésekhez szükséges mikrovezérlőt. Az iparban az ilyen automatizációkra PLC-t (Programozható Logikai Vezérlő) használnak. Viszont azok összegei is kiindulva a felhasználásukat, nagyon drága lehet egy átlagos családnak.
    
# 4. Követelménylista
- Műszaki ismeretek
    - Eszköz elhelyezése
        - akadálymentes látótér
        - zavarásmentes eszközelhelyezés
        - eszköz darabszámának meghatározása
        - Igényes megjelenés, elhelyezés

    - Funkcionalitás
    - Könnyű programozhatóság, kezelhetőség
        - Adat létrehozása
        - Admin képes meghatározni a mintavétel feltételeit
        - Adat továbbítás
        - Elektronikus üzenet a megjelölt személyek részére a feljegyzett interakciókról

# 5. Fogalomszótár

**PIR (Passive Infra Red – passzív infravörös) mozgásérzékelő**

A napjainkban használt mozgásérzékelők legnagyobb csoportját a passzív infravörös érzékelők adják. Népszerűségüket viszonylag olcsóságuknak, valamint széles felhasználási lehetőségeiknek köszönhetik.  Egy jól kiválasztott és megfelelően telepített mozgásérzékelő önmagában is képes egy teljes helyiség tér- és/vagy tárgyvédelmére.     
    
**Mikrokontroller (Mikrovezérlő)**

A mikrokontroller egyetlen áramköri lapra szerelt, többnyire vezérlési feladatokat ellátó speciális számítógép; mikroprocesszor integrált perifériákkal kiegészítve. Többféle összeköttetés lehetséges, legtöbbjük képes soros porton való kommunikációra, elektromos áram input/output illetve feszültségszint kezelésére.

**Arduino**
        
Egy szabad szoftveres, nyílt forráskódú elektronikai fejlesztőplatform, arra tervezve, hogy a különböző projektekben az elektronikus eszközök könnyebben hozzáférhetőek, kezelhetőek legyenek. Széles tömegek számára elérhető, mivel olcsó, könnyen beszerezhető, egyszerűen programozható, és csatlakoztatható más eszközökhöz.

**Labview**

Grafikus programfejlesztő, amely elsősorban méréstechnikai és a hozzákapcsolódó jelfeldolgozási feladatok megoldására szolgál. A grafikus programozás egy látványos, látszólag könnyen követhető programozási módot jelent, amely a gyártó és forgalmazók véleménye szerint a hagyományos programnyelveket nem ismerőknek készült. Mivel a rendszer virtuális műszerezésre szolgál, így az elkészült forrásprogramok vi (virtual instrument) kiterjesztést kapnak.

**Freemail**
       
Talán a legismertebb magyarországi ingyenes e-mail szolgáltatás. 1996-ban indult, a Soros Alapítvány fejlesztette, de 1999-ben megvásárolta a T-Online. Rendkívül népszerű volt, és ma is több millió felhasználót szolgál ki, pedig az újabb, nemzetközi levelező-rendszerek nagyon erős versenyt okozott a piacon. A google letiltotta az SMTP alapú harmadik feles kommunikáció lehetőségét, ezért egy alternatív megoldást kellett találnunk, így választottuk a freemail.hu-t.  

**PLC (Programmable Logic Controller)**
Programozható Logikai Vezérlő. Az ipari szabályozástechnikában, az elektromosan működtetett folyamatok irányítására használt berendezés. Folyamatirányító számítógepekhez hasonlóan működik, többféleképpen programozható:
- áramutas módszer
- Boole-algebra
- PLC programnyelv


        
# 6. Használati esetek

- feszültségérték beállítása 
- mintavételi intervallum beállítása
- e-mail küldés gyakoriságának beállítása

# 7. Felhasznált eszközök 🛠

Labview, Arduino, freemail.hu

# 8. Szerzők 📗

- Maró Melinda
- Csík Ákos
- Schmidt Anikó
- Kenyeres Tamás

# 9. Visszajelzés 📧

Ha bármilyen kérdésed, észrevételed vagy építő jellegű kritikád van a projekttel kapcsolatban, írj a csapatunknak az asdfjkle6@gmail.com e-mail címre.

