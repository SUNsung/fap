
        
            # ensure the instance folder exists
    try:
        os.makedirs(app.instance_path)
    except OSError:
        pass
    
    
def init_db():
    '''Clear existing data and create new tables.'''
    db = get_db()
    
            if not (force or self.is_json):
            return None
    
        required = [volume_id, snapshot_id, instance_id]
    if required.count(None) != len(required) - 1:  # only 1 must be set
        module.fail_json(msg='One and only one of volume_id or instance_id or snapshot_id must be specified')
    if instance_id and not device_name or device_name and not instance_id:
        module.fail_json(msg='Instance ID and device name must both be specified')
    
        creds, params = get_google_cloud_credentials(module)
    pubsub_client = pubsub.Client(project=params['project_id'], credentials=creds, use_gax=False)
    pubsub_client.user_agent = 'ansible-pubsub-0.1'
    
    ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['preview'],
                    'supported_by': 'community'}
    
    EXAMPLES = '''
- heroku_collaborator:
    api_key: YOUR_API_KEY
    user: max.mustermann@example.com
    apps: heroku-example-app
    state: present
    
    '''
    
        def dnszone_find(self, zone_name):
        return self._post_json(
            method='dnszone_find',
            name=zone_name,
            item={'idnsname': zone_name}
        )
    
    
ANSIBLE_METADATA = {
    'metadata_version': '1.1',
    'status': ['preview'],
    'supported_by': 'community'
}
    
    
def _get_git_revision():
    try:
        revision = subprocess.check_output(REVISION_CMD.split()).strip()
    except (subprocess.CalledProcessError, OSError):
        print('Failed to execute git to get revision')
        return None
    return revision.decode('utf-8')
    
    
def setup(app):
    # Format template for issues URI
    # e.g. 'https://github.com/sloria/marshmallow/issues/{issue}
    app.add_config_value('issues_uri', default=None, rebuild='html')
    # Shortcut for GitHub, e.g. 'sloria/marshmallow'
    app.add_config_value('issues_github_path', default=None, rebuild='html')
    # Format template for user profile URI
    # e.g. 'https://github.com/{user}'
    app.add_config_value('issues_user_uri', default=None, rebuild='html')
    app.add_role('issue', issue_role)
    app.add_role('user', user_role)

    
        output_file.close()

    
    We add observation noise to these waveforms. We generate very sparse
noise: only 6% of the time points contain noise. As a result, the
l1 norm of this noise (ie 'cityblock' distance) is much smaller than it's
l2 norm ('euclidean' distance). This can be seen on the inter-class
distance matrices: the values on the diagonal, that characterize the
spread of the class, are much bigger for the Euclidean distance than for
the cityblock distance.
    
    import numpy as np
import matplotlib.pyplot as plt
# Though the following import is not directly being used, it is required
# for 3D projection to work
from mpl_toolkits.mplot3d import Axes3D
    
    plt.subplot(222)
plt.scatter(X_aniso[:, 0], X_aniso[:, 1], c=y_pred)
plt.title('Anisotropicly Distributed Blobs')
    
        def test_post(self):
        body = 'foo=bar'
        # Without an explicit Content-Length redbot will try to send the
        # request chunked.
        self.check_url(
            '/post', method='POST', body=body,
            headers=[('Content-Length', str(len(body))),
                     ('Content-Type', 'application/x-www-form-urlencoded')],
            expected_status=303)
    
        def transform(self, node, results):
        self.found_future_import = True
        return self.new_future_import(node)
    
    
def main():
    parse_command_line()
    
                curl.setopt(pycurl.READFUNCTION, request_buffer.read)
            curl.setopt(pycurl.IOCTLFUNCTION, ioctl)
            if request.method == 'POST':
                curl.setopt(pycurl.POSTFIELDSIZE, len(request.body or ''))
            else:
                curl.setopt(pycurl.UPLOAD, True)
                curl.setopt(pycurl.INFILESIZE, len(request.body or ''))
    
        class CustomRouter(Router):
        def find_handler(self, request, **kwargs):
            # some routing logic providing a suitable HTTPMessageDelegate instance
            return MessageDelegate(request.connection)
    
    
def main():
    test = TestSelectionSort()
    selection_sort = SelectionSort()
    test.test_selection_sort(selection_sort.sort)
    try:
        test.test_selection_sort(selection_sort.sort_recursive)
        test.test_selection_sort(selection_sort.sor_iterative_alt)
    except NameError:
        # Alternate solutions are only defined
        # in the solutions file
        pass
    
    
if __name__ == '__main__':
    main()
    
    		print('Test: insert checking with in order traversal')
		expectVal = [7, 10, 25, 30, 38, 40, 50, 60, 70, 80]
		assert_equal(myTree.printInOrder(), expectVal)
		expectVal = [1, 11, 21, 31, 41, 51, 61, 71, 81, 91]
		assert_equal(myTree2.printInOrder(), expectVal)
    
        def insert(self, node):
        self.array.append(node)
        return self.array[-1]
    
    Latin1_CharToClass = (
    OTH, OTH, OTH, OTH, OTH, OTH, OTH, OTH,   # 00 - 07
    OTH, OTH, OTH, OTH, OTH, OTH, OTH, OTH,   # 08 - 0F
    OTH, OTH, OTH, OTH, OTH, OTH, OTH, OTH,   # 10 - 17
    OTH, OTH, OTH, OTH, OTH, OTH, OTH, OTH,   # 18 - 1F
    OTH, OTH, OTH, OTH, OTH, OTH, OTH, OTH,   # 20 - 27
    OTH, OTH, OTH, OTH, OTH, OTH, OTH, OTH,   # 28 - 2F
    OTH, OTH, OTH, OTH, OTH, OTH, OTH, OTH,   # 30 - 37
    OTH, OTH, OTH, OTH, OTH, OTH, OTH, OTH,   # 38 - 3F
    OTH, ASC, ASC, ASC, ASC, ASC, ASC, ASC,   # 40 - 47
    ASC, ASC, ASC, ASC, ASC, ASC, ASC, ASC,   # 48 - 4F
    ASC, ASC, ASC, ASC, ASC, ASC, ASC, ASC,   # 50 - 57
    ASC, ASC, ASC, OTH, OTH, OTH, OTH, OTH,   # 58 - 5F
    OTH, ASS, ASS, ASS, ASS, ASS, ASS, ASS,   # 60 - 67
    ASS, ASS, ASS, ASS, ASS, ASS, ASS, ASS,   # 68 - 6F
    ASS, ASS, ASS, ASS, ASS, ASS, ASS, ASS,   # 70 - 77
    ASS, ASS, ASS, OTH, OTH, OTH, OTH, OTH,   # 78 - 7F
    OTH, UDF, OTH, ASO, OTH, OTH, OTH, OTH,   # 80 - 87
    OTH, OTH, ACO, OTH, ACO, UDF, ACO, UDF,   # 88 - 8F
    UDF, OTH, OTH, OTH, OTH, OTH, OTH, OTH,   # 90 - 97
    OTH, OTH, ASO, OTH, ASO, UDF, ASO, ACO,   # 98 - 9F
    OTH, OTH, OTH, OTH, OTH, OTH, OTH, OTH,   # A0 - A7
    OTH, OTH, OTH, OTH, OTH, OTH, OTH, OTH,   # A8 - AF
    OTH, OTH, OTH, OTH, OTH, OTH, OTH, OTH,   # B0 - B7
    OTH, OTH, OTH, OTH, OTH, OTH, OTH, OTH,   # B8 - BF
    ACV, ACV, ACV, ACV, ACV, ACV, ACO, ACO,   # C0 - C7
    ACV, ACV, ACV, ACV, ACV, ACV, ACV, ACV,   # C8 - CF
    ACO, ACO, ACV, ACV, ACV, ACV, ACV, OTH,   # D0 - D7
    ACV, ACV, ACV, ACV, ACV, ACO, ACO, ACO,   # D8 - DF
    ASV, ASV, ASV, ASV, ASV, ASV, ASO, ASO,   # E0 - E7
    ASV, ASV, ASV, ASV, ASV, ASV, ASV, ASV,   # E8 - EF
    ASO, ASO, ASV, ASV, ASV, ASV, ASV, OTH,   # F0 - F7
    ASV, ASV, ASV, ASV, ASV, ASO, ASO, ASO,   # F8 - FF
)
    
        def get_confidence(self):
        if self.state == ProbingState.NOT_ME:
            return 0.01
    
        def __init__(self, lang_filter=None):
        super(MultiByteCharSetProber, self).__init__(lang_filter=lang_filter)
        self.distribution_analyzer = None
        self.coding_sm = None
        self._last_char = [0, 0]
    
    EUCKR_SM_MODEL = {'class_table': EUCKR_CLS,
                'class_factor': 4,
                'state_table': EUCKR_ST,
                'char_len_table': EUCKR_CHAR_LEN_TABLE,
                'name': 'EUC-KR'}
    
        def get_confidence(self):
        r = 0.01
        if self._total_seqs > 0:
            r = ((1.0 * self._seq_counters[SequenceLikelihood.POSITIVE]) /
                 self._total_seqs / self._model['typical_positive_ratio'])
            r = r * self._freq_char / self._total_char
            if r >= 1.0:
                r = 0.99
        return r
