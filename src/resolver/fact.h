#ifndef __MURPHY_RESOLVER_FACT_H__
#define __MURPHY_RESOLVER_FACT_H__

#include "resolver.h"

int create_facts(mrp_resolver_t *r);
int create_fact(mrp_resolver_t *r, char *name);
int fact_changed(mrp_resolver_t *r, int id);

#endif /* __MURPHY_RESOLVER_FACT_H__ */
