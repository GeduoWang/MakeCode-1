/**
  ******************************************************************************
  * @file    sample.h
  * @author  janice
  * @version 1.0.0
  * @date    2017/05/01
  * @brief   this file is test for janice like 
  ******************************************************************************
  * @attention 
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS. 
  ******************************************************************************
  * @mainpage  My Personal Index Page
  * @section intro_sec Introduction
  * This is the introduction.
  * @section install_sec Installation
  * @subsection step1 Step 1: Opening the box
  ******************************************************************************
  */
/* Includes ------------------------------------------------------------------*/
/* exports ------------------------------------------------------------------*/
/* Struct Define ------------------------------------------------------------------*/
typedef enum {
	STATUS_SUCCESSFUL,	/*!< [S]Succeful */
	STATUS_INVALID_PARAM,	/*!< [E]参数错误 */
	STATUS_DEVICE_NOT_FOUND,	/*!< [E]设备找不到 */
	STATUS_INVALID_DEVICEHANDLE,	/*!< [E]无效设备 */
	STATUS_OPEN_FAILED,	/*!< [E]打开失败 */
	STATUS_INVALID_BARNUM,	/*!< [E]无效板卡ID */
	STATUS_ALLOC_FAILED,	/*!< [E]分配内存失败 */
	STATUS_INTERNAL_ERROR,	/*!< [E]内部错误 */
	STATUS_DMA_TIMEOUT,	/*!< [W]DMA超时失败 */
	STATUS_JOB_LOST,	/*!< [W]业务数据指针无效 */
} ERRCODE_STATUS;

/* Struct Define ------------------------------------------------------------------*/
typedef struct{
	ULONG	ulChannelIndex;	/*!< test */
	ULONG	ulDevAddrOffset;	/*!<  */
	void *	pDataBuffer;	/*!<  */
	ULONG	ulDmaSize;	/*!<  */
	ULONG	ulDmaDir;	/*!<  */
} ST_DMA_INFO, *PST_DMA_INFO;

/* Class ------------------------------------------------------------------*/
/**
  * @class Test
  * @brief Main routine for HID mouse / keyboard class application
  * @note this file is test for
  */
class Test {
}; /* Test */ 

/**
  * @name   main
  * @brief  Main routine for HID mouse / keyboard class application
  * @param  void
  * @retval int
  * @note   this file is test for
  */
int main{void};
/**
  * @name   hello
  * @brief  voi
  * @param  char *
  * @retval void
  * @note   this file is test for
  */
void hello{char *};
