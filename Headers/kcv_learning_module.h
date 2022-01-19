#ifndef KCRYPTOV_KCV_LEARNING_MODULE_H
#define KCRYPTOV_KCV_LEARNING_MODULE_H

#include <kcryptov/kcv_types.h>
#include <kcryptov/kcv_crypto_algorithm.h>


typedef u8 numOfLearningMods_t;
typedef u8 * moduleName_t ;






/* Struct defining the learning module of the kcv framework */
typedef struct learning_mod{

    /* Number of supported learning modules */
    numOfLearningMods_t numOfModules;

    /* List of supported learning modules */
    moduleName_t * modules;

    /* List of loaded learning modules */
    crypto_algo_t * loadedModules;

}learning_mod_t;




#endif //KCRYPTOV_KCV_LEARNING_MODULE_H
