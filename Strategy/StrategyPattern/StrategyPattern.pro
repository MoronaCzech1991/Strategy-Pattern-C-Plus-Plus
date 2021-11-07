QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        Clients/Wizard.cpp \
        Strategies/Armors/BasicArmor.cpp \
        Strategies/Armors/FullArmor.cpp \
        Strategies/Armors/UltimateArmor.cpp \
        Strategies/Presentations/DarkLordPresentation.cpp \
        Strategies/Presentations/TwoTowerPresentation.cpp \
        Strategies/Presentations/WhitePresentation.cpp \
        Strategies/Spells/CreateOneRing.cpp \
        Strategies/Spells/GrabWeapon.cpp \
        Strategies/Spells/LightShield.cpp \
        main.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    Clients/Wizard.h \
    Strategies/Armors/BasicArmor.h \
    Strategies/Armors/FullArmor.h \
    Strategies/Armors/IArmor.h \
    Strategies/Armors/UltimateArmor.h \
    Strategies/Presentations/DarkLordPresentation.h \
    Strategies/Presentations/IPresentation.h \
    Strategies/Presentations/TwoTowersPresentation.h \
    Strategies/Presentations/WhitePresentation.h \
    Strategies/Spells/CreateTheOneRing.h \
    Strategies/Spells/GrabWeapon.h \
    Strategies/Spells/ISpell.h \
    Strategies/Spells/LightShield.h
