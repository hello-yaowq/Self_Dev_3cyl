#ifndef IO_INTERFACE_OS_H
#define IO_INTERFACE_OS_H

//=============================================================================
// include files
//=============================================================================
#include "reuse.h"


//=============================================================================
// extern variable
//=============================================================================
#define Is_IGN_Off()    (HAL_Analog_Get_IGNVI_Value()<2500)? true:false
//=============================================================================
// IO_OS_Get_Shutdown
//=============================================================================
  bool IO_OS_Get_Shutdown(void);

//=============================================================================
// IO_OS_Power_Status_Init
//=============================================================================
 void  IO_OS_Power_Status_Init(void);
//=============================================================================
// IO_OS_BackGround_1ms_Status_Check
//=============================================================================
 void  IO_OS_BackGround_1ms_Status_Check(void) ;
//=============================================================================
// IO_OS_OneSecond_Task
//=============================================================================
 void IO_OS_OneSecond_Task(void);
 
//=============================================================================
// IO_OS_Perform_Reset_Task
//=============================================================================
 void IO_OS_Perform_Reset_Task(void);
 
//=============================================================================
// IO_OS_Powerdown_Callback
//=============================================================================
 void IO_OS_Powerdown_Callback(void);
 
//=============================================================================
// IO_OS_PowerFail_Flag
//=============================================================================
bool IO_OS_Get_PowerFail_Flag(void);

//=============================================================================
// IO_OS_PowerFail_Flag
//=============================================================================
void IO_OS_Set_PowerFail_Flag(bool flag);
 
#endif

