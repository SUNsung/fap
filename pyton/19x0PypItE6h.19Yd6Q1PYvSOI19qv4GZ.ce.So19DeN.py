
        
        
class TerminalModule(TerminalBase):
    
            for n in (-10, -1, 0, 1, 2, 10, 499, 500, 501, 1000):
            d = deque('abcdef', 500)
            d *= n
            self.assertEqual(d, deque(('abcdef' * n)[-500:]))
            self.assertEqual(d.maxlen, 500)
    
        def __init__(self):
        CGIXMLRPCRequestHandler.__init__(self)
        XMLRPCDocGenerator.__init__(self)
    
            del x; del y; gc.collect(); gc.collect(); gc.collect()
        a.append(100)
        a.pop()
        x = (c_int * 16).from_buffer(a)
    
            WNDPROC_2 = WINFUNCTYPE(c_long, c_int, c_int, c_int, c_int)
    
    def download_pdf(link, location, name):
    try:
        response = requests.get(link)
        with open(os.path.join(location, name), 'wb') as f:
        	f.write(response.content)
        	f.close()
    except HTTPError:
        print('>>> Error 404: cannot be downloaded!\n') 
        raise   
    except socket.timeout:
        print(' '.join(('can't download', link, 'due to connection timeout!')) )
        raise