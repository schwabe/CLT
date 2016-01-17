/**
 * Event.h
 * Klasse für ein jährliches Event
 *
 * @mc       Arduino/UNO
 * @autor    Manuel Bracher / manuel.bracher@gmail.com
 * @version  1.0
 * @created  02.01.15
 *
 * Versionshistorie:
 * V 1.0:  - Erstellt.
 */

#ifndef EVENT_H
#define EVENT_H

#include "Effects.h"

#define DURATION_BM   5
#define TICKER_SPEED  8

class Event {
  public:
    Event(byte month,
          byte date,
          const char* txt,
          Effects::eEffects effect) :
      _month (month), _date (date),
      _txt (txt), _effect (effect) {};

    void show();
    byte getMonth();
    byte getDate();

  private:
    byte _month;
    byte _date;
    const char* _txt;
    Effects::eEffects _effect;
};

#endif //EVENT_H