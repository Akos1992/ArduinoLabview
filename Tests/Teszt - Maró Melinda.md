# <div align="center">Tesztjegyzőkönyv - Maró Melinda </div>
<hr>

## Tesztelést végezte:

|               | Felhasználó   |
| --- | ------- |
| Név:          | Maró Melinda  |
| Neptun kód:   | WMZKJ0        |
| Dátum:        | 2023.06.20   |
| Szoftver:     | Labview Community 2023 x86  &    Labview 2022 x64       & Arduino IDE     
| OS            | Windows 10 Pro 21H2 Build: 19044.2364

<hr>

## 1.  Arudino UNO programozás
|Lépés| Feladat|  Mikor | OK/NOK | Határidő |
| --- | ------- | - | - | - |
| 1.    | Arduino UNO észlelése az IDE-n |    2023.06.20     |      ok     |           |           
| 2.    | Arduino UNO soros port kommunikáció ellenőrzése alap programmal (bemeneti feszültség olvasása) |     2023.06.20      |      ok     |           | 
| 3.    | Arduino UNO mozgásérzékelő rákötése után a megfelelő feszültségértékeket olvassa |     2023.06.20      |      ok     |           |        
| 4.    | Arduino UNO kimeneti portok működésének tesztelése |     2023.06.20      |      ok     |           |        
| 5.    | Arduino UNO relé modul kapcsol -e |     2023.06.20      |      ok     |           |        

<hr>

## 2. Labview - Arudino kapcsolat soros porton
|Lépés| Feladat|  Mikor | OK/NOK | Határidő |
| --- | ------- | - | - | - |
| 1.    | Komminikáció tesztelése |      2023.06.20      |      ok     |           |          
| 2.    | Eszköz észlelése után a bemeneti értékek kiiratása megvalósul?|    2023.06.20      |      ok     |           |            
| 3.    | Feltétel írása - Ha észlel az érzékelő, a labview képes feldolgozni, és képesek vagyunk összefüggéseket készíteni? |     2023.06.20      |      ok     |           | 


<hr>

## 3. Labview - Email kliens tesztelés
|Lépés| Feladat|  Mikor | OK/NOK | Határidő |
| --- | ------- | - | - | - |
| 1.    | Elérhető a projekthez dedikált email cím mindenkinek? |     2023.06.20      |      ok     |           |  
| 2.    | Az email szerver képest az SMTP kezelésére? |     2023.06.20      |      ok     |           |   
| 3.    | Egy szöveges üzenet kiköldése sikeresen megtörténik labview-n keresztül?  |     2023.06.20      |      ok     |           | 
| 4.    | Csatolmány küldése, megkapja a beállított email címre a felhasználó a logolt adatokat? |     2023.06.20      |      ok     |           |     



<hr>

## 4. Labview - Adatok mentése
|Lépés| Feladat|  Mikor | OK/NOK | Határidő |
| --- | ------- | - | - | - |
| 1.    | Képesek vagyunk egy bárki által könnyedén értelmezhető adatbázist létrehozni? |       2023.06.20      |      ok     |           | 
| 2.    | Excellel képesek vagyunk megnyitni a kívánt dokumentumot?|      2023.06.20      |      ok     |           |     
| 3.    | Működik a labview által készített önálló úgynevezettt SUB VI -ba előre stringként kezelt adatokat kimenteni?|        2023.06.20      |      ok     |           | 
| 4.    | A string változóba működik az időpont mentése, amikor a mozgás történt? |      2023.06.20      |      ok   |         | 
| 5.    | XLS fájl létrehozása sikeres? |      2023.06.20      |      NOK   |     |         | 
| 6.    | CSV fájl létrehozása sikeres? |      2023.06.20      |      OK   |      |         | 

        

<hr>

## 4. Teljes program tesztelése - Észleléskor küld emailt Branch
|Lépés| Feladat|  Mikor | OK/NOK | Határidő |
| --- | ------- | - | - | - |
| 1.    | Az összeépített SUB VI-k, műdkösée megfelelő? |       2023.06.20      |      ok     |           | 
| 2.    | A program visszajelez mikor érzékelést tapasztal a szenzor? |      2023.06.20      |      ok     |           |     
| 3.    | Megérkezik az email amikor észlelést érzékel? |        2023.06.20      |      ok     |           | 

<hr>

## 5. Teljes program tesztelése - Beállított időközönként küld információt
|Lépés| Feladat|  Mikor | OK/NOK | Határidő |
| --- | ------- | - | - | - |
| 1.    | Az összeépített SUB VI-k, műdkösée megfelelő? |       2023.06.20      |      ok     |           | 
| 2.    | A program visszajelez mikor érzékelést tapasztal a szenzor? |      2023.06.20      |      ok     |           |     
| 3.    | Megérkezik az email a beállított időpillanatokban? |        2023.06.20      |      ok     |           | 

<hr>
