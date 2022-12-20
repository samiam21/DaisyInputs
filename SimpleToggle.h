#ifndef SIMPLE_TOGGLE_H
#define SIMPLE_TOGGLE_H

#include "daisy_seed.h"
#include "../../include/PedalConfig.h"

using namespace daisy;

/**
 * On/Off toggle class to handle reading the value of a toggle switch
 * This class will initialize the provided pin in the init function
 */
class SimpleToggle
{
public:
    /**
     * This function will initialize the toggle pin
     */
    void Init(dsy_gpio_pin pin);

    /**
     * Reads the toggle pins and reports back the position
     * @return True for on
     */
    bool ReadToggle();

private:
    // Class variables
    dsy_gpio_pin togglePin;

    Switch pinSwitch;
};

#endif