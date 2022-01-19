#include <kcryptov/kcv_logger.h>

# define KCV_LOGGING_BUFFER_SIZE 80
# define KCV_LOGGING_CODE_BUFFER_SIZE 8


#define KCV_LOG_LEVEL_DEBUG_CODE "DEBUG"
#define KCV_LOG_LEVEL_DEBUG_CODE_LEN 5

#define KCV_LOG_LEVEL_EMERG_CODE "EMERG"
#define KCV_LOG_LEVEL_EMERG_CODE_LEN 5


#define KCV_LOG_LEVEL_CRITIC_CODE "CRITIC"
#define KCV_LOG_LEVEL_CRITIC_CODE_LEN 6


/** This function will map the logging level number to its code
 * @param logLevel  Defining the logging level
 * @return
 */
static log_code_t * log_level_map_code(kcv_log_level_t logLevel){

    // Defining the logging level code buffer
    log_code_t * logCode = malloc(KCV_LOGGING_CODE_BUFFER_SIZE);

    if ( logLevel == KCV_LOG_LEVEL_DEBUG )
        memcpy(logCode,KCV_LOG_LEVEL_DEBUG_CODE, KCV_LOG_LEVEL_DEBUG_CODE_LEN);

    else if ( logLevel == KCV_LOG_LEVEL_EMERG )
        memcpy(logCode,KCV_LOG_LEVEL_EMERG_CODE, KCV_LOG_LEVEL_EMERG_CODE_LEN);

    else if ( logLevel == KCV_LOG_LEVEL_CRITIC )
        memcpy(logCode,KCV_LOG_LEVEL_CRITIC_CODE, KCV_LOG_LEVEL_CRITIC_CODE_LEN);


    return logCode;

}



/** KCV logger: This function logs a messaged to the console
 * @param logLevel      Defining the logging level
 * @param logMessage    Defining the message to be logged
 */
void kcv_logger( kcv_log_level_t logLevel , kcv_logMessage_t * logMessage){

    // Defining the logging buffer
    loggBuffer_t loggBuffer[KCV_LOGGING_BUFFER_SIZE];

    snprintf( loggBuffer ,KCV_LOGGING_BUFFER_SIZE, "[%s] %s\n",log_level_map_code(logLevel), logMessage);

    printf("%s",loggBuffer);
}




