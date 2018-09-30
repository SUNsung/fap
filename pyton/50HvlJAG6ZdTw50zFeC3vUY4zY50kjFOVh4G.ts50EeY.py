
        
                    try:
                self.working_appid_list.remove(appid)
            except:
                pass
    
            if response.status == 503:
            # out of quota
            if 'gws' not in server_type and 'Google Frontend' not in server_type and 'GFE' not in server_type:
                xlog.warn('503 but server type:%s', server_type)
                return False
            else:
                return True
    
        try:
        if cookie:
            if 'rc4' not in options:
                metadata = zlib.decompress(base64.b64decode(cookie), -zlib.MAX_WBITS)
                payload = input_data or ''
            else:
                metadata = zlib.decompress(rc4crypt(base64.b64decode(cookie), __password__), -zlib.MAX_WBITS)
                payload = rc4crypt(input_data, __password__) if input_data else ''
        else:
            if 'rc4' in options:
                input_data = rc4crypt(input_data, __password__)
            metadata_length = struct.unpack('!h', input_data[:2])
            metadata = zlib.decompress(input_data[2:2+metadata_length], -zlib.MAX_WBITS)
            payload = input_data[2+metadata_length:]
        headers = dict(x.split(':', 1) for x in metadata.splitlines() if x)
        method = headers.pop('G-Method')
        url = headers.pop('G-Url')
    except (zlib.error, KeyError, ValueError):
        import traceback
        start_response('500 Internal Server Error', [('Content-Type', 'text/html')])
        yield message_html('500 Internal Server Error', 'Bad Request (metadata) - Possible Wrong Password', '<pre>%s</pre>' % traceback.format_exc())
        raise StopIteration
    
    - ANTLRStringStream: Reads from a string objects. The input should be a unicode
  object, or ANTLR3 will have trouble decoding non-ascii data.
- ANTLRFileStream: Opens a file and read the contents, with optional character
  decoding.
- ANTLRInputStream: Reads the date from a file-like object, with optional
  character decoding.
    
    
class CommonTokenStream(TokenStream):
    '''
    @brief The most common stream of tokens
    
    The most common stream of tokens is one where every token is buffered up
    and tokens are prefiltered for a certain channel (the parser will only
    see these tokens and cannot change the filter channel number during the
    parse).
    '''
    
            You don't have to implement but it's nice to know where a Token
        comes from if you have include files etc... on the input.'''