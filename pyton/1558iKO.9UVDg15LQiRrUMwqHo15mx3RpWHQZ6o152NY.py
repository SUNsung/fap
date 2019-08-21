
        
        
def report_ok(ip):
    if '.' in ip:
        IPv4.report_ok()
    else:
        IPv6.report_ok()
    
            sorted_similarity transforms a distance matrix into a sorted distance matrix according to
        the order implied by the hierarchical tree (dendrogram)
        '''
        logger.info('Sorting face distances. Depending on your dataset this may take some time...')
        num_predictions = predictions.shape[0]
        result_linkage = linkage(predictions, method=method, preserve_input=False)
        result_order = self.seriation(result_linkage,
                                      num_predictions,
                                      num_predictions + num_predictions - 2)
    
        def __init__(self, parent):
        logger.debug('Initializing %s', self.__class__.__name__)
        ttk.Notebook.__init__(self, parent, width=780)
        parent.add(self)
        tk_vars = get_config().tk_vars
        self.wrapper_var = tk_vars['display']
        self.runningtask = tk_vars['runningtask']
    
        The following variables should be defined:
        _HELPTEXT: A string describing what this plugin does
        _DEFAULTS: A dictionary containing the options, defaults and meta information. The
                   dictionary should be defined as:
                       {<option_name>: {<metadata>}}
    
        def set_config(self, configfile, config):
        ''' Set the config to either global config or passed in config '''
        section = '.'.join(self.__module__.split('.')[-2:])
        if config is None:
            logger.debug('Loading base config')
            retval = get_config(section, configfile=configfile)
        else:
            logger.debug('Loading passed in config')
            config.section = section
            retval = config.config_dict
            config.section = None
        logger.debug('Config: %s', retval)
        return retval
    
        def check_transparency_format(self):
        ''' Make sure that the output format is correct if draw_transparent is selected '''
        transparent = self.config['draw_transparent']
        if not transparent or (transparent and self.config['format'] == 'png'):
            return
        logger.warning('Draw Transparent selected, but the requested format does not support '
                       'transparency. Changing output format to 'png'')
        self.config['format'] = 'png'
    
            As an alternative you might even in case of success
        call the next handler.
        '''
        res = self.check_range(request)
        if not res and self.successor:
            self.successor.handle(request)
    
    from __future__ import print_function
import os
    
    '''
http://ginstrom.com/scribbles/2007/10/08/design-patterns-python-style/
Implementation of the iterator pattern with a generator
    
    
class UserSpecification(CompositeSpecification):
    def is_satisfied_by(self, candidate):
        return isinstance(candidate, User)
    
        def toggle_amfm(self):
        print(u'Switching to FM')
        self.radio.state = self.radio.fmstate
    
    The idea is to abstract the creation of objects depending on business
logic, platform choice, etc.
    
    '''
*What is this pattern about?
It decouples the creation of a complex object and its representation,
so that the same process can be reused to build objects from the same
family.
This is useful when you must separate the specification of an object
from its actual representation (generally for abstraction).
    
    
class GreekLocalizer(object):
    '''A simple localizer a la gettext'''
    
        def test_object(queue):
        pool = ObjectPool(queue, True)
        print('Inside func: {}'.format(pool.item))
    
    
def gradient_check():
    '''
    梯度检查
    '''
    # 设计一个误差函数，取所有节点输出项之和
    error_function = lambda o: o.sum()
    
    rnn = RecursiveLayer(2, 2, IdentityActivator(), 1e-3)
    
    '''
Created on 2017-05-18
Update  on 2017-05-18
Author: Peter Harrington/1988/片刻
GitHub: https://github.com/apachecn/AiLearning
'''
from __future__ import print_function
    
        Args:
        nodeToTest  满足minSup {所有的元素+(value, treeNode)}
        targetNode  Tree对象的子节点
    '''
    # 建立相同元素之间的关系，例如： 左边的r指向右边的r值
    while (nodeToTest.nodeLink is not None):
        nodeToTest = nodeToTest.nodeLink
    nodeToTest.nodeLink = targetNode