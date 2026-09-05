#ifndef SUBSTRATE_H
#define SUBSTRATE_H

#import <objc/runtime.h>
#import <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/* 最小声明: 运行时由 substrate/ElleKit 提供符号 (链接用 -undefined dynamic_lookup) */
void MSHookMessageEx(Class _class, SEL message, IMP hook, IMP *old);
void MSHookFunction(void *symbol, void *hook, void **old);

#ifdef __cplusplus
}
#endif

#endif /* SUBSTRATE_H */
