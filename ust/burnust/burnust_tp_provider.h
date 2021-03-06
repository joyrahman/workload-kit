/*
 * Copyright (C) 2011-2012  Mathieu Desnoyers <mathieu.desnoyers@efficios.com>
 * Copyright (C) 2011-2012  Matthew Khouzam <matthew.khouzam@ericsson.com> 
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 */
 
/*
 * Burn UST tracepoint provider
 */

#undef TRACEPOINT_PROVIDER
#define TRACEPOINT_PROVIDER burnust

#undef TRACEPOINT_INCLUDE_FILE
#define TRACEPOINT_INCLUDE_FILE ./burnust_tp_provider.h

#ifdef __cplusplus
#extern "C"{
#endif /*__cplusplus */

#if !defined(_BURNUST_PROVIDER_H) || defined(TRACEPOINT_HEADER_MULTI_READ)
#define _BURNUST_PROVIDER_H
#include <lttng/tracepoint.h> 
TRACEPOINT_EVENT(
	burnust,
	count,
	TP_ARGS(int, count),
	TP_FIELDS(ctf_integer(int, count, count))
)

#endif /* _BURNUST_PROVIDER_H */

#include <lttng/tracepoint-event.h>

#ifdef __cplusplus
}
#endif /*__cplusplus */
