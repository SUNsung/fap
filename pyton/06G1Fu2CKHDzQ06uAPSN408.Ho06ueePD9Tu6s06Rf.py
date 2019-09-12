
        
                (2016-01, shopping), 25
        (2016-01, shopping), 100
        (2016-01, gas), 50
        '''
        timestamp, category, amount = line.split('\t')
        period = self. extract_year_month(timestamp)
        if period == self.current_year_month():
            yield (period, category), amount
    
        def __init__(self, id, name):
        self.id = id
        self.name = name
        self.friend_ids = []
    
        def set(self, key, value):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                item.value = value
                return
        self.table[hash_index].append(Item(key, value))
    
    
class Cache(object):
    
    
def test_idna_with_version_attribute(mocker):
    '''Verify we're actually setting idna version when it should be available.'''
    mocker.patch('requests.help.idna', new=VersionedPackage('2.6'))
    assert info()['idna'] == {'version': '2.6'}

    
    
@pytest.mark.parametrize('var,scheme', _proxy_combos)
def test_use_proxy_from_environment(httpbin, var, scheme):
    url = '{}://httpbin.org'.format(scheme)
    fake_proxy = Server()  # do nothing with the requests; just close the socket
    with fake_proxy as (host, port):
        proxy_url = 'socks5://{}:{}'.format(host, port)
        kwargs = {var: proxy_url}
        with override_environ(**kwargs):
            # fake proxy's lack of response will cause a ConnectionError
            with pytest.raises(requests.exceptions.ConnectionError):
                requests.get(url)
    
    about = {}
with open(os.path.join(here, 'requests', '__version__.py'), 'r', 'utf-8') as f:
    exec(f.read(), about)
    
                sock2.connect(address)
            sock2.sendall(second_request)
            sock2.close()
    
    # Check imported dependencies for compatibility.
try:
    check_compatibility(urllib3.__version__, chardet.__version__)
except (AssertionError, ValueError):
    warnings.warn('urllib3 ({}) or chardet ({}) doesn't match a supported '
                  'version!'.format(urllib3.__version__, chardet.__version__),
                  RequestsDependencyWarning)
    
        :param url: URL for the new :class:`Request` object.
    :param \*\*kwargs: Optional arguments that ``request`` takes.
    :return: :class:`Response <Response>` object
    :rtype: requests.Response
    '''
    
        if chunk:
        yield chunk

    
        models = {
        'auth.group': {
            'Meta': {'object_name': 'Group'},
            'id': ('django.db.models.fields.AutoField', [], {'primary_key': 'True'}),
            'name': ('django.db.models.fields.CharField', [], {'unique': 'True', 'max_length': '80'}),
            'permissions': ('django.db.models.fields.related.ManyToManyField', [], {'to': 'orm['auth.Permission']', 'symmetrical': 'False', 'blank': 'True'})
        },
        'auth.permission': {
            'Meta': {'ordering': '('content_type__app_label', 'content_type__model', 'codename')', 'unique_together': '(('content_type', 'codename'),)', 'object_name': 'Permission'},
            'codename': ('django.db.models.fields.CharField', [], {'max_length': '100'}),
            'content_type': ('django.db.models.fields.related.ForeignKey', [], {'to': 'orm['contenttypes.ContentType']'}),
            'id': ('django.db.models.fields.AutoField', [], {'primary_key': 'True'}),
            'name': ('django.db.models.fields.CharField', [], {'max_length': '50'})
        },
        'auth.user': {
            'Meta': {'object_name': 'User'},
            'date_joined': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now'}),
            'email': ('django.db.models.fields.EmailField', [], {'max_length': '75', 'blank': 'True'}),
            'first_name': ('django.db.models.fields.CharField', [], {'max_length': '30', 'blank': 'True'}),
            'groups': ('django.db.models.fields.related.ManyToManyField', [], {'to': 'orm['auth.Group']', 'symmetrical': 'False', 'blank': 'True'}),
            'id': ('django.db.models.fields.AutoField', [], {'primary_key': 'True'}),
            'is_active': ('django.db.models.fields.BooleanField', [], {'default': 'True'}),
            'is_staff': ('django.db.models.fields.BooleanField', [], {'default': 'False'}),
            'is_superuser': ('django.db.models.fields.BooleanField', [], {'default': 'False'}),
            'last_login': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now'}),
            'last_name': ('django.db.models.fields.CharField', [], {'max_length': '30', 'blank': 'True'}),
            'password': ('django.db.models.fields.CharField', [], {'max_length': '128'}),
            'user_permissions': ('django.db.models.fields.related.ManyToManyField', [], {'to': 'orm['auth.Permission']', 'symmetrical': 'False', 'blank': 'True'}),
            'username': ('django.db.models.fields.CharField', [], {'unique': 'True', 'max_length': '30'})
        },
        'contenttypes.contenttype': {
            'Meta': {'ordering': '('name',)', 'unique_together': '(('app_label', 'model'),)', 'object_name': 'ContentType', 'db_table': ''django_content_type''},
            'app_label': ('django.db.models.fields.CharField', [], {'max_length': '100'}),
            'id': ('django.db.models.fields.AutoField', [], {'primary_key': 'True'}),
            'model': ('django.db.models.fields.CharField', [], {'max_length': '100'}),
            'name': ('django.db.models.fields.CharField', [], {'max_length': '100'})
        },
        'social_auth.association': {
            'Meta': {'object_name': 'Association'},
            'assoc_type': ('django.db.models.fields.CharField', [], {'max_length': '64'}),
            'handle': ('django.db.models.fields.CharField', [], {'max_length': str(ASSOCIATION_HANDLE_LENGTH)}),
            'id': ('django.db.models.fields.AutoField', [], {'primary_key': 'True'}),
            'issued': ('django.db.models.fields.IntegerField', [], {}),
            'lifetime': ('django.db.models.fields.IntegerField', [], {}),
            'secret': ('django.db.models.fields.CharField', [], {'max_length': '255'}),
            'server_url': ('django.db.models.fields.CharField', [], {'max_length': str(ASSOCIATION_SERVER_URL_LENGTH)})
        },
        'social_auth.nonce': {
            'Meta': {'object_name': 'Nonce'},
            'id': ('django.db.models.fields.AutoField', [], {'primary_key': 'True'}),
            'salt': ('django.db.models.fields.CharField', [], {'max_length': '40'}),
            'server_url': ('django.db.models.fields.CharField', [], {'max_length': str(NONCE_SERVER_URL_LENGTH)}),
            'timestamp': ('django.db.models.fields.IntegerField', [], {})
        },
        'social_auth.usersocialauth': {
            'Meta': {'unique_together': '(('provider', 'uid'),)', 'object_name': 'UserSocialAuth'},
            'extra_data': ('social_auth.fields.JSONField', [], {'default': ''{}''}),
            'id': ('django.db.models.fields.AutoField', [], {'primary_key': 'True'}),
            'provider': ('django.db.models.fields.CharField', [], {'max_length': '32'}),
            'uid': ('django.db.models.fields.CharField', [], {'max_length': str(UID_LENGTH)}),
            'user': ('django.db.models.fields.related.ForeignKey', [], {'related_name': ''social_auth'', 'to': 'orm['' + USER_MODEL + '']'})
        }
    }
    models.update(custom_user_frozen_models(USER_MODEL))
    
        @abc.abstractproperty
    def is_eager_to_contribute(self):
        raise NotImplementedError('Must provide implementation in subclass.')
    
    
class State(object):
    
    
class C(A, B):
    pass
    
    *References:
http://stackoverflow.com/questions/1514120/python-implementation-of-the-object-pool-design-pattern
https://sourcemaking.com/design_patterns/object_pool
    
        def unregister_object(self, name):
        '''Unregister an object'''
        del self._objects[name]
    
    *TL;DR
Allows object composition to achieve the same code reuse as inheritance.
'''
    
        for op in graph.get_operations():
      for x in op.inputs:
        op_to_all[op.name].append(x.name)
      for y in op.outputs:
        output_to_op[y.name].append(op.name)
        op_to_all[op.name].append(y.name)
      if str(op.type) == 'Assign':
        for y in op.outputs:
          for x in op.inputs:
            assign_out_to_in[y.name].append(x.name)
    
      def _run_split_on_punc(self, text):
    '''Splits punctuation on a piece of text.'''
    chars = list(text)
    i = 0
    start_new_word = True
    output = []
    while i < len(chars):
      char = chars[i]
      if _is_punctuation(char):
        output.append([char])
        start_new_word = True
      else:
        if start_new_word:
          output.append([])
        start_new_word = False
        output[-1].append(char)
      i += 1
    
        self.assertAllEqual(
        tokenizer.tokenize(u' \tHeLLo!how  \n Are yoU?  '),
        ['hello', '!', 'how', 'are', 'you', '?'])
    self.assertAllEqual(tokenizer.tokenize(u'H\u00E9llo'), ['hello'])