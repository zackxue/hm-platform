#ifndef __J_THREAD_POOL_H__
#define __J_THREAD_POOL_H__

#include "hm_error.h"
#include "hm_types.h"


#ifdef __cplusplus
extern "C" {
#endif

typedef void (*JTPFunc)(void *data, void *user_data);

typedef struct _JThreadPool JThreadPool;

struct _JThreadPool
{
	JTPFunc func;
	void *user_data;
};

JThreadPool *hm_thread_pool_new(JTPFunc func, void *data,
	unsigned max_threads, JError **err);
void hm_thread_pool_push(JThreadPool *tp, void *data);
void hm_thread_pool_free(JThreadPool *tp, JBool drop, JBool wait);

#ifdef __cplusplus
}
#endif

#endif	/* __J_THREAD_POOL_H__ */
