# 0. Követelményspecifikáció
Itt kerül meghatározásra a projektünkkel kapcsolatos elvárásaink megfogalmazása.

# 1. Jelenlegi helyzet leírása
A biztonsági rendszerek fejlődése az informatika fejlődésével egyenes arányban növekszik. A II. világháború után még lakatok, zárak, biztonsági őrök, esetleg őrző kutyák játszották a főszerepet, majd jöttek a tűzjelző berendezések, rádiós jelzések, mágneskártyás beléptetők, távfelügyeletek, vezeték nélküli, internet alapú rendszerek. A nem is olyan távoli jövőben pedig a biometrikus azonosítás kibontakozásának lehetünk szemtanúi az objektumvédelem területén is: már nem csak a mobiltelefonon van lehetőség ujjlenyomattal és arcfelismeréssel feloldania billentyűzárat, hanem hamarosan a munkahelyünkre is biometrikus vizsgálattal léphetünk be.
    
# 2. Vágyálom rendszer leírása
A programot úgy tervezzük, hogy – ideális működése esetén – az alábbi funkciókat tartalmazza:
- Illetéktelen mozgás esetén jelzést adjon a felhasználónak
- Feszültségérték beállítása, hogy a berendezés mekkora érték felett jelezzen
- Mintavételi időzítő beállítása, hány milisecundumként vesz mintát
- E-mail értesítő küldése gyakoriságának beállítása

# 3. A rendszerre vonatkozó pályázat, törvények, rendeletek, szabványok és ajánlások felsorolása
- Jogszabályi háttér
- Szabványok
- Adatkezelési tájékoztató
- Általános Szerződési Feltételek (ÁSZF)

# 4. Jelenlegi üzleti folyamatok modellje.
    A jelenlegi üzleti modell nem kerül módosításra.

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
    7.1 PIR (Passive Infra Red – passzív infravörös) mozgásérzékelő

        A napjainkban használt mozgásérzékelők legnagyobb csoportját a passzív infravörös érzékelők adják. Népszerűségüket viszonylag olcsóságuknak, valamint széles felhasználási lehetőségeiknek köszönhetik.  Egy jól kiválasztott és megfelelően telepített mozgásérzékelő önmagában is képes egy teljes helyiség tér- és/vagy tárgyvédelmére.     
    
    7.2 Arduino
        
        Egy szabad szoftveres, nyílt forráskódú elektronikai fejlesztőplatform, arra tervezve, hogy a különböző projektekben az elektronikus eszközök könnyebben hozzáférhetőek, kezelhetőek legyenek. Széles tömegek számára elérhető, mivel olcsó, könnyen beszerezhető, egyszerűen programozható, és csatlakoztatható más eszközökhöz.

    7.3 Labview

        Grafikus programfejlesztő, amely elsősorban méréstechnikai és a hozzákapcsolódó jelfeldolgozási feladatok megoldására szolgál. A grafikus programozás egy látványos, látszólag könnyen követhető programozási módot jelent, amely a gyártó és forgalmazók véleménye szerint a hagyományos programnyelveket nem ismerőknek készült. Mivel a rendszer virtuális műszerezésre szolgál, így az elkészült forrásprogramok vi (virtual instrument) kiterjesztést kapnak.

    7.4 Freemail
       
        Talán a legismertebb magyarországi ingyenes e-mail szolgáltatás. 1996-ban indult, a Soros Alapítvány fejlesztette, de 1999-ben megvásárolta a T-Online. Rendkívül népszerű volt, és ma is több millió felhasználót szolgál ki, pedig az újabb, nemzetközi levelező-rendszerek nagyon erős versenyt okozott a piacon. A google letiltotta az SMTP alapú harmadik feles kommunikáció lehetőségét, ezért egy alternatív megoldást kellett találnunk, így választottuk a freemail.hu-t.

# 8. Telepítés
    8.1 Arduino IDE
        Ahhoz hogy a mekrovezérlőre feltölthessük a kívánt scriptet, szükséges az vezérlőhöz készített IDE eszköz letöltése, és annak telepítése.
        A hivatalos oldalról mindig beszerezhető a legfrissebb változatt.
        Link: https://www.arduino.cc/en/software
    
    8.2 Labview
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
    asdfjkle6@gmail.com

