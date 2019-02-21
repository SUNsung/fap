
        
            for data_name, data_dict in datasets.items():
      data_tuple = [('train', data_dict['train_data'],
                     data_dict['train_ext_input']),
                    ('valid', data_dict['valid_data'],
                     data_dict['valid_ext_input'])]
      for data_kind, data_extxd, ext_input_extxi in data_tuple:
        if not output_fname:
          fname = 'model_runs_' + data_name + '_' + data_kind + '_' + kind
        else:
          fname = output_fname + data_name + '_' + data_kind + '_' + kind
    
    # The controller will be more powerful if it can see the encoding of the entire
# trial.  However, this allows the controller to create inferred inputs that are
# acausal with respect to the actual data generation process.  E.g. the data
# generator could have an input at time t, but the controller, after seeing the
# entirety of the trial could infer that the input is coming a little before
# time t, because there are no restrictions on the data the controller sees.
# One can force the controller to be causal (with respect to perturbations in
# the data generator) so that it only sees forward encodings of the data at time
# t that originate at times before or at time t.  One can also control the data
# the controller sees by using an input lag (forward encoding at time [t-tlag]
# for controller input at time t.  The same can be done in the reverse direction
# (controller input at time t from reverse encoding at time [t+tlag], in the
# case of an acausal controller).  Setting this lag > 0 (even lag=1) can be a
# powerful way of avoiding very spiky decodes. Finally, one can manually control
# whether the factors at time t-1 are fed to the controller at time t.
#
# If you don't care about any of this, and just want to smooth your data, set
#    do_causal_controller = False
#    do_feed_factors_to_controller = True
#    causal_input_lag = 0
flags.DEFINE_boolean('do_causal_controller',
                     DO_CAUSAL_CONTROLLER,
                     'Restrict the controller create only causal inferred \
                     inputs?')
# Strictly speaking, feeding either the factors or the rates to the controller
# violates causality, since the g0 gets to see all the data. This may or may not
# be only a theoretical concern.
flags.DEFINE_boolean('do_feed_factors_to_controller',
                     DO_FEED_FACTORS_TO_CONTROLLER,
                     'Should factors[t-1] be input to controller at time t?')
flags.DEFINE_string('feedback_factors_or_rates', FEEDBACK_FACTORS_OR_RATES,
                    'Feedback the factors or the rates to the controller? \
                     Acceptable values: 'factors' or 'rates'.')
flags.DEFINE_integer('controller_input_lag', CONTROLLER_INPUT_LAG,
                     'Time lag on the encoding to controller t-lag for \
                     forward, t+lag for reverse.')
    
      if len(dataset_dict) == 0:
    raise ValueError('Failed to load any datasets, are you sure that the '
                     ''--data_dir' and '--data_filename_stem' flag values '
                     'are correct?')
    
      mask1_end, mask2_end = [], []
  while sent1[-1] == sent2[-1]:
    if (len(sent1) == 1) or (len(sent2) == 1):
      break
    sent1 = sent1[:-1]
    sent2 = sent2[:-1]
    mask1_end = [0.] + mask1_end
    mask2_end = [0.] + mask2_end
    
      ## REINFORCE with different baselines.
  # We create a separate critic functionality for the Discriminator.  This
  # will need to operate unidirectionally and it may take in the past context.
  if FLAGS.baseline_method == 'critic':
    
    
def make_setting_element(setting_data, app, fromdocname):
    refnode = make_refnode(app.builder, fromdocname,
                           todocname=setting_data['docname'],
                           targetid=setting_data['refid'],
                           child=nodes.Text(setting_data['setting_name']))
    p = nodes.paragraph()
    p += refnode
    
    # Check minimum required Python version
import sys
if sys.version_info < (2, 7):
    print('Scrapy %s requires Python 2.7' % __version__)
    sys.exit(1)
    
    def _iter_command_classes(module_name):
    # TODO: add `name` attribute to commands and and merge this function with
    # scrapy.utils.spider.iter_spider_classes
    for module in walk_modules(module_name):
        for obj in vars(module).values():
            if inspect.isclass(obj) and \
                    issubclass(obj, ScrapyCommand) and \
                    obj.__module__ == module.__name__ and \
                    not obj == ScrapyCommand:
                yield obj
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-l', '--list', dest='list', action='store_true',
                          help='only list contracts, without checking them')
        parser.add_option('-v', '--verbose', dest='verbose', default=False, action='store_true',
                          help='print contract tests for all spiders')
    
    
class Command(ScrapyCommand):
    
            spidercls = DefaultSpider
        spider_loader = self.crawler_process.spider_loader
        if opts.spider:
            spidercls = spider_loader.load(opts.spider)
        else:
            spidercls = spidercls_for_request(spider_loader, request, spidercls)
        self.crawler_process.crawl(spidercls, start_requests=lambda: [request])
        self.crawler_process.start()

    
        def short_desc(self):
        return 'Get settings values'
    
            if not assertion:
            if self.min_bound == self.max_bound:
                expected = self.min_bound
            else:
                expected = '%s..%s' % (self.min_bound, self.max_bound)
    
    
class BaseRegisteredClass(object):
    __metaclass__ = RegistryHolder
    '''
        Any class that will inherits from BaseRegisteredClass will be included
        inside the dict RegistryHolder.REGISTRY, the key being the name of the
        class and the associated value, the class itself.
    '''
    pass
    
    
OUTPUT = '''
<Price: 100, price after discount: 100>
<Price: 100, price after discount: 90.0>
<Price: 1000, price after discount: 730.0>
'''

    
        def get_current_time_as_html_fragment(self):
        current_time = self.time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
'''
    
    '''
*TL;DR80
Separates presentation, application processing, and data management functions.
'''
    
        def test_publisher_shall_append_subscription_message_to_queue(cls):
        ''' msg_queue ~ Provider.notify(msg) ~ Publisher.publish(msg) '''
        expected_msg = 'expected msg'
        pro = Provider()
        pub = Publisher(pro)
        Subscriber('sub name', pro)
        cls.assertEqual(len(pro.msg_queue), 0)
        pub.publish(expected_msg)
        cls.assertEqual(len(pro.msg_queue), 1)
        cls.assertEqual(pro.msg_queue[0], expected_msg)