#ifndef KCRYPTOV_KCV_LOGGER_H
#define KCRYPTOV_KCV_LOGGER_H


#include <kcryptov/kcv_types.h>
#include <kcryptov/kcv_clib_headers.h>


typedef u8 kcv_log_level_t;
typedef u8 kcv_logMessage_t;
typedef u8 * loggBuffer_t;
typedef u8 log_code_t ;



#define KCV_LOG_LEVEL_DEBUG 7
#define KCV_LOG_LEVEL_EMERG 6
#define KCV_LOG_LEVEL_CRITIC 5




void kcv_logger( kcv_log_level_t logLevel , kcv_logMessage_t * logMessage);





#endif //KCRYPTOV_KCV_LOGGER_H
