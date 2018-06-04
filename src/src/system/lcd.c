/*!
 * \file      lcd.c
 *
 * \brief     LCD driver implementation
 *
 * \copyright Revised BSD License, see section \ref LICENSE.
 *
 * \author    Okhotnikov Viktor
 *
 */

#include <stdbool.h>
#include "utilities.h"
#include "lcd.h"
#include "lcd-board.h"

void LcdInit( )
{
	McuLcdInit();
}

void LcdDeInit( )
{
	McuLcdDeInit( );
}

void LcdClear( )
{
	McuLcdClear( );
}

void LcdWriteChar( uint8_t byte )
{
	McuLcdWriteChar( byte );
}

void LcdWriteString( uint8_t *string )
{
	McuLcdWriteString( string );
}
