#ifndef KCRYPTOV_KCV_CRYPTO_ALGORITHM_H
#define KCRYPTOV_KCV_CRYPTO_ALGORITHM_H


#include <kcryptov/kcv_types.h>
#include <kcryptov/kcv_global_parameters.h>


typedef u8 * algorithmName_t;
typedef u8 * devTeamName_t;
typedef u8 * developerNames_t;
typedef u8 algoMajorVersion;
typedef u8 algoMinorVersion;


typedef struct crypto_algo{

    algorithmName_t algorithmName;

    algoMajorVersion majorVersion;

    algoMinorVersion minorVersion;

    devTeamName_t devTeamName;

    developerNames_t developerNames[KCV_NUM_CRYPTOALGO_DEVELOPERS];

    void * algoSpecific;

    struct crypto_algo * nextAlgo;

}crypto_algo_t;





#endif //KCRYPTOV_KCV_CRYPTO_ALGORITHM_H
