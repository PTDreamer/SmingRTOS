/*
Author: (github.com/)ADiea
Project: Sming for ESP8266 - https://github.com/SmingHub/Sming
License: MIT
Date: 21.12.2015
Descr: embedded very simple version of printf with float support
*/

#ifndef _M_PRINTF_
#define _M_PRINTF_

#ifdef __cplusplus
extern "C" {
#endif
int m_vsnprintf(char *buf, size_t maxLen, const char *fmt, va_list args);
int m_snprintf(char* buf, int length, const char *fmt, ...);
int m_printf(const char *fmt, ...);
//set m_printf callback
void setMPrintfPrinterCbc(STATUS (*callback)(uint8, uint8));
#ifdef __cplusplus
}
#endif

#endif /*_M_PRINTF_*/

