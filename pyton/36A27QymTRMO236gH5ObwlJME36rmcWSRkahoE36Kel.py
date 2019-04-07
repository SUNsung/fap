
        
        
    {    # Options that need a file parameter
    'download-archive': ['--require-parameter'],
    'cookies': ['--require-parameter'],
    'load-info': ['--require-parameter'],
    'batch-file': ['--require-parameter'],
}
    
        with io.open(infile, encoding='utf-8') as inf:
        issue_template_tmpl = inf.read()
    
        outfile, = args
    
        readme = re.sub(r'(?s)^.*?(?=# DESCRIPTION)', '', readme)
    readme = re.sub(r'\s+youtube-dl \[OPTIONS\] URL \[URL\.\.\.\]', '', readme)
    readme = PREFIX + readme
    
    # The version info for the project you're documenting, acts as replacement for
# |version| and |release|, also used in various other places throughout the
# built documents.
#
# The short X.Y version.
from youtube_dl.version import __version__
version = __version__
# The full version, including alpha/beta/rc tags.
release = version
    
        def test_cbc_encrypt(self):
        data = bytes_to_intlist(self.secret_msg)
        encrypted = intlist_to_bytes(aes_cbc_encrypt(data, self.key, self.iv))
        self.assertEqual(
            encrypted,
            b'\x97\x92+\xe5\x0b\xc3\x18\x91ky9m&\xb3\xb5@\xe6'\xc2\x96.\xc8u\x88\xab9-[\x9e|\xf1\xcd')
    
        fpath = os.path.join(path, 'test_batch')
    x_test, y_test = load_batch(fpath)
    
        # Deduplicate output names to handle Siamese networks.
    occurrences = {}
    for n in model.output_names:
        if n not in occurrences:
            occurrences[n] = 1
        else:
            occurrences[n] += 1
    conflict_counter = {n: 0 for n, count in occurrences.items() if count > 1}
    output_names = []
    for n in model.output_names:
        if n in conflict_counter:
            conflict_counter[n] += 1
            n += '_%d' % conflict_counter[n]
        output_names.append(n)
    
    This example has modular design. The encoder, decoder and autoencoder
are 3 models that share weights. For example, after training the
autoencoder, the encoder can be used to  generate latent vectors
of input data for low-dim visualization like PCA or TSNE.
'''
    
    x_train = x_train.reshape(x_train.shape[0], -1, 1)
x_test = x_test.reshape(x_test.shape[0], -1, 1)
x_train = x_train.astype('float32')
x_test = x_test.astype('float32')
x_train /= 255
x_test /= 255
print('x_train shape:', x_train.shape)
print(x_train.shape[0], 'train samples')
print(x_test.shape[0], 'test samples')
    
    # transfer: train dense layers for new classification task [5..9]
train_model(model,
            (x_train_gte5, y_train_gte5),
            (x_test_gte5, y_test_gte5), num_classes)

    
    
def categorical_hinge(y_true, y_pred):
    pos = K.sum(y_true * y_pred, axis=-1)
    neg = K.max((1. - y_true) * y_pred, axis=-1)
    return K.maximum(0., neg - pos + 1.)
    
                if point.name == 'p':
                link = point.find('a')
                if link is not None:
                    link = clean_pdf_link(link.attrs['href'])
                    ext = get_extension(link)
                    print(ext)
                    if not ext in forbidden_extensions:
                        print(shorten_title(point.text) + ' (' + link + ')')
                        try:
                            name = clean_text(point.text.split('[' + ext + ']')[0])
                            fullname = '.'.join((name, ext))
                            if not os.path.exists('/'.join((current_directory, fullname)) ):
                                download_pdf(link, current_directory, '.'.join((name, ext)))
                        except KeyboardInterrupt:
                            try:
                                print('Press Ctrl-C in 1 second to quit')
                                time.sleep(1)
                            except KeyboardInterrupt:
                                print('Cancelling..')
                                break
                        except:
                            failures.append(point.text)
                        
        point = point.next_sibling          
    
    
class OutOfData(UnpackException):
    pass
    
    
def check(src, should, use_list=0):
    assert unpackb(src, use_list=use_list) == should
    
        def __init__(self, lang_filter=None):
        super(MultiByteCharSetProber, self).__init__(lang_filter=lang_filter)
        self.distribution_analyzer = None
        self.coding_sm = None
        self._last_char = [0, 0]
    
    # UTF-8
    
    
class SingleByteCharSetProber(CharSetProber):
    SAMPLE_SIZE = 64
    SB_ENOUGH_REL_THRESHOLD = 1024  #  0.25 * SAMPLE_SIZE^2
    POSITIVE_SHORTCUT_THRESHOLD = 0.95
    NEGATIVE_SHORTCUT_THRESHOLD = 0.05
    
    
class SJISProber(MultiByteCharSetProber):
    def __init__(self):
        super(SJISProber, self).__init__()
        self.coding_sm = CodingStateMachine(SJIS_SM_MODEL)
        self.distribution_analyzer = SJISDistributionAnalysis()
        self.context_analyzer = SJISContextAnalysis()
        self.reset()
    
        @property
    def language(self):
        return 'Japanese'
    
        def get_confidence(self):
        unlike = 0.99
        if self._num_mb_chars < 6:
            unlike *= self.ONE_CHAR_PROB ** self._num_mb_chars
            return 1.0 - unlike
        else:
            return unlike

    
        description='A complete wechat personal account api',
    long_description=long_description,