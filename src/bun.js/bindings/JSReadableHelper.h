#pragma once

#include "root.h"

namespace WebCore {

JSC_DECLARE_HOST_FUNCTION(jsReadable_maybeReadMore);
JSC_DECLARE_HOST_FUNCTION(jsReadable_resume);
JSC_DECLARE_HOST_FUNCTION(jsReadable_emitReadable);
JSC_DECLARE_HOST_FUNCTION(jsReadable_onEofChunk);

} // namespace WebCore
