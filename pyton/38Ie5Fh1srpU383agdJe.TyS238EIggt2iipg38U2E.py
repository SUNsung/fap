
        
            def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
        def getChild(self, request, name):
        return self
    
        # Max concurrency is limited by global CONCURRENT_REQUESTS setting
    max_concurrent_requests = 8
    # Requests per second goal
    qps = None # same as: 1 / download_delay
    download_delay = None
    # time in seconds to delay server responses
    latency = None
    # number of slots to create
    slots = 1
    
            if opts.pidfile:
            with open(opts.pidfile, 'w') as f:
                f.write(str(os.getpid()) + os.linesep)
    
    class Command(ScrapyCommand):
    
    from . import Contract
    
            # extract cookies from Set-Cookie and drop invalid/expired cookies
        cookiejarkey = request.meta.get('cookiejar')
        jar = self.jars[cookiejarkey]
        jar.extract_cookies(response, request)
        self._debug_set_cookie(response, spider)
    
            # put all lines in the file into a Python list
        strings = f.readlines()
        
        # above line leaves trailing newline characters; strip them out
        strings = [x.strip(u'\n') for x in strings]
        
        # remove empty-lines and comments
        strings = [x for x in strings if x and not x.startswith(u'#')]
        
        # insert empty string since all are being removed
        strings.insert(0, u'')
    
            # test coding cookie
        for encoding in ('iso-8859-15', 'utf-8'):
            with open(filename, 'w', encoding=encoding) as fp:
                print('# coding: %s' % encoding, file=fp)
                print('print('euro:\u20ac')', file=fp)
            with tokenize_open(filename) as fp:
                self.assertEqual(fp.encoding, encoding)
                self.assertEqual(fp.mode, 'r')
    
        def test_named_expression_invalid_11(self):
        code = '''spam(a=1, b := 2)'''
    
        def xpath(self, id):
        '''Process an XPATH command (optional server extension) Arguments:
        - id: Message id of article
        Returns:
        resp: server response if successful
        path: directory path to article
        '''
        warnings.warn('The XPATH extension is not actively used',
                      DeprecationWarning, 2)
    
        queue = c_queue
    
        The returned instance will have attributes args, returncode, stdout and
    stderr. By default, stdout and stderr are not captured, and those attributes
    will be None. Pass stdout=PIPE and/or stderr=PIPE in order to capture them.
    
            messages = []
        self.loop.set_exception_handler(lambda loop, ctx: messages.append(ctx))
    
                ret[i, :] = i_label, i_score
    
        def test_object(queue):
        pool = ObjectPool(queue, True)
        print('Inside func: {}'.format(pool.item))
    
    
def main():
    ui = Ui()
    ui.get_product_list()
    ui.get_product_information('cheese')
    ui.get_product_information('eggs')
    ui.get_product_information('milk')
    ui.get_product_information('arepas')
    
        graphic.add(graphic1)
    graphic.add(graphic2)
    
    '''
*What is this pattern about?
The Decorator pattern is used to dynamically add a new feature to an
object without changing its implementation. It differs from
inheritance because the new feature is added only to that particular
object, not to the entire subclass.