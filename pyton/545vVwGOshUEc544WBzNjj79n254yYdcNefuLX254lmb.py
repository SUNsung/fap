
        
                for filename in os.listdir(firefox_path):
            if filename.endswith('.default') and os.path.isdir(os.path.join(firefox_path, filename)):
                config_path = os.path.join(firefox_path, filename)
                #xlog.debug('Got Firefox path: %s', config_path)
                return config_path
    
    EOF = -1
    
    
    def match(self, input, ttype, follow):
        '''
        Match current input symbol against ttype.  Attempt
        single token insertion or deletion error recovery.  If
        that fails, throw MismatchedTokenException.
    
        '''
    
    def __init__(self, type=None, channel=DEFAULT_CHANNEL, text=None,
                 input=None, start=None, stop=None, oldToken=None):
        Token.__init__(self)
        
        if oldToken is not None:
            self.type = oldToken.type
            self.line = oldToken.line
            self.charPositionInLine = oldToken.charPositionInLine
            self.channel = oldToken.channel
            self.index = oldToken.index
            self._text = oldToken._text
            if isinstance(oldToken, CommonToken):
                self.input = oldToken.input
                self.start = oldToken.start
                self.stop = oldToken.stop
            
        else:
            self.type = type
            self.input = input
            self.charPositionInLine = -1 # set to invalid position
            self.line = 0
            self.channel = channel
            
	    #What token number is this from 0..n-1 tokens; < 0 implies invalid index
            self.index = -1
            
            # We need to be able to change the text once in a while.  If
            # this is non-null, then getText should return this.  Note that
            # start/stop are not affected by changing this.
            self._text = text
    
    
def setup(app):
    app.add_config_value('edit_on_github_project', '', True)
    app.add_config_value('edit_on_github_branch', 'master', True)
    app.add_config_value('edit_on_github_src_path', '', True)  # 'eg' 'docs/'
    app.connect('html-page-context', html_page_context)

    
        # Test if configuration directory exists
    if not os.path.isdir(config_dir):
        print('Creating directory', config_dir)
        os.makedirs(config_dir)
    
    
def test_bump_version():
    '''Make sure it all works.'''
    assert bump_version(Version('0.56.0'), 'beta') == Version('0.56.1b0')
    assert bump_version(Version('0.56.0b3'), 'beta') == Version('0.56.0b4')
    assert bump_version(Version('0.56.0.dev0'), 'beta') == Version('0.56.0b0')
    
    try:
    import pkg_resources
    get_module_res = lambda *res: pkg_resources.resource_stream(__name__,
                                                                os.path.join(*res))
except ImportError:
    get_module_res = lambda *res: open(os.path.normpath(os.path.join(
                            os.getcwd(), os.path.dirname(__file__), *res)), 'rb')
    
        def rank(self):
        ws = defaultdict(float)
        outSum = defaultdict(float)
    
        STOP_WORDS = set((
        'the', 'of', 'is', 'and', 'to', 'in', 'that', 'we', 'for', 'an', 'are',
        'by', 'be', 'as', 'on', 'with', 'can', 'if', 'from', 'which', 'you', 'it',
        'this', 'then', 'at', 'have', 'all', 'not', 'one', 'has', 'or', 'that'
    ))
    
        def __cut_detail(self, sentence):
        blocks = re_han_detail.split(sentence)
        for blk in blocks:
            if re_han_detail.match(blk):
                for word in self.__cut(blk):
                    yield word
            else:
                tmp = re_skip_detail.split(blk)
                for x in tmp:
                    if x:
                        if re_num.match(x):
                            yield pair(x, 'm')
                        elif re_eng.match(x):
                            yield pair(x, 'eng')
                        else:
                            yield pair(x, 'x')
    
    tags = jieba.analyse.extract_tags(content, topK=topK)
    
    if opt.withWeight is None:
    withWeight = False
else:
    if int(opt.withWeight) is 1:
        withWeight = True
    else:
        withWeight = False
    
    
def fixViewBox(data):
    viewBox = reViewBox.search(data)
    if not viewBox:
        return data
    fixedViewBox = 'viewBox=\'0 1000 1000 1000\''
    fixedData = re.sub(viewBox.group(1), fixedViewBox, data)
    return fixedData