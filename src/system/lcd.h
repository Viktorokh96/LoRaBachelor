/*!
 * \file      lcd.h
 *
 * \brief     LCD driver implementation
 *
 * \copyright Revised BSD License, see section \ref LICENSE.
 *
 * \author    Okhotnikov Viktor
 *
 */

#ifndef __LCD_H__
#define __LCD_H__

void LcdInit( );
void LcdDeInit( );

void LcdClear( );
void LcdWriteChar( uint8_t byte );
void LcdWriteString( uint8_t *string );

#endif // __LCD_H__
