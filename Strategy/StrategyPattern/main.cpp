#include "Clients/Wizard.h"

#include "Strategies/Armors/BasicArmor.h"
#include "Strategies/Armors/FullArmor.h"
#include "Strategies/Armors/UltimateArmor.h"

#include "Strategies/Presentations/DarkLordPresentation.h"
#include "Strategies/Presentations/TwoTowersPresentation.h"
#include "Strategies/Presentations/WhitePresentation.h"

#include "Strategies/Spells/CreateTheOneRing.h"
#include "Strategies/Spells/LightShield.h"
#include "Strategies/Spells/GrabWeapon.h"

#include <iostream>

using clt::Wizard;
using stg::IArmor;

void createSpace()
{
   std::cout << "" << std::endl;
}

int main()
{
    // Begin to create the wizards
    clt::Wizard* gandalfTheGray = new clt::Wizard(new stg::BasicArmor(), new stg::WhitePresentation(), new stg::LightShield());
    gandalfTheGray->ShowArmor();
    gandalfTheGray->ShowMyWords();
    gandalfTheGray->LunchSpell();

    createSpace();

    clt::Wizard* sarumanTheWhite = new clt::Wizard(new stg::FullArmor(), new stg::TwoTowerPresentation(), new stg::GrabWeapon());
    sarumanTheWhite->ShowArmor();
    sarumanTheWhite->ShowMyWords();
    sarumanTheWhite->LunchSpell();

    createSpace();

    clt::Wizard* lordSauron = new clt::Wizard(new stg::UltimateArmor(), new stg::DarkLordPresentation(), new stg::CreateOneRing());
    lordSauron->ShowArmor();
    lordSauron->ShowMyWords();
    lordSauron->LunchSpell();

    createSpace();

    // Now we have a gandalf if ultimate armor, only lord Sauron can be destroy him
    clt::Wizard* gandalfTheWhite = new clt::Wizard(new stg::UltimateArmor(), new stg::WhitePresentation(), new stg::LightShield());
    gandalfTheWhite->ShowArmor();
    gandalfTheWhite->ShowMyWords();
    gandalfTheWhite->LunchSpell();
}
