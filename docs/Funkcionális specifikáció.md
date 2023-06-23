# 1. Áttekintés

Az általunk meghatározott cél lényege, hogy egy soros porton számítógéppel kommunikáló PIR LED érzékelőt, vagyis egy olyan biztonsági eszközt hozzunk létre, amely szinte vizuálisan észrevehetetlen, de pontosan érzékeli egy objektumba történő belépés vagy kilépés eseményét, és az erről összegyűjtött információhalmazt továbbítja a felhasználók részére elektronikus úton.

# 2. Jelenlegi helyzet leírása

A biztonsági rendszerek fejlődése az informatika fejlődésével egyenes arányban növekszik. A II. világháború után még lakatok, zárak, biztonsági őrök, esetleg őrző kutyák játszották a főszerepet, majd jöttek a tűzjelző berendezések, rádiós jelzések, mágneskártyás beléptetők, távfelügyeletek, vezeték nélküli, internet alapú rendszerek. A nem is olyan távoli jövőben pedig a biometrikus azonosítás kibontakozásának lehetünk szemtanúi az objektumvédelem területén is: már nem csak a mobiltelefonon van lehetőség ujjlenyomattal és arcfelismeréssel feloldania billentyűzárat, hanem hamarosan a munkahelyünkre is biometrikus vizsgálattal léphetünk be.

# 3. Vágyálom rendszer
   
A programot úgy tervezzük, hogy – ideális működése esetén – az alábbi funkciókat tartalmazza:
-   Illetéktelen mozgás esetén jelzést adjon a felhasználónak
-   Feszültségérték beállítása, hogy a berendezés mekkora érték felett jelezzen
-   Mintavételi időzítő beállítása, hány milisecundumként vesz mintát
-   E-mail értesítő küldése gyakoriságának beállítása
    
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
    5.1 PIR (Passive Infra Red – passzív infravörös) mozgásérzékelő

        A napjainkban használt mozgásérzékelők legnagyobb csoportját a passzív infravörös érzékelők adják. Népszerűségüket viszonylag olcsóságuknak, valamint széles felhasználási lehetőségeiknek köszönhetik.  Egy jól kiválasztott és megfelelően telepített mozgásérzékelő önmagában is képes egy teljes helyiség tér- és/vagy tárgyvédelmére.     
    
    5.2 Arduino
        
        Egy szabad szoftveres, nyílt forráskódú elektronikai fejlesztőplatform, arra tervezve, hogy a különböző projektekben az elektronikus eszközök könnyebben hozzáférhetőek, kezelhetőek legyenek. Széles tömegek számára elérhető, mivel olcsó, könnyen beszerezhető, egyszerűen programozható, és csatlakoztatható más eszközökhöz.

    5.3 Labview

        Grafikus programfejlesztő, amely elsősorban méréstechnikai és a hozzákapcsolódó jelfeldolgozási feladatok megoldására szolgál. A grafikus programozás egy látványos, látszólag könnyen követhető programozási módot jelent, amely a gyártó és forgalmazók véleménye szerint a hagyományos programnyelveket nem ismerőknek készült. Mivel a rendszer virtuális műszerezésre szolgál, így az elkészült forrásprogramok vi (virtual instrument) kiterjesztést kapnak.

    5.4 Freemail
       
        Talán a legismertebb magyarországi ingyenes e-mail szolgáltatás. 1996-ban indult, a Soros Alapítvány fejlesztette, de 1999-ben megvásárolta a T-Online. Rendkívül népszerű volt, és ma is több millió felhasználót szolgál ki, pedig az újabb, nemzetközi levelező-rendszerek nagyon erős versenyt okozott a piacon. A google letiltotta az SMTP alapú harmadik feles kommunikáció lehetőségét, ezért egy alternatív megoldást kellett találnunk, így választottuk a freemail.hu-t.  
        
# 6. Használati esetek
        - feszültségérték beállítása 
        - mintavételi intervallum beállítása
        - e-mail küldés gyakoriságának beállítása

# 7. 🛠 Felhasznált eszközök

Labview, Arduino, freemail.hu

# 8. Szerzők

- Maró Melinda
- Csík Ákos
- Schmidt Anikó
- Kenyeres Tamás

# 9. Visszajelzés

Ha bármilyen kérdésed, észrevételed vagy építő jellegű kritikád van a projekttel kapcsolatban, írj a csapatunknak az asdfjkle6@gmail.com e-mail címre.

