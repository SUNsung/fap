
        
        
class Card(metaclass=ABCMeta):
    
    
class Bus(Vehicle):
    
        def __init__(self, seller_category_map, seller_category_overrides_map):
        self.seller_category_map = seller_category_map
        self.seller_category_overrides_map = seller_category_overrides_map
    
        def remove(self, key):
        hash_index = self._hash_function(key)
        for index, item in enumerate(self.table[hash_index]):
            if item.key == key:
                del self.table[hash_index][index]
                return
        raise KeyError('Key not found')

    
    
class QueryApi(object):
    
        def __init__(self, url, contents, child_urls):
        self.url = url
        self.contents = contents
        self.child_urls = child_urls
        self.signature = self.create_signature()
    
            entries = []
        for embed_url in re.findall(r'<iframe[^>]+data-src='(https?://(?:www\.)?cbsnews\.com/embed/video/[^#]*#[^']+)'', webpage):
            entries.append(self.url_result(embed_url, CBSNewsEmbedIE.ie_key()))
        if entries:
            return self.playlist_result(
                entries, playlist_title=self._html_search_meta(['og:title', 'twitter:title'], webpage),
                playlist_description=self._html_search_meta(['og:description', 'twitter:description', 'description'], webpage))
    
        def _real_extract(self, url):
        show_id, season_id, video_id = re.match(self._VALID_URL, url).groups()
        response = self._download_json(
            'https://www.vvvvid.it/vvvvid/ondemand/%s/season/%s' % (show_id, season_id),
            video_id, headers=self.geo_verification_headers(), query={
                'conn_id': self._conn_id,
            })
        if response['result'] == 'error':
            raise ExtractorError('%s said: %s' % (
                self.IE_NAME, response['message']), expected=True)
    
            subtitles = {}
        for resource in video.get('resources', []):
            if resource.startswith('closed_caption_'):
                splitted_resource = resource.split('_')
                if splitted_resource[2]:
                    subtitles.setdefault('en', []).append({
                        'url': 'https://resources.redbull.tv/%s/%s' % (video_id, resource),
                        'ext': splitted_resource[2],
                    })
    
        def _real_extract(self, url):
        content_id = self._match_id(url)
        return self._extract_video_info(content_id)

    
    
    {    # Options that need a file parameter
    'download-archive': ['--require-parameter'],
    'cookies': ['--require-parameter'],
    'load-info': ['--require-parameter'],
    'batch-file': ['--require-parameter'],
}
    
    from youtube_dl.utils import intlist_to_bytes
from youtube_dl.aes import aes_encrypt, key_expansion
    
    
# Import youtube_dl
ROOT_DIR = os.path.join(os.path.dirname(__file__), '..')
sys.path.insert(0, ROOT_DIR)
import youtube_dl
    
        return ret
    
    # Add any paths that contain custom static files (such as style sheets) here,
# relative to this directory. They are copied after the builtin static files,
# so a file named 'default.css' will overwrite the builtin 'default.css'.
html_static_path = ['_static']
    
        with tempfile.NamedTemporaryFile('wb', delete=True) as f:
        np.savez(f, x_train=x_train, y_train=y_train, x_test=x_test, y_test=y_test)
        monkeypatch.setattr(imdb, 'get_file', lambda *args, **kwargs: f.name)
        yield f.name
    
        # check that container-level reset_states() works
    model.reset_states()
    out4 = model.predict(np.ones_like(inputs))
    assert_allclose(out3, out4, atol=1e-5)
    
        with pytest.raises(AssertionError):
        conv_utils.conv_output_length(32, 5, 'diagonal', 2)
    
        # Arguments
        units: Positive integer, dimensionality of the output space.
        kernel_initializer: Initializer for the `kernel` weights matrix,
            used for the linear transformation of the inputs.
            (see [initializers](../initializers.md)).
        recurrent_initializer: Initializer for the `recurrent_kernel`
            weights matrix,
            used for the linear transformation of the recurrent state.
            (see [initializers](../initializers.md)).
        bias_initializer: Initializer for the bias vector
            (see [initializers](../initializers.md)).
        kernel_regularizer: Regularizer function applied to
            the `kernel` weights matrix
            (see [regularizer](../regularizers.md)).
        recurrent_regularizer: Regularizer function applied to
            the `recurrent_kernel` weights matrix
            (see [regularizer](../regularizers.md)).
        bias_regularizer: Regularizer function applied to the bias vector
            (see [regularizer](../regularizers.md)).
        activity_regularizer: Regularizer function applied to
            the output of the layer (its 'activation').
            (see [regularizer](../regularizers.md)).
        kernel_constraint: Constraint function applied to
            the `kernel` weights matrix
            (see [constraints](../constraints.md)).
        recurrent_constraint: Constraint function applied to
            the `recurrent_kernel` weights matrix
            (see [constraints](../constraints.md)).
        bias_constraint: Constraint function applied to the bias vector
            (see [constraints](../constraints.md)).
        return_sequences: Boolean. Whether to return the last output.
            in the output sequence, or the full sequence.
        return_state: Boolean. Whether to return the last state
            in addition to the output.
        stateful: Boolean (default False). If True, the last state
            for each sample at index i in a batch will be used as initial
            state for the sample of index i in the following batch.
    '''
    
        ```python
      model = Sequential()
      model.add(Embedding(1000, 64, input_length=10))
      # the model will take as input an integer matrix of size (batch, input_length).
      # the largest integer (i.e. word index) in the input should be
      # no larger than 999 (vocabulary size).
      # now model.output_shape == (None, 10, 64), where None is the batch dimension.
    
        def call(self, inputs):
        output = K.local_conv2d(inputs,
                                self.kernel,
                                self.kernel_size,
                                self.strides,
                                (self.output_row, self.output_col),
                                self.data_format)
    
    model = Sequential()
model.add(Embedding(max_features, 128, input_length=maxlen))
model.add(Bidirectional(LSTM(64)))
model.add(Dropout(0.5))
model.add(Dense(1, activation='sigmoid'))
    
    
class MissingNonceTest(unittest.TestCase):
    '''Tests for acme.errors.MissingNonce.'''
    
    # Language to be used for generating the HTML full-text search index.
# Sphinx supports the following languages:
#   'da', 'de', 'en', 'es', 'fi', 'fr', 'hu', 'it', 'ja'
#   'nl', 'no', 'pt', 'ro', 'ru', 'sv', 'tr'
#html_search_language = 'en'
    
        @mock.patch('certbot.client.enhancements')
    def test_unsupported(self, mock_enhancements):
        self.client.installer = mock.MagicMock()
        self.client.installer.supported_enhancements.return_value = []
    
        @property
    def long_description(self):
        '''Long description of the plugin.'''
        try:
            return self.plugin_cls.long_description
        except AttributeError:
            return self.description
    
            # Adding index on 'EventTag', fields ['environment_id', 'key', 'value']
        db.create_index(u'tagstore_eventtag', ['environment_id', 'key', 'value'])
    
            # Adding model 'GroupTagKey'
        db.create_table(u'tagstore_grouptagkey', (
            ('environment_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(null=True)),
            ('values_seen', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(default=0)),
            ('_key', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                to=orm['tagstore.TagKey'], db_column='key')),
            ('id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(primary_key=True)),
            ('project_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(db_index=True)),
            ('group_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(db_index=True)),
        ))
        db.send_create_signal('tagstore', ['GroupTagKey'])
    
            # Removing unique constraint on 'TagValue', fields ['project_id',
        # 'environment_id', '_key', 'value']
        db.delete_unique(u'tagstore_tagvalue', ['project_id', 'environment_id', 'key_id', 'value'])
    
    
USER_MODEL = settings.AUTH_USER_MODEL
UID_LENGTH = getattr(settings, 'SOCIAL_AUTH_UID_LENGTH', 255)
NONCE_SERVER_URL_LENGTH = getattr(settings, 'SOCIAL_AUTH_NONCE_SERVER_URL_LENGTH', 255)
ASSOCIATION_SERVER_URL_LENGTH = getattr(settings, 'SOCIAL_AUTH_ASSOCIATION_SERVER_URL_LENGTH', 255)
ASSOCIATION_HANDLE_LENGTH = getattr(settings, 'SOCIAL_AUTH_ASSOCIATION_HANDLE_LENGTH', 255)
    
            # Adding unique constraint on 'UserSocialAuth', fields ['provider', 'uid']
        db.create_unique(u'social_auth_usersocialauth', ['provider', 'uid'])