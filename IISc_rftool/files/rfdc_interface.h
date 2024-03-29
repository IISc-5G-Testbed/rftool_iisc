/******************************************************************************
*
* Copyright (C) 2018 Xilinx, Inc.  All rights reserved.
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* Use of the Software is limited solely to applications:
* (a) running on a Xilinx device, or
* (b) that interact with a Xilinx device through a bus or interconnect.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* XILINX  BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
* WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
* OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*
* Except as contained in this notice, the name of the Xilinx shall not be used
* in advertising or otherwise to promote the sale, use or other dealings in
* this Software without prior written authorization from Xilinx.
*
******************************************************************************/

#ifndef RFDC_INTERFACE_
#define RFDC_INTERFACE_

#include "cmd_interface.h"
#include "tcp_interface.h"
#include "xrfdc.h"

/*
 * The following constants map to the XPAR parameters created in the
 * xparameters.h file. They are defined here such that a user can easily
 * change all the needed parameters in one place.
 */
#define BUS_NAME "platform"
#define RFDC_DEVICE_ID 0
#define DESIGN_TYPE_REG 0xB0005054

/****************************************************************************/
/**
*
* This function is used to initiliase RFDC instance and related resources.
*
* @param	RFDC ID
*
* @return	SUCCESS/FAILURE.
*
* @note		None.
*
******************************************************************************/
int rfdc_inst_init(u16 rfdc_id);

/****************************************************************************/
/**
*
* This function is used to initiliase RFDC.
*
* @param	void
*
* @return	SUCCESS/FAILURE.
*
* @note		None.
*
* ***************************************************************************/
int rfdc_init(void);

#endif /* RFDC_INTERFACE_ */
