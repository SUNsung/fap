
        
        from utils import write_datasets
from synthetic_data_utils import add_alignment_projections, generate_data
from synthetic_data_utils import generate_rnn, get_train_n_valid_inds
from synthetic_data_utils import nparray_and_transpose
from synthetic_data_utils import spikify_data, gaussify_data, split_list_by_inds
import matplotlib
import matplotlib.pyplot as plt
import scipy.signal
    
      wname = (name + '/W') if name else '/W'
    
      for sequence in sequences:
    indices = []
    for embedding in sequence:
      indices.append(np.argmax(embedding))
    batch_of_indices.append(indices)
  return batch_of_indices
    
    
def hash_function(input_tuple):
  '''Hash function for a tuple.'''
  return hash(input_tuple)
    
        def copy(self):
        '''Creates a copy of this request context with the same request object.
        This can be used to move a request context to a different greenlet.
        Because the actual request object is the same this cannot be used to
        move a request context to a different thread unless access to the
        request object is locked.
    
    
def explain_ignored_app_run():
    if os.environ.get('WERKZEUG_RUN_MAIN') != 'true':
        warn(Warning('Silently ignoring app.run() because the '
                     'application is run from the flask command line '
                     'executable.  Consider putting app.run() behind an '
                     'if __name__ == '__main__' guard to silence this '
                     'warning.'), stacklevel=3)

    
            if head[::2] == b'\x00\x00':
            return 'utf-16-be'
    
                resp = app.response_class()
            if not session_interface.is_null_session(sess):
                session_interface.save_session(app, sess, resp)
            headers = resp.get_wsgi_headers(c.request.environ)
            self.cookie_jar.extract_wsgi(c.request.environ, headers)
    
    KEY_PREFIX = 'django.contrib.sessions.cached_db'
    
    from sklearn.cluster.k_means_ import KMeans, MiniBatchKMeans
    
            ax.set_xlabel('n_samples')
        ax.set_ylabel('n_features')
        ax.set_zlabel('Time (s)')
        ax.set_zlim3d(0.0, max_time * 1.1)
        ax.set_title(label)
        # ax.legend()
        i += 1
    plt.show()

    
        # Plot results
    i = 0
    m = len(list_n_features)
    plt.figure('scikit-learn SGD regression benchmark results',
               figsize=(5 * 2, 4 * m))
    for j in range(m):
        plt.subplot(m, 2, i + 1)
        plt.plot(list_n_samples, np.sqrt(elnet_results[:, j, 0]),
                 label='ElasticNet')
        plt.plot(list_n_samples, np.sqrt(sgd_results[:, j, 0]),
                 label='SGDRegressor')
        plt.plot(list_n_samples, np.sqrt(asgd_results[:, j, 0]),
                 label='A-SGDRegressor')
        plt.plot(list_n_samples, np.sqrt(ridge_results[:, j, 0]),
                 label='Ridge')
        plt.legend(prop={'size': 10})
        plt.xlabel('n_train')
        plt.ylabel('RMSE')
        plt.title('Test error - %d features' % list_n_features[j])
        i += 1
    
    mu_second = 0.0 + 10 ** 6  # number of microseconds in a second
    
        def start_requests(self):
        url = self.benchurl
        if self.latency is not None:
            url += '?latency={0}'.format(self.latency)
    
    def _get_commands_from_entry_points(inproject, group='scrapy.commands'):
    cmds = {}
    for entry_point in pkg_resources.iter_entry_points(group):
        obj = entry_point.load()
        if inspect.isclass(obj):
            cmds[entry_point.name] = obj()
        else:
            raise Exception('Invalid entry point %s' % entry_point.name)
    return cmds
    
        def prepare_request(self, spider, request, opts):
        def callback(response):
            # memorize first request
            if not self.first_response:
                self.first_response = response
    
    site_info = 'AcFun.tv'
download = acfun_download
download_playlist = playlist_not_supported('acfun')

    
    site_info = 'CBS.com'
download = cbs_download
download_playlist = playlist_not_supported('cbs')

    
        for quality in ['1080','720','480','380','240','144','auto']:
        try:
            real_url = info[quality][1]['url']
            if real_url:
                break
        except KeyError:
            pass
    
    
site_info = 'fantasy.tv'
download = fantasy_download
download_playlist = playlist_not_supported('fantasy.tv')

    
                if item.get(CONF_TEXT) is not None:
                if isinstance(item.get(CONF_TEXT), template.Template):
                    output[ATTR_MAIN_TEXT] = item[CONF_TEXT].async_render()
                else:
                    output[ATTR_MAIN_TEXT] = item.get(CONF_TEXT)
    
            devices = {}
        for lease in leases_result:
            match = _LEASES_REGEX.search(lease.decode('utf-8'))
            if match is not None:
                devices[match.group('ip')] = {
                    'ip': match.group('ip'),
                    'mac': match.group('mac').upper(),
                    'timevalid': int(match.group('timevalid'))
                    }
        return devices

    
            # If there's a home_id, we need a different API URL
        if self.home_id is None:
            self.tadoapiurl = 'https://my.tado.com/api/v2/me'
        else:
            self.tadoapiurl = 'https://my.tado.com/api/v2' \
                              '/homes/{home_id}/mobileDevices'
    
        return scanner if scanner.success_init else None
    
        def see_vehicle(vehicle):
        '''Handle the reporting of the vehicle position.'''
        host_name = voc.vehicle_name(vehicle)
        dev_id = 'volvo_{}'.format(slugify(host_name))
        see(dev_id=dev_id,
            host_name=host_name,
            gps=(vehicle.position['latitude'],
                 vehicle.position['longitude']),
            icon='mdi:car')
    
        Adapted from Luci scanner.
    '''
    
        @Throttle(MIN_TIME_BETWEEN_STORE_UPDATES)
    def update_closest_store(self):
        '''Update the shared closest store (if open).'''
        from pizzapi.address import StoreException
        try:
            self.closest_store = self.address.closest_store()
            return True
        except StoreException:
            self.closest_store = None
            return False
    
    For more details about this component, please refer to the documentation at
https://home-assistant.io/components/emoncms_history/
'''
import logging
from datetime import timedelta
    
    
class Watcher():
    '''Class for starting Watchdog.'''