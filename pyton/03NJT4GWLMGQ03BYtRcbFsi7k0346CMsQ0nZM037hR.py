
        
        
class Config(FaceswapConfig):
    ''' Config File for Convert '''
    
            For actions that occur identically for each frame (e.g. blend_box), constants can
        be placed into self.func_constants to be compiled at launch, then referenced for
        each face. '''
    def __init__(self, mask_type, output_size, predicted_available=False, **kwargs):
        super().__init__(mask_type, output_size, predicted_available, **kwargs)
        self.mask = self.get_mask() if not self.skip else None
    
    from plugins.convert._config import Config
    
        The following variables should be defined:
        _HELPTEXT: A string describing what this plugin does
        _DEFAULTS: A dictionary containing the options, defaults and meta information. The
                   dictionary should be defined as:
                       {<option_name>: {<metadata>}}
    
        def process(self, new_face):
        ''' Sharpen using the requested technique '''
        amount = self.config['amount'] / 100.0
        kernel_center = self.get_kernel_size(new_face, self.config['radius'])
        new_face = getattr(self, self.config['method'])(new_face, kernel_center, amount)
        return new_face
    
        def __init__(self, image, alignments, original_roi=None):
        logger.debug('Initializing %s: (alignments: %s, original_roi: %s)',
                     self.__class__.__name__, alignments, original_roi)
        self.image = image
        self.alignments = alignments
        self.roi = original_roi
        self.colors = {1: (255, 0, 0),
                       2: (0, 255, 0),
                       3: (0, 0, 255),
                       4: (255, 255, 0),
                       5: (255, 0, 255),
                       6: (0, 255, 255)}
        logger.debug('Initialized %s', self.__class__.__name__)
    
        def handle(self, request):
        '''
        Handle request and stop.
        If can't - call next handler in chain.
    
        def handle(self, request):
        '''
        Handle request and stop.
        If can't - call next handler in chain.
    
        def restore():
        obj.__dict__.clear()
        obj.__dict__.update(state)
    
    *TL;DR
Enables selecting an algorithm at runtime.
'''
    
            pet = self.pet_factory()
        print('We have a lovely {}'.format(pet))
        print('It says {}'.format(pet.speak()))
    
        # Using an external constructor function:
    complex_house = construct_building(ComplexHouse)
    print(complex_house)
    
    
if __name__ == '__main__':
    import doctest
    
    
class Cat(object):
    def __init__(self):
        self.name = 'Cat'
    
    
class ComputerFacade(object):
    '''
    Represents a facade for various computer parts.
    '''
    def __init__(self):
        self.cpu = CPU()
        self.memory = Memory()
        self.ssd = SolidStateDrive()
    
        if completed_item[ 'user_data' ]:
      completions = self._RawResponse()[ 'completions' ]
      return [ completions[ int( completed_item[ 'user_data' ] ) ] ]
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
  def Start( self ):
    request_data = BuildRequestData()
    if self._extra_data:
      request_data.update( self._extra_data )
    self._response = self.PostDataToHandler( request_data,
                                             'debug_info',
                                             display_message = False )
    
        self._response_future = self.PostDataToHandlerAsync( request_data,
                                                         'event_notification' )
    
        Args:
        fs: The sequence of Futures (possibly created by different Executors) to
            iterate over.
        timeout: The maximum number of seconds to wait. If None, then there
            is no limit on the wait time.
    
            print('None input')
        assert_raises(TypeError, merge_sort.sort, None)
    
    
def main():
    test = TestStack()
    test.test_end_to_end()
    
        @classmethod
    def current_state_command(cls):
        '''
        Get current state of repository (current revision).
        This is used to find what cache entries should be invalidated.
        '''
    
        @staticmethod
    def get_list(prefix=None):
        return []
    
            lang = self._rosetta_code_name[query]
        answer = []
        if task:
            glob_path = os.path.join(self.local_repository_location(), 'Lang', lang, task, '*')
        else:
            glob_path = os.path.join(self.local_repository_location(), 'Lang', lang, '*')
        for filename in glob.glob(glob_path):
            taskname = os.path.basename(filename)
            answer.append(taskname)
    
    from .git_adapter import GitRepositoryAdapter
    
        def __init__(self):