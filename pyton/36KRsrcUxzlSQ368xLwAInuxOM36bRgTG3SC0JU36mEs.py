
        
          Args:
    raw_data: one of the raw data outputs from ptb_raw_data.
    batch_size: int, the batch size.
    num_steps: int, the number of unrolls.
    name: the name of this operation (optional).
    
    
def _set_int64_feature(ex, name, value):
  '''Sets the value of an int64 feature in a tensorflow.train.Example proto.'''
  assert name not in ex.features.feature, 'Duplicate feature: %s' % name
  ex.features.feature[name].int64_list.value.extend([int(v) for v in value])
    
    
def _recursive_set_batch_size(tensor_or_collection, batch_size):
  '''Recursively sets the batch size in a Tensor or collection of Tensors.'''
  if isinstance(tensor_or_collection, tf.Tensor):
    t = tensor_or_collection
    shape = t.shape.as_list()
    shape[0] = batch_size
    t.set_shape(t.shape.merge_with(shape))
  elif isinstance(tensor_or_collection, dict):
    for t in six.itervalues(tensor_or_collection):
      _recursive_set_batch_size(t, batch_size)
  elif isinstance(tensor_or_collection, collections.Iterable):
    for t in tensor_or_collection:
      _recursive_set_batch_size(t, batch_size)
  else:
    raise ValueError('Unknown input type: %s' % tensor_or_collection)
    
          # Evaluate spline at the time points.
      spline = curve.value(time)[0]
    except (IndexError, TypeError) as e:
      raise SplineError(
          'Fitting spline failed with error: '%s'. This might be caused by the '
          'breakpoint spacing being too small, and/or there being insufficient '
          'points to fit the spline in one of the intervals.' % e)
    
      Print the performance on the validation set, and update the saved model if
  its performance is better on the previous ones. If the performance dropped,
  tell the training to stop.
    
    import lexnet_common
import path_model
from sklearn import metrics
import tensorflow as tf
    
      def testConversion3dWithType(self):
    self.Conversion3dTestWithType(np.int8)
    self.Conversion3dTestWithType(np.int16)
    self.Conversion3dTestWithType(np.int32)
    self.Conversion3dTestWithType(np.int64)
    self.Conversion3dTestWithType(np.float16)
    self.Conversion3dTestWithType(np.float32)
    self.Conversion3dTestWithType(np.float64)
    
    
#
# Backwards compat functions.  Some modules include md5s in their return values
# Continue to support that for now.  As of ansible-1.8, all of those modules
# should also return 'checksum' (sha1 for now)
# Do not use md5 unless it is needed for:
# 1) Optional backwards compatibility
# 2) Compliance with a third party protocol
#
# MD5 will not work on systems which are FIPS-140-2 compliant.
#
    
        if not args.test:
        response = requests.get(url, headers=headers)
    
    
def get_group_vars(groups):
    
    Data comes from a random square matrix.
    
        for i, DD in enumerate(Drange):
        print('D = %i (%i out of %i)' % (DD, i + 1, len(Drange)))
        X = get_data(N, DD, dataset)
        for algorithm in algorithms:
            nbrs = neighbors.NearestNeighbors(n_neighbors=k,
                                              algorithm=algorithm,
                                              leaf_size=leaf_size)
            t0 = time()
            nbrs.fit(X)
            t1 = time()
            nbrs.kneighbors(X)
            t2 = time()
    
    ratio = scikits_time / scipy_time
    
        package is the name of the root module of the package
    
    import os
import tarfile
from contextlib import closing
try:
    from urllib import urlopen
except ImportError:
    from urllib.request import urlopen
    
    Sentiment analysis can be casted as a binary text classification problem,
that is fitting a linear classifier on features extracted from the text
of the user messages so as to guess wether the opinion of the author is
positive or negative.
    
        print('Generating skeleton for %s' % f)
    
    calibrated_classifier = sig_clf.calibrated_classifiers_[0]
prediction = np.vstack([calibrator.predict(this_p)
                        for calibrator, this_p in
                        zip(calibrated_classifier.calibrators_, p.T)]).T
prediction /= prediction.sum(axis=1)[:, None]
    
        def extract(self, **kwargs):
        for i in self.streams:
            s = self.streams[i]
            _, s['container'], s['size'] = url_info(s['url'])
            s['src'] = [s['url']]
    
        type, ext, size = url_info(video_url, headers=fake_headers)
    
    def kugou_download_by_hash(title,hash_val,output_dir = '.', merge = True, info_only = False):
    #sample
    #url_sample:http://www.kugou.com/yy/album/single/536957.html
    #hash ->key  md5(hash+kgcloud')->key  decompile swf
    #cmd 4 for mp3 cmd 3 for m4a
    key=hashlib.new('md5',(hash_val+'kgcloud').encode('utf-8')).hexdigest()
    html=get_html('http://trackercdn.kugou.com/i/?pid=6&key=%s&acceptMp3=1&cmd=4&hash=%s'%(key,hash_val))
    j=loads(html)
    url=j['url']
    songtype, ext, size = url_info(url)
    print_info(site_info, title, songtype, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir, merge=merge)
    
            self.title = match1(content,
                            r'setup\[\'title\'\] = '([^']+)';')
    
    #----------------------------------------------------------------------
def showroom_get_roomid_by_room_url_key(room_url_key):
    '''str->str'''
    fake_headers_mobile = {
        'Accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8',
        'Accept-Charset': 'UTF-8,*;q=0.5',
        'Accept-Encoding': 'gzip,deflate,sdch',
        'Accept-Language': 'en-US,en;q=0.8',
        'User-Agent': 'Mozilla/5.0 (Linux; Android 4.4.2; Nexus 4 Build/KOT49H) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/34.0.1847.114 Mobile Safari/537.36'
    }
    webpage_url = 'https://www.showroom-live.com/' + room_url_key
    html = get_content(webpage_url, headers = fake_headers_mobile)
    roomid = match1(html, r'room\?room_id\=(\d+)')
    assert roomid
    return roomid
    
            '''
        err = None
        if 'name' in notes_json and notes_json['name'] != friend:
            # The 'name' in the JSON is optional, but if present, must
            # match the username from the URL
            err = errors.RedditError('BAD_USERNAME', fields='name')
        if 'note' in notes_json and not c.user.gold:
            err = errors.RedditError('GOLD_REQUIRED', fields='note')
        if err:
            self.on_validation_error(err)
    
    
class GoogleTagManagerController(MinimalController):
    def pre(self):
        if request.host != g.media_domain:
            # don't serve up untrusted content except on our
            # specifically untrusted domain
            self.abort404()