
        
        
class MSE_MAE_loss:
    '''Loss function with internal state, for testing serialization code.'''
    def __init__(self, mse_fraction):
        self.mse_fraction = mse_fraction
    
    
def create_multi_input_model_from(layer1, layer2):
    input_1 = Input(shape=(data_dim,))
    input_2 = Input(shape=(data_dim,))
    out1 = layer1(input_1)
    out2 = layer2(input_2)
    out = Average()([out1, out2])
    model = Model([input_1, input_2], out)
    model.add_loss(K.mean(out2))
    model.add_loss(1)
    model.add_loss(1)
    return model
    
        E.g. for use with categorical_crossentropy.
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
import keras
from keras.layers import Activation, Dense, Input
from keras.layers import Conv2D, Flatten
from keras.layers import Reshape, Conv2DTranspose
from keras.models import Model
from keras import backend as K
from keras.datasets import mnist
import numpy as np
import matplotlib.pyplot as plt
from PIL import Image
    
    arxiv:1504.00941v2 [cs.NE] 7 Apr 2015
http://arxiv.org/pdf/1504.00941v2.pdf
    
    
def test_deconv_length():
    assert conv_utils.deconv_length(None, 1, 7, 'same', None) is None
    assert conv_utils.deconv_length(224, 1, 7, 'same', None) == 224
    assert conv_utils.deconv_length(224, 2, 7, 'same', None) == 448
    assert conv_utils.deconv_length(32, 1, 5, 'valid', None) == 36
    assert conv_utils.deconv_length(32, 2, 5, 'valid', None) == 67
    assert conv_utils.deconv_length(32, 1, 5, 'full', None) == 28
    assert conv_utils.deconv_length(32, 2, 5, 'full', None) == 59
    assert conv_utils.deconv_length(224, 1, 7, 'same', 0) == 224
    assert conv_utils.deconv_length(224, 2, 7, 'same', 0) == 447
    assert conv_utils.deconv_length(224, 2, 7, 'same', 1) == 448
    assert conv_utils.deconv_length(32, 1, 5, 'valid', 0) == 36
    assert conv_utils.deconv_length(32, 2, 5, 'valid', 0) == 67
    assert conv_utils.deconv_length(32, 2, 5, 'valid', 1) == 68
    assert conv_utils.deconv_length(6, 1, 3, 'full', 0) == 4
    assert conv_utils.deconv_length(6, 2, 3, 'full', 1) == 10
    assert conv_utils.deconv_length(6, 2, 3, 'full', 2) == 11
    
        def render(self, request):
        now = time()
        delta = now - self.lasttime
    
        def help(self):
        '''An extensive help for the command. It will be shown when using the
        'help' command. It can contain newlines, since not post-formatting will
        be applied to its contents.
        '''
        return self.long_desc()
    
        def __enter__(self):
        from scrapy.utils.test import get_testenv
        pargs = [sys.executable, '-u', '-m', 'scrapy.utils.benchserver']
        self.proc = subprocess.Popen(pargs, stdout=subprocess.PIPE,
                                     env=get_testenv())
        self.proc.stdout.readline()
    
            # start checks
        if opts.list:
            for spider, methods in sorted(contract_reqs.items()):
                if not methods and not opts.verbose:
                    continue
                print(spider)
                for method in sorted(methods):
                    print('  * %s' % method)
        else:
            start = time.time()
            self.crawler_process.start()
            stop = time.time()
    
    
class Command(ScrapyCommand):
    
            editor = self.settings['EDITOR']
        try:
            spidercls = self.crawler_process.spider_loader.load(args[0])
        except KeyError:
            return self._err('Spider not found: %s' % args[0])
    
        @property
    def templates_dir(self):
        _templates_base_dir = self.settings['TEMPLATES_DIR'] or \
            join(scrapy.__path__[0], 'templates')
        return join(_templates_base_dir, 'spiders')

    
        def prepare_request(self, spider, request, opts):
        def callback(response):
            # memorize first request
            if not self.first_response:
                self.first_response = response
    
            def getCertificateOptions(self):
            # setting verify=True will require you to provide CAs
            # to verify against; in other words: it's not that simple
    
    from scrapy.exceptions import NotConfigured
from scrapy.utils.httpobj import urlparse_cached
from scrapy.utils.boto import is_botocore
from .http import HTTPDownloadHandler
    
        Code is a simple port of what is already in the /scripts directory
    
        def test_request_line_trimming(self):
        self.con._http_vsn_str = 'HTTP/1.1\n'
        self.con.putrequest('XYZBOGUS', '/')
        self.con.endheaders()
        res = self.con.getresponse()
        self.assertEqual(res.status, HTTPStatus.NOT_IMPLEMENTED)
    
            for button, filename, name in button_sources:
            with  self.subTest(name=name):
                button.invoke()
                fn = findfile(filename, subdir='idlelib')
                get = dialog._current_textview.viewframe.textframe.text.get
                with open(fn, encoding='utf-8') as f:
                    self.assertEqual(f.readline().strip(), get('1.0', '1.end'))
                    f.readline()
                    self.assertEqual(f.readline().strip(), get('3.0', '3.end'))
                dialog._current_textview.destroy()
    
    
def _get_resource_reader(
        package: ModuleType) -> Optional[resources_abc.ResourceReader]:
    # Return the package's loader if it's a ResourceReader.  We can't use
    # a issubclass() check here because apparently abc.'s __subclasscheck__()
    # hook wants to create a weak reference to the object, but
    # zipimport.zipimporter does not support weak references, resulting in a
    # TypeError.  That seems terrible.
    spec = package.__spec__
    if hasattr(spec.loader, 'get_resource_reader'):
        return cast(resources_abc.ResourceReader,
                    spec.loader.get_resource_reader(spec.name))
    return None
    
    # We can extract the richest alternative in order to display it:
richest = msg.get_body()
partfiles = {}
if richest['content-type'].maintype == 'text':
    if richest['content-type'].subtype == 'plain':
        for line in richest.get_content().splitlines():
            print(line)
        sys.exit()
    elif richest['content-type'].subtype == 'html':
        body = richest
    else:
        print('Don't know how to display {}'.format(richest.get_content_type()))
        sys.exit()
elif richest['content-type'].content_type == 'multipart/related':
    body = richest.get_body(preferencelist=('html'))
    for part in richest.iter_attachments():
        fn = part.get_filename()
        if fn:
            extension = os.path.splitext(part.get_filename())[1]
        else:
            extension = mimetypes.guess_extension(part.get_content_type())
        with tempfile.NamedTemporaryFile(suffix=extension, delete=False) as f:
            f.write(part.get_content())
            # again strip the <> to go from email form of cid to html form.
            partfiles[part['content-id'][1:-1]] = f.name
else:
    print('Don't know how to display {}'.format(richest.get_content_type()))
    sys.exit()
with tempfile.NamedTemporaryFile(mode='w', delete=False) as f:
    # The magic_html_parser has to rewrite the href='cid:....' attributes to
    # point to the filenames in partfiles.  It also has to do a safety-sanitize
    # of the html.  It could be written using html.parser.
    f.write(magic_html_parser(body.get_content(), partfiles))
webbrowser.open(f.name)
os.remove(f.name)
for fn in partfiles.values():
    os.remove(fn)
    
            print('Testing IMapIterator.next() with timeout:', end=' ')
        it = pool.imap(calculatestar, TASKS)
        while 1:
            sys.stdout.flush()
            try:
                sys.stdout.write('\n\t%s' % it.next(0.02))
            except StopIteration:
                break
            except multiprocessing.TimeoutError:
                sys.stdout.write('.')
        print()
        print()