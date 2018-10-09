
        
            :param id: id of post to get
    :param check_author: require the current user to be the author
    :return: the post with author information
    :raise 404: if a post with the given id doesn't exist
    :raise 403: if the current user isn't the author
    '''
    post = get_db().execute(
        'SELECT p.id, title, body, created, author_id, username'
        ' FROM post p JOIN user u ON p.author_id = u.id'
        ' WHERE p.id = ?',
        (id,)
    ).fetchone()
    
        return g.db
    
    
def test_get_close_db(app):
    with app.app_context():
        db = get_db()
        assert db is get_db()
    
    import sys
    
            :param name: the optional name of the global, otherwise the
                     function name will be used.
        '''
        def decorator(f):
            self.add_app_template_global(f, name=name)
            return f
        return decorator
    
    
def send_from_directory(directory, filename, **options):
    '''Send a file from a given directory with :func:`send_file`.  This
    is a secure way to quickly expose static files from an upload folder
    or something similar.
    
        For clarity, the JSON serialization behavior has the following differences
    from :func:`dumps`:
    
            from .debughelpers import explain_template_loading_attempts
        explain_template_loading_attempts(self.app, template, attempts)
    
    from .cifar import load_batch
from ..utils.data_utils import get_file
from .. import backend as K
import numpy as np
import os
    
    
def get(identifier):
    if identifier is None:
        return None
    if isinstance(identifier, dict):
        return deserialize(identifier)
    elif isinstance(identifier, six.string_types):
        config = {'class_name': str(identifier), 'config': {}}
        return deserialize(config)
    elif callable(identifier):
        return identifier
    else:
        raise ValueError('Could not interpret regularizer identifier: ' +
                         str(identifier))

    
    if K.backend() != 'tensorflow':
    raise RuntimeError('This example can only run with the '
                       'TensorFlow backend, '
                       'because it requires TF-native augmentation APIs')
    
    decoder_inputs = model.input[1]   # input_2
decoder_state_input_h = Input(shape=(latent_dim,), name='input_3')
decoder_state_input_c = Input(shape=(latent_dim,), name='input_4')
decoder_states_inputs = [decoder_state_input_h, decoder_state_input_c]
decoder_lstm = model.layers[3]
decoder_outputs, state_h_dec, state_c_dec = decoder_lstm(
    decoder_inputs, initial_state=decoder_states_inputs)
decoder_states = [state_h_dec, state_c_dec]
decoder_dense = model.layers[4]
decoder_outputs = decoder_dense(decoder_outputs)
decoder_model = Model(
    [decoder_inputs] + decoder_states_inputs,
    [decoder_outputs] + decoder_states)
    
    Data comes from a random square matrix.
    
    
if __name__ == '__main__':
    parser = argparse.ArgumentParser(
        description='Isotonic Regression benchmark tool')
    parser.add_argument('--seed', type=int,
                        help='RNG seed')
    parser.add_argument('--iterations', type=int, required=True,
                        help='Number of iterations to average timings over '
                        'for each problem size')
    parser.add_argument('--log_min_problem_size', type=int, required=True,
                        help='Base 10 logarithm of the minimum problem size')
    parser.add_argument('--log_max_problem_size', type=int, required=True,
                        help='Base 10 logarithm of the maximum problem size')
    parser.add_argument('--show_plot', action='store_true',
                        help='Plot timing output with matplotlib')
    parser.add_argument('--dataset', choices=DATASET_GENERATORS.keys(),
                        required=True)
    
        n_samples = 2000
    list_n_features = np.linspace(500, 3000, 5).astype(np.int)
    lasso_results, lars_lasso_results = compute_bench(alpha, [n_samples],
                                           list_n_features, precompute=False)
    plt.subplot(212)
    plt.plot(list_n_features, lasso_results, 'b-', label='Lasso')
    plt.plot(list_n_features, lars_lasso_results, 'r-', label='LassoLars')
    plt.title('%d samples, alpha=%s' % (n_samples, alpha))
    plt.legend(loc='upper left')
    plt.xlabel('number of features')
    plt.ylabel('Time (s)')
    plt.axis('tight')
    plt.show()

    
    
def _plot(results, metrics, formats, title, x_ticks, x_label,
          format_markers=('x', '|', 'o', '+'),
          metric_colors=('c', 'm', 'y', 'k', 'g', 'r', 'b')):
    '''
    Plot the results by metric, format and some other variable given by
    x_label
    '''
    fig = plt.figure('scikit-learn multilabel metrics benchmarks')
    plt.title(title)
    ax = fig.add_subplot(111)
    for i, metric in enumerate(metrics):
        for j, format in enumerate(formats):
            ax.plot(x_ticks, results[i, j].flat,
                    label='{}, {}'.format(metric, format),
                    marker=format_markers[j],
                    color=metric_colors[i % len(metric_colors)])
    ax.set_xlabel(x_label)
    ax.set_ylabel('Time (s)')
    ax.legend()
    plt.show()
    
    
def plot_feature_times(all_times, batch_size, all_components, data):
    plt.figure()
    plot_results(all_components, all_times['pca'], label='PCA')
    plot_results(all_components, all_times['ipca'],
                 label='IncrementalPCA, bsize=%i' % batch_size)
    plt.legend(loc='upper left')
    plt.suptitle('Algorithm runtime vs. n_components\n \
                 LFW, size %i x %i' % data.shape)
    plt.xlabel('Number of components (out of max %i)' % data.shape[1])
    plt.ylabel('Time (seconds)')
    
        return results
    
    from sklearn.linear_model import lars_path, orthogonal_mp
from sklearn.datasets.samples_generator import make_sparse_coded_signal
    
    import matplotlib.pyplot as plt
    
        label = 'scikit-learn singular value decomposition benchmark results'
    fig = plt.figure(label)
    ax = fig.gca(projection='3d')
    for c, (label, timings) in zip('rbg', sorted(six.iteritems(results))):
        X, Y = np.meshgrid(samples_range, features_range)
        Z = np.asarray(timings).reshape(samples_range.shape[0],
                                        features_range.shape[0])
        # plot the actual surface
        ax.plot_surface(X, Y, Z, rstride=8, cstride=8, alpha=0.3,
                        color=c)
        # dummy point plot to stick the legend to since surface plot do not
        # support legends (yet?)
        ax.plot([1], [1], [1], color=c, label=label)
    
    n_samples = np.logspace(.5, 3, 9)
n_features = np.logspace(1, 3.5, 7)
N_samples, N_features = np.meshgrid(n_samples,
                                    n_features)
scikits_time = np.zeros(N_samples.shape)
scipy_time = np.zeros(N_samples.shape)
    
    
if not os.path.exists(DATA_FOLDER):
    
        def set_appid_not_exist(self, appid):
        self.logger.warn('APPID_manager, set_appid_not_exist %s', appid)
        with self.lock:
            if appid not in self.not_exist_appids:
                self.not_exist_appids.append(appid)
            try:
                self.config.GAE_APPIDS.remove(appid)
            except:
                pass
    
                    pCertCtx = crypt32.CertFindCertificateInStore(store_handle, X509_ASN_ENCODING, 0, CERT_FIND_SUBJECT_STR, common_name, None)
                while pCertCtx:
                    certCtx = CERT_CONTEXT.from_address(pCertCtx)
                    _certdata = ctypes.string_at(certCtx.pbCertEncoded, certCtx.cbCertEncoded)
                    if _certdata == certdata:
                        ca_exists = True
                        xlog.debug('XX-Net CA already exists')
                    else:
                        cert =  OpenSSL.crypto.load_certificate(OpenSSL.crypto.FILETYPE_ASN1, _certdata)
                        if hasattr(cert, 'get_subject'):
                             cert = cert.get_subject()
                        cert_name = next((v for k, v in cert.get_components() if k == 'CN'), '')
                        if cert_name == common_name:
                            ret = crypt32.CertDeleteCertificateFromStore(crypt32.CertDuplicateCertificateContext(pCertCtx))
                            if ret == 1:
                                xlog.debug('Invalid Windows CA %r has been removed', common_name)
                            elif ret == 0 and store == CERT_SYSTEM_STORE_LOCAL_MACHINE:
                                # to elevate
                                break
                    pCertCtx = crypt32.CertFindCertificateInStore(store_handle, X509_ASN_ENCODING, 0, CERT_FIND_SUBJECT_STR, common_name, pCertCtx)
    
            p = random.choice(self.plus)
    
    
    def getDescription(self):
        return 'n/a'
    
    # One entry per manual page. List of tuples
# (source start file, name, description, authors, manual section).
man_pages = [
    (master_doc, 'home-assistant', 'Home Assistant Documentation',
     [author], 1)
]
    
        def get_device_name(self, device):
        '''Return the name of the given device or None if we don't know.'''
        if not self.last_results:
            return None
        for client in self.last_results:
            if client.mac == device:
                return client.ip
        return None
    
        def __init__(self, config):
        '''Initialize the scanner.'''
        self.host = config[CONF_HOST]
        self.last_results = {}
    
    
class LuciDeviceScanner(DeviceScanner):
    '''This class queries a wireless router running OpenWrt firmware.'''
    
    PLATFORM_SCHEMA = PLATFORM_SCHEMA.extend({
    vol.Optional(CONF_HOST, default=DEFAULT_IP): cv.string
})
    
    import homeassistant.helpers.config_validation as cv
from homeassistant.components.device_tracker import (
    DOMAIN, PLATFORM_SCHEMA, DeviceScanner)
from homeassistant.const import CONF_HOST, CONF_PASSWORD, CONF_USERNAME
    
        # Return boolean to indicate that initialization was successfully.
    return True
    
        return True