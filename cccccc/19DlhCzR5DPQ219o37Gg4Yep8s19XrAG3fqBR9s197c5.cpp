
        
        
void Base::Call(const std::string& method, const base::ListValue& arguments,
                content::RenderFrameHost* rvh) {
  NOTREACHED() << 'Uncatched call in Base'
               << ' method:' << method
               << ' arguments:' << arguments;
}
    
    
    {  MenuItem* item = object_manager_->GetApiObject<MenuItem>(command_id);
  if (!item)
    return false;
  return item->is_modified_;
}
    
    namespace {
    }
    
    NwObjCallObjectMethodSyncFunction::~NwObjCallObjectMethodSyncFunction() {
}
    
    namespace parallel {
    }
    
    void Assembler::and(const Reg64& ra, const Reg64& rs, const Reg64& rb,
                     bool rc) {
  EmitXForm(31, rn(rs), rn(ra), rn(rb), 28, rc);
}
    
    // Deserializing an array could give back a different ArrayKind than we need,
// so we have to go with the slow case of calling a collection constructor.
NEVER_INLINE
Object createFromSerialized(CollectionType colType, APCHandle* handle) {
  auto const col = Object::attach(collections::alloc(colType));
  auto const arr = handle->toLocal();
  switch (colType) {
  case CollectionType::ImmVector:
  case CollectionType::Vector:
    static_cast<BaseVector*>(col.get())->init(arr);
    break;
  case CollectionType::ImmSet:
  case CollectionType::Set:
    static_cast<BaseSet*>(col.get())->init(arr);
    break;
  case CollectionType::ImmMap:
  case CollectionType::Map:
    static_cast<BaseMap*>(col.get())->init(arr);
    break;
  case CollectionType::Pair:
    not_reached();
    break;
  }
  return col;
}
    
        if (!slash && !semi) {
      raise_warning('rfc2397: invalid meta data');
      return nullptr;
    }
    
    #include 'hphp/runtime/base/file.h'
#include 'hphp/runtime/base/stream-wrapper.h'
#include 'hphp/runtime/base/stream-wrapper-registry.h'
    
    #include <sys/types.h>
    
    template<typename F>
void logPerfWarningImpl(folly::StringPiece event, int64_t priority,
                        int64_t rate, F fillCols) {
  auto const effectiveRate = rate * RuntimeOption::EvalPerfWarningSampleRate;
  if (effectiveRate > std::numeric_limits<uint32_t>::max()) return;
  if (!StructuredLog::coinflip(effectiveRate)) return;
    }