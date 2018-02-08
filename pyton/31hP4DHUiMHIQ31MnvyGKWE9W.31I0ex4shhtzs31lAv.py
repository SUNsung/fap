
        
        
with open(BIN_FILE_PATH, 'rb') as f:
    BIN_FILE_CONTENT = f.read()
    
    
def test_unicode_digest_auth(httpbin):
    # it doesn't really authenticate us because httpbin
    # doesn't interpret the utf8-encoded auth
    http('--auth-type=digest',
         '--auth', u'test:%s' % UNICODE,
         httpbin.url + u'/digest-auth/auth/test/' + UNICODE)

    
    
def parse_items(items,
                headers_class=CaseInsensitiveDict,
                data_class=OrderedDict,
                files_class=DataDict,
                params_class=ParamsDict):
    '''Parse `KeyValue` `items` into `data`, `headers`, `files`,
    and `params`.
    
        check_format(sys.argv[1])
    if len(errors) > 0:
        for err in errors:
            print(err)
        sys.exit(1)
    
    
if __name__ == '__main__':
    cli()
