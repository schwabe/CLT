/**
 * Events.h
 * Instanzierung jährlicher Events
 *
 * @mc       Arduino/UNO
 * @autor    Manuel Bracher / manuel.bracher@gmail.com
 * @version  1.0
 * @created  02.01.15
 *
 * Versionshistorie:
 * V 1.0:  - Erstellt.
 */

#include "Event.h"
#include "Colors.h"

/**************************************************************************************************************
* Instanzierung und Initialisierung jährlicher Events. Ein Event enthält eine Laufschrift, gefolgt
* von einem Bildeffekt (Herz, Feuerwerk, etc.). Diese werden am definierten Jahrestag jeweils zur vollen Stunde
* während einer definierten Dauer nonstop angezeigt. Soll nur eine Laufschrift (ohne Bildeffekt) angezeigt werden,
* ist als Effekt-Input NO_EFFECT zu wählen. Soll nur ein Bildeffekt (ohne Laufschrift) gezeigt werden, ist als
* Text-Input "" zu definieren. (Monat, Tag, Text, Effekt, Dauer [min]) Das Event-Array kann "beliebig" ergänzt
* werden.
**************************************************************************************************************/
Event events[] = {
  Event(1, 1, "Happy New Year", Effects::EFFECT_FIREWORK, color_rgb),
  Event(2, 14, "Happy Valentine's Day", Effects::EFFECT_HEART, color_red),
  Event(12, 25, "Merry Christmas", Effects::EFFECT_CANDLE, color_orange1),
  Event(7, 30, "Happy Birthday", Effects::EFFECT_FIREWORK, color_rgb),
//  Event(7, 29, "Happy Manu Day", Effects::ANI_BITMAP_SMILEY_WINK, color_yellow),

  //  Event(1, 16, "Testevent", Effects::ANI_BITMAP_SMILEY_WINK),
  //  Event(2,14,"",Effects::EFFECT_HEART),
  //  Event(7,30,"Happy Birthday",Effects::EFFECT_HEART)
};

//NO_EFFECT = 255,
//EFFECT_FIREWORK = 0,
//EFFECT_HEART,
//EFFECT_CANDLE,
//EFFECT_LOVEU,
//EFFECT_INTRO,
//
//BITMAP_MIN,
//BITMAP_HEART = BITMAP_MIN,
//BITMAP_DOTCIRCLE,
//BITMAP_WEDDINGRING,
//BITMAP_BDPIE,
//BITMAP_CHAMPGLASS1,
//BITMAP_CHAMPGLASS2,
//BITMAP_CHRISTTREE1,
//BITMAP_CHRISTTREE2,
//BITMAP_SMILEY,
//BITMAP_SMILEY_WINK,
//
//ANI_BITMAP_MIN,
//ANI_BITMAP_CHAMPGLASS = ANI_BITMAP_MIN,
//ANI_BITMAP_CHRISTTREE,
//ANI_BITMAP_SMILEY_WINK,


/**************************************************************************************************************
 * Anzahl definierter Events
 **************************************************************************************************************/
int nbrOfEvts = sizeof(events) / sizeof(Event);
