
        
                    # New terminal setting unbuffered
            self.new_term[3] = (self.new_term[3] & ~termios.ICANON & ~termios.ECHO)
            termios.tcsetattr(self.file_desc, termios.TCSAFLUSH, self.new_term)
    
    
def format_ops(ops, sort_outputs=True):
    '''Helper method for printing ops. Converts Tensor/Operation op to op.name,
       rest to str(op).'''
    
    from lib.config import FaceswapConfig
from lib.utils import full_path_split
    
    
def get_config(plugin_name, configfile=None):
    ''' Return the config for the requested model '''
    return Config(plugin_name, configfile=configfile).config_dict
    
    
_HELPTEXT = (
    'Options for outputting converted frames to a series of images using OpenCV\n'
    'OpenCV can be faster than other image writers, but lacks some configuration '
    'options and formats.'
)