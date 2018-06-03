/*!
 * \file      lcd-board.h
 *
 * \brief     LCD driver implementation
 *
 * \copyright Revised BSD License, see section \ref LICENSE.
 *
 * \author    Okhotnikov Viktor
 *
 */

#include "lcd.h"

#ifndef __LCD_BOARD_H__
#define __LCD_BOARD_H__

void McuLcdInit( );
void McuLcdDeInit( );

void McuLcdClear( );
void McuLcdWriteChar( uint8_t byte );
void McuLcdWriteString( uint8_t *string );

#endif
