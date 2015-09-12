/******************************************************************************
 *
 * Copyright(c) 2007 - 2011 Realtek Corporation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110, USA
 *
 *
 ******************************************************************************/
#ifndef __USB_HAL_H__
#define __USB_HAL_H__

void rtw_set_hal_ops(_adapter *padapter);

#ifdef CONFIG_RTL8723A
void rtl8723au_set_hal_ops(_adapter * padapter);
#endif

#if defined(CONFIG_RTL8812A) || defined(CONFIG_RTL8821A)
void rtl8812au_set_hal_ops(_adapter * padapter);
#endif

#ifdef CONFIG_RTL8723B
void rtl8723bu_set_hal_ops(_adapter * padapter);
#endif

#ifdef CONFIG_INTEL_PROXIM
extern _adapter  *rtw_usb_get_sw_pointer(void);
#endif	//CONFIG_INTEL_PROXIM
#endif //__USB_HAL_H__
