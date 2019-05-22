
        
            def set(self, results, query):
        '''Set the result for the given query key in the cache.
    
    
if __name__ == '__main__':
    SpendingByCategory.run()

    
    
    {    # Options that need a file parameter
    'download-archive': ['--require-parameter'],
    'cookies': ['--require-parameter'],
    'load-info': ['--require-parameter'],
    'batch-file': ['--require-parameter'],
}
    
    import rsa
import json
from binascii import hexlify
    
    options = helptext[helptext.index('  General Options:') + 19:]
options = re.sub(r'(?m)^  (\w.+)$', r'## \1', options)
options = '# OPTIONS\n' + options + '\n'
    
        ies = sorted(youtube_dl.gen_extractors(), key=lambda i: i.IE_NAME.lower())
    out = '# Supported sites\n' + ''.join(
        ' - ' + md + '\n'
        for md in gen_ies_md(ies))
    
    import os
from os.path import dirname as dirn
import sys
    
    # Allow direct execution
import os
import sys
import unittest
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
        def test_template(self):
        ie = youtube_dl.extractor.get_info_extractor(test_case['name'])()
        other_ies = [get_info_extractor(ie_key)() for ie_key in test_case.get('add_ie', [])]
        is_playlist = any(k.startswith('playlist') for k in test_case)
        test_cases = test_case.get(
            'playlist', [] if is_playlist else [test_case])
    
    
if __name__ == '__main__':
    unittest.main()

    
        app.connect('doctree-read', collect_scrapy_settings_refs)
    app.connect('doctree-resolved', replace_settingslist_nodes)
    
        def __init__(self, *a, **kw):
        super(QPSSpider, self).__init__(*a, **kw)
        if self.qps is not None:
            self.qps = float(self.qps)
            self.download_delay = 1 / self.qps
        elif self.download_delay is not None:
            self.download_delay = float(self.download_delay)
    
        def run(self, args, opts):
        if opts.list:
            self._list_templates()
            return
        if opts.dump:
            template_file = self._find_template(opts.dump)
            if template_file:
                with open(template_file, 'r') as f:
                    print(f.read())
            return
        if len(args) != 2:
            raise UsageError()
    
        def run(self, args, opts):
        if opts.verbose:
            versions = scrapy_components_versions()
            width = max(len(n) for (n, _) in versions)
            patt = '%-{}s : %s'.format(width)
            for name, version in versions:
                print(patt % (name, version))
        else:
            print('Scrapy %s' % scrapy.__version__)
    
            self._signer = None
        if is_botocore():
            import botocore.auth
            import botocore.credentials
            kw.pop('anon', None)
            if kw:
                raise TypeError('Unexpected keyword arguments: %s' % kw)
            if not self.anon:
                SignerCls = botocore.auth.AUTH_TYPE_MAPS['s3']
                self._signer = SignerCls(botocore.credentials.Credentials(
                    aws_access_key_id, aws_secret_access_key))
        else:
            _S3Connection = _get_boto_connection()
            try:
                self.conn = _S3Connection(
                    aws_access_key_id, aws_secret_access_key, **kw)
            except Exception as ex:
                raise NotConfigured(str(ex))
    
        def lineReceived(self, line):
        return HTTPClient.lineReceived(self, line.rstrip())
    
        @classmethod
    def from_crawler(cls, crawler):
        if not crawler.settings.getbool('COOKIES_ENABLED'):
            raise NotConfigured
        return cls(crawler.settings.getbool('COOKIES_DEBUG'))
    
    
if __name__ == '__main__':
    unittest.main()  # pragma: no cover

    
    import josepy as jose
import pytz
    
        # The font size ('10pt', '11pt' or '12pt').
    #
    # 'pointsize': '10pt',
    
    # If extensions (or modules to document with autodoc) are in another directory,
# add these directories to sys.path here. If the directory is relative to the
# documentation root, use os.path.abspath to make it absolute, like shown here.
#
import os
# import sys
# sys.path.insert(0, os.path.abspath('.'))
    
    
def display_temp(hass: HomeAssistant, temperature: float, unit: str,
                 precision: float) -> float:
    '''Convert temperature into preferred units/precision for display.'''
    temperature_unit = unit
    ha_unit = hass.config.units.temperature_unit
    
    		print('Test: insert checking with post order traversal')
		expectVal = [7, 25, 10, 38, 40, 30, 60, 80, 70, 50]
		assert_equal(myTree.printPostOrder(), expectVal)
		expectVal = [91, 81, 71, 61, 51, 41, 31, 21, 11, 1]
		assert_equal(myTree2.printPostOrder(), expectVal)
    
        def decrease_key(self, obj, new_key):
        for node in self.array:
            if node.obj is obj:
                node.key = new_key
                return node
        return None