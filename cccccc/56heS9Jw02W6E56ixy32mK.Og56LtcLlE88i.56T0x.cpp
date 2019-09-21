
        
            // use strings to print preset names in the perf test results:
    String preset_string = get<0>(params);
    int preset = DISOpticalFlow::PRESET_FAST;
    if (preset_string == 'PRESET_ULTRAFAST')
        preset = DISOpticalFlow::PRESET_ULTRAFAST;
    else if (preset_string == 'PRESET_FAST')
        preset = DISOpticalFlow::PRESET_FAST;
    else if (preset_string == 'PRESET_MEDIUM')
        preset = DISOpticalFlow::PRESET_MEDIUM;
    Size sz = get<1>(params);
    
    #ifndef INCLUDED_IMF_FAST_HUF_H
#define INCLUDED_IMF_FAST_HUF_H
    
    #include 'ImfNamespace.h'
    
    
using namespace std;
    
    #endif /* GENERICOUTPUTFILE_H_ */

    
        IMF_EXPORT
    ChannelList &		channels ();
    IMF_EXPORT
    const ChannelList &		channels () const;
    
    //-------------------------------------------------------------------
// class InputPart:
//
// Same interface as InputFile. Please refer to InputFile.
//-------------------------------------------------------------------
    
    
template <>
const char *
IntAttribute::staticTypeName ()
{
    return 'int';
}
    
      {1,0,32,  &_residue_44_mid_un,
   &_huff_book__16u1__long,&_huff_book__16u1__long,
   &_resbook_16u_1,&_resbook_16u_1}
};
static const vorbis_residue_template _res_16u_2[]={
  {1,0,32,  &_residue_44_hi_un,
   &_huff_book__16u2__short,&_huff_book__16u2__short,
   &_resbook_16u_2,&_resbook_16u_2},
    
    static int vorbis_ftoi(double f){
        /* Note: MSVC and GCC (at least on some systems) round towards zero, thus,
           the floor() call is required to ensure correct roudning of
           negative numbers */
        return (int)floor(f+.5);
}
    
        inline size_t consumer_num()
    {
        return consumer_queue.size();
    }
    
        bzero(&un1,sizeof(struct sockaddr_un));
    bzero(&un2,sizeof(struct sockaddr_un));
    
    
    {    ASSERT_EQ(swThreadPool_free(&pool), SW_OK);
    ASSERT_EQ(result, N);
}
#endif
    
    TEST(coroutine_base, get_current)
{
    long _cid;
    long cid = Coroutine::create([](void *arg)
    {
        auto co = Coroutine::get_current();
        *(long *) arg = co->get_cid();
    }, &_cid);
    }
    
    #include 'swoole.h'
    
        for (i = 1; i < 20000; i++)
    {
        uint32_t key = i * 37;
        swRbtree_insert(tree, key, (void *) (long) (i * 8));
    }
    
        buffer = (char*) ecalloc(1, size);
	res = getsockopt(php_sock->get_fd(), level, optname, buffer, &size);
	if (res != 0) {
		PHP_SWOOLE_SOCKET_ERROR(php_sock, 'unable to get socket option', errno);
	} else {
		zval tmp;
		zval *zv = to_zval_run_conversions(buffer, reader, 'in6_pktinfo',
				sw_empty_key_value_list, &err, &tmp);
		if (err.has_error) {
			err_msg_dispose(&err);
			res = -1;
		} else {
			ZVAL_COPY_VALUE(result, zv);
		}
	}
	efree(buffer);