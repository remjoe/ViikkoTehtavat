#include "Notifikaattori.h"

void Notifikaattori::lisaa(Seuraaja* uusiSeuraaja)
{
    uusiSeuraaja->next = seuraajat;
    seuraajat = uusiSeuraaja;
}

void Notifikaattori::poista(Seuraaja* poistettava)
{
    if (seuraajat == nullptr) {
        std::cout << "Lista on tyhja!" << std::endl;
        return;
    }

    Seuraaja * current = seuraajat;
    while (current->next != poistettava)
    {
        if (current == nullptr)
            return;
    }

    current->next = current->next->next;
}

void Notifikaattori::tulosta()
{
    Seuraaja* current = seuraajat;
    std::cout << "Seuraajat ovat:" << std::endl;;
    while (current != nullptr) {
        std::cout << current->getNimi() << std::endl;
        current = current->next;
    }
    std::cout << std::endl;
}

void Notifikaattori::postita(std::string viesti)
{
    Seuraaja* current = seuraajat;
    while (current != nullptr) {
        current->paivitys(viesti);
        current = current->next;
    }
}

Notifikaattori::Notifikaattori()
{

}
