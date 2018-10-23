
        
        from front_base.openssl_wrap import SSLContext
from front_base.connect_creator import ConnectCreator
from front_base.host_manager import HostManagerBase
import front_base.check_ip
from config import config
    
    import simple_http_client
from xlog import getLogger
xlog = getLogger('gae_proxy')
    
    current_path = os.path.dirname(os.path.abspath(__file__))
root_path = os.path.abspath( os.path.join(current_path, os.pardir, os.pardir))
data_path = os.path.abspath(os.path.join(root_path, os.pardir, os.pardir, 'data'))
data_gae_proxy_path = os.path.join(data_path, 'gae_proxy')
python_path = os.path.abspath( os.path.join(root_path, 'python27', '1.0'))
    
    - CommonTokenStream: A basic and most commonly used TokenStream
  implementation.
- TokenRewriteStream: A modification of CommonTokenStream that allows the
  stream to be altered (by the Parser). See the 'tweak' example for a usecase.