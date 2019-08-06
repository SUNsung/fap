
        
            @staticmethod
    def _set_user_agent(clc):
        if hasattr(clc, 'SetRequestsSession'):
            agent_string = 'ClcAnsibleModule/' + __version__
            ses = requests.Session()
            ses.headers.update({'Api-Client': agent_string})
            ses.headers['User-Agent'] += ' ' + agent_string
            clc.SetRequestsSession(ses)
    
    #
# Copyright (c) 2015 CenturyLink
# GNU General Public License v3.0+ (see COPYING or https://www.gnu.org/licenses/gpl-3.0.txt)
    
        def _loadbalancerpool_exists(self, alias, location, port, lb_id):
        '''
        Checks to see if a pool exists on the specified port on the provided load balancer
        :param alias: the account alias
        :param location: the datacenter the load balancer resides in
        :param port: the port to check and see if it exists
        :param lb_id: the id string of the provided load balancer
        :return: result: The id string of the pool or False
        '''
        result = False
        try:
            pool_list = self.clc.v2.API.Call(
                'GET', '/v2/sharedLoadBalancers/%s/%s/%s/pools' %
                (alias, location, lb_id))
        except APIFailedResponse as e:
            return self.module.fail_json(
                msg='Unable to fetch the load balancer pools for for load balancer id: {0}. {1}'.format(
                    lb_id, str(e.response_text)))
        for pool in pool_list:
            if int(pool.get('port')) == int(port):
                result = pool.get('id')
        return result
    
        @staticmethod
    def _alert_policy_exists(server, alert_policy_id):
        '''
        Checks if the alert policy exists for the server
        :param server: the clc server object
        :param alert_policy_id: the alert policy
        :return: True: if the given alert policy id associated to the server, False otherwise
        '''
        result = False
        alert_policies = server.alertPolicies
        if alert_policies:
            for alert_policy in alert_policies:
                if alert_policy.get('id') == alert_policy_id:
                    result = True
        return result
    
        def __init__(self, module):
        '''
        Construct module
        '''
        self.module = module
        if not CLC_FOUND:
            self.module.fail_json(msg=missing_required_lib('clc-sdk'), exception=CLC_IMP_ERR)
        if not REQUESTS_FOUND:
            self.module.fail_json(msg=missing_required_lib('requests'), exception=REQUESTS_IMP_ERR)
        if requests.__version__ and LooseVersion(requests.__version__) < LooseVersion('2.5.0'):
            self.module.fail_json(
                msg='requests library  version should be >= 2.5.0')
    
    
@api_wrapper
def create_pool(module, system):
    '''Create Pool'''
    name = module.params['name']
    size = module.params['size']
    vsize = module.params['vsize']
    ssd_cache = module.params['ssd_cache']
    
        except TaigaException as exc:
        msg = 'An exception happened: %s' % to_native(exc)
        return (False, changed, msg, {})
    
    - name: Set a record and ensure that this is the only one
  netcup_dns:
    api_key: '...'
    api_password: '...'
    customer_id: '...'
    name: 'demo'
    domain: 'example.com'
    type: 'AAAA'
    value: '::1'
    solo: true
'''
    
        if not layman.is_installed(name):
        return False
    
    - name: Disable HTTP and increase session timeout to max value 10800 secs
  imc_rest:
    hostname: '{{ imc_host }}'
    username: '{{ imc_username }}'
    password: '{{ imc_password }}'
    validate_certs: no
    timeout: 120
    content: |
        <configConfMo><inConfig>
          <commHttp dn='sys/svc-ext/http-svc' adminState='disabled'/>
        </inConfig></configConfMo>
    
        # --- run command ---
    try:
        ipmi_cmd = command.Command(
            bmc=name, userid=user, password=password, port=port
        )
        module.debug('ipmi instantiated - name: '%s'' % name)
    
        if not repository:
        module.fail_json(msg='Repository %s/%s doesn't exist' % (user, repo))
    
            return ret == 1
    
        if sys.platform == 'win32':
        win32_lib = os.path.abspath( os.path.join(python_path, 'lib', 'win32'))
        sys.path.append(win32_lib)
    elif sys.platform.startswith('linux'):
        linux_lib = os.path.abspath( os.path.join(python_path, 'lib', 'linux'))
        sys.path.append(linux_lib)
    elif sys.platform == 'darwin':
        darwin_lib = os.path.abspath( os.path.join(python_path, 'lib', 'darwin'))
        sys.path.append(darwin_lib)
        extra_lib = '/System/Library/Frameworks/Python.framework/Versions/2.7/Extras/lib/python'
        sys.path.append(extra_lib)
    
            if network_ok:
            self.last_check_time = time.time()
            self.report_ok()
            xlog.debug('network %s is ok, cost:%d ms', self.type, 1000 * (time.time() - time_now))
        else:
            xlog.warn('network %s fail', self.type)
            self.network_stat = 'Fail'
            self.last_check_time = time.time()
    
    EOF = -1
    
            elif isinstance(e, MismatchedTokenException):
            tokenName = '<unknown>'
            if e.expecting == EOF:
                tokenName = 'EOF'
            else:
                tokenName = self.tokenNames[e.expecting]
    
            Using setter/getter methods is deprecated. Use o.channel instead.'''
    
    setup_encode_face = '''
import face_recognition
    
    # The model was trained in a way that faces with a distance of 0.6 or less should be a match. But if you want to
# be more strict, you can look for a smaller face distance. For example, using a 0.55 cutoff would reduce false
# positive matches at the risk of more false negatives.
    
        # You can access the actual face itself like this:
    face_image = image[top:bottom, left:right]
    pil_image = Image.fromarray(face_image)
    pil_image.show()

    
    
def print_result(filename, location):
    top, right, bottom, left = location
    print('{},{},{},{},{}'.format(filename, top, right, bottom, left))
    
            batched_detected_faces = api.batch_face_locations(images, number_of_times_to_upsample=0)
    
            # Find all the faces and face encodings in the frame of video, cost most time
        face_locations = face_recognition.face_locations(rgb_frame)
        face_encodings = face_recognition.face_encodings(rgb_frame, face_locations)
    
        # Apply some eyeliner
    d.line(face_landmarks['left_eye'] + [face_landmarks['left_eye'][0]], fill=(0, 0, 0, 110), width=6)
    d.line(face_landmarks['right_eye'] + [face_landmarks['right_eye'][0]], fill=(0, 0, 0, 110), width=6)
    
    '''
Structure:
        <test_image>.jpg
        <train_dir>/
            <person_1>/
                <person_1_face-1>.jpg
                <person_1_face-2>.jpg
                .
                .
                <person_1_face-n>.jpg
           <person_2>/
                <person_2_face-1>.jpg
                <person_2_face-2>.jpg
                .
                .
                <person_2_face-n>.jpg
            .
            .
            <person_n>/
                <person_n_face-1>.jpg
                <person_n_face-2>.jpg
                .
                .
                <person_n_face-n>.jpg
'''
    
    from django.core.urlresolvers import reverse
from django.db import IntegrityError
from django.http import Http404
from django.utils import timezone
from django.views.decorators.cache import never_cache
    
            # Adding unique constraint on 'TagKey', fields ['project_id', 'environment_id', 'key']
        db.create_unique(u'tagstore_tagkey', ['project_id', 'environment_id', 'key'])
    
            # Adding unique constraint on 'TagKey', fields ['project_id', 'environment_id', 'key']
        db.create_unique(u'tagstore_tagkey', ['project_id', 'environment_id', 'key'])
    
            # Adding unique constraint on 'GroupTagValue', fields ['project_id',
        # 'group_id', 'environment_id', '_key', '_value']
        db.create_unique(
            u'tagstore_grouptagvalue', [
                'project_id', 'group_id', 'environment_id', 'key_id', 'value_id'])
    
        if not resolution_list:
        return
    
    '''
https://www.djangospin.com/design-patterns-python/mediator/
    
        >>> data1.data = 3
    DecimalViewer: Subject Data 1 has data 3
    HexViewer: Subject Data 1 has data 0x3
    
    from __future__ import print_function
    
    '''
*What is this pattern about?
The Borg pattern (also known as the Monostate pattern) is a way to
implement singleton behavior, but instead of having only one instance
of a class, there are multiple instances that share the same state. In
other words, the focus is on sharing state instead of sharing instance
identity.
    
    *TL;DR
Decouples an abstraction from its implementation.
'''
    
        STOP_WORDS = set((
        'the', 'of', 'is', 'and', 'to', 'in', 'that', 'we', 'for', 'an', 'are',
        'by', 'be', 'as', 'on', 'with', 'can', 'if', 'from', 'which', 'you', 'it',
        'this', 'then', 'at', 'have', 'all', 'not', 'one', 'has', 'or', 'that'
    ))
    
    def cut(sentence):
    sentence = strdecode(sentence)
    blocks = re_han.split(sentence)
    for blk in blocks:
        if re_han.match(blk):
            for word in __cut(blk):
                if word not in Force_Split_Words:
                    yield word
                else:
                    for c in word:
                        yield c
        else:
            tmp = re_skip.split(blk)
            for x in tmp:
                if x:
                    yield x

    
    # default Tokenizer instance
    
    parser = OptionParser(USAGE)
parser.add_option('-k', dest='topK')
opt, args = parser.parse_args()
    
    content = open(file_name, 'rb').read()
    
    for topic_idx, topic in enumerate(nmf.components_):
    print('Topic #%d:' % topic_idx)
    print(' '.join([feature_names[i]
                    for i in topic.argsort()[:-n_top_words - 1:-1]]))
    print('')
