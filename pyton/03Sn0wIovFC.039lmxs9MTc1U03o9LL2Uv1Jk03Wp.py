
        
            def __init__(self, operators, supervisors, directors):
        self.operators = operators
        self.supervisors = supervisors
        self.directors = directors
        self.queued_calls = deque()
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
    
if __name__ == '__main__':
    HitCounts.run()

    
        def set(self, results, query):
        '''Set the result for the given query key in the cache.
    
    
def openssl_encode(algo, key, iv):
    cmd = ['openssl', 'enc', '-e', '-' + algo, '-K', hex_str(key), '-iv', hex_str(iv)]
    prog = subprocess.Popen(cmd, stdin=subprocess.PIPE, stdout=subprocess.PIPE)
    out, _ = prog.communicate(secret_msg)
    return out
    
    
def main():
    with open('supportedsites.html.in', 'r', encoding='utf-8') as tmplf:
        template = tmplf.read()
    
        out = issue_template_tmpl % {'version': locals()['__version__']}
    
        return ret
    
    for page in itertools.count(1):
    releases = json.loads(compat_urllib_request.urlopen(
        'https://api.github.com/repos/rg3/youtube-dl/releases?page=%s' % page
    ).read().decode('utf-8'))
    
    # General information about the project.
project = u'youtube-dl'
copyright = u'2014, Ricardo Garcia Gonzalez'
    
        def test_encrypt(self):
        msg = b'message'
        key = list(range(16))
        encrypted = aes_encrypt(bytes_to_intlist(msg), key)
        decrypted = intlist_to_bytes(aes_decrypt(encrypted, key))
        self.assertEqual(decrypted, msg)
    
        def test_youtube_feeds(self):
        self.assertMatch('https://www.youtube.com/feed/watch_later', ['youtube:watchlater'])
        self.assertMatch('https://www.youtube.com/feed/subscriptions', ['youtube:subscriptions'])
        self.assertMatch('https://www.youtube.com/feed/recommended', ['youtube:recommended'])
        self.assertMatch('https://www.youtube.com/my_favorites', ['youtube:favorites'])
    
    
class TestExecution(unittest.TestCase):
    def test_import(self):
        subprocess.check_call([sys.executable, '-c', 'import youtube_dl'], cwd=rootDir)
    
    
if __name__ == '__main__':
    from sklearn.linear_model import Lasso, LassoLars
    import matplotlib.pyplot as plt
    
    import six
    
        op.add_option('--transformers',
                  dest='selected_transformers',
                  default='GaussianRandomProjection,SparseRandomProjection',
                  type=str,
                  help='Comma-separated list of transformer to benchmark. '
                       'Default: %default. Available: '
                       'GaussianRandomProjection,SparseRandomProjection')
    
            # split the paragraph into fake smaller paragraphs to make the
        # problem harder e.g. more similar to tweets
        if lang in ('zh', 'ja'):
        # FIXME: whitespace tokenizing does not work on chinese and japanese
            continue
        words = content.split()
        n_groups = len(words) / n_words_per_short_text
        if n_groups < 1:
            continue
        groups = np.array_split(words, n_groups)
    
        if not os.path.exists(ARCHIVE_NAME):
        print('Downloading dataset from %s (14 MB)' % URL)
        opener = urlopen(URL)
        with open(ARCHIVE_NAME, 'wb') as archive:
            archive.write(opener.read())
    
    # begin[licence]
#
# [The 'BSD licence']
# Copyright (c) 2005-2008 Terence Parr
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
# 3. The name of the author may not be used to endorse or promote products
#    derived from this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
# IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
# OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
# IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
# NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
# THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#
# end[licence]
    
    
    def getRuleInvocationStack(self):
        '''
        Return List<String> of the rules in your parser instance
        leading up to a call to this method.  You could override if
        you want more details such as the file/line info of where
        in the parser java code a rule is invoked.