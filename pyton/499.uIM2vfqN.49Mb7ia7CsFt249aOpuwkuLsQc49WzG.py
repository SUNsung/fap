
        
            params = {
        'age_limit': age,
        'skip_download': True,
        'writeinfojson': True,
        'outtmpl': '%(id)s.%(ext)s',
    }
    ydl = YoutubeDL(params)
    ydl.add_default_info_extractors()
    json_filename = os.path.splitext(filename)[0] + '.info.json'
    try_rm(json_filename)
    ydl.download([url])
    res = os.path.exists(json_filename)
    try_rm(json_filename)
    return res
    
    
class TestAllURLsMatching(unittest.TestCase):
    def setUp(self):
        self.ies = gen_extractors()
    
            with open(swf_file, 'rb') as swf_f:
            swf_content = swf_f.read()
        swfi = SWFInterpreter(swf_content)
    
        _TEST = {
        'url': 'http://www.anitube.se/video/36621',
        'md5': '59d0eeae28ea0bc8c05e7af429998d43',
        'info_dict': {
            'id': '36621',
            'ext': 'mp4',
            'title': 'Recorder to Randoseru 01',
            'duration': 180.19,
        },
        'skip': 'Blocked in the US',
    }
    
      # Copy all but last timestep
  for timestep in reversed(seq[:-1]):
    reverse_seq.add_timestep().copy_from(timestep)
    
      (device, data_format) = ('/gpu:0', 'channels_first')
  if FLAGS.no_gpu or tfe.num_gpus() <= 0:
    (device, data_format) = ('/cpu:0', 'channels_last')
  print('Using device %s, and data format %s.' % (device, data_format))
    
    
def train(defun=False):
  model = mnist.Model(data_format())
  if defun:
    model.call = tfe.defun(model.call)
  optimizer = tf.train.GradientDescentOptimizer(learning_rate=0.01)
  dataset = random_dataset()
  with tf.device(device()):
    mnist_eager.train(model, optimizer, dataset)
    
        def short_desc(self):
        return 'Run quick benchmark test'