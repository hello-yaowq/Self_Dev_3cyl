//=============================================================================
//
//       COPYRIGHT, 2008, Delphi Technologies, Inc. All Rights reserved
//
//       Delphi Confidential
//
// ============================================================================
// %name:            soh_nvm.c %
//
// created_by:       zzrfyj %
//
// date_created:      %
//
// %derived_by:      zzrfyj %
//
// %date_modified:       %
//
// %version:         1 %
//
//=============================================================================
#include "soh_nvm.h"


#pragma section DATA " " ".nc_nvram"

/* ETC SOH fault log (history) */
Soh_Fault_Log_T Soh_FaultLogNVM;

#pragma section DATA " " ".bss"

