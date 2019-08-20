
        
        flags.DEFINE_list('eval_crop_size', '513,513',
                  'Image crop size [height, width] for evaluation.')
    
      # This test covers the following functions: ArrayToDatum, SerializeToString,
  # WriteToFile, ReadFromFile, ParseFromString, DatumToArray.
  def testWriteAndReadToFile(self):
    data = np.array([[[-1.0, 125.0, -2.5], [14.5, 3.5, 0.0]],
                     [[20.0, 0.0, 30.0], [25.5, 36.0, 42.0]]])
    tmpdir = tf.test.get_temp_dir()
    filename = os.path.join(tmpdir, 'test.datum')
    datum_io.WriteToFile(data, filename)
    data_read = datum_io.ReadFromFile(filename)
    self.assertAllEqual(data_read, data)
    
        return (rescaled_locations_out, descriptors_out, feature_scales_out,
            attention_out)
    
      # Read solution.
  print('Reading solution...')
  public_solution, private_solution, ignored_ids = dataset_file_io.ReadSolution(
      cmd_args.solution_path, dataset_file_io.RETRIEVAL_TASK_ID)
  print('done!')
    
    n_samples = np.logspace(.5, 3, 9)
n_features = np.logspace(1, 3.5, 7)
N_samples, N_features = np.meshgrid(n_samples,
                                    n_features)
scikits_time = np.zeros(N_samples.shape)
scipy_time = np.zeros(N_samples.shape)
    
        gc.collect()
    
        # TASK: print the cross-validated scores for the each parameters set
    # explored by the grid search
    
    The outer product of the row and column label vectors shows a
representation of the checkerboard structure.
    
    import time
import matplotlib.pyplot as plt
import numpy as np
    
    X_restored = agglo.inverse_transform(X_reduced)
images_restored = np.reshape(X_restored, images.shape)
plt.figure(1, figsize=(4, 3.5))
plt.clf()
plt.subplots_adjust(left=.01, right=.99, bottom=.01, top=.91)
for i in range(4):
    plt.subplot(3, 4, i + 1)
    plt.imshow(images[i], cmap=plt.cm.gray, vmax=16, interpolation='nearest')
    plt.xticks(())
    plt.yticks(())
    if i == 1:
        plt.title('Original data')
    plt.subplot(3, 4, 4 + i + 1)
    plt.imshow(images_restored[i], cmap=plt.cm.gray, vmax=16,
               interpolation='nearest')
    if i == 1:
        plt.title('Agglomerated data')
    plt.xticks(())
    plt.yticks(())
    
    print('number of estimated clusters : %d' % n_clusters_)
    
            lw = LedoitWolf(store_precision=False, assume_centered=True)
        lw.fit(X)
        lw_mse[i, j] = lw.error_norm(real_cov, scaling=False)
        lw_shrinkage[i, j] = lw.shrinkage_
    
                try:
                self.working_appid_list.remove(appid)
            except:
                pass
    
    
def check_all():
    check = CheckAllIp()
    check.run()
    exit(0)
    
    try:
    from io import BytesIO
except ImportError:
    from cStringIO import StringIO as BytesIO
try:
    from google.appengine.api import urlfetch
    from google.appengine.runtime import apiproxy_errors
except ImportError:
    urlfetch = None
try:
    import sae
except ImportError:
    sae = None
try:
    import bae.core.wsgi
except ImportError:
    bae = None
try:
    import socket
    import select
except ImportError:
    socket = None
try:
    import OpenSSL
except ImportError:
    OpenSSL = None
    
            account_number = match1(html, r'data-account='(\d+)'')
    
        mime, ext, size = url_info(real_url)
    
            for p in js_path:
            if 'mtool' in p or 'mcore' in p:
                js_text = get_content(p)
                hit = re.search(r'\(\'(.+?)\',(\d+),(\d+),\'(.+?)\'\.split\(\'\|\'\),\d+,\{\}\)', js_text)
    
        stream_id_pattern = r'id='html_stream' value='(\w+)''
    stream_id = match1(html, stream_id_pattern)
    
    def ifeng_download_by_id(id, title = None, output_dir = '.', merge = True, info_only = False):
    assert r1(r'([0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12})', id), id
    url = 'http://vxml.ifengimg.com/video_info_new/%s/%s/%s.xml' % (id[-2], id[-2:], id)
    xml = get_html(url, 'utf-8')
    title = r1(r'Name='([^']+)'', xml)
    title = unescape_html(title)
    url = r1(r'VideoPlayUrl='([^']+)'', xml)
    from random import randint
    r = randint(10, 19)
    url = url.replace('http://wideo.ifeng.com/', 'http://ips.ifeng.com/wideo.ifeng.com/')
    type, ext, size = url_info(url)
    
        def test_decode_good(self):
        self.assertEqual('x', self.field.decode('x'))
    
        @certbot_util.patch_get_utility()
    def test_select_cancel(self, mock_util):
        mock_util().checklist.return_value = (display_util.CANCEL, 'whatever')
        vhs = select_vhost_multiple([self.vhosts[2], self.vhosts[3]])
        self.assertFalse(vhs)
    
        Assumes:
     * That subclasses also subclass unittest.TestCase
     * That the authenticator is stored as self.auth
    '''
    
    
# These headers are excluded from [build/include] and [build/include_order]
# checks:
# - Anything not following google file name conventions (containing an
#   uppercase character, such as Python.h or nsStringAPI.h, for example).
# - Lua headers.
_THIRD_PARTY_HEADERS_PATTERN = re.compile(
    r'^(?:[^/]*[A-Z][^/]*\.h|lua\.h|lauxlib\.h|lualib\.h)$')
    
    
def deserialize_event(event):
    # Deserialize into Python dictionary and extract the 'NewImage' (the new version of the full ddb document)
    ddb = event.get('dynamodb')
    if ddb:
        result = {
            '__action_type': event.get('eventName'),
        }
    
        def test_delivery_stream_tags(self):
        result = firehose_api.get_delivery_stream_tags(TEST_STREAM_NAME)
        self.assertEquals(TEST_TAGS, result['Tags'])
        result = firehose_api.get_delivery_stream_tags(TEST_STREAM_NAME, exclusive_start_tag_key='MyTag')
        self.assertEquals([TEST_TAG_2], result['Tags'])
        result = firehose_api.get_delivery_stream_tags(TEST_STREAM_NAME, limit=1)
        self.assertEquals([TEST_TAG_1], result['Tags'])
        self.assertEquals(True, result['HasMore'])

    
            # Disable TTL for given table
        response = testutil.send_update_dynamodb_ttl_request(TEST_DDB_TABLE_NAME_3, False)
        assert response.status_code == 200
        assert json.loads(response._content)['TimeToLiveSpecification']['Enabled'] is False