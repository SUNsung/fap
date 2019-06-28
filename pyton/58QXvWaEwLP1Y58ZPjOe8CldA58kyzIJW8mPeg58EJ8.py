
        
            def __iter__(self):
        return (casedkey for casedkey, mappedvalue in self._store.values())
    
        def test_repr(self):
        assert repr(self.lookup_dict) == '<lookup 'test'>'
    
    ``response``:
    The response generated from a Request.
'''
HOOKS = ['response']
    
    
def test_idna_with_version_attribute(mocker):
    '''Verify we're actually setting idna version when it should be available.'''
    mocker.patch('requests.help.idna', new=VersionedPackage('2.6'))
    assert info()['idna'] == {'version': '2.6'}

    
        def digest_failed_response_handler(sock):
        # Respond to initial GET with a challenge.
        request_content = consume_socket_content(sock, timeout=0.5)
        assert request_content.startswith(b'GET / HTTP/1.1')
        sock.send(text_401)
    
    import pytest
import requests
from tests.testserver.server import Server
    
        # Redirection.
    300: ('multiple_choices',),
    301: ('moved_permanently', 'moved', '\\o-'),
    302: ('found',),
    303: ('see_other', 'other'),
    304: ('not_modified',),
    305: ('use_proxy',),
    306: ('switch_proxy',),
    307: ('temporary_redirect', 'temporary_moved', 'temporary'),
    308: ('permanent_redirect',
          'resume_incomplete', 'resume',),  # These 2 to be removed in 3.0
    
        # If the temperature is not a number this can cause issues
    # with Polymer components, so bail early there.
    if not isinstance(temperature, Number):
        raise TypeError(
            'Temperature is not a number: {}'.format(temperature))
    
    
def __feet_to_meters(feet: float) -> float:
    '''Convert feet to meters.'''
    return feet * 0.3048
    
        with open('homeassistant/const.py', 'wt') as fil:
        content = fil.write(content)
    
            request[KEY_REAL_IP] = ip_address(ip_to_mock)
    
            # 更新聚类中心
        log.info(centers)
        for i in range(k):
            data_i = data[ret[:, 0] == i]  # 标签为 i 的样本
            centers[i, :] = np.mean(data_i, axis=0)  # 按类别过滤样本
    
    
def hard_sigmoid(x):
    '''
    x = 0.                  x < -2.5
      = 1.                  x > 2.5
      = 0.2 * x + 0.5       otherwise
    '''
    x = (0.2 * x) + 0.5
    x = tf.clip_by_value(x, 0., 1.)
    return x
    
        return o

    
                # Input shape: [128, 5, 32]
            x = tf.constant(np.arange(10240, dtype=np.float32).reshape([128, 16, 5]))
    
    l2_regularizer = L1L2Regularizer(l2=0.01)
    
    
def print_params_number():
    ''''''
    print(SPLIT_LINE)
    print('params_number:', get_params_number())

    
    if word_vec.any():  #
    word_vec = word_vec / max(1, ngrams_found)
else:  # 如果一个 ngram 都没找到，gensim 会报错；个人认为把 0 向量传出来也可以
    raise KeyError('all ngrams for word %s absent from model' % word_unk)
    
    
def sort_by_severity(problems):
    '''\
    Sort an iterable of ``Problem``s by their severity, from most severe to least severe.
    '''
    return sorted(
        problems,
        key=lambda i: (-Problem.SEVERITY_LEVELS[i.severity], i.message, ),
    )
    
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
    
            # Removing unique constraint on 'EventTag', fields ['event_id', 'key', 'value']
        db.delete_unique(u'tagstore_eventtag', ['event_id', 'key_id', 'value_id'])
    
    
    {    }
    
        class Meta:
        app_label = 'tagstore'
        unique_together = (('project_id', 'event_id', 'key', 'value'), )
        index_together = (
            ('project_id', 'key', 'value'),
            ('group_id', 'key', 'value'),
        )
    
        lock = locks.get(lock_key, duration=60)