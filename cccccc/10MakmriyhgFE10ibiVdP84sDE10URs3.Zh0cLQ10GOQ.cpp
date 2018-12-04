
        
        
    
    #ifdef BOOST_MSVC
#pragma warning(push)
#pragma warning(disable: 4103)
#endif
#ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_PREFIX
#endif
#ifdef BOOST_MSVC
#pragma warning(pop)
#endif
    
     /*
  *   LOCATION:    see http://www.boost.org for most recent version.
  *   FILE         regex_raw_buffer.hpp
  *   VERSION      see <boost/version.hpp>
  *   DESCRIPTION: Raw character buffer for regex code.
  *                Note this is an internal header file included
  *                by regex.hpp, do not include on its own.
  */
    
    template <class traits, class charT, class Formatter>
std::basic_string<charT> regex_replace(const std::basic_string<charT>& s,
                         const basic_regex<charT, traits>& e, 
                         Formatter fmt,
                         match_flag_type flags = match_default)
{
   std::basic_string<charT> result;
   BOOST_REGEX_DETAIL_NS::string_out_iterator<std::basic_string<charT> > i(result);
   regex_replace(i, s.begin(), s.end(), e, fmt, flags);
   return result;
}
    
    
    {   match_results<BidiIterator> m;
   typedef typename match_results<BidiIterator>::allocator_type match_alloc_type;
   BOOST_REGEX_DETAIL_NS::perl_matcher<BidiIterator, match_alloc_type, traits> matcher(first, last, m, e, flags | regex_constants::match_any, first);
   return matcher.find();
}
    
    		virtual Future<Reference<DirectorySubspace>> move(Reference<Transaction> const& tr, Path const& oldPath, Path const& newPath);
		virtual Future<Reference<DirectorySubspace>> moveTo(Reference<Transaction> const& tr, Path const& newAbsolutePath);
    
    #include 'Subspace.h'
    
    		virtual Future<bool> exists(Reference<Transaction> const& tr, Path const& path = Path()) = 0;
		virtual Future<Standalone<VectorRef<StringRef>>> list(Reference<Transaction> const& tr, Path const& path = Path()) = 0;
    
    
    {		return *n;
	}
    
    	bool Tuple::getBool(size_t index) const {
		if(index >= offsets.size()) {
			throw invalid_tuple_index();
		}
		ASSERT(offsets[index] < data.size());
		uint8_t code = data[offsets[index]];
		if(code == FALSE_CODE) {
			return false;
		} else if(code == TRUE_CODE) {
			return true;
		} else {
			throw invalid_tuple_data_type();
		}
	}
    
    
    {    Reference<class IThreadPool> threadPool;
    struct LineNoiseReader* reader;
};
    
    
    {		void logEvent(std::string id) const {
			TraceEvent('TransactionTrace_GetRange').detail('TransactionID', id).detail('Latency', latency).detail('RangeSizeBytes', rangeSize).detail('StartKey', printable(startKey)).detail('EndKey', printable(endKey));
		}
	};
    
    	void setMappedFuture(ErrorOr<ThreadFuture<T>> f) {
		if(f.isError()) {
			sendResult(f.getError());
		}
		else {
			lock.enter();
			mappedFuture = f.get();
			bool doCancel = cancelled;
			bool doRelease = released;
			lock.leave();
    }
    }
    
            void output( const String_type& s )
        {
            os_ << ''' << add_esc_chars( s, raw_utf8_, esc_nonascii_ ) << ''';
        }
    
    #include 'flow/Platform.h'
#include 'flow/IRandom.h'
#include <vector>
#include <algorithm>
    
    
    {	GlobalCounters() : 
		conflictTime('Conflict detection time', doubles),
		conflictBatches('Conflict batches', ints),
		conflictKeys('Conflict keys', ints),
		conflictTransactions('Conflict transactions', ints)
	{
	}
	void clear() {
		for(int i=0; i<ints.size(); i++)
			ints[i]->clear();
		for(int i=0; i<doubles.size(); i++)
			doubles[i]->clear();
	}
};
    
    // Returns the absolute platform-dependant path for server-based files
std::string getDefaultConfigPath();
    
    
    {	double eFoldingTime;
	double time, total, estimate;
};