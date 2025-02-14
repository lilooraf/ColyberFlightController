/**
 * @file SensorTypes.h
 * @author Jan Wielgus (jan.wielgus12@gmail.com)
 * @brief Different sensor types.
 * @date 2021-03-06
 * 
 */

#ifndef SENSORTYPES_H
#define SENSORTYPES_H


namespace Enums
{
    enum class SensorTypes
    {
        NO_SENSOR,
        ACCELEROMETER,
        GYROSCOPE,
        MAGNETOMETER,
        BAROMETER,
        GPS,
        RANGEFINDER,
        TEMPERATURE_SENSOR
        // new types of sensors goes here...
    };
}


#endif
