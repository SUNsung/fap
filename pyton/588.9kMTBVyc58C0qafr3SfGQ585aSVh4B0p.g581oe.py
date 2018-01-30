
        
        
def get_json_from_api(url, username, password):
    headers = {'Accept': 'application/json; version=1.5'}
    response = open_url(url, headers=headers, url_username=username, url_password=password)
    return json.loads(response.read())['data']
    
        if s1.st_dev != s2.st_dev:
        return True     # path/.. on a different device as path
    if s1.st_ino == s2.st_ino:
        return True     # path/.. is the same i-node as path, i.e. path=='/'
    return False

    
    
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
    
        path = os.path.join(os.environ['HOME'], '.shippable.key')
    
    patterns = {
    # This matches a square-bracketed expression with a port specification. What
    # is inside the square brackets is validated later.
    }
    
        try:
        return json.dumps(result, sort_keys=True, indent=indent, ensure_ascii=False)
    except UnicodeDecodeError:
        return json.dumps(result, sort_keys=True, indent=indent)

    
    
@keras_test
def test_dropout_legacy_interface():
    old_layer = keras.layers.Dropout(p=3, name='drop')
    new_layer_1 = keras.layers.Dropout(rate=3, name='drop')
    new_layer_2 = keras.layers.Dropout(3, name='drop')
    assert json.dumps(old_layer.get_config()) == json.dumps(new_layer_1.get_config())
    assert json.dumps(old_layer.get_config()) == json.dumps(new_layer_2.get_config())
    
        model = Sequential()
    model.add(Conv2D(filters, kernel_size,
                     padding='valid',
                     input_shape=input_shape))
    model.add(Activation('relu'))
    model.add(Conv2D(filters, kernel_size))
    model.add(Activation('relu'))
    model.add(MaxPooling2D(pool_size=pool_size))
    model.add(Dropout(0.25))
    
    print('Vectorizing sequence data...')
tokenizer = Tokenizer(num_words=max_words)
x_train = tokenizer.sequences_to_matrix(x_train, mode='binary')
x_test = tokenizer.sequences_to_matrix(x_test, mode='binary')
print('x_train shape:', x_train.shape)
print('x_test shape:', x_test.shape)
    
            # Test equivalence of convert_dense_weights_data_format
        out1 = model1.predict(x)
        layer_utils.convert_dense_weights_data_format(model1.layers[2], prev_shape, target_data_format)
        for (src, dst) in zip(model1.layers, model2.layers):
            dst.set_weights(src.get_weights())
        out2 = model2.predict(transpose(x))
    
    
if __name__ == '__main__':
    pytest.main([__file__])

    
        @mock.patch('certbot.display.enhancements.util')
    def test_cancel(self, mock_util):
        mock_util().menu.return_value = (display_util.CANCEL, 1)
        self.assertFalse(self._call())
    
    
def import_object(name):
    # type: (_BaseString) -> Any
    '''Imports an object by name.
    
        @gen_test
    def test_nonblocking_put_with_getters(self):
        q = queues.Queue()
        get0 = q.get()
        get1 = q.get()
        q.put_nowait(0)
        # put_nowait does *not* immediately unblock getters.
        yield gen.moment
        self.assertEqual(0, (yield get0))
        q.put_nowait(1)
        yield gen.moment
        self.assertEqual(1, (yield get1))
    
            if maxsize < 0:
            raise ValueError('maxsize can't be negative')
    
        def test_advanced(self):
        code = textwrap.dedent('''
            from __future__ import print_function
            from tornado.ioloop import IOLoop
            from tornado.netutil import bind_sockets
            from tornado.process import fork_processes, task_id
            from tornado.ioloop import IOLoop
            from tornado.tcpserver import TCPServer
    
    import bcrypt
import concurrent.futures
import MySQLdb
import markdown
import os.path
import re
import subprocess
import torndb
import tornado.escape
from tornado import gen
import tornado.httpserver
import tornado.ioloop
import tornado.options
import tornado.web
import unicodedata