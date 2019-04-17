
        
        EXAMPLES = '''
# Note: None of these examples set aws_access_key, aws_secret_key, or region.
# It is assumed that their matching environment variables are set.
---
- hosts: localhost
  connection: local
  tasks:
    - name: 'Create a snapshot'
      elasticache_snapshot:
        name: 'test-snapshot'
        state: 'present'
        cluster_id: '{{ cluster }}'
        replication_id: '{{ replication }}'
'''
    
    from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.ipa import IPAClient, ipa_argument_spec
from ansible.module_utils._text import to_native
    
        present = get_status() != ''
    
        # get the first device
    model = root.find('ca:model-responses', namespace).find('ca:model', namespace)
    
        def setUp(self):
        self.decoded = datetime.datetime(2015, 3, 27, tzinfo=pytz.utc)
        self.encoded = '2015-03-27T00:00:00Z'
    
    # Output file base name for HTML help builder.
htmlhelp_basename = 'certbot-dns-cloudxnsdoc'
    
            if n_dim == 2:
            return tf.nn.softmax(x)
        else:
            e = tf.exp(x - tf.reduce_max(x, axis=axis, keepdims=True))
            s = tf.reduce_sum(e, axis=axis, keepdims=True)
            return e / s
    '''
    return tf.nn.softmax(x, axis=axis)
    
        '''
    if isinstance(kernel_size, int):
        kernel_size = [kernel_size] * 2
    if isinstance(strides, int):
        strides = [strides] * 4
    
    import numpy as np
import tensorflow as tf
    
        def action(self):
        self.figure.canvas.mpl_connect('button_press_event', self._onclick)
        ani = animation.FuncAnimation(self.figure, self._update_figure, interval=50, blit=True)
        plt.show()
    
        elif model == 'se':
        bot_params['TIME_COEFF'] = 2.3
        bot_params['COORD_Y_START_SCAN'] = 190
        bot_params['PIECE_BASE_HEIGHT_HALF'] = 12
        bot_params['PIECE_BODY_WIDTH'] = 50
        bot_params['SWIPE_X1'] = 375
        bot_params['SWIPE_Y1'] = 1055
        bot_params['SWIPE_X2'] = 375
        bot_params['SWIPE_Y2'] = 1055
    
    
def yes_or_no(prompt, true_value='y', false_value='n', default=True):
    '''
    检查是否已经为启动程序做好了准备
    '''
    default_value = true_value if default else false_value
    prompt = '{} {}/{} [{}]: '.format(prompt, true_value,
        false_value, default_value)
    i = input(prompt)
    if not i:
        return default
    while True:
        if i == true_value:
            return True
        elif i == false_value:
            return False
        prompt = 'Please input {} or {}: '.format(true_value, false_value)
        i = input(prompt)
    
    
def update_data():
    return np.array(Image.open('autojump.png'))
    
    '''Tests importing the fire module.'''
    
      @mock.patch(INTERACT_METHOD)
  def testInteractVariables(self, mock_interact_method):
    self.assertFalse(mock_interact_method.called)
    interact.Embed({
        'count': 10,
        'mock': mock,
    })
    self.assertTrue(mock_interact_method.called)
    
    import difflib
import os
import time
    
      def testSeparatorForChaining(self):
    # Without a separator all args are consumed by get_obj.
    self.assertIsInstance(
        fire.Fire(tc.ReturnsObj,
                  command=['get-obj', 'arg1', 'arg2', 'as-bool', 'True']),
        tc.BoolConverter)
    # With a separator only the preceding args are consumed by get_obj.
    self.assertEqual(
        fire.Fire(
            tc.ReturnsObj,
            command=['get-obj', 'arg1', 'arg2', '-', 'as-bool', 'True']), True)
    self.assertEqual(
        fire.Fire(tc.ReturnsObj,
                  command=['get-obj', 'arg1', 'arg2', '&', 'as-bool', 'True',
                           '--', '--separator', '&']),
        True)
    self.assertEqual(
        fire.Fire(tc.ReturnsObj,
                  command=['get-obj', 'arg1', '$$', 'as-bool', 'True', '--',
                           '--separator', '$$']),
        True)
    
        def _update(self, tablename=None, where='1=0', where_values=[], **values):
        tablename = self.escape(tablename or self.__tablename__)
        _key_values = ', '.join([
            '%s = %s' % (self.escape(k), self.placeholder) for k in values
        ])
        sql_query = 'UPDATE %s SET %s WHERE %s' % (tablename, _key_values, where)
        logger.debug('<sql: %s>', sql_query)
    
            for name in project_names:
            del self.projects[name]
    
        @property
    def projects(self):
        if time.time() - getattr(self, '_last_update_projects', 0) \
                > self.UPDATE_PROJECTS_TIME:
            self._list_project()
        return self._projects
    
    
class ResultDB(SplitTableMixin, BaseResultDB):
    collection_prefix = ''
    
    
class SplitTableMixin(object):
    UPDATE_PROJECTS_TIME = 10 * 60
    
        def status_count(self, project):
        result = dict()
        if project not in self.projects:
            self._list_project()
        if project not in self.projects:
            return result