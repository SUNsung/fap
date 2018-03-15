
        
            plugin_manager.register(Plugin)
    
    from httpie.plugins import plugin_manager
from httpie.context import Environment
    
    
@mock.patch('httpie.core.get_response')
def test_error_traceback(get_response):
    exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    with raises(ConnectionError):
        main(['--ignore-stdin', '--traceback', 'www.google.com'])
    
        def __init__(self, *args, **kwargs):
        kwargs['add_help'] = False
        super(HTTPieArgumentParser, self).__init__(*args, **kwargs)
    
            # because special names such as Name.Class, Name.Function, etc.
        # are not recognized as such later in the parsing, we choose them
        # to look the same as ordinary variables.
        Name:                      '#000000',        # class: 'n'
        Name.Attribute:            '#c4a000',        # class: 'na' - to be revised
        Name.Builtin:              '#004461',        # class: 'nb'
        Name.Builtin.Pseudo:       '#3465a4',        # class: 'bp'
        Name.Class:                '#000000',        # class: 'nc' - to be revised
        Name.Constant:             '#000000',        # class: 'no' - to be revised
        Name.Decorator:            '#888',           # class: 'nd' - to be revised
        Name.Entity:               '#ce5c00',        # class: 'ni'
        Name.Exception:            'bold #cc0000',   # class: 'ne'
        Name.Function:             '#000000',        # class: 'nf'
        Name.Property:             '#000000',        # class: 'py'
        Name.Label:                '#f57900',        # class: 'nl'
        Name.Namespace:            '#000000',        # class: 'nn' - to be revised
        Name.Other:                '#000000',        # class: 'nx'
        Name.Tag:                  'bold #004461',   # class: 'nt' - like a keyword
        Name.Variable:             '#000000',        # class: 'nv' - to be revised
        Name.Variable.Class:       '#000000',        # class: 'vc' - to be revised
        Name.Variable.Global:      '#000000',        # class: 'vg' - to be revised
        Name.Variable.Instance:    '#000000',        # class: 'vi' - to be revised
    
    
@pytest.fixture
def httpbin(httpbin):
    return prepare_url(httpbin)
    
                if lines and lines[-1] and chunk and lines[-1][-1] == chunk[-1]:
                pending = lines.pop()
            else:
                pending = None
    
    # -------
# Pythons
# -------
    
        # Remove keys that are set to None. Extract keys first to avoid altering
    # the dictionary during iteration.
    none_keys = [k for (k, v) in merged_setting.items() if v is None]
    for key in none_keys:
        del merged_setting[key]
    
    
if __name__ == '__main__':
  tf.test.main()

    
    
class CIFAR10InputTest(tf.test.TestCase):
    
    
def check_image_file_header(filename):
  '''Validate that filename corresponds to images for the MNIST dataset.'''
  with tf.gfile.Open(filename, 'rb') as f:
    magic = read32(f)
    num_images = read32(f)
    rows = read32(f)
    cols = read32(f)
    if magic != 2051:
      raise ValueError('Invalid magic number %d in MNIST file %s' % (magic,
                                                                     f.name))
    if rows != 28 or cols != 28:
      raise ValueError(
          'Invalid MNIST file %s: Expected 28x28 images, found %dx%d' %
          (f.name, rows, cols))
    
      for filename, class_label in data_files:
    with open(filename) as rt_f:
      for content in rt_f:
        if class_label is None:
          # Process Amazon Review data for unlabeled dataset
          if content.startswith('review/text'):
            yield Document(
                content=content,
                is_validation=False,
                is_test=False,
                label=None,
                add_tokens=False)
        else:
          # 10% of the data is randomly held out for the validation set and
          # another 10% of it is randomly held out for the test set
          random_int = random.randint(1, 10)
          is_validation = random_int == 1
          is_test = random_int == 2
          if (is_test and dataset != 'test') or (is_validation and
                                                 not include_validation):
            continue
    
      for doc in document_generators.documents(
      dataset='test', include_unlabeled=False, include_validation=True):
    input_seq = build_input_sequence(doc, vocab_ids)
    if len(input_seq) < 2:
      continue
    rev_seq = data.build_reverse_sequence(input_seq)
    lm_seq = data.build_lm_sequence(input_seq)
    rev_lm_seq = data.build_lm_sequence(rev_seq)
    seq_ae_seq = data.build_seq_ae_sequence(input_seq)
    label_seq = data.build_labeled_sequence(input_seq, doc.label)
    bd_label_seq = data.build_labeled_sequence(
        data.build_bidirectional_seq(input_seq, rev_seq), doc.label)
    
    
def main(_):
  '''Trains Language Model.'''
  tf.logging.set_verbosity(tf.logging.INFO)
  with tf.device(tf.train.replica_device_setter(FLAGS.ps_tasks)):
    model = graphs.get_model()
    train_op, loss, global_step = model.language_model_training()
    train_utils.run_training(train_op, loss, global_step)
    
    import sys
import os
import shlex
    
    from certbot import interfaces
from certbot.plugins import common
    
        video_url = match1(html, r'filepath=(.+)&sec')
    video_url = video_url.replace('&mid', '?mid')
    
            mp3 = match1(content, r'name='filename'\s*value='([^']+\.mp3)'')
        if mp3: mp3 = 'http://res.infoq.com/downloads/mp3downloads/%s' % mp3
    
    def kugou_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    if url.lower().find('5sing')!=-1:
        #for 5sing.kugou.com
        html=get_html(url)
        ticket=r1(r''ticket':\s*'(.*)'',html)
        j=loads(str(b64decode(ticket),encoding='utf-8'))
        url=j['file']
        title=j['songName']
        songtype, ext, size = url_info(url)
        print_info(site_info, title, songtype, size)
        if not info_only:
            download_urls([url], title, ext, size, output_dir, merge=merge)
    else:
        #for the www.kugou.com/
        return kugou_download_playlist(url, output_dir=output_dir, merge=merge, info_only=info_only)
        # raise NotImplementedError(url)       
    
    def kuwo_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    if 'www.kuwo.cn/yinyue' in url:
        rid=match1(url,'yinyue/(\d+)')
        kuwo_download_by_rid(rid,output_dir, merge, info_only)
    else:
        kuwo_playlist_download(url,output_dir,merge,info_only)
    
    site_info = 'Mixcloud.com'
download = mixcloud_download
download_playlist = playlist_not_supported('mixcloud')

    
    from xml.dom.minidom import parseString
    
    site = MusicPlayOn()
download = site.download_by_url
# TBD: implement download_playlist

    
    site = Pinterest()
download = site.download_by_url
# TBD: implement download_playlist

    
    class CaptchaController(RedditController):
    @allow_oauth2_access
    @api_doc(api_section.captcha, uri='/captcha/{iden}')
    def GET_captchaimg(self, iden):
        '''
        Request a CAPTCHA image given an `iden`.
    
        try:
        return fp, proxyurl(u)
    except HTTPError, e:
        if e.code != 404:
            print 'error %s' % e.code
            print e.fp.read()
        return (None, None)
    
        def post(self):
        pass