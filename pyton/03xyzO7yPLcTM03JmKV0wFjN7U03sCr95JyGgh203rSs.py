
        
        
logger = logging.getLogger(__name__)
    
        def setUp(self):
        self.base_dir = '/example_path'
        self.vhosts = util.get_vh_truth(
            self.base_dir, 'debian_apache_2_4/multiple_vhosts')
    
            # pylint: disable=no-member
        self.auth.add_parser_arguments(m)
    
    import httplib2
import zope.interface
from googleapiclient import discovery
from googleapiclient import errors as googleapiclient_errors
from oauth2client.service_account import ServiceAccountCredentials
    
        lineage = domains.split(',')[0]
    server_cert = ssl.get_server_certificate(('localhost', context.tls_alpn_01_port))
    with open(os.path.join(context.workspace, 'conf/live/{0}/cert.pem'.format(lineage)), 'r') as file:
        certbot_cert = file.read()
    
        n_bins: int
        Number of judgement categories to prefrom calculation over.
        Prediction are binned based on probability, since 'descrete' 
        probabilities aren't required. 
    
    
def sample_from_pvect(pvect):
    ''' Provided utility function: given a symbolic vector of
    probabilities (which MUST sum to 1), sample one element
    and return its index.
    '''
    onehot_sample = rng.multinomial(n=1, pvals=pvect)
    sample = onehot_sample.argmax()
    return sample
    
        LOGPATS  = r'(\S+) (\S+) \[(.*?)\] (\S+) (\S+) ' \
               r'(\S+) (\S+) (\S+) ('([^']+)'|-) ' \
               r'(\S+) (\S+) (\S+) (\S+) (\S+) (\S+) ' \
               r'('([^']+)'|-) ('([^']+)'|-)'
    NUM_ENTRIES_PER_LINE = 17
    logpat = re.compile(LOGPATS)
    
        ax.plot([0.3, 0.5, 0.7], [0.6, 0.9, 0.6], '-k')
    ax.plot([0.12, 0.3, 0.38], [0.3, 0.6, 0.3], '-k')
    ax.plot([0.62, 0.7, 0.88], [0.3, 0.6, 0.3], '-k')
    ax.plot([0.0, 0.12, 0.20], [0.0, 0.3, 0.0], '--k')
    ax.plot([0.28, 0.38, 0.48], [0.0, 0.3, 0.0], '--k')
    ax.plot([0.52, 0.62, 0.72], [0.0, 0.3, 0.0], '--k')
    ax.plot([0.8, 0.88, 1.0], [0.0, 0.3, 0.0], '--k')
    ax.axis([0, 1, 0, 1])