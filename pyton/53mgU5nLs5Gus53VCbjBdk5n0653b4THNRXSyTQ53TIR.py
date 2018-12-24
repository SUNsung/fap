
        
        new_version = {}
    
    names = []
for ie in ordered_cls:
    name = ie.__name__
    src = build_lazy_ie(ie, name)
    module_contents.append(src)
    if ie in _ALL_CLASSES:
        names.append(name)
    
    README_FILE = 'README.md'
helptext = sys.stdin.read()
    
    import io
import optparse
import os
import sys
    
        diropts = []
    for opt in opts_dir:
        if opt._short_opts:
            diropts.extend(opt._short_opts)
        if opt._long_opts:
            diropts.extend(opt._long_opts)
    
            ydl = YDL({'format': 'worstaudio'})
        ydl.process_ie_result(info_dict.copy())
        downloaded = ydl.downloaded_info_dicts[0]
        self.assertEqual(downloaded['format_id'], 'audio-low')
    
    from __future__ import unicode_literals
    
            '''
        raise NotImplementedError()
    
    
setup(
    name='httpie',
    version=httpie.__version__,
    description=httpie.__doc__.strip(),
    long_description=long_description(),
    url='http://httpie.org/',
    download_url='https://github.com/jakubroztocil/httpie',
    author=httpie.__author__,
    author_email='jakub@roztocil.co',
    license=httpie.__licence__,
    packages=find_packages(),
    entry_points={
        'console_scripts': [
            'http = httpie.__main__:main',
        ],
    },
    extras_require=extras_require,
    install_requires=install_requires,
    tests_require=tests_require,
    cmdclass={'test': PyTest},
    classifiers=[
        'Development Status :: 5 - Production/Stable',
        'Programming Language :: Python',
        'Programming Language :: Python :: 2.7',
        'Programming Language :: Python :: 3',
        'Programming Language :: Python :: 3.1',
        'Programming Language :: Python :: 3.2',
        'Programming Language :: Python :: 3.3',
        'Programming Language :: Python :: 3.4',
        'Programming Language :: Python :: 3.5',
        'Programming Language :: Python :: 3.6',
        'Environment :: Console',
        'Intended Audience :: Developers',
        'Intended Audience :: System Administrators',
        'License :: OSI Approved :: BSD License',
        'Topic :: Internet :: WWW/HTTP',
        'Topic :: Software Development',
        'Topic :: System :: Networking',
        'Topic :: Terminals',
        'Topic :: Text Processing',
        'Topic :: Utilities'
    ],
)

    
        try:
        r = http(
            httpbin + BASIC_AUTH_URL,
            '--auth-type',
            Plugin.auth_type,
            '--auth',
            USERNAME,
        )
        assert HTTP_OK in r
        assert r.json == AUTH_OK
    finally:
        plugin_manager.unregister(Plugin)

    
    
def test_follow_all_redirects_shown(httpbin):
    r = http('--follow', '--all', httpbin.url + '/redirect/2')
    assert r.count('HTTP/1.1') == 3
    assert r.count('HTTP/1.1 302 FOUND', 2)
    assert HTTP_OK in r
    
        def test_request_body_from_file_by_path_no_data_items_allowed(
            self, httpbin):
        env = MockEnvironment(stdin_isatty=False)
        r = http('POST', httpbin.url + '/post', '@' + FILE_PATH_ARG, 'foo=bar',
                 env=env, error_exit_ok=True)
        assert 'cannot be mixed' in r.stderr

    
        name = 'config'
    helpurl = 'https://httpie.org/doc#config'
    about = 'HTTPie configuration file'
    
    from django.db import connections
from django.db.backends.base.base import NO_DB_ALIAS
    
        def save(self, session_key, session_dict, expire_date):
        s = self.model(session_key, self.encode(session_dict), expire_date)
        if session_dict:
            s.save()
        else:
            s.delete()  # Clear sessions with no data.
        return s
    
        return TemplateResponse(request, template_name, {'sitemaps': sites},
                            content_type=content_type)
    
    
class InterfaceError(Error):
    pass
    
    # Used for remembering the file (and its contents)
# so we don't have to open the same file again.
_filename = None
_contents = None
    
        def parse(self, response):
        pass

    
        def help(self):
        '''An extensive help for the command. It will be shown when using the
        'help' command. It can contain newlines, since not post-formatting will
        be applied to its contents.
        '''
        return self.long_desc()
    
        def syntax(self):
        return '[options] <spider>'
    
    from scrapy.commands import ScrapyCommand
from scrapy.exceptions import UsageError
    
            spidercls = DefaultSpider
        spider_loader = self.crawler_process.spider_loader
        if opts.spider:
            spidercls = spider_loader.load(opts.spider)
        else:
            spidercls = spidercls_for_request(spider_loader, request, spidercls)
        self.crawler_process.crawl(spidercls, start_requests=lambda: [request])
        self.crawler_process.start()

    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--spider', dest='spider', default=None,
            help='use this spider without looking for one')
        parser.add_option('-a', dest='spargs', action='append', default=[], metavar='NAME=VALUE',
            help='set spider argument (may be repeated)')
        parser.add_option('--pipelines', action='store_true',
            help='process items through pipelines')
        parser.add_option('--nolinks', dest='nolinks', action='store_true',
            help='don't show links to follow (extracted requests)')
        parser.add_option('--noitems', dest='noitems', action='store_true',
            help='don't show scraped items')
        parser.add_option('--nocolour', dest='nocolour', action='store_true',
            help='avoid using pygments to colorize the output')
        parser.add_option('-r', '--rules', dest='rules', action='store_true',
            help='use CrawlSpider rules to discover the callback')
        parser.add_option('-c', '--callback', dest='callback',
            help='use this callback for parsing, instead looking for a callback')
        parser.add_option('-m', '--meta', dest='meta',
            help='inject extra meta into the Request, it must be a valid raw json string')
        parser.add_option('-d', '--depth', dest='depth', type='int', default=1,
            help='maximum depth for parsing requests [default: %default]')
        parser.add_option('-v', '--verbose', dest='verbose', action='store_true',
            help='print each depth level one by one')
    
        def download_request(self, request, spider):
        scheme = urlparse_cached(request).scheme
        handler = self._get_handler(scheme)
        if not handler:
            raise NotSupported('Unsupported URL scheme '%s': %s' %
                               (scheme, self._notconfigured[scheme]))
        return handler.download_request(request, spider)
    
    This is a pure Python implementation of Dynamic Programming solution to the edit distance problem.
    
        def train(self, X, y):
        '''
        train:
        @param X: a one dimensional numpy array
        @param y: a one dimensional numpy array. 
        The contents of y are the labels for the corresponding X values