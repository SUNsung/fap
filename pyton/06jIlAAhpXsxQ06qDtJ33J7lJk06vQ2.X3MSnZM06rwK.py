
        
        # For every line, fix the respective file
for line in output_lines:
    match = re.match(line_re, line)
    
        def add_options(self, parser):
        '''
        Populate option parse with options available for this command
        '''
        group = OptionGroup(parser, 'Global Options')
        group.add_option('--logfile', metavar='FILE',
            help='log file. if omitted stderr will be used')
        group.add_option('-L', '--loglevel', metavar='LEVEL', default=None,
            help='log level (default: %s)' % self.settings['LOG_LEVEL'])
        group.add_option('--nolog', action='store_true',
            help='disable logging completely')
        group.add_option('--profile', metavar='FILE', default=None,
            help='write python cProfile stats to FILE')
        group.add_option('--pidfile', metavar='FILE',
            help='write process ID to FILE')
        group.add_option('-s', '--set', action='append', default=[], metavar='NAME=VALUE',
            help='set/override setting (may be repeated)')
        group.add_option('--pdb', action='store_true', help='enable pdb on failure')
    
        def short_desc(self):
        return 'Print Scrapy version'
    
    
def _parsed_url_args(parsed):
    # Assume parsed is urlparse-d from Request.url,
    # which was passed via safe_url_string and is ascii-only.
    b = lambda s: to_bytes(s, encoding='ascii')
    path = urlunparse(('', '', parsed.path or '/', parsed.params, parsed.query, ''))
    path = b(path)
    host = b(parsed.hostname)
    port = parsed.port
    scheme = b(parsed.scheme)
    netloc = b(parsed.netloc)
    if port is None:
        port = 443 if scheme == b'https' else 80
    return scheme, netloc, host, port, path
    
        def __init__(self, index=None, exceptions=None, rules=None, lookup=None):
        self.index = index
        self.exc = exceptions
        self.rules = rules
        self.lookup_table = lookup if lookup is not None else {}
    
    Cythonize pyx files into C++ files as needed.
    
        def __call__(self, doc):
        X = get_features([doc], self.max_length)
        y = self._model.predict(X)
        self.set_sentiment(doc, y)
    
    
@plac.annotations(
    patterns_loc=('Path to gazetteer', 'positional', None, str),
    text_loc=('Path to Reddit corpus file', 'positional', None, str),
    n=('Number of texts to read', 'option', 'n', int),
    lang=('Language class to initialise', 'option', 'l', str),
)
def main(patterns_loc, text_loc, n=10000, lang='en'):
    nlp = spacy.blank(lang)
    nlp.vocab.lex_attr_getters = {}
    phrases = read_gazetteer(nlp.tokenizer, patterns_loc)
    count = 0
    t1 = time.time()
    for ent_id, text in get_matches(nlp.tokenizer, phrases, read_text(text_loc, n=n)):
        count += 1
    t2 = time.time()
    print('%d docs in %.3f s. %d matches' % (n, (t2 - t1), count))