/**
 * @file Barometer.h
 * @author Jan Wielgus
 * @brief Base class for all barometers (pressure sensors).
 * @date 2021-08-12
 */

#ifndef __BAROMETER_H__
#define __BAROMETER_H__

#include "Sensor.h"


class Barometer : public Sensor
{
public:
    Barometer()
        : Sensor(Enums::SensorTypes::BAROMETER)
    {
    }

    virtual ~Barometer() {}

    virtual float getPressure_hPa() = 0;

    // TODO: consider adding smoothed pressure getter or even next layer betweeen sensors and INS for filtered sensors values
};


#endif // __BAROMETER_H__
