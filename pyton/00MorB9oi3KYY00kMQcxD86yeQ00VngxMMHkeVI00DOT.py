
        
                cid = CaseInsensitiveDict()
        cid['Accept'] = 'application/json'
        cid['aCCEPT'] == 'application/json'  # True
        list(cid) == ['Accept']  # True
    
        builtin_str = str
    str = str
    bytes = bytes
    basestring = (str, bytes)
    numeric_types = (int, float)
    integer_types = (int,)

    
        :param url: URL for the new :class:`Request` object.
    :param \*\*kwargs: Optional arguments that ``request`` takes.
    :return: :class:`Response <Response>` object
    :rtype: requests.Response
    '''
    
        def fetch_aws_state(self):
        '''Retrieves rule and target state from AWS'''
        aws_state = {
            'rule': {},
            'targets': [],
            'changed': self.rule.changed
        }
        rule_description = self.rule.describe()
        if not rule_description:
            return aws_state
    
        '''Get an elasticache connection'''
    try:
        conn = connect_to_region(region_name=region, **aws_connect_kwargs)
    except boto.exception.NoAuthHandlerFound as e:
        module.fail_json(msg=e.message)
    
            for server_cert in server_certs:
            if not name:
                server_cert = iam.get_server_certificate(ServerCertificateName=server_cert['ServerCertificateName'])['ServerCertificate']
            cert_md = server_cert['ServerCertificateMetadata']
            results[cert_md['ServerCertificateName']] = {
                'certificate_body': server_cert['CertificateBody'],
                'server_certificate_id': cert_md['ServerCertificateId'],
                'server_certificate_name': cert_md['ServerCertificateName'],
                'arn': cert_md['Arn'],
                'path': cert_md['Path'],
                'expiration': cert_md['Expiration'].isoformat(),
                'upload_date': cert_md['UploadDate'].isoformat(),
            }
    
        function_name = module.params.get('function_name')
    if function_name:
        try:
            lambda_facts.update(client.get_function_configuration(FunctionName=function_name))
        except ClientError as e:
            if e.response['Error']['Code'] == 'ResourceNotFoundException':
                lambda_facts.update(function={})
            else:
                module.fail_json_aws(e, msg='Trying to get {0} configuration'.format(function_name))
    else:
        params = dict()
        if module.params.get('max_items'):
            params['MaxItems'] = module.params.get('max_items')
    
        if not module.check_mode and (additions > 0 or deletions > 0):
        task = gateway.save_services_configuration()
        vca.block_until_completed(task)
    
    
class DNSZoneIPAClient(IPAClient):
    def __init__(self, module, host, port, protocol):
        super(DNSZoneIPAClient, self).__init__(module, host, port, protocol)
    
        url = module.params.get('url')
    
    RETURN = '''
#
'''
    
        # Handle multiple log files
    logs = p['path'].split(',')
    logs = filter(None, logs)
    
    
def get_ip():
    try:
        device_ip = gethostbyname(module.params.get('device'))
    except gaierror:
        module.fail_json(msg='failed to resolve device ip address for '%s'' % module.params.get('device'))
    
            # Create flat baselines to compare the variation over batch size
        all_times['pca'].extend([results_dict['pca']['time']] *
                                len(batch_sizes))
        all_errors['pca'].extend([results_dict['pca']['error']] *
                                 len(batch_sizes))
        all_times['rpca'].extend([results_dict['rpca']['time']] *
                                 len(batch_sizes))
        all_errors['rpca'].extend([results_dict['rpca']['error']] *
                                  len(batch_sizes))
        for batch_size in batch_sizes:
            ipca = IncrementalPCA(n_components=n_components,
                                  batch_size=batch_size)
            results_dict = {k: benchmark(est, data) for k, est in [('ipca',
                                                                   ipca)]}
            all_times['ipca'].append(results_dict['ipca']['time'])
            all_errors['ipca'].append(results_dict['ipca']['error'])
    
            plt.subplot(m, 2, i + 1)
        plt.plot(list_n_samples, np.sqrt(elnet_results[:, j, 1]),
                 label='ElasticNet')
        plt.plot(list_n_samples, np.sqrt(sgd_results[:, j, 1]),
                 label='SGDRegressor')
        plt.plot(list_n_samples, np.sqrt(asgd_results[:, j, 1]),
                 label='A-SGDRegressor')
        plt.plot(list_n_samples, np.sqrt(ridge_results[:, j, 1]),
                 label='Ridge')
        plt.legend(prop={'size': 10})
        plt.xlabel('n_train')
        plt.ylabel('Time [sec]')
        plt.title('Training time - %d features' % list_n_features[j])
        i += 1
    
    
def score(y_test, y_pred, case):
    r2 = r2_score(y_test, y_pred)
    print('r^2 on test data (%s) : %f' % (case, r2))
    
    THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
'''
    
    from sklearn.datasets import make_checkerboard
from sklearn.datasets import samples_generator as sg
from sklearn.cluster.bicluster import SpectralBiclustering
from sklearn.metrics import consensus_score
    
        ax.w_xaxis.set_ticklabels([])
    ax.w_yaxis.set_ticklabels([])
    ax.w_zaxis.set_ticklabels([])
    ax.set_xlabel('Petal width')
    ax.set_ylabel('Sepal length')
    ax.set_zlabel('Petal length')
    ax.set_title(titles[fignum - 1])
    ax.dist = 12
    fignum = fignum + 1
    
    This example is meant to illustrate situations where k-means will produce
unintuitive and possibly unexpected clusters. In the first three plots, the
input data does not conform to some implicit assumption that k-means makes and
undesirable clusters are produced as a result. In the last plot, k-means
returns intuitive clusters despite unevenly sized blobs.
'''
print(__doc__)
    
    default_base = {'n_neighbors': 10,
                'n_clusters': 3}
    
    # If false, no module index is generated.
#latex_domain_indices = True
    
        def test_rollback_checkpoints(self):
        mock_load = mock.Mock()
        self.config.aug.load = mock_load
    
        def test_get_sni_addr(self):
        from certbot_apache.obj import Addr
        self.assertEqual(
            self.addr.get_sni_addr('443'), Addr.fromstring('*:443'))
        self.assertEqual(
            self.addr.get_sni_addr('225'), Addr.fromstring('*:225'))
        self.assertEqual(
            self.addr1.get_sni_addr('443'), Addr.fromstring('127.0.0.1'))
    
    # For 'manual' documents, if this is true, then toplevel headings are parts,
# not chapters.
#latex_use_parts = False
    
    # If not '', a 'Last updated on:' timestamp is inserted at every page
# bottom, using the given strftime format.
#html_last_updated_fmt = '%b %d, %Y'
    
    # Initialize some variables
face_locations = []
    
    # Find all facial features in all the faces in the image
face_landmarks_list = face_recognition.face_landmarks(image)
    
    # Note: This isn't exactly the same as a 'percent match'. The scale isn't linear. But you can assume that images with a
# smaller distance are more similar to each other than ones with a larger distance.
    
    # This is a demo of running face recognition on a video file and saving the results to a new video file.
#
# PLEASE NOTE: This example requires OpenCV (the `cv2` library) to be installed only to read from your webcam.
# OpenCV is *not* required to use the face_recognition library. It's only required if you want to run this
# specific demo. If you have trouble installing it, try any of the other demos that don't require it instead.
    
        # Loop through each face in this frame of video
    for (top, right, bottom, left), face_encoding in zip(face_locations, face_encodings):
        # See if the face is a match for the known face(s)
        matches = face_recognition.compare_faces(known_face_encodings, face_encoding)
    
    # To run this, you need a Raspberry Pi 2 (or greater) with face_recognition and
# the picamera[array] module installed.
# You can follow this installation instructions to get your RPi set up:
# https://gist.github.com/ageitgey/1ac8dbe8572f3f533df6269dab35df65
    
    # Find all the faces and face encodings in the unknown image
face_locations = face_recognition.face_locations(unknown_image)
face_encodings = face_recognition.face_encodings(unknown_image, face_locations)