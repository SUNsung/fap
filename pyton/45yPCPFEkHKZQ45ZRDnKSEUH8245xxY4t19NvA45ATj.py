
        
        Uses the linkcheck's output file to fix links in docs.
    
    import scrapy
from scrapy.commands import ScrapyCommand
from scrapy.linkextractors import LinkExtractor
    
    class Command(ScrapyCommand):
    
        def run(self, args, opts):
        if opts.verbose:
            versions = scrapy_components_versions()
            width = max(len(n) for (n, _) in versions)
            patt = '%-{}s : %s'.format(width)
            for name, version in versions:
                print(patt % (name, version))
        else:
            print('Scrapy %s' % scrapy.__version__)
    
        class ScrapyClientContextFactory(ClientContextFactory):
        'A SSL context factory which is more permissive against SSL bugs.'
        # see https://github.com/scrapy/scrapy/issues/82
        # and https://github.com/scrapy/scrapy/issues/26
        # and https://github.com/scrapy/scrapy/issues/981
    
    openssl_methods = {
    METHOD_TLS:    SSL.SSLv23_METHOD,                   # protocol negotiation (recommended)
    METHOD_SSLv3:  SSL.SSLv3_METHOD,                    # SSL 3 (NOT recommended)
    METHOD_TLSv10: SSL.TLSv1_METHOD,                    # TLS 1.0 only
    METHOD_TLSv11: getattr(SSL, 'TLSv1_1_METHOD', 5),   # TLS 1.1 only
    METHOD_TLSv12: getattr(SSL, 'TLSv1_2_METHOD', 6),   # TLS 1.2 only
}
    
            if use_mean_attention:
            a = tf.reduce_mean(a, axis=1)  # [batch_size, n_step]
            a = tf.expand_dims(a, axis=1)  # [batch_size, 1, n_step]
            a = tf.tile(a, [1, n_input, 1])  # [batch_size, n_input, n_step]
    
    
'''预定义好的正则化器
'''
l1_regularizer = L1L2Regularizer(l1=0.01)
    
            self._colors = {
            'A': '#00cc00',
            'B': '#00cc00',
            'C': '#00aacc',
            'D': '#888888',
            'E': '#cccc00',
            'F': '#ff0000',
            'H': '#22aa22',
            'I': '#cc0000',
            'J': '#000000',
        }
    
        >>> rewrite_editor_section_name('js')
    'js'
    >>> rewrite_editor_section_name('vscode:js')
    'js'
    '''
    if ':' not in section_name:
        return section_name
    
        prefix = 'erlang'
    _filename = 'erlang.html.markdown'
    
        # cut code blocks
    block_number = 0
    while True:
        section_text, replacements = re.subn(
            '^```.*?^```',
            'MULTILINE_BLOCK_%s' % block_number,
            section_text,
            1,
            flags=re.S | re.MULTILINE)
        block_number += 1
        if not replacements:
            break
    
        find_answer_by_keyword()
    
    if os.environ.get('REDIS_HOST', '').lower() != 'none':
    _REDIS = redis.StrictRedis(host=REDISHOST, port=6379, db=0)
else:
    _REDIS = None
    
    def _colorize_ansi_answer(topic, answer, color_style,       # pylint: disable=too-many-arguments
                          highlight_all=True, highlight_code=False,
                          unindent_code=False):
    
    import signal
    
    
def format_return(result, max_lines):
    if isinstance(result, (list, tuple, set)):
        return '({0} with {1} items)'.format(type(result).__name__, len(result))
    
    It has been modified to mimic the behaviour of
https://golang.org/pkg/time/#ParseDuration
'''
# MIT LICENSE
#
# Permission is hereby granted, free of charge, to any person
# obtaining a copy of this software and associated documentation files
# (the 'Software'), to deal in the Software without restriction,
# including without limitation the rights to use, copy, modify, merge,
# publish, distribute, sublicense, and/or sell copies of the Software,
# and to permit persons to whom the Software is furnished to do so,
# subject to the following conditions:
#
# The above copyright notice and this permission notice shall be
# included in all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND,
# EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
# MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
# NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
# BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
# ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
# CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.
from __future__ import absolute_import
from __future__ import unicode_literals
    
        def remove(self):
        if self.external:
            log.info('Volume %s is external, skipping', self.true_name)
            return
        log.info('Removing volume %s', self.true_name)
        return self.client.remove_volume(self.true_name)
    
        opts = parse_opts(args)
    
        return ''.join(lines[i + 2:j - 1])
    
    
def create_custom_host_file(client, filename, content):
    dirname = os.path.dirname(filename)
    container = client.create_container(
        'busybox:latest',
        ['sh', '-c', 'echo -n '{}' > {}'.format(content, filename)],
        volumes={dirname: {}},
        host_config=client.create_host_config(
            binds={dirname: {'bind': dirname, 'ro': False}},
            network_mode='none',
        ),
    )
    try:
        client.start(container)
        exitcode = client.wait(container)['StatusCode']
    
    from compose.utils import unquote_path