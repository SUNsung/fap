
        
            # Separating the 'table of contents' from the contents (blocks)
    table_of_contents = ''.join(read_me.split('- - -')[0])
    blocks = ''.join(read_me.split('- - -')[1]).split('\n# ')
    for i in range(len(blocks)):
        if i == 0:
            blocks[i] = blocks[i] + '\n'
        else:
            blocks[i] = '# ' + blocks[i] + '\n'
    
    
def main():
    print('Making key files...')
    makeKeyFiles('elgamal', 2048)
    print('Key files generation successful')
    
        lowPrimes = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59,
                 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127,
                 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191,
                 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257,
                 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331,
                 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401,
                 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467,
                 479, 487, 491, 499, 503, 509, 521, 523, 541, 547, 557, 563,
                 569, 571, 577, 587, 593, 599, 601, 607, 613, 617, 619, 631,
                 641, 643, 647, 653, 659, 661, 673, 677, 683, 691, 701, 709,
                 719, 727, 733, 739, 743, 751, 757, 761, 769, 773, 787, 797,
                 809, 811, 821, 823, 827, 829, 839, 853, 857, 859, 863, 877,
                 881, 883, 887, 907, 911, 919, 929, 937, 941, 947, 953, 967,
                 971, 977, 983, 991, 997]
    
    	TEMPORARY_ARRAY = [ element for element in ARRAY[1:] if element >= PIVOT ]
	TEMPORARY_ARRAY = [PIVOT] + longestSub(TEMPORARY_ARRAY)
	if ( len(TEMPORARY_ARRAY) > len(LONGEST_SUB) ):
		return TEMPORARY_ARRAY
	else:
		return LONGEST_SUB
    
    min_length = 8
max_length = 16
password = ''.join(random.choice(chars) for x in range(random.randint(min_length, max_length)))
print('Password: ' + password)
print('[ If you are thinking of using this passsword, You better save it. ]')
    
    
class RedirectFallbackMiddleware(MiddlewareMixin):
    # Defined as class-level attributes to be subclassing-friendly.
    response_gone_class = HttpResponseGone
    response_redirect_class = HttpResponsePermanentRedirect
    
        if section is not None:
        if section not in sitemaps:
            raise Http404('No sitemap available for section: %r' % section)
        maps = [sitemaps[section]]
    else:
        maps = sitemaps.values()
    page = request.GET.get('p', 1)
    
        # Returns
        Tuple of Numpy arrays: `(x_train, y_train), (x_test, y_test)`.
    
    
def get(identifier):
    if identifier is None:
        return None
    if isinstance(identifier, dict):
        return deserialize(identifier)
    elif isinstance(identifier, six.string_types):
        config = {'class_name': str(identifier), 'config': {}}
        return deserialize(config)
    elif callable(identifier):
        return identifier
    else:
        raise ValueError('Could not interpret regularizer identifier: ' +
                         str(identifier))

    
        outputs1 = Lambda(lambda x: utils.preprocess_input(x, 'channels_last'),
                      output_shape=x.shape[1:])(inputs)
    model1 = Model(inputs, outputs1)
    out1 = model1.predict(x)
    x2 = np.transpose(x, (0, 3, 1, 2))
    inputs2 = Input(shape=x2.shape[1:])
    outputs2 = Lambda(lambda x: utils.preprocess_input(x, 'channels_first'),
                      output_shape=x2.shape[1:])(inputs2)
    model2 = Model(inputs2, outputs2)
    out2 = model2.predict(x2)
    assert_allclose(out1, out2.transpose(0, 2, 3, 1))
    
    model.fit(x_train, y_train,
          batch_size=batch_size,
          epochs=epochs,
          verbose=1,
          validation_data=(x_test, y_test))
score = model.evaluate(x_test, y_test, verbose=0)
print('Test loss:', score[0])
print('Test accuracy:', score[1])

    
    history = model.fit(x_train, y_train,
                    batch_size=batch_size,
                    epochs=epochs,
                    verbose=1,
                    validation_split=0.1)
score = model.evaluate(x_test, y_test,
                       batch_size=batch_size, verbose=1)
print('Test score:', score[0])
print('Test accuracy:', score[1])

    
    
def get_role_diff(client, ipa_role, module_role):
    return client.get_diff(ipa_data=ipa_role, module_data=module_role)
    
    
DOCUMENTATION = '''
---
module: honeybadger_deployment
author: 'Benjamin Curtis (@stympy)'
version_added: '2.2'
short_description: Notify Honeybadger.io about app deployments
description:
   - Notify Honeybadger.io about app deployments (see http://docs.honeybadger.io/article/188-deployment-tracking)
options:
  token:
    description:
      - API token.
    required: true
  environment:
    description:
      - The environment name, typically 'production', 'staging', etc.
    required: true
  user:
    description:
      - The username of the person doing the deployment
  repo:
    description:
      - URL of the project repository
  revision:
    description:
      - A hash, number, tag, or other identifier showing what revision was deployed
  url:
    description:
      - Optional URL to submit the notification to.
    default: 'https://api.honeybadger.io/v1/deploys'
  validate_certs:
    description:
      - If C(no), SSL certificates for the target url will not be validated. This should only be used
        on personally controlled sites using self-signed certificates.
    type: bool
    default: 'yes'
    
    short_description: Manage Icinga2 feature
description:
    - This module can be used to enable or disable an Icinga2 feature.
version_added: '2.3'
author: 'Loic Blot (@nerzhul)'
options:
    name:
      description:
      - This is the feature name to enable or disable.
      required: True
    state:
      description:
      - If set to C(present) and feature is disabled, then feature is enabled.
      - If set to C(present) and feature is already enabled, then nothing is changed.
      - If set to C(absent) and feature is enabled, then feature is disabled.
      - If set to C(absent) and feature is already disabled, then nothing is changed.
      choices: [ 'present', 'absent' ]
      default: present
'''
    
        if event == 'annotation':
        if not msg:
            module.fail_json(msg='msg required for annotation events')
        try:
            send_annotation_event(module, key, msg, annotated_by, level, instance_id, event_epoch)
        except Exception as e:
            module.fail_json(msg='unable to sent annotation event: %s' % to_native(e),
                             exception=traceback.format_exc())
    
    ---
- name: test contains operator
  enos_command:
    commands:
      - show version
      - show system memory
    wait_for:
      - 'result[0] contains 'Lenovo''
      - 'result[1] contains 'MemFree''
    provider: '{{ cli }}'
  register: result
    
    
# These constants define types of headers for use with
# _IncludeState.CheckNextIncludeOrder().
_C_SYS_HEADER = 1
_CPP_SYS_HEADER = 2
_LIKELY_MY_HEADER = 3
_POSSIBLE_MY_HEADER = 4
_OTHER_HEADER = 5
    
            if (not has_actual_code
            and not line.strip().startswith('//')
            and not line.strip().startswith('???')
            and not line.strip() == ''):
            has_actual_code = True
    
    
def sort_by_severity(problems):
    '''\
    Sort an iterable of ``Problem``s by their severity, from most severe to least severe.
    '''
    return sorted(
        problems,
        key=lambda i: (-Problem.SEVERITY_LEVELS[i.severity], i.message, ),
    )
    
    
class TagKeyNotFound(Exception):
    pass
    
            # Adding index on 'EventTag', fields ['group_id', 'key', 'value']
        db.create_index(u'tagstore_eventtag', ['group_id', 'key', 'value'])
    
            # Adding unique constraint on 'TagValue', fields ['project_id',
        # 'environment_id', '_key', 'value']
        db.create_unique(u'tagstore_tagvalue', ['project_id', 'environment_id', 'key_id', 'value'])
    
            # Adding model 'TagValue'
        db.create_table(u'tagstore_tagvalue', (
            ('times_seen', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(default=0)),
            ('environment_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(null=True)),
            ('_key', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                to=orm['tagstore.TagKey'], db_column='key_id')),
            ('first_seen', self.gf('django.db.models.fields.DateTimeField')(
                null=True, db_index=True)),
            ('project_id', self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(db_index=True)),
            ('data', self.gf('sentry.db.models.fields.gzippeddict.GzippedDictField')(null=True, blank=True)),
            ('id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(primary_key=True)),
            ('value', self.gf('django.db.models.fields.CharField')(max_length=200)),
            ('last_seen', self.gf('django.db.models.fields.DateTimeField')(
                null=True, db_index=True)),
        ))
        db.send_create_signal('tagstore', ['TagValue'])
    
            # Removing unique constraint on 'GroupTagValue', fields ['project_id',
        # 'group_id', '_key', '_value']
        db.delete_unique(
            u'tagstore_grouptagvalue', [
                'project_id', 'group_id', 'key_id', 'value_id'])
    
        task = deletions.get(
        model=model,
        query={
            'id': object_id,
        },
        transaction_id=transaction_id or uuid4().hex,
    )
    has_more = task.chunk()
    if has_more:
        delete_tag_key.apply_async(
            kwargs={'object_id': object_id,
                    'model': model,
                    'transaction_id': transaction_id},
            countdown=15,
        )

    
            for platform, project_id in queryset:
            platform = platform.lower()
            if platform not in VALID_PLATFORMS:
                continue
            ProjectPlatform.objects.create_or_update(
                project_id=project_id,
                platform=platform,
                values={
                    'last_seen': now,
                },
            )
        min_project_id += step
    
            for job in job_list:
            logger.debug('Sending scheduled job %s with payload %r', job.name, job.payload)
            app.send_task(job.name, kwargs=job.payload)
            job.delete()

    
    
class OutOfData(UnpackException):
    pass
    
    
def check(length, obj):
    v = packb(obj)
    assert len(v) == length, \
        '%r length should be %r but get %r' % (obj, length, len(v))
    assert unpackb(v, use_list=0) == obj
    
    
fig = plt.figure(figsize=(6, 1.25))
    
    
def test_setitem_callable():
    # GH 12533
    s = pd.Series([1, 2, 3, 4], index=list('ABCD'))
    s[lambda x: 'A'] = -1
    tm.assert_series_equal(s, pd.Series([-1, 2, 3, 4], index=list('ABCD')))
    
    from itertools import product
    
    
@pytest.mark.parametrize('style,equiv', [
    ('margin: 1px; margin-top: inherit',
     'margin-bottom: 1px; margin-right: 1px; margin-left: 1px'),
    ('margin-top: inherit', ''),
    ('margin-top: initial', ''),
])
def test_css_none_absent(style, equiv):
    assert_same_resolution(style, equiv)
    
    
@pytest.mark.parametrize('input_color', [None, 'not-a-color'])
def test_css_to_excel_bad_colors(input_color):
    # see gh-18392
    css = ('border-top-color: {color}; '
           'border-right-color: {color}; '
           'border-bottom-color: {color}; '
           'border-left-color: {color}; '
           'background-color: {color}; '
           'color: {color}').format(color=input_color)
    
    
def test_bin32():
    header = b'\xc6'
    data = b'x' * 65536
    b = packb(data, use_bin_type=True)
    assert len(b) == len(data) + 5
    assert b[0:1] == header
    assert b[1:5] == b'\x00\x01\x00\x00'
    assert b[5:] == data
    assert unpackb(b) == data
    
    
def test_read_map_header():
    unpacker = Unpacker()
    unpacker.feed(packb({'a': 'A'}))
    assert unpacker.read_map_header() == 1
    assert unpacker.unpack() == B'a'
    assert unpacker.unpack() == B'A'
    try:
        unpacker.unpack()
        assert 0, 'should raise exception'
    except OutOfData:
        assert 1, 'okay'
    
    
def test_types():
    assert packb(MyDict()) == packb(dict())
    assert packb(MyList()) == packb(list())
    assert packb(MyNamedTuple(1, 2)) == packb((1, 2))
