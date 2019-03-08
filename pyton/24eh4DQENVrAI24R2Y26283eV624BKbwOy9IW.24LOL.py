
        
            Args:
      session: The current TensorFlow session.
      num_steps: The number of steps in each epoch.
    
      if ext_input_bxtxi is not None:
    input_title += ' External Input'
    plot_time_series(ext_input_bxtxi, n_to_plot=n_to_plot, color='b',
                     scale=scale, title=col_title + input_title)
    
        tf.logging.info('Recovering Graph %s', gd_file)
    t = {}
    [t['states_init'], t['lstm/lstm_0/control_dependency'],
     t['lstm/lstm_1/control_dependency'], t['softmax_out'], t['class_ids_out'],
     t['class_weights_out'], t['log_perplexity_out'], t['inputs_in'],
     t['targets_in'], t['target_weights_in'], t['char_inputs_in'],
     t['all_embs'], t['softmax_weights'], t['global_step']
    ] = tf.import_graph_def(gd, {}, ['states_init',
                                     'lstm/lstm_0/control_dependency:0',
                                     'lstm/lstm_1/control_dependency:0',
                                     'softmax_out:0',
                                     'class_ids_out:0',
                                     'class_weights_out:0',
                                     'log_perplexity_out:0',
                                     'inputs_in:0',
                                     'targets_in:0',
                                     'target_weights_in:0',
                                     'char_inputs_in:0',
                                     'all_embs_out:0',
                                     'Reshape_3:0',
                                     'global_step:0'], name='')
    
        self.bos_char = free_ids[0]  # <begin sentence>
    self.eos_char = free_ids[1]  # <end sentence>
    self.bow_char = free_ids[2]  # <begin word>
    self.eow_char = free_ids[3]  # <end word>
    self.pad_char = free_ids[4]  # <padding>
    
      Yields:
    Pairs of the batched data, each a matrix of shape [batch_size, num_steps].
    The second element of the tuple is the same data time-shifted to the
    right by one.
    
      Args:
    real_values: Value given by the Wasserstein Discriminator to real data.
    fake_values: Value given by the Wasserstein Discriminator to fake data.
    
      samples = []
  for sequence_id in xrange(min(len(arr), max_num_to_print)):
    buffer_str = ' '.join(
        [str(id_to_word[index]) for index in arr[sequence_id, :]])
    samples.append(buffer_str)
  return samples
    
        def get_device_name(self, device):
        '''Return the name of the device with the given MAC address.'''
        name = next((
            result.name for result in self.last_results
            if result.mac == device), None)
        return name
    
    import homeassistant.helpers.config_validation as cv
from homeassistant.components.device_tracker import (
    DOMAIN, PLATFORM_SCHEMA, DeviceScanner)
from homeassistant.const import CONF_HOST
    
        def send_message(self, message='', **kwargs):
        '''Send a message to a user.'''
        data = {
            'apiKey': self.api_key,
            'to': self.recipient,
            'content': message,
        }
    
    from homeassistant.const import (CONF_COMMAND, CONF_NAME)
from homeassistant.components.notify import (
    BaseNotificationService, PLATFORM_SCHEMA)
import homeassistant.helpers.config_validation as cv
    
        def send_message(self, message='', **kwargs):
        '''Send a message to a user.'''
        kwargs['message'] = message
        self.hass.bus.fire(EVENT_NOTIFY, kwargs)

    
    
class FileNotificationService(BaseNotificationService):
    '''Implement the notification service for the File service.'''