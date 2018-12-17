
        
        def prepare_input(dirty):
    '''
    Prepare the plaintext by up-casing it
    and separating repeated letters with X's
    '''
    
    dirty = ''.join([c.upper() for c in dirty if c in string.ascii_letters])
    clean = ''
    
    if len(dirty) < 2:
        return dirty
    
    def main():
    '''
    In this demonstration we're generating a sample data set from the sin function in numpy.
    We then train a decision tree on the data set and use the decision tree to predict the
    label of 10 different test values. Then the mean squared error over this test is displayed.
    '''
    X = np.arange(-1., 1., 0.005)
    y = np.sin(X)
    
    def compute_heterogeneity(data, k, centroids, cluster_assignment):
    
    heterogeneity = 0.0
    for i in range(k):
        
        # Select all data points that belong to cluster i. Fill in the blank (RHS only)
        member_data_points = data[cluster_assignment==i, :]
        
        if member_data_points.shape[0] > 0: # check if i-th cluster is non-empty
            # Compute distances from centroid to data points (RHS only)
            distances = pairwise_distances(member_data_points, [centroids[i]], metric='euclidean')
            squared_distances = distances**2
            heterogeneity += np.sum(squared_distances)
        
    return heterogeneity
    
    word_bysig = collections.defaultdict(list)
for word in word_list:
    word_bysig[signature(word)].append(word)
    
    SERVICE_BROWSE_URL_SCHEMA = vol.Schema({
    # pylint: disable=no-value-for-parameter
    vol.Required(ATTR_URL, default=ATTR_URL_DEFAULT): vol.Url(),
})
    
        def random_see(dev_id, name):
        '''Randomize a sighting.'''
        see(
            dev_id=dev_id,
            host_name=name,
            gps=(hass.config.latitude + offset(),
                 hass.config.longitude + offset()),
            gps_accuracy=random.randrange(50, 150),
            battery=random.randrange(10, 90)
        )
    
    
def get_scanner(hass, config):
    '''Validate the configuration and return a Linksys AP scanner.'''
    try:
        return LinksysSmartWifiDeviceScanner(config[DOMAIN])
    except ConnectionError:
        return None
    
    For more details about this platform, please refer to the documentation at
https://home-assistant.io/components/device_tracker.swisscom/
'''
import logging
    
    _LOGGER = logging.getLogger(__name__)