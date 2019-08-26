
        
        
def elu(x):
    '''指数线性单元'''
    return tf.nn.elu(x)
    
            if use_mean_attention:
            a = tf.reduce_mean(a, axis=1)  # [batch_size, n_step]
            a = tf.expand_dims(a, axis=1)  # [batch_size, 1, n_step]
            a = tf.tile(a, [1, n_input, 1])  # [batch_size, n_input, n_step]
    
        good_nonce = jose.encode_b64jose(b'foo')
    wrong_nonce = u'F'
    # Following just makes sure wrong_nonce is wrong
    try:
        jose.b64decode(wrong_nonce)
    except (ValueError, TypeError):
        assert True
    else:
        assert False  # pragma: no cover
    
    
class VirtualHostTest(unittest.TestCase):
    '''Test the VirtualHost class.'''
    
                        mock_client().new_account_and_tos.side_effect = None
                    self._call()
                    self.assertTrue(mock_handle.called)
    
            query_mock.assert_called_with(mock.ANY, SERVER, port=PORT)
        self.assertFalse(result)
    
            self.webroot = os.path.join(self.nginx_root, 'webroot')
        os.mkdir(self.webroot)
        with open(os.path.join(self.webroot, 'index.html'), 'w') as file_handler:
            file_handler.write('Hello World!')
    
    
    {    }
    
            # Removing index on 'EventTag', fields ['group_id', 'key', 'value']
        db.delete_index(u'tagstore_eventtag', ['group_id', 'key_id', 'value_id'])
    
        def backwards(self, orm):
        # Removing index on 'GroupTagValue', fields ['project_id', '_key', '_value', 'last_seen']
        db.delete_index(
            u'tagstore_grouptagvalue', [
                'project_id', 'key_id', 'value_id', 'last_seen'])
    
        @abc.abstractproperty
    def is_eager_to_contribute(self):
        raise NotImplementedError('Must provide implementation in subclass.')
    
    
class ComplexBuilding(object):
    def __repr__(self):
        return 'Floor: {0.floor} | Size: {0.size}'.format(self)
    
        # After we've accessed `relatives`
    >>> sorted(Jhon.__dict__.items())
    [('call_count2', 0), ..., ('relatives', 'Many relatives.')]