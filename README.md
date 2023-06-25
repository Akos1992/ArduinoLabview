Alkalmazások fejlesztése projektlabor II. Beadandó Projekt

Ez a github oldal a Eszterházy Károly Katolikus Egyetem Programtervező Informatikus képzésében kerül elkészítésre. 

## 1. Elvárások
A projekttel kapcsolatban az elvárás, hogy a 2022/2023-as tanév első félévében elkezdett együttműködést a csapatunkban immáron készségszintre fejlesszük; illetve a csapat számára még kevésbé ismert technológiá(ka)t használva alkossunk egy olyan projektet, amely – még akár egy emberöltővel ezelőtt is csak a sci-fi írók fantazmagóriája volt, mára azonban - a mindennapok valóságává válik.
Ennek a projektnek a megvalósítása megkövetelte számunkra még új programozási nyelvek elsajátítását, és ezzel sikerült bővítenünk tudásunk – egyelőre még szerényen telített – tárházát. 

## 2. Projekt
A szóban forgó projektet négy fős csapatunk alkotta meg egy senior egyetemi társunk támogatásával. 
A projekt célja egy PIR (Passive Infra Red), vagyis passziv infravörös mozgásérzékelő szenzor létrehozása, amely nem pusztán a mozgást érzékeli, hanem a hőmérsékletet és annak változását is. Azért választottuk a mozgásérzékelőt projektünk tárgyává, mivel – a mechanikai védelmet leszámítva – elsődleges szerepe van a biztonságtechnikában.

![r_infra_szoba](https://github.com/Akos1992/ArduinoLabview/assets/33879457/e0af9a1b-717b-432d-a2fd-3dbc8b93ebc9)

Elképzelésünk az Arduino Uno-n, a „hobbielektronikások” kedvenc vezérlőjén alapul, melynek legfőbb tulajdonsága a vezérlésekhez történő egyszerű programozhatóság, valamint számos leírás található hozzá az interneten, továbbá könnyen hozzáilleszthetők különböző típusú szenzor kitek is.
A kapcsolat monitorozásához a Labview-t vesszük igénybe, amelynek segítségével nemcsak bonyolult programok rövid idő alatt történő megírása lehetséges, hanem rendkívül népszerű a gépész- és villamosmérnöki területen.
A jelzés soros porton érkezik a számítógépre, amit a Labview-val dolgozunk fel. Az Arduino Uno-ban úgy írjuk meg a programot, hogy az HIGH (3,3 V) vagy LOW (0 V) feszültségértéket vizsgáljon. Ezt az értékinformációt alakítjuk át a Labview-ban IGAZ/HAMIS értékké. Ha az érték „IGAZ”, akkor azt rögzítjük egy excelben, majd az összegyűjtött adatokat óránként elküldjük saját magunknak, a projektgazdáknak egy SMTP szerveren keresztül, hogy bárhol megnyitható legyen.
A dedikált e-mail címet a freemail.hu levelezőrendszer szolgáltatónál hozzuk létre mivel a népszerű gmail.com ezen szolgáltatása 2022-ben megszűnt.

Branch-ben kezeljük a különálló VI (Labview) projektet:
* Email kezelés
* Excel logolás
* Serial soros port adat olvasás
Majd ezeket egy egységes egészbe foglaljuk.

## 3. Határidők ⏳
A végleges befejezés határideje 2023. június 25. 

## 4. Felhasznált eszközök 🛠
Arduino, Labview, Freemail

## 5. Szerzők 📗
- Csík Ákos
- Kenyeres Tamás
- Maró Melinda
- Schmidt Anikó

## 6. Visszajelzés 📧
Ha bármilyen kérdésed, észrevételed vagy építő jellegű kritikád van a projekttel kapcsolatban, írj a csapatunknak az asdfjkle6@gmail.com e-mail címre.


