#pragma once
struct Wezel
{
	int wartosc;
	Wezel* poprzedni_wezel;
	Wezel* nastepny_wezel;  // domy�lnie pola i metody s� publiczne w structcie 
	Wezel();
	~Wezel();
};


class ListaDwukierunkowa
{
	Wezel* poczatek;
	Wezel* koniec;   // domy�lnie w clasie s� private
	int ilosc_elementow;
	ListaDwukierunkowa();
	~ListaDwukierunkowa();
};

