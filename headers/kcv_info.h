#ifndef KCRYPTOV_KCV_INFO_H
#define KCRYPTOV_KCV_INFO_H

#include <kcryptov/kcv_types.h>
#include <kcryptov/kcv_global_parameters.h>


#define KVC_PROGRAM_NAME "kcryptov"
#define KCV_PROGRAM_DEV_TEAM_NAME "Sky Eagle"
#define KCV_MAJOR_VERSION 1
#define KCV_MINOR_VERSION 0



typedef u8 majorVersion_t;
typedef u8 minorVersion_t;
typedef u8 * programName_t;
typedef u8 * programDevTeamName_t;
typedef u8 * programDevName_t;







typedef struct kcryptov_info{

    programName_t programName;

    programDevTeamName_t programDevTeamName;

    /* List of kcryptov framework developers*/
    programDevName_t programDevNames[KCV_NUMBER_OF_DEVELOPERS];

    majorVersion_t majorVersion;

    minorVersion_t minorVersion;


}kcryptovinfo_t;










#endif //KCRYPTOV_KCV_INFO_H
