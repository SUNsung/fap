
        
        UBool SearchIterator::operator==(const SearchIterator &that) const
{
    if (this == &that) {
        return TRUE;
    }
    return (m_breakiterator_            == that.m_breakiterator_ &&
            m_search_->isCanonicalMatch == that.m_search_->isCanonicalMatch &&
            m_search_->isOverlap        == that.m_search_->isOverlap &&
            m_search_->elementComparisonType == that.m_search_->elementComparisonType &&
            m_search_->matchedIndex     == that.m_search_->matchedIndex &&
            m_search_->matchedLength    == that.m_search_->matchedLength &&
            m_search_->textLength       == that.m_search_->textLength &&
            getOffset() == that.getOffset() &&
            (uprv_memcmp(m_search_->text, that.m_search_->text, 
                              m_search_->textLength * sizeof(UChar)) == 0));
}
    
    SelectFormat::~SelectFormat() {
}
    
    
    {    BreakIterator *get() const { return ptr; }
    BreakIterator *operator->() const { return ptr; }
    BreakIterator &operator*() const { return *ptr; }
private:
    BreakIterator *ptr;
    SharedBreakIterator(const SharedBreakIterator &);
    SharedBreakIterator &operator=(const SharedBreakIterator &);
};
    
    U_NAMESPACE_END
    
    UnicodeString &
SmallIntFormatter::format(
        int32_t smallPositiveValue,
        const IntDigitCountRange &range,
        UnicodeString &appendTo) {
    int32_t digits = range.pin(gDigitCount[smallPositiveValue]);
    }
    
    ExitConstrDeleteAll: // Remove all sets and return error
    delete fDateIgnorables;  fDateIgnorables = NULL;
    delete fTimeIgnorables;  fTimeIgnorables = NULL;
    delete fOtherIgnorables; fOtherIgnorables = NULL;
    
        static BOOST_FORCEINLINE storage_type exchange(storage_type volatile& storage, storage_type v, memory_order order) BOOST_NOEXCEPT
    {
#if defined(__clang__)
        // Clang cannot allocate eax:edx register pairs but it has sync intrinsics
        storage_type old_val = storage;
        while (true)
        {
            storage_type val = __sync_val_compare_and_swap(&storage, old_val, v);
            if (val == old_val)
                return val;
            old_val = val;
        }
#elif !defined(BOOST_ATOMIC_DETAIL_NO_ASM_IMPLIED_ZERO_DISPLACEMENTS)
#if defined(__PIC__)
        uint32_t scratch;
        __asm__ __volatile__
        (
            'movl %%ebx, %[scratch]\n\t'
            'movl %%eax, %%ebx\n\t'
            'movl %%edx, %%ecx\n\t'
            'movl %[dest], %%eax\n\t'
            'movl 4+%[dest], %%edx\n\t'
            '.align 16\n\t'
            '1: lock; cmpxchg8b %[dest]\n\t'
            'jne 1b\n\t'
            'movl %[scratch], %%ebx\n\t'
            : '+A' (v), [scratch] '=m' (scratch), [dest] '+o' (storage)
            :
            : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'ecx', 'memory'
        );
        return v;
#else // defined(__PIC__)
        __asm__ __volatile__
        (
            'movl %[dest], %%eax\n\t'
            'movl 4+%[dest], %%edx\n\t'
            '.align 16\n\t'
            '1: lock; cmpxchg8b %[dest]\n\t'
            'jne 1b\n\t'
            : '=A' (v), [dest] '+o' (storage)
            : 'b' ((uint32_t)v), 'c' ((uint32_t)(v >> 32))
            : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'memory'
        );
        return v;
#endif // defined(__PIC__)
#else // !defined(BOOST_ATOMIC_DETAIL_NO_ASM_IMPLIED_ZERO_DISPLACEMENTS)
#if defined(__PIC__)
        uint32_t scratch;
        __asm__ __volatile__
        (
            'movl %%ebx, %[scratch]\n\t'
            'movl %%eax, %%ebx\n\t'
            'movl %%edx, %%ecx\n\t'
            'movl 0(%[dest]), %%eax\n\t'
            'movl 4(%[dest]), %%edx\n\t'
            '.align 16\n\t'
            '1: lock; cmpxchg8b 0(%[dest])\n\t'
            'jne 1b\n\t'
            'movl %[scratch], %%ebx\n\t'
#if !defined(BOOST_ATOMIC_DETAIL_NO_ASM_CONSTRAINT_ALTERNATIVES)
            : '+A,A' (v), [scratch] '=m,m' (scratch)
            : [dest] 'D,S' (&storage)
#else
            : '+A' (v), [scratch] '=m' (scratch)
            : [dest] 'D' (&storage)
#endif
            : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'ecx', 'memory'
        );
        return v;
#else // defined(__PIC__)
        __asm__ __volatile__
        (
            'movl 0(%[dest]), %%eax\n\t'
            'movl 4(%[dest]), %%edx\n\t'
            '.align 16\n\t'
            '1: lock; cmpxchg8b 0(%[dest])\n\t'
            'jne 1b\n\t'
#if !defined(BOOST_ATOMIC_DETAIL_NO_ASM_CONSTRAINT_ALTERNATIVES)
            : '=A,A' (v)
            : 'b,b' ((uint32_t)v), 'c,c' ((uint32_t)(v >> 32)), [dest] 'D,S' (&storage)
#else
            : '=A' (v)
            : 'b' ((uint32_t)v), 'c' ((uint32_t)(v >> 32)), [dest] 'D' (&storage)
#endif
            : BOOST_ATOMIC_DETAIL_ASM_CLOBBER_CC_COMMA 'memory'
        );
        return v;
#endif // defined(__PIC__)
#endif
    }
    
        // Intel 64 and IA-32 Architectures Software Developer's Manual, Volume 3A, 8.1.1. Guaranteed Atomic Operations:
    //
    // The Pentium processor (and newer processors since) guarantees that the following additional memory operations will always be carried out atomically:
    // * Reading or writing a quadword aligned on a 64-bit boundary
    //
    // Luckily, the memory is almost always 8-byte aligned in our case because atomic<> uses 64 bit native types for storage and dynamic memory allocations
    // have at least 8 byte alignment. The only unfortunate case is when atomic is placed on the stack and it is not 8-byte aligned (like on 32 bit Windows).
    
    #endif // BOOST_ATOMIC_DETAIL_PAUSE_HPP_INCLUDED_
