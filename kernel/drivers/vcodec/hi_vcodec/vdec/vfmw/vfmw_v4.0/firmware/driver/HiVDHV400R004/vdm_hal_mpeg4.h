
/******************************************************************************

 版权所有 (C), 2001-2011, 华为技术有限公司

  ******************************************************************************
  文 件 名   : vdm_hal_mpeg4.h
  版 本 号   : 初稿
  作    者   :
  生成日期   :
  最近修改   :
  功能描述   : VDMV300plus硬件抽象


 修改历史   :
    1.日    期 : 2009-03-04
    作    者   :
    修改内容   :

******************************************************************************/

#ifndef _VDM_HAL_MPEG4_HEADER_
#define _VDM_HAL_MPEG4_HEADER_


#include "basedef.h"
#include "mem_manage.h"

/*#########################################################################################
 structures
##########################################################################################*/

//MPEG2 SLICE
typedef struct
{
    USIGN bit_len_0:                            24;
    USIGN bit_offset_0:                         7;
    USIGN reserved:                             1;
} MP4SLCDNMSG_D0;

typedef struct
{
    USIGN bit_stream_address_0:               24;
    USIGN reserved:                             8;
} MP4SLCDNMSG_D1;

typedef struct
{
    USIGN bit_len_1:                            24;
    USIGN bit_offset_1:                         7;
    USIGN reserved:                             1;
} MP4SLCDNMSG_D2;

typedef struct
{
    USIGN bit_stream_address_1:               24;
    USIGN reserved:                             8;
} MP4SLCDNMSG_D3;

typedef struct
{
    USIGN vop_quant:                            5;
    USIGN vop_coding_type:                     2;
    USIGN intra_dc_vlc_thr:                    3;
    USIGN vop_fcode_forward:                   3;
    USIGN vop_fcode_backward:                  3;
    USIGN reserved:                             16;
} MP4SLCDNMSG_D4;

typedef struct
{
    USIGN slice_start_mbn:                     20;
    USIGN reserved:                             12;
} MP4SLCDNMSG_D5;

typedef struct
{
    USIGN slice_end_mbn:                       20;
    USIGN reserved:                             12;
} MP4SLCDNMSG_D6;

typedef struct
{
    USIGN next_slice_para_addr:               32;
} MP4SLCDNMSG_D7;



/*#########################################################################################
 functions
##########################################################################################*/
#ifdef __cplusplus
extern "C" {
#endif

SINT32 MP4HAL_InitHal( UADDR CodeTabAddr );
SINT32 MP4HAL_StartDec( MP4_DEC_PARAM_S *pMp4DecParam, SINT32 VdhId );

#ifdef __cplusplus
}
#endif


#endif
