// [number of languages][number of texts][max. length of text]

const char myLanguage[4][46][60] = {
  { "English",
    "Rotary direction changed",
    "Please release button",
    "Screen flipped",
    "Calibrate analog meter",
    "Release button when ready",
    "encoder set to optical",
    "encoder set to standard",
    "FM/AM receiver",
    "Tuner: !None!",
    "Volume:",
    "Converter:",
    "Low band edge:",
    "High band edge:",
    "RF Level offset:",
    "Stereo threshold:",
    "High Cut corner:",
    "Highcut threshold:",
    "Low level threshold:",
    "Contrast:",
    "Set volume",
    "Set converter offset",
    "Set low band edge",
    "Set high band edge",
    "Set level offset",
    "Set Stereo sep. threshold",
    "Set high cut corner frequency",
    "Set High cut threshold",
    "Set low level threshold",
    "Set Display brightness",
    "Off",
    "Screen is muted!",
    "To unmute uncheck RF+ box",
    "OFF",
    "SCANNING...",
    "Tuner not detected",
    "Tuner version set: v",
    "Please restart tuner",
    "Show RDS errors",
    "Language",
    "Choose language",
    "PRESS MODE TO EXIT AND STORE",
	"On",
	"Softmute FM",
	"Softmute AM",
	"Beep at band edge"
  },
  
  { "Nederlands",
    "Rotary richting aangepast",
    "Laat aub de knop los",
    "Scherm gedraaid",
    "Kalibratie analoge meter",
    "Laat knop los indien gereed",
    "encoder ingesteld als optisch",
    "encoder ingesteld als standaard",
    "FM/AM ontvanger",
    "Tuner: !Geen!",
    "Volume:",
    "Converter:",
    "Lage bandgrens:",
    "Hoge bandgrens:",
    "RF niveau afwijking:",
    "Stereo grens:",
    "Hoge tonen afval:",
    "Hoog afval grens:",
    "Laag signaal grens:",
    "Helderheid:",
    "Stel volume in",
    "Stel converter afwijking in",
    "Stel ondergrens in",
    "Stel bovengrens in",
    "Stel signaal afwijking in",
    "Stel stereo grens in ",
    "Stel hoge tonen afval in",
    "Stel hoge tonen grens in",
    "Stel laag signaal grens in",
    "Stel helderheid in",
    "Uit",
    "Scherm is bevroren!",
    "Schakel RF+ uit om weer te activeren",
    "UIT",
    "ZOEKEN...",
    "Tuner niet herkend!",
    "Tuner versie ingesteld: v",
    "Herstart de tuner",
    "Toon RDS fouten",
    "Taal",
    "Kies taal",
    "DRUK OP MODE OM AF TE SLUITEN",
	"Aan",
	"Ruisonderdrukking FM",
	"Ruisonderdrukking AM",
	"Piep op bandeinde"
  },
  { "Polski", 
   "Kierunek obrotu zmieniony", 
   "Zwolnij przycisk", 
   "Obrocono ekran", 
   "Kalibracja analogowego miernika", 
   "Zwolnij przycisk gdy gotowe", 
   "wybrano enkoder optyczny", 
   "wybrano standardowy enkoder", 
   "Odbiornik FM/AM", 
   "Tuner: !Brak!", 
   "Glosnosc:", 
   "Konwerter:", 
   "Dolna granica pasma:", 
   "Gorna granica pasma:", 
   "Odchylenie poziomu RF:", 
   "Prog Stereo:", 
   "Krawedz dolnoprzep..:", 
   "Prog dolnoprzepust.:", 
   "Prog niskiego sygnalu:", 
   "Kontrast:", 
   "Ustaw glosnosc", 
   "Ustaw odchylenie konwertera", 
   "Ustaw dolna granice pasma", 
   "Ustaw gorna granice pasma", 
   "Ustaw odchylenie sygnalu", 
   "Ustaw prog separacji Stereo", 
   "Czest. gran. filtra dolnoprzep.", 
   "Ustaw prog dolnoprzep.", 
   "Ustaw dolna granice sygnalu", 
   "Ustaw jasnosc wyswietlacza", 
   "Wyl.", 
   "Ekran jest wyciszony!", 
   "Aby wyl. wyciszenie odznacz RF+", 
   "WYL.", 
   "SKANOWANIE...", 
   "Nie wykryto tunera", 
   "Ustawiono wersje tunera: v", 
   "Prosze uruchomic pon. tuner", 
   "Pokaz bledy RDS", 
   "Jezyk", 
   "Wybierz swoj jezyk",
   "WCISNIJ MODE ABY ZAMKNAC I ZAPISAC",
   "On", 										// Needs translation!
   "Softmute FM",								// Needs translation!
   "Softmute AM", 								// Needs translation!
   "Beep at band edge"							// Needs translation!
   },
   
   {"Hrvatski",
  "Smjer rotacijskog enkodera promijenjen",
  "Molim pustite gumb",
  "Zaslon je okrenut",
  "Kalibracija analognog mjerača",
  "Pustite gumb",
  "Optički enkoder postavljen",
  "Standardni enkoder postavljen",
  "FM/AM prijemnik",
  "Prijemnik: !Nije pronađen!",
  "Glasnoća:",
  "Konverter:",
  "Donja granica opsega:",
  "Gornja granica opsega:",
  "Pomak RF razine:",
  "Prag za stereo:",
  "Visoki rez (corner):",
  "Prag za visoki rez (threshold):",
  "Niski prag razine:",
  "Kontrast:",
  "Postavite glasnoću",
  "Postavite pomak konvertera",
  "Postavite donju granicu opsega",
  "Postavite gornju granicu opsega",
  "Postavite pomak signala",
  "Postavite prag stereo razdvajanja",
  "Postavite frekvenciju visokog reza",
  "Postavite prag za visoki rez",
  "Postavite donju granicu signala",
  "Postavite svjetlinu zaslona",
  "Isključeno",
  "Zaslon je isključen!",
  "Da biste uključili zaslon, poništite kvadratić RF+",
  "ISKLJ.",
  "SKENIRANJE...",
  "Prijemnik nije pronađen",
  "Postavljena verzija prijemnika: v",
  "Molim, ponovno pokrenite prijemnik",
  "Prikaži RDS pogreške",
  "Jezik",
  "Odaberite jezik",
  "PRITISNITE MODE ZA IZLAZ I SPREMANJE",
  "Uklj.",
  "Softmute FM",
  "Softmute AM",
  "Beep at band edge"
   }
};