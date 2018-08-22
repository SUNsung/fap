
        
        	_FORCE_INLINE_ real_t get_inv_mass() const { return _inv_mass; }
	_FORCE_INLINE_ Vector3 get_inv_inertia() const { return _inv_inertia; }
	_FORCE_INLINE_ Basis get_inv_inertia_tensor() const { return _inv_inertia_tensor; }
	_FORCE_INLINE_ real_t get_friction() const { return friction; }
	_FORCE_INLINE_ Vector3 get_gravity() const { return gravity; }
	_FORCE_INLINE_ real_t get_bounce() const { return bounce; }
    
    	virtual void free(RID p_rid);
    
    #include 'os/memory.h'
#include 'safe_refcount.h'
    
    	if (p_render_target.is_valid()) {
		RasterizerStorageGLES3::RenderTarget *rt = storage->render_target_owner.getornull(p_render_target);
		storage->frame.current_rt = rt;
		ERR_FAIL_COND(!rt);
		storage->frame.clear_request = false;
    }
    
    				case ShaderLanguage::TYPE_SAMPLERCUBE: {
					// TODO
				} break;
    
    #define FUNC3S(m_type, m_arg1, m_arg2, m_arg3)                                         \
	virtual void m_type(m_arg1 p1, m_arg2 p2, m_arg3 p3) {                             \
		if (Thread::get_caller_id() != server_thread) {                                \
			command_queue.push_and_sync(server_name, &ServerName::m_type, p1, p2, p3); \
			SYNC_DEBUG                                                                 \
		} else {                                                                       \
			server_name->m_type(p1, p2, p3);                                           \
		}                                                                              \
	}
    
    	virtual void mesh_surface_set_material(RID p_mesh, int p_surface, RID p_material) = 0;
	virtual RID mesh_surface_get_material(RID p_mesh, int p_surface) const = 0;
    
    	struct VarInfo {
    }
    
    	SkeletonIK *s = Object::cast_to<SkeletonIK>(p_object);
	if (!s)
		return;
    
    Timer::CounterVec Timer::Counters() {
  CounterVec ret;
  for (auto& pair : s_names) {
    ret.emplace_back(pair.str, s_counters[pair.name]);
  }
  return ret;
}
    
    extern __thread int64_t s_extra_request_nanoseconds;
    
    /*
 * Helpers for unconditional and conditional jumps.
 */
void surpriseCheck(IRGS&);
void surpriseCheck(IRGS&, Offset);
void jmpImpl(IRGS&, Offset);
void implCondJmp(IRGS&, Offset taken, bool negate, SSATmp*);
    
    
    {
    {}}
    
        memcpy(p, 'free_hugepages', 15);
    assert(strlen('free_hugepages') == 14); // extra \0 byte
    free_huge = readNumFrom(fileName);
    
      Variant getKey(ssize_t pos) const {
    if (isPacked()) {
      assertx(static_cast<size_t>(pos) < m_size);
      return pos;
    }
    assertx(static_cast<size_t>(pos) < m.m_num);
    return buckets()[pos].key->toLocal();
  }
    
    ArrayData* SetArray::Pop(ArrayData* ad, Variant& value) {
  auto a = asSet(ad);
  if (a->cowCheck()) a = a->copySet();
  if (a->m_size) {
    ssize_t pos = a->getIterLast();
    cellCopy(a->getElm(pos), *value.asTypedValue());
    auto const pelm = &a->data()[pos];
    auto loc = a->findForRemove(pelm->hash(),
      [pelm] (const Elm& e) { return &e == pelm; }
    );
    assertx(loc != Empty);
    a->erase(loc);
  } else {
    value = uninit_null();
  }
  /*
   * To conform to PHP5 behavior, the pop operation resets the array's
   * internal iterator.
   */
  a->m_pos = a->getIterBegin();
  return a;
}
    
    /** Read a attribute='value' thing. Leading whitespace is skipped.
 * Between attribute and '=' no whitespace is allowed. After the '=' it is
 * permitted.
 * @param in the istream to read from.
 * @param attribute string the attribute name is put in
 * @param value string the value of the attribute is put in
 * @throws ios_base::failure if something is fishy. E.g. malformed quoting
 * or missing '='
 */
void read_AttributeNValue( ANTLR_USE_NAMESPACE(std)istream& in,
								   ANTLR_USE_NAMESPACE(std)string& attribute,
								   ANTLR_USE_NAMESPACE(std)string& value );
    
    #ifdef NEEDS_OPERATOR_LESS_THAN
// RK: apparently needed by MSVC and a SUN CC, up to and including
// 2.7.2 this was undefined ?
inline bool operator<( RefAST l, RefAST r )
{
	return nullAST == l ? ( nullAST == r ? false : true ) : l->getType() < r->getType();
}
#endif
    
    	void setText(const ANTLR_USE_NAMESPACE(std)string& text);
	void setType(int ttype);
	ANTLR_USE_NAMESPACE(std)string toString() const;
	ANTLR_USE_NAMESPACE(std)string toStringList() const;
	ANTLR_USE_NAMESPACE(std)string toStringTree() const;
    
    typedef ASTRefCount<AST> RefAST;
    
    /* ANTLR Translator Generator
 * Project led by Terence Parr at http://www.jGuru.com
 * Software rights: http://www.antlr.org/license.html
 *
 * $Id: //depot/code/org.antlr/release/antlr-2.7.7/lib/cpp/antlr/BitSet.hpp#2 $
 */
    
    #include <istream>
    
    /* ANTLR Translator Generator
 * Project led by Terence Parr at http://www.jGuru.com
 * Software rights: http://www.antlr.org/license.html
 *
 * $Id: //depot/code/org.antlr/release/antlr-2.7.7/lib/cpp/antlr/CharStreamException.hpp#2 $
 */
    
    	virtual void initialize( RefAST t )
	{
		setType(t->getType());
		setText(t->getText());
	}
	virtual void initialize( RefToken t )
	{
		setType(t->getType());
		setText(t->getText());
	}
    
    
    {	void setHiddenAfter(RefToken t);
	void setHiddenBefore(RefToken t);
};
    
    
    {private:
	CommonToken(const CommonToken&);
	const CommonToken& operator=(const CommonToken&);
};
    
    /* ANTLR Translator Generator
 * Project led by Terence Parr at http://www.jGuru.com
 * Software rights: http://www.antlr.org/license.html
 *
 * $Id:$
 */
    
    public:
	MismatchedCharException();