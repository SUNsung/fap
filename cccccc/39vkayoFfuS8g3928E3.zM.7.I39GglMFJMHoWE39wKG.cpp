
        
        #include 'db/dbformat.h'
#include 'db/filename.h'
#include 'db/table_cache.h'
#include 'db/version_edit.h'
#include 'leveldb/db.h'
#include 'leveldb/env.h'
#include 'leveldb/iterator.h'
    
    class DBImpl;
    
      fname = DescriptorFileName('bar', 100);
  ASSERT_EQ('bar/', std::string(fname.data(), 4));
  ASSERT_TRUE(ParseFileName(fname.c_str() + 4, &number, &type));
  ASSERT_EQ(100, number);
  ASSERT_EQ(kDescriptorFile, type);
    
    static void TestEncodeDecode(const VersionEdit& edit) {
  std::string encoded, encoded2;
  edit.EncodeTo(&encoded);
  VersionEdit parsed;
  Status s = parsed.DecodeFrom(encoded);
  ASSERT_TRUE(s.ok()) << s.ToString();
  parsed.EncodeTo(&encoded2);
  ASSERT_EQ(encoded, encoded2);
}
    
      static Status InsertInto(const WriteBatch* batch, MemTable* memtable);
    
    inline bool operator!=(const Slice& x, const Slice& y) { return !(x == y); }
    
    #include 'leveldb/iterator.h'
#include 'leveldb/slice.h'
    
    TEST(Coding, Varint64Overflow) {
  uint64_t result;
  std::string input('\x81\x82\x83\x84\x85\x81\x82\x83\x84\x85\x11');
  ASSERT_TRUE(GetVarint64Ptr(input.data(), input.data() + input.size(),
                             &result) == nullptr);
}
    
    
    {    //1
    ret = p.read(&p, buf, sizeof(buf));
    if (ret < 0)
    {
        swSysWarn('read() failed.');
    }
    ASSERT_GT(ret, 0);
    ASSERT_EQ(strcmp('hello world1', buf), 0);
    //2
    ret = p.read(&p, buf, sizeof(buf));
    ASSERT_GT(ret, 0);
    ASSERT_EQ(strcmp('hello world2', buf), 0);
    //3
    ret = p.read(&p, buf, sizeof(buf));
    ASSERT_GT(ret, 0);
    ASSERT_EQ(strcmp('hello world3', buf), 0);
}
    
    
    {
    {        make_pair([](void *arg)
        {
            auto chan = (Channel *) arg;
            ASSERT_EQ(*(int *) chan->pop(), 1);
            ASSERT_EQ(*(int *) chan->pop(), 1);
        }, &chan)
    });
}
    
        ret = swSocket_unix_sendto(fd1,sock2_path,test_data,strlen(test_data));
    ASSERT_GT(ret, 0);
    
    
    {    ASSERT_EQ(swThreadPool_free(&pool), SW_OK);
    ASSERT_EQ(result, N);
}
#endif
    
        Q_OBJECT
    
    
    {
    {void field_packet::parse(const char *data)
{
    server_packet::parse(data);
    bool nul = false;
    char *p = body = new char[header.length];
    memcpy(body, data + SW_MYSQL_PACKET_HEADER_SIZE, header.length);
    // catalog
    p += read_lcb(p, &catalog_length, &nul);
    catalog = p;
    p += catalog_length;
    // database
    p += read_lcb(p, &database_length, &nul);
    database = p;
    p += database_length;
    // table
    p += read_lcb(p, &table_length, &nul);
    table = p;
    p += table_length;
    // origin table
    p += read_lcb(p, &org_table_length, &nul);
    org_table = p;
    p += org_table_length;
    // name
    p += read_lcb(p, &name_length, &nul);
    name = p;
    p += name_length;
    // origin table
    p += read_lcb(p, &org_name_length, &nul);
    org_name = p;
    p += org_name_length;
    // filler
    p += 1;
    // charset
    charset = sw_mysql_uint2korr2korr(p);
    p += 2;
    // binary length
    length = sw_mysql_uint2korr4korr(p);
    p += 4;
    // field type
    type = (uint8_t) *p;
    p += 1;
    // flags
    flags = sw_mysql_uint2korr2korr(p);
    p += 2;
    /* decimals */
    decimals = *p;
    p += 1;
    /* filler */
    p += 2;
    /* default - a priori facultatif */
    if (p < body + header.length)
    {
        p += read_lcb(p, &def_length, &nul);
        def = p;
        p += def_length;
    }
    swMysqlPacketDump(header.length, header.number, data, (*name == '?' ? 'Protocol::Param': 'Protocol::Field'));
    swTraceLog(
        SW_TRACE_MYSQL_CLIENT,
        'catalog=%.*s, database=%.*s, table=%.*s, org_table=%.*s, name=%.*s, org_name=%.*s,'
        'charset=%u, binary_length=%' PRIu64 ', type=%u, flags=0x%08x, decimals=%u, def=[%.*s]',
        catalog_length, catalog, database_length, database,
        table_length, table, org_table_length, org_table,
        name_length, name, org_name_length, org_name,
        charset, length, type, flags, decimals, def_length, def
    );
}
}
}
