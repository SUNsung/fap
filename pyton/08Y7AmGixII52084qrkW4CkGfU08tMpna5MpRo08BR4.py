
        
            for group in opt_parser.option_groups:
        for option in group.option_list:
            long_option = option.get_opt_string().strip('-')
            complete_cmd = ['complete', '--command', 'youtube-dl', '--long-option', long_option]
            if option._short_opts:
                complete_cmd += ['--short-option', option._short_opts[0].strip('-')]
            if option.help != optparse.SUPPRESS_HELP:
                complete_cmd += ['--description', option.help]
            complete_cmd.extend(EXTRA_ARGS.get(long_option, []))
            commands.append(shell_quote(complete_cmd))
    
    versions_info = json.load(open('update/versions.json'))
if 'signature' in versions_info:
    del versions_info['signature']
    
    # We must be able to import youtube_dl
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))))
    
    
def filter_options(readme):
    ret = ''
    in_options = False
    for line in readme.split('\n'):
        if line.startswith('# '):
            if line[2:].startswith('OPTIONS'):
                in_options = True
            else:
                in_options = False
    
        # Max concurrency is limited by global CONCURRENT_REQUESTS setting
    max_concurrent_requests = 8
    # Requests per second goal
    qps = None # same as: 1 / download_delay
    download_delay = None
    # time in seconds to delay server responses
    latency = None
    # number of slots to create
    slots = 1
    
            if opts.nolog:
            self.settings.set('LOG_ENABLED', False, priority='cmdline')
    
    import scrapy
from scrapy.commands import ScrapyCommand
from scrapy.linkextractors import LinkExtractor
    
            if self.crawler_process.bootstrap_failed:
            self.exitcode = 1

    
        def _print_response(self, response, opts):
        if opts.headers:
            self._print_headers(response.request.headers, b'>')
            print('>')
            self._print_headers(response.headers, b'<')
        else:
            self._print_bytes(response.body)
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-l', '--list', dest='list', action='store_true',
            help='List available templates')
        parser.add_option('-e', '--edit', dest='edit', action='store_true',
            help='Edit spider after creating it')
        parser.add_option('-d', '--dump', dest='dump', metavar='TEMPLATE',
            help='Dump template to standard output')
        parser.add_option('-t', '--template', dest='template', default='basic',
            help='Uses a custom template.')
        parser.add_option('--force', dest='force', action='store_true',
            help='If the spider already exists, overwrite it with the template')
    
        def short_desc(self):
        return 'Run a self-contained spider (without creating a project)'
    
        def syntax(self):
        return '[-v]'
    
            'A TLS/SSL connection established with [this method] may
         understand the SSLv3, TLSv1, TLSv1.1 and TLSv1.2 protocols.'
        '''
    
        try:
        # XXX: this try-except is not needed in Twisted 17.0.0+ because
        # it requires pyOpenSSL 0.16+.
        from OpenSSL.SSL import SSL_CB_HANDSHAKE_DONE, SSL_CB_HANDSHAKE_START
    except ImportError:
        SSL_CB_HANDSHAKE_START = 0x10
        SSL_CB_HANDSHAKE_DONE = 0x20
    
    
# XXX: move it to w3lib?
_ajax_crawlable_re = re.compile(six.u(r'<meta\s+name=['\']fragment['\']\s+content=['\']!['\']/?>'))
def _has_ajaxcrawlable_meta(text):
    '''
    >>> _has_ajaxcrawlable_meta('<html><head><meta name='fragment'  content='!'/></head><body></body></html>')
    True
    >>> _has_ajaxcrawlable_meta('<html><head><meta name='fragment' content='!'></head></html>')
    True
    >>> _has_ajaxcrawlable_meta('<html><head><!--<meta name='fragment'  content='!'/>--></head><body></body></html>')
    False
    >>> _has_ajaxcrawlable_meta('<html></html>')
    False
    '''
    
    import os
import warnings
    
    import logging
from numbers import Number
    
        assert bump_version(Version('0.56.0'), 'minor') == \
        Version('0.57.0')
    assert bump_version(Version('0.56.3'), 'minor') == \
        Version('0.57.0')
    assert bump_version(Version('0.56.0.b3'), 'minor') == \
        Version('0.56.0')
    assert bump_version(Version('0.56.3.b3'), 'minor') == \
        Version('0.57.0')
    assert bump_version(Version('0.56.0.dev0'), 'minor') == \
        Version('0.56.0')
    assert bump_version(Version('0.56.2.dev0'), 'minor') == \
        Version('0.57.0')
    
    
@asyncio.coroutine
def test_if_fires_on_hass_shutdown(hass):
    '''Test the firing when HASS starts.'''
    calls = async_mock_service(hass, 'test', 'automation')
    hass.state = CoreState.not_running
    
    
def _write_voc_results_files(json_dataset, all_boxes, salt):
    filenames = []
    image_set_path = voc_info(json_dataset)['image_set_path']
    assert os.path.exists(image_set_path), \
        'Image set path does not exist: {}'.format(image_set_path)
    with open(image_set_path, 'r') as f:
        image_index = [x.strip() for x in f.readlines()]
    # Sanity check that order of images in json dataset matches order in the
    # image set
    roidb = json_dataset.get_roidb()
    for i, entry in enumerate(roidb):
        index = os.path.splitext(os.path.split(entry['image'])[1])[0]
        assert index == image_index[i]
    for cls_ind, cls in enumerate(json_dataset.classes):
        if cls == '__background__':
            continue
        logger.info('Writing VOC results for: {}'.format(cls))
        filename = _get_voc_results_file_template(json_dataset,
                                                  salt).format(cls)
        filenames.append(filename)
        assert len(all_boxes[cls_ind]) == len(image_index)
        with open(filename, 'wt') as f:
            for im_ind, index in enumerate(image_index):
                dets = all_boxes[cls_ind][im_ind]
                if type(dets) == list:
                    assert len(dets) == 0, \
                        'dets should be numpy.ndarray or empty list'
                    continue
                # the VOCdevkit expects 1-based indices
                for k in range(dets.shape[0]):
                    f.write('{:s} {:.3f} {:.1f} {:.1f} {:.1f} {:.1f}\n'.
                            format(index, dets[k, -1],
                                   dets[k, 0] + 1, dets[k, 1] + 1,
                                   dets[k, 2] + 1, dets[k, 3] + 1))
    return filenames
    
    # array([[ -83.,  -39.,  100.,   56.],
#        [-175.,  -87.,  192.,  104.],
#        [-359., -183.,  376.,  200.],
#        [ -55.,  -55.,   72.,   72.],
#        [-119., -119.,  136.,  136.],
#        [-247., -247.,  264.,  264.],
#        [ -35.,  -79.,   52.,   96.],
#        [ -79., -167.,   96.,  184.],
#        [-167., -343.,  184.,  360.]])
    
            if not cfg.MODEL.RPN_ONLY:
            # Add the Fast R-CNN head
            head_loss_gradients['box'] = _add_fast_rcnn_head(
                model, add_roi_box_head_func, blob_conv, dim_conv,
                spatial_scale_conv
            )
    
        loss_gradients.update(blob_utils.get_loss_gradients(model, gradients))
    model.AddLosses(losses)
    return loss_gradients

    
    import logging
import numpy as np
    
        with pytest.raises(ValueError, match=msg):
        df.groupby('key').rank(method=ties_method,
                               ascending=ascending,
                               na_option=na_option, pct=pct)
    
    from pandas import DataFrame, MultiIndex, Series, date_range
from pandas.util import testing as tm
    
        @classmethod
    def _from_factorized(cls, values, original):
        return cls(values)
    
        ('border-top-style: solid; border-top-width: thin',
     {'border': {'top': {'style': 'thin'}}}),
    ('border-top-style: solid; border-top-width: 1pt',
     {'border': {'top': {'style': 'thin'}}}),
    ('border-top-style: solid',
     {'border': {'top': {'style': 'medium'}}}),
    ('border-top-style: solid; border-top-width: medium',
     {'border': {'top': {'style': 'medium'}}}),
    ('border-top-style: solid; border-top-width: 2pt',
     {'border': {'top': {'style': 'medium'}}}),
    ('border-top-style: solid; border-top-width: thick',
     {'border': {'top': {'style': 'thick'}}}),
    ('border-top-style: solid; border-top-width: 4pt',
     {'border': {'top': {'style': 'thick'}}}),
    
    
def test_ext():
    def check(ext, packed):
        assert packb(ext) == packed
        assert unpackb(packed) == ext
    
    
t0 = time.time()
print('training...')
    
        def testTokenize_NOHMM(self):
        for content in test_contents:
            result = jieba.tokenize(content,HMM=False)
            assert isinstance(result, types.GeneratorType), 'Test Tokenize Generator error'
            result = list(result)
            assert isinstance(result, list), 'Test Tokenize error on content: %s' % content
            for tk in result:
                print('word %s\t\t start: %d \t\t end:%d' % (tk[0],tk[1],tk[2]), file=sys.stderr)
        print('testTokenize_NOHMM', file=sys.stderr)
    
    print(','.join(tags))