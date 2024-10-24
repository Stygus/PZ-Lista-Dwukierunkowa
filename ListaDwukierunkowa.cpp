#include <iostream>
#include "ListaDwukierunkowa.h"

Wezel::Wezel() : wartosc{}, poprzedni_wezel(nullptr), nastepny_wezel(nullptr) {  }  // konstruktor wezla z lista incicjalizacyjnom

ListaDwukierunkowa::ListaDwukierunkowa() : poczatek(nullptr), koniec(nullptr), ilosc_elementow(0) {  }   // deklaracja konstruktora przypisanie wartości

ListaDwukierunkowa::~ListaDwukierunkowa() { }

