
        
            def append_to_front(self, node):
        pass
    
        def can_fit_vehicle(self, vehicle):
        if self.vehicle is not None:
            return False
        return vehicle.can_fit_in_spot(self)
    
        HOUSING = 0
    FOOD = 1
    GAS = 2
    SHOPPING = 3
    # ...
    
    
def plot_lfads(train_bxtxd, train_model_vals,
               train_ext_input_bxtxi=None, train_truth_bxtxd=None,
               valid_bxtxd=None, valid_model_vals=None,
               valid_ext_input_bxtxi=None, valid_truth_bxtxd=None,
               bidx=None, cf=1.0, output_dist='poisson'):
    
    # add train_ext_input and valid_ext input
data = {'train_truth': rates_train,
        'valid_truth': rates_valid,
        'train_data' : spikes_train,
        'valid_data' : spikes_valid,
        'train_ext_input' : np.array(ext_input_train),
        'valid_ext_input': np.array(ext_input_valid),
        'train_percentage' : train_percentage,
        'nreplications' : nreplications,
        'dt' : FLAGS.dt,
        'P_sxn' : P_nxn,
        'condition_labels_train' : condition_labels_train,
        'condition_labels_valid' : condition_labels_valid,
        'conversion_factor': 1.0 / rnn_a['conversion_factor']}
    
              eval_feed = {model.inputs: x, model.targets: y, model.present: p}
    
      ## Encoder forward variables.
  if not FLAGS.seq2seq_share_embedding:
    encoder_embedding = [
        v for v in tf.trainable_variables()
        if v.op.name == 'gen/encoder/rnn/embedding'
    ][0]
  encoder_lstm_w_0 = [
      v for v in tf.trainable_variables() if v.op.name ==
      'gen/encoder/rnn/multi_rnn_cell/cell_0/basic_lstm_cell/kernel'
  ][0]
  encoder_lstm_b_0 = [
      v for v in tf.trainable_variables() if v.op.name ==
      'gen/encoder/rnn/multi_rnn_cell/cell_0/basic_lstm_cell/bias'
  ][0]
  encoder_lstm_w_1 = [
      v for v in tf.trainable_variables() if v.op.name ==
      'gen/encoder/rnn/multi_rnn_cell/cell_1/basic_lstm_cell/kernel'
  ][0]
  encoder_lstm_b_1 = [
      v for v in tf.trainable_variables() if v.op.name ==
      'gen/encoder/rnn/multi_rnn_cell/cell_1/basic_lstm_cell/bias'
  ][0]
    
    import scrapy
from scrapy.commands import ScrapyCommand
from scrapy.linkextractors import LinkExtractor
    
            self.crawler_process.crawl(spname, **opts.spargs)
        self.crawler_process.start()
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-l', '--list', dest='list', action='store_true',
            help='List available templates')
        parser.add_option('-e', '--edit', dest='edit', action='store_true',
            help='Edit spider after creating it')
        parser.add_option('-d', '--dump', dest='dump', metavar='TEMPLATE',
            help='Dump template to standard output')
        parser.add_option('-t', '--template', dest='template', default='basic',
            help='Uses a custom template.')
        parser.add_option('--force', dest='force', action='store_true',
            help='If the spider already exists, overwrite it with the template')
    
                # trustRoot set to platformTrust() will use the platform's root CAs.
            #
            # This means that a website like https://www.cacert.org will be rejected
            # by default, since CAcert.org CA certificate is seldom shipped.
            return optionsForClientTLS(hostname.decode('ascii'),
                                       trustRoot=platformTrust(),
                                       extraCertificateOptions={
                                            'method': self._ssl_method,
                                       })
    
        def _get_handler(self, scheme):
        '''Lazy-load the downloadhandler for a scheme
        only on the first request for that scheme.
        '''
        if scheme in self._handlers:
            return self._handlers[scheme]
        if scheme in self._notconfigured:
            return None
        if scheme not in self._schemes:
            self._notconfigured[scheme] = 'no handler available for that scheme'
            return None
    
    *References:
http://ginstrom.com/scribbles/2007/10/08/design-patterns-python-style/
https://fkromer.github.io/python-pattern-references/design/#factory-method
https://sourcemaking.com/design_patterns/factory_method
    
    
class CatalogClass(object):
    
        def scan(self):
        '''Scan the dial to the next station'''
        self.pos += 1
        if self.pos == len(self.stations):
            self.pos = 0
        print(u'Scanning... Station is %s %s' % (self.stations[self.pos], self.name))
    
    # Execute them
for template in templates:
    template()
    
        sample_queue.put('sam')
    test_object(sample_queue)
    print('Outside func: {}'.format(sample_queue.get()))
    
    
class MidnightTimeProvider(object):
    '''
    Class implemented as hard-coded stub (in contrast to configurable stub).
    '''
    
        def now(self):
        current_time_is_always_midnight = '24:01'
        return current_time_is_always_midnight
