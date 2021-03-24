#include <iosfwd>

#ifndef ZLOMOK_ZLOMOK_H
#define ZLOMOK_ZLOMOK_H

class Zlomok
{
private:
    int cit;
    int men;
public:
    Zlomok(int nom, int den=1); //konštruktor, ktorý príjme čitateľ a menovateľ, ak menovateľ nie je zadaný, tak bude 1
    explicit Zlomok(const std::string &spolu); //konštruktor prijme reťazec v tvare cit/men , z ktorého získa citatel aj menovatel zlomku
    /* preťažiť operátory: sčitovania, odčitovania, násobenia a delenia zlomkov
     * pridať metódu NSD, ktorá nájde najväčší spoločný deliteľ dvoch int a použiť ju pri ukladaní každého zlomku, aby bol vždy uložený v základnom stave
     * preťažiť operátor výstupu, aby sa zlomok vypisoval v tvare cit/men
     * ošetriť situáciu (samozrejme pomocou výnimiek), aby sa v menovateli neobjavila nula
     *
     */
};

#endif //ZLOMOK_ZLOMOK_H
