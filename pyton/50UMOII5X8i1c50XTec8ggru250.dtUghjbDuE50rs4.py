
        
        
def inet_ntop(address_family, packed_ip):
    addr = sockaddr()
    addr.sa_family = address_family
    addr_size = ctypes.c_int(ctypes.sizeof(addr))
    ip_string = ctypes.create_string_buffer(128)
    ip_string_size = ctypes.c_int(ctypes.sizeof(ip_string))
    
    - CommonTokenStream: A basic and most commonly used TokenStream
  implementation.
- TokenRewriteStream: A modification of CommonTokenStream that allows the
  stream to be altered (by the Parser). See the 'tweak' example for a usecase.
    
            if self._state.backtracking > 0:
            sys.stdout.write(' backtracking=%s' % self._state.backtracking)
    
            raise NotImplementedError
    
    def setType(self, ttype):
        '''@brief Get the type of the token.
    
                # late import to avoid cyclic dependencies
            from google.appengine._internal.antlr3.streams import TokenStream, CharStream
            from google.appengine._internal.antlr3.tree import TreeNodeStream
    
        long_description = README,
    
            for i in html_json['sources']:
            if 'src' in i:  #to avoid KeyError
                if i['src'].startswith('https'):
                    link_list.append((str(i['height']), i['src']))