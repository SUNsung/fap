
        
        
def how_to_configure(proc, TIMEOUT):
    proc.sendline(u'fuck')
    assert proc.expect([TIMEOUT, u'alias isn't configured'])

    
    python_2 = (u'thefuck/python2-bash',
            u'FROM python:2',
            u'sh')
    
    
@pytest.fixture(params=containers)
def proc(request, spawnu, TIMEOUT):
    proc = spawnu(*request.param)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(u'thefuck --alias > ~/.config/fish/config.fish')
    proc.sendline(u'fish')
    return proc
    
      * scan
'''
    
    You can install with Homebrew-Cask:
  brew cask install osxfuse
    
    
FORM_CONTENT_TYPE = 'application/x-www-form-urlencoded; charset=utf-8'
JSON_CONTENT_TYPE = 'application/json'
JSON_ACCEPT = '{0}, */*'.format(JSON_CONTENT_TYPE)
DEFAULT_UA = 'HTTPie/%s' % __version__
    
        def get_converter(self, mime):
        if is_valid_mime(mime):
            for converter_class in plugin_manager.get_converters():
                if converter_class.supports(mime):
                    return converter_class(mime)
    
        def __iter__(self):
        return iter(self._plugins)
    
    
def test_missing_auth(httpbin):
    r = http(
        '--auth-type=basic',
        'GET',
        httpbin + '/basic-auth/user/password',
        error_exit_ok=True
    )
    assert HTTP_OK not in r
    assert '--auth required' in r.stderr

    
            if row1 == row2:
            plaintext += table[row1*5+(col1-1)%5]
            plaintext += table[row2*5+(col2-1)%5]
        elif col1 == col2:
            plaintext += table[((row1-1)%5)*5+col1]
            plaintext += table[((row2-1)%5)*5+col2]
        else: # rectangle
            plaintext += table[row1*5+col2]
            plaintext += table[row2*5+col1]
    
        def __solveDP(self, x, y):
        if (x==-1):
            return y+1
        elif (y==-1):
            return x+1
        elif (self.dp[x][y]>-1):
            return self.dp[x][y]
        else:
            if (self.A[x]==self.B[y]):
                self.dp[x][y] = self.__solveDP(x-1,y-1)
            else:
                self.dp[x][y] = 1+min(self.__solveDP(x,y-1), self.__solveDP(x-1,y), self.__solveDP(x-1,y-1))
    
    
    
        def predict(self, x):
        '''
        predict:
        @param x: a floating point value to predict the label of
        the prediction function works by recursively calling the predict function
        of the appropriate subtrees based on the tree's decision boundary
        '''
        if self.prediction is not None:
            return self.prediction
        elif self.left or self.right is not None:
            if x >= self.decision_boundary:
                return self.right.predict(x)
            else:
                return self.left.predict(x)
        else:
            print('Error: Decision tree not yet trained')
            return None
    
    '''
* Wondering how this method works !
* It's pretty simple.
* Let's say you need to calculate a ^ b
* RULE 1 : a ^ b = (a*a) ^ (b/2) ---- example : 4 ^ 4 = (4*4) ^ (4/2) = 16 ^ 2
* RULE 2 : IF b is ODD, then ---- a ^ b = a * (a ^ (b - 1)) :: where (b - 1) is even.
* Once b is even, repeat the process to get a ^ b
* Repeat the process till b = 1 OR b = 0, because a^1 = a AND a^0 = 1
*
* As far as the modulo is concerned,
* the fact : (a*b) % c = ((a%c) * (b%c)) % c
* Now apply RULE 1 OR 2 whichever is required.
'''

    
    if __name__ == '__main__':
    import doctest
    doctest.testmod()

    
        classifiers = proj_info['classifiers'],
    
        # Get (branch, commit) if running from a git repo.
    head = git.get_head(kwargs['repo_path'])
    
            print_info(site_info, title, type, size)
        if not info_only:
            download_urls([real_url], title, ext, size, output_dir, merge = merge)
    
    '''
refer to http://open.youku.com/tools
'''
youku_embed_patterns = [ 'youku\.com/v_show/id_([a-zA-Z0-9=]+)',
                         'player\.youku\.com/player\.php/sid/([a-zA-Z0-9=]+)/v\.swf',
                         'loader\.swf\?VideoIDS=([a-zA-Z0-9=]+)',
                         'player\.youku\.com/embed/([a-zA-Z0-9=]+)',
                         'YKU.Player\(\'[a-zA-Z0-9]+\',{ client_id: \'[a-zA-Z0-9]+\', vid: \'([a-zA-Z0-9]+)\''
                       ]
    }
    
    
    {
    {pattern_inline_title = r'<title>([^<]*)</title>'
pattern_inline_api_key = r'api\.site_key\s*=\s*'([^']+)''
pattern_inline_img_url = r''url':'([^']+)','key':'[^']+'}}'
pattern_inline_NSID = r''nsid'\s*:\s*'([^']+)''
pattern_inline_video_mark = r'('mediaType':'video')'
    
            if (not line.strip() == '```'):
            if ('???' == no_comment_line or '...' == no_comment_line):
                has_question_marks = True
            linebuffer.append(dedent(line, indent_depth) if not fenced else line)
        try:
            line = read_filehandle.next()
            linenum += 1
        except StopIteration:
            line = ''
            break
    codefile = os.path.join(codedir, '%s%s.cpp' % (name, index))
    if fenced:
        text_filehandle.write('\n')