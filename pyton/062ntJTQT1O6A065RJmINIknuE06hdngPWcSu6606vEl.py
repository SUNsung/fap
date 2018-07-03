
        
        
if __name__ == '__main__':
    main()

    
    
def jsonify(result, format=False):
    ''' format JSON output (uncompressed or uncompressed) '''
    
        terminal_stdout_re = [
        re.compile(r'[\r\n]?<.+>(?:\s*)$'),
        re.compile(r'[\r\n]?\[.+\](?:\s*)$'),
    ]
    
        def isatty(self):
        if self.closed:
            raise ValueError('I/O operation on closed file')
        return False
    
        def article(self, message_spec=None, *, file=None):
        '''Process an ARTICLE command.  Argument:
        - message_spec: article number or message id
        - file: filename string or file object to store the article in
        Returns:
        - resp: server response if successful
        - ArticleInfo: (article number, message id, list of article lines)
        '''
        if message_spec is not None:
            cmd = 'ARTICLE {0}'.format(message_spec)
        else:
            cmd = 'ARTICLE'
        return self._artcmd(cmd, file)
    
    def get_custom_entry_point(subsystem):
    try:
        return subsystem_details[subsystem][:2]
    except KeyError:
        raise ValueError('The subsystem %s is not known' % subsystem) from None
    
        def find_byname(self, name):
        '''Return (red, green, blue) for name'''
        name = name.lower()
        try:
            return self.__byname[name]
        except KeyError:
            raise BadColor(name) from None
    
        for x in gen(0):
        yield x
    
        parser = argparse.ArgumentParser(description = 'Download all the PDF/HTML links into README.md')
    parser.add_argument('-d', action='store', dest='directory')
    parser.add_argument('--no-html', action='store_true', dest='nohtml', default = False)
    parser.add_argument('--overwrite', action='store_true', default = False)    
    results = parser.parse_args()
    
        def __init__(self, name, action):
        self.name = name
        self.action = action
    
    
class BaseRegisteredClass(object):
    __metaclass__ = RegistryHolder
    '''
        Any class that will inherits from BaseRegisteredClass will be included
        inside the dict RegistryHolder.REGISTRY, the key being the name of the
        class and the associated value, the class itself.
    '''
    pass
    
        def test_display_current_time_at_midnight(self):
        class_under_test = TimeDisplay()
        expected_time = '24:01'
        result = class_under_test.get_current_time_as_as_html_fragment()
        self.assertEqual(result, expected_time)
'''
    
    '''
http://ginstrom.com/scribbles/2007/10/08/design-patterns-python-style/
Implementation of the iterator pattern with a generator