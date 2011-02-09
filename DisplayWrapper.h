#ifndef DISPLAYWRAPPER_H
#define DISPLAYWRAPPER_H

#include <string>
#include <vector>

#include "WPILib.h"

/**
 * This wraps around the LCD Display for the driver station.
 */
class DisplayWrapper
{
public:
	DisplayWrapper();
	
	/**
	 * Clear the display buffer.
	 */
	void Clear();
	
	/**
	 * Update the display with any changes.
	 */
	void Output();
	
	/**
	 * Printf to the display.
	 */
	void Printf(const char* format, ...);
	
	/**
	 * Printf at a specific line.
	 */
	void PrintfLine(unsigned line, const char* format, ...);
	
	/**
	 * Set the scroll location of the buffer to display. 0.0 is the top and 1.0 is the bottom.
	 */
	void SetScrollLocation(float location);
	
	/**
	 * Set the size of the buffer (in lines).
	 */
	void SetBufferSize(unsigned size);
	
private:
	std::vector<std::string> buffer;
	unsigned bufferSize;
	unsigned bufferLocation;
	unsigned outputLocation;
	DriverStationLCD* display;
	
	void Shift();
};

#endif // DISPLAY