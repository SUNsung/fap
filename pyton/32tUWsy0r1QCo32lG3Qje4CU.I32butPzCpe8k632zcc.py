
        
        
def get_info(package_name):
    api_url = 'https://pypi.python.org/pypi/{}/json'.format(package_name)
    resp = requests.get(api_url).json()
    hasher = hashlib.sha256()
    for release in resp['urls']:
        download_url = release['url']
        if download_url.endswith('.tar.gz'):
            hasher.update(requests.get(download_url).content)
            return {
                'name': package_name,
                'url': download_url,
                'sha256': hasher.hexdigest(),
            }
    else:
        raise RuntimeError(
            '{}: download not found: {}'.format(package_name, resp))
    
    error_msg = None
    
    
def test_unicode_digest_auth(httpbin):
    # it doesn't really authenticate us because httpbin
    # doesn't interpret the utf8-encoded auth
    http('--auth-type=digest',
         '--auth', u'test:%s' % UNICODE,
         httpbin.url + u'/digest-auth/auth/test/' + UNICODE)

    
    The input TCEs and their associated labels are specified by the DR24 TCE Table,
which can be downloaded in CSV format from the NASA Exoplanet Archive at:
    
        # Parse the features.
    parsed_features = tf.parse_single_example(
        serialized_example, features=data_fields)
    
    
def split(all_time, all_flux, gap_width=0.75):
  '''Splits a light curve on discontinuities (gaps).
    
    
if __name__ == '__main__':
  FLAGS, unparsed = parser.parse_known_args()
  tf.app.run(argv=[sys.argv[0]] + unparsed)

    
      eval_file_path = os.path.join(FLAGS.data_dir, EVAL_FILE)
  _download_and_clean_file(eval_file_path, EVAL_URL)
    
    tf.flags.DEFINE_string(
    'embeddings_base_path', 'embeddings',
    'Embeddings base directory')
    
        # Print the best performance on the validation set
    print('Best performance on the validation set: F1=%.3f' %
          epoch_completed.best_f1)
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
        Args:
      images: A tensor of size [batch, height, width, channels].
      is_training: Whether or not the model is in training mode.
      global_pool: If True, perform global average pooling after feature
        extraction. This may be useful for DELF's descriptor fine-tuning stage.
      reuse: Whether or not the layer and its variables should be reused.
    
        def test_get_sni_addr(self):
        from certbot_apache.obj import Addr
        self.assertEqual(
            self.addr.get_sni_addr('443'), Addr.fromstring('*:443'))
        self.assertEqual(
            self.addr.get_sni_addr('225'), Addr.fromstring('*:225'))
        self.assertEqual(
            self.addr1.get_sni_addr('443'), Addr.fromstring('127.0.0.1'))
    
    # A shorter title for the navigation bar.  Default is the same as html_title.
#html_short_title = None
    
        @mock.patch('certbot_compatibility_test.validator.requests.get')
    def test_redirect_wrong_status_code(self, mock_get_request):
        mock_get_request.return_value = create_response(
            201, {'location': 'https://test.com'})
        self.assertFalse(self.validator.redirect('test.com'))
    
    # Grouping the document tree into LaTeX files. List of tuples
# (source start file, target name, title,
#  author, documentclass [howto, manual, or own class]).
latex_documents = [
    (master_doc, 'certbot-compatibility-test.tex',
     u'certbot-compatibility-test Documentation',
     u'Certbot Project', 'manual'),
]
    
        failures = []
    while point is not None:
        if point.name:
            if re.search('h[1-2]', point.name):
                if point.name == 'h1':
                    h1_directory = os.path.join(output_directory, clean_text(point.text))
                    current_directory = h1_directory
                elif point.name == 'h2':
                    current_directory = os.path.join(h1_directory, clean_text(point.text))  
                if not os.path.exists(current_directory):
                    os.makedirs(current_directory)
                print_title(point.text)
    
    extension_mapping = {
    'rss': ('xml', 'application/atom+xml; charset=UTF-8'),
    'xml': ('xml', 'application/atom+xml; charset=UTF-8'),
    'js': ('js', 'text/javascript; charset=UTF-8'),
    'embed': ('htmllite', 'text/javascript; charset=UTF-8'),
    'mobile': ('mobile', 'text/html; charset=UTF-8'),
    'png': ('png', 'image/png'),
    'css': ('css', 'text/css'),
    'csv': ('csv', 'text/csv; charset=UTF-8'),
    'api': (api_type(), 'application/json; charset=UTF-8'),
    'json-html': (api_type('html'), 'application/json; charset=UTF-8'),
    'json-compact': (api_type('compact'), 'application/json; charset=UTF-8'),
    'compact': ('compact', 'text/html; charset=UTF-8'),
    'json': (api_type(), 'application/json; charset=UTF-8'),
    'i': ('compact', 'text/html; charset=UTF-8'),
}
    
        `full_stack`
        Whether or not this application provides a full WSGI stack (by default,
        meaning it handles its own exceptions and errors). Disable full_stack
        when this application is 'managed' by another WSGI middleware.
    
            MinimalController.pre(self)