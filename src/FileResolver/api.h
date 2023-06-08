#ifndef AR_FILERESOLVER_API_H
#define AR_FILERESOLVER_API_H

#include "pxr/base/arch/export.h"

#if defined(PXR_STATIC)
#   define USDRESOLVEREXAMPLE_API
#   define USDRESOLVEREXAMPLE_API_TEMPLATE_CLASS(...)
#   define USDRESOLVEREXAMPLE_API_TEMPLATE_STRUCT(...)
#   define USDRESOLVEREXAMPLE_LOCAL
#else
#   if defined(USDRESOLVEREXAMPLE_EXPORTS)
#       define USDRESOLVEREXAMPLE_API ARCH_EXPORT
#       define USDRESOLVEREXAMPLE_API_TEMPLATE_CLASS(...) ARCH_EXPORT_TEMPLATE(class, __VA_ARGS__)
#       define USDRESOLVEREXAMPLE_API_TEMPLATE_STRUCT(...) ARCH_EXPORT_TEMPLATE(struct, __VA_ARGS__)
#   else
#       define USDRESOLVEREXAMPLE_API ARCH_IMPORT
#       define USDRESOLVEREXAMPLE_API_TEMPLATE_CLASS(...) ARCH_IMPORT_TEMPLATE(class, __VA_ARGS__)
#       define USDRESOLVEREXAMPLE_API_TEMPLATE_STRUCT(...) ARCH_IMPORT_TEMPLATE(struct, __VA_ARGS__)
#   endif
#   define USDRESOLVEREXAMPLE_LOCAL ARCH_HIDDEN
#endif

#endif // AR_FILERESOLVER_API_H