#pragma once
struct Wezel
{
	int wartosc;
	Wezel* poprzedni_wezel;
	Wezel* nastepny_wezel;  // domyœlnie pola i metody s¹ publiczne w structcie 
	Wezel();
	~Wezel();
};


class ListaDwukierunkowa
{
	Wezel* poczatek;
	Wezel* koniec;   // domyœlnie w clasie s¹ private
	int ilosc_elementow;
	ListaDwukierunkowa();
	~ListaDwukierunkowa();
};

