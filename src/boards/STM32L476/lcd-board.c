/*!
 * \file      lcd-board.c
 *
 * \brief     LCD driver implementation
 *
 * \copyright Revised BSD License, see section \ref LICENSE.
 *
 * \author    Okhotnikov Viktor
 *
 */

#include "stm32l4xx.h"
#include "utilities.h"
#include "board-config.h"
#include "lcd-board.h"
#include "stm32l476g_discovery_glass_lcd.h"

void McuLcdInit( )
{
	BSP_LCD_GLASS_Init( );
}

void McuLcdDeInit( )
{
	BSP_LCD_GLASS_DeInit( );
}

void McuLcdClear( )
{
	BSP_LCD_GLASS_Clear( );
}

void McuLcdWriteChar( uint8_t byte )
{
}

void McuLcdWriteString( uint8_t *string )
{
	BSP_LCD_GLASS_DisplayString( string );
}
