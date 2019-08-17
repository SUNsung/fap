
        
            with open('README.md', 'w+') as sorted_file:
        sorted_file.write(final_README)
    
        # Arguments
        sources_dir: Where to put the markdown files.
    '''
    template_dir = os.path.join(str(keras_dir), 'docs', 'templates')
    
    
@pytest.mark.parametrize('tensor_shape', [FC_SHAPE, CONV_SHAPE], ids=['FC', 'CONV'])
def test_truncated_normal(tensor_shape):
    _runner(initializers.TruncatedNormal(mean=0, stddev=1), tensor_shape,
            target_mean=0., target_max=2, target_min=-2)
    
        # check dropout
    layer_test(convolutional_recurrent.ConvLSTM2D,
               kwargs={'data_format': data_format,
                       'return_sequences': return_sequences,
                       'filters': filters,
                       'kernel_size': (num_row, num_col),
                       'padding': 'same',
                       'dropout': 0.1,
                       'recurrent_dropout': 0.1},
               input_shape=inputs.shape)
    
    
def squash(x, axis=-1):
    '''The Squashing Function.
    The nonlinear activation function used in Capsule Network
    # Arguments
        x: Input Tensor.
        axis: Integer axis along which the squashing function is to be applied.
    
        # Example
    ```python
        >>> from keras import backend as K
        >>> K.floatx()
        'float32'
        >>> arr = numpy.array([1.0, 2.0], dtype='float64')
        >>> arr.dtype
        dtype('float64')
        >>> new_arr = K.cast_to_floatx(arr)
        >>> new_arr
        array([ 1.,  2.], dtype=float32)
        >>> new_arr.dtype
        dtype('float32')
    ```
    '''
    return np.asarray(x, dtype=_FLOATX)
    
    
def serialize(metric):
    return serialize_keras_object(metric)
    
        def _call_end_hook(self, mode):
        '''Helper function for on_{train|test|predict}_end methods.'''
        if mode == _TRAIN:
            self.on_train_end()
        elif mode == _TEST:
            self.on_test_end()
        else:
            self.on_predict_end()
    
    NAME_MAPPING.update({
    ('__builtin__', 'basestring'): ('builtins', 'str'),
    ('exceptions', 'StandardError'): ('builtins', 'Exception'),
    ('UserDict', 'UserDict'): ('collections', 'UserDict'),
    ('socket', '_socketobject'): ('socket', 'SocketType'),
})
    
    knownfiles -- list of files to parse
inited -- flag set when init() has been called
suffix_map -- dictionary mapping suffixes to suffixes
encodings_map -- dictionary mapping suffixes to encodings
types_map -- dictionary mapping suffixes to types
    
            self.assertEqual(q.get_nowait(), 2)
        self.assertEqual(q.qsize(), 2)
    
            if maintype == 'multipart' and subtype == 'related':
            # For related, we treat everything but the root as an attachment.
            # The root may be indicated by 'start'; if there's no start or we
            # can't find the named start, treat the first subpart as the root.
            start = self.get_param('start')
            if start:
                found = False
                attachments = []
                for part in parts:
                    if part.get('content-id') == start:
                        found = True
                    else:
                        attachments.append(part)
                if found:
                    yield from attachments
                    return
            parts.pop(0)
            yield from parts
            return
        # Otherwise we more or less invert the remaining logic in get_body.
        # This only really works in edge cases (ex: non-text related or
        # alternatives) if the sending agent sets content-disposition.
        seen = []   # Only skip the first example of each candidate type.
        for part in parts:
            maintype, subtype = part.get_content_type().split('/')
            if ((maintype, subtype) in self._body_types and
                    not part.is_attachment() and subtype not in seen):
                seen.append(subtype)
                continue
            yield part
    
    
class TestEmailMessage(TestEmailMessageBase, TestEmailBase):
    message = EmailMessage
    
        def test_always_after_default(self):
        with original_warnings.catch_warnings(record=True,
                module=self.module) as w:
            self.module.resetwarnings()
            message = 'FilterTests.test_always_after_ignore'
            def f():
                self.module.warn(message, UserWarning)
            f()
            self.assertEqual(len(w), 1)
            self.assertEqual(w[-1].message.args[0], message)
            f()
            self.assertEqual(len(w), 1)
            self.module.filterwarnings('always', category=UserWarning)
            f()
            self.assertEqual(len(w), 2)
            self.assertEqual(w[-1].message.args[0], message)
            f()
            self.assertEqual(len(w), 3)
            self.assertEqual(w[-1].message.args[0], message)
    
    import atexit
from concurrent.futures import _base
import itertools
import queue
import threading
import weakref
import os
    
            # This test should not use asyncio for the mock server; the
        # whole point of the test is to test for a bug in drain()
        # where it never gives up the event loop but the socket is
        # closed on the  server side.
    
        def is_ignored(self, line, lineno, issue):
        '''Determine whether this issue should be ignored.'''
        docname = self.docname
        for rule in self.rules:
            if rule.docname != docname: continue
            if rule.issue != issue: continue
            # Both lines must match *exactly*. This is rather strict,
            # and probably should be improved.
            # Doing fuzzy matches with levenshtein distance could work,
            # but that means bringing other libraries...
            # Ok, relax that requirement: just check if the rule fragment
            # is contained in the document line
            if rule.line not in line: continue
            # Check both line numbers. If they're 'near'
            # this rule matches. (lineno=None means 'don't care')
            if (rule.lineno is not None) and \
                abs(rule.lineno - lineno) > 5: continue
            # if it came this far, the rule matched
            rule.used = True
            return True
        return False
    
        oslist = []
    allmd = []
    group = []
    ap = []
    
            # Removing unique constraint on 'TagValue', fields ['project_id',
        # 'environment_id', '_key', 'value']
        db.delete_unique(u'tagstore_tagvalue', ['project_id', 'environment_id', 'key_id', 'value'])
    
        models = {
        'tagstore.eventtag': {
            'Meta': {'unique_together': '(('project_id', 'event_id', 'key', 'value'),)', 'object_name': 'EventTag', 'index_together': '(('project_id', 'key', 'value'), ('group_id', 'key', 'value'))'},
            'date_added': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'db_index': 'True'}),
            'event_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {}),
            'group_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'key': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagKey']', 'db_column': ''key_id''}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {}),
            'value': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagValue']', 'db_column': ''value_id''})
        },
        'tagstore.grouptagkey': {
            'Meta': {'unique_together': '(('project_id', 'group_id', '_key'),)', 'object_name': 'GroupTagKey'},
            '_key': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagKey']', 'db_column': ''key_id''}),
            'group_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'db_index': 'True'}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'db_index': 'True'}),
            'values_seen': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'})
        },
        'tagstore.grouptagvalue': {
            'Meta': {'unique_together': '(('project_id', 'group_id', '_key', '_value'),)', 'object_name': 'GroupTagValue', 'index_together': '(('project_id', '_key', '_value', 'last_seen'),)'},
            '_key': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagKey']', 'db_column': ''key_id''}),
            '_value': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagValue']', 'db_column': ''value_id''}),
            'first_seen': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'null': 'True', 'db_index': 'True'}),
            'group_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'db_index': 'True'}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'last_seen': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'null': 'True', 'db_index': 'True'}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'db_index': 'True'}),
            'times_seen': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'})
        },
        'tagstore.tagkey': {
            'Meta': {'unique_together': '(('project_id', 'environment_id', 'key'),)', 'object_name': 'TagKey'},
            'environment_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'null': 'True'}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'key': ('django.db.models.fields.CharField', [], {'max_length': '32'}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'db_index': 'True'}),
            'status': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'}),
            'values_seen': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'})
        },
        'tagstore.tagvalue': {
            'Meta': {'unique_together': '(('project_id', '_key', 'value'),)', 'object_name': 'TagValue', 'index_together': '(('project_id', '_key', 'last_seen'),)'},
            '_key': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagKey']', 'db_column': ''key_id''}),
            'data': ('sentry.db.models.fields.gzippeddict.GzippedDictField', [], {'null': 'True', 'blank': 'True'}),
            'first_seen': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'null': 'True', 'db_index': 'True'}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'last_seen': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'null': 'True', 'db_index': 'True'}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'db_index': 'True'}),
            'times_seen': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'}),
            'value': ('django.db.models.fields.CharField', [], {'max_length': '200'})
        }
    }
    
    
class ThreadPool(object):
    def __init__(self, workers=10):
        self.queue = Queue()
        self.workers = []
        self.tasks = []
        for worker in range(workers):
            self.workers.append(Worker(self.queue))
    
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
    
            # Deleting model 'Association'
        db.delete_table(u'social_auth_association')
    
            This method only accepts `.Future` objects and not other
        awaitables (unlike most of Tornado where the two are
        interchangeable).
        '''
        if isinstance(future, Future):
            # Note that we specifically do not want the inline behavior of
            # tornado.concurrent.future_add_done_callback. We always want
            # this callback scheduled on the next IOLoop iteration (which
            # asyncio.Future always does).
            #
            # Wrap the callback in self._run_callback so we control
            # the error logging (i.e. it goes to tornado.log.app_log
            # instead of asyncio's log).
            future.add_done_callback(
                lambda f: self._run_callback(functools.partial(callback, future))
            )
        else:
            assert is_future(future)
            # For concurrent futures, we use self.add_callback, so
            # it's fine if future_add_done_callback inlines that call.
            future_add_done_callback(
                future, lambda f: self.add_callback(callback, future)
            )
    
    Usage: ``yield gen.moment``
    
        logging.warning('Starting fetch with curl client')
    curl_client = CurlAsyncHTTPClient()
    curl_client.fetch('http://localhost:%d/' % options.port,
                      callback=callback)
    IOLoop.current().start()
    
    
if __name__ == '__main__':
    main()

    
    
def main():
    parse_command_line()
    
    with open('README.rst') as f:
    kwargs['long_description'] = f.read()