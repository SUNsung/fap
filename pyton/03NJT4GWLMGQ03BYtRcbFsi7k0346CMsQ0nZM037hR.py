
        
            def start_requests(self):
        qargs = {'total': self.total, 'show': self.show}
        url = '{}?{}'.format(self.baseurl, urlencode(qargs, doseq=1))
        return [scrapy.Request(url, dont_filter=True)]
    
        def syntax(self):
        return '[-v]'
    
                    # EOF Transition to accept state?
                if c == EOF and self.eof[s] >= 0:
                    #print 'EOF Transition to accept state %d' \
                    #  % self.accept[self.eof[s]]
                    return self.accept[self.eof[s]]
    
        Note text is not an actual property of the return value, it is computed
    from start and stop using the input stream's toString() method.  I
    could add a ctor to this so that we can pass in and store the input
    stream, but I'm not sure we want to do that.  It would seem to be undefined
    to get the .text property anyway if the rule matches tokens from multiple
    input streams.
    
    
    def setCharPositionInLine(self, pos):
        '''
        Using setter/getter methods is deprecated. Use o.charPositionInLine
        instead.
        '''
        self.charPositionInLine = pos
    
    def _save_cheatsheet(topic_name, cheatsheet):
    '''
    Save posted cheat sheet `cheatsheet` with `topic_name`
    in the spool directory
    '''
    
        if 'topic' in request.args:
        return redirect('/%s' % request.args.get('topic'))
    
        def read(self, filename):
        '''
        Read template from `filename`
        '''
        with open(filename) as f:
            self._mode = 'page'
            for line in f.readlines():
                line = line.rstrip('\n')
                if line.startswith('==[') and line.endswith(']=='):
                    self._process_line(line[3:-3].strip())
                    continue
    
        @staticmethod
    def _cut_block(block, start_block=False):
        answer = block[2:-1]
        if answer[0].split() == '':
            answer = answer[1:]
        if answer[-1].split() == '':
            answer = answer[:1]
        return answer