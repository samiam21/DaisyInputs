#include "SimpleToggle.h"

void SimpleToggle::Init(dsy_gpio_pin pin)
{
    // Set and initialize the pins
    togglePin = pin;

    pinSwitch.Init(togglePin, 1000, Switch::Type::TYPE_TOGGLE, Switch::Polarity::POLARITY_NORMAL, Switch::Pull::PULL_UP);
}

bool SimpleToggle::ReadToggle()
{
    return pinSwitch.RawState();
}