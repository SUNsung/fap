
        
            @classmethod
    def basic_response_server(cls, **kwargs):
        return cls.text_response_server(
            'HTTP/1.1 200 OK\r\n' +
            'Content-Length: 0\r\n\r\n',
            **kwargs
        )
    
            # because special names such as Name.Class, Name.Function, etc.
        # are not recognized as such later in the parsing, we choose them
        # to look the same as ordinary variables.
        Name:                      '#000000',        # class: 'n'
        Name.Attribute:            '#c4a000',        # class: 'na' - to be revised
        Name.Builtin:              '#004461',        # class: 'nb'
        Name.Builtin.Pseudo:       '#3465a4',        # class: 'bp'
        Name.Class:                '#000000',        # class: 'nc' - to be revised
        Name.Constant:             '#000000',        # class: 'no' - to be revised
        Name.Decorator:            '#888',           # class: 'nd' - to be revised
        Name.Entity:               '#ce5c00',        # class: 'ni'
        Name.Exception:            'bold #cc0000',   # class: 'ne'
        Name.Function:             '#000000',        # class: 'nf'
        Name.Property:             '#000000',        # class: 'py'
        Name.Label:                '#f57900',        # class: 'nl'
        Name.Namespace:            '#000000',        # class: 'nn' - to be revised
        Name.Other:                '#000000',        # class: 'nx'
        Name.Tag:                  'bold #004461',   # class: 'nt' - like a keyword
        Name.Variable:             '#000000',        # class: 'nv' - to be revised
        Name.Variable.Class:       '#000000',        # class: 'vc' - to be revised
        Name.Variable.Global:      '#000000',        # class: 'vg' - to be revised
        Name.Variable.Instance:    '#000000',        # class: 'vi' - to be revised
    
            return url
    
        implementation_info = _implementation()
    urllib3_info = {'version': urllib3.__version__}
    chardet_info = {'version': chardet.__version__}
    
    Available hooks:
    
            errno = pytest.main(self.pytest_args)
        sys.exit(errno)
    
        def response_handler(sock):
        consume_socket_content(sock, timeout=0.5)
        sock.send(
            b'HTTP/1.1 302 FOUND\r\n'
            b'Content-Length: 0\r\n'
            b'Location: /get#relevant-section\r\n\r\n'
        )
        consume_socket_content(sock, timeout=0.5)
        sock.send(
            b'HTTP/1.1 302 FOUND\r\n'
            b'Content-Length: 0\r\n'
            b'Location: /final-url/\r\n\r\n'
        )
        consume_socket_content(sock, timeout=0.5)
        sock.send(
            b'HTTP/1.1 200 OK\r\n\r\n'
        )
    
            with pytest.raises(socket.error):
            new_sock = socket.socket()
            new_sock.connect((host, port))
    
    # The name for this set of Sphinx documents.  If None, it defaults to
# '<project> v<release> documentation'.
#html_title = None