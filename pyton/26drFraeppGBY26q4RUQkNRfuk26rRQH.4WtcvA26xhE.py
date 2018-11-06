
        
        if is_py2:
    from urllib import (
        quote, unquote, quote_plus, unquote_plus, urlencode, getproxies,
        proxy_bypass, proxy_bypass_environment, getproxies_environment)
    from urlparse import urlparse, urlunparse, urljoin, urlsplit, urldefrag
    from urllib2 import parse_http_list
    import cookielib
    from Cookie import Morsel
    from StringIO import StringIO
    from collections import Callable, Mapping, MutableMapping, OrderedDict
    
    import idna
import urllib3
import chardet
    
    RETURN = '''
cloud_front_origin_access_identity:
  description: The origin access identity's information.
  returned: always
  type: complex
  contains:
    cloud_front_origin_access_identity_config:
      description: describes a url specifying the origin access identity.
      returned: always
      type: complex
      contains:
        caller_reference:
          description: a caller reference for the oai
          returned: always
          type: string
        comment:
          description: a comment describing the oai
          returned: always
          type: string
    id:
      description: a unique identifier of the oai
      returned: always
      type: string
    s3_canonical_user_id:
      description: the cannonical user id of the user who created the oai
      returned: always
      type: string
e_tag:
  description: The current version of the origin access identity created.
  returned: always
  type: string
location:
  description: The fully qualified URI of the new origin access identity just created.
  returned: when initially created
  type: string
    
        return matched_asgs
    
    EXAMPLES = '''
# Note: These examples do not set authentication details, see the AWS Guide for details.
    
        connection = boto3_conn(module,
                            resource='ec2', conn_type='client',
                            region=region, endpoint=ec2_url, **aws_connect_params)
    
        name = module.params.get('name')
    state = module.params.get('state')
    replication_id = module.params.get('replication_id')
    cluster_id = module.params.get('cluster_id')
    target = module.params.get('target')
    bucket = module.params.get('bucket')
    
        orig_cert_names = [ctb['server_certificate_name'] for ctb in
                       iam.get_all_server_certs().list_server_certificates_result.server_certificate_metadata_list]
    orig_cert_bodies = [iam.get_server_certificate(thing).get_server_certificate_result.certificate_body
                        for thing in orig_cert_names]
    if new_name == name:
        new_name = None
    if new_path == path:
        new_path = None
    
    
DOCUMENTATION = '''
---
module: iam_server_certificate_facts
short_description: Retrieve the facts of a server certificate
description:
  - Retrieve the attributes of a server certificate
version_added: '2.2'
author: 'Allen Sanabria (@linuxdynasty)'
requirements: [boto3, botocore]
options:
  name:
    description:
      - The name of the server certificate you are retrieving attributes for.
    required: true
extends_documentation_fragment:
    - aws
    - ec2
'''
    
        :param module: Ansible module reference
    :param aws: AWS client connection
    :return dict:
    '''
    client = aws.client('lambda')
    results = dict()
    changed = False
    current_state = 'absent'
    state = module.params['state']
    
        lambda_facts = dict()
    
    test_encode_face = '''
encoding = face_recognition.face_encodings(image, known_face_locations=face_locations)[0]
'''
    
    # Load an image with an unknown face
unknown_image = face_recognition.load_image_file('two_people.jpg')
    
    
if __name__ == '__main__':
    main()
    
    
class TestManager:
    def __init__(self):
        self._reporter = None
        self._db = None
        self._tc = None
    
    
class BaseRegisteredClass(object):
    __metaclass__ = RegistryHolder
    '''
        Any class that will inherits from BaseRegisteredClass will be included
        inside the dict RegistryHolder.REGISTRY, the key being the name of the
        class and the associated value, the class itself.
    '''
    pass
    
        def __init__(self):
        '''We have an AM state and an FM state'''
        self.amstate = AmState(self)
        self.fmstate = FmState(self)
        self.state = self.amstate
    
    ### OUTPUT ###
# spam
# ----------
# eggs
# ----------
# apple
# ----------
# apple
# ----------
# eggs
# ----------
# spam
# ----------
# maps
# ----------
# sgge
# ----------
# elppa
# ----------
# elppa
# ----------
# sgge
# ----------
# maps
# ----------
# ['s', 'p', 'a', 'm']
# ----------
# ['e', 'g', 'g', 's']
# ----------
# ['a', 'p', 'p', 'l', 'e']
# ----------
# ['a', 'p', 'p', 'l', 'e']
# ----------
# ['e', 'g', 'g', 's']
# ----------
# ['s', 'p', 'a', 'm']
# ----------
# ['m', 'a', 'p', 's']
# ----------
# ['s', 'g', 'g', 'e']
# ----------
# ['e', 'l', 'p', 'p', 'a']
# ----------
# ['e', 'l', 'p', 'p', 'a']
# ----------
# ['s', 'g', 'g', 'e']
# ----------
# ['m', 'a', 'p', 's']
# ----------

    
        def __str__(self):
        return 'Cat'
    
        def contribute(self):
        self.blackboard.common_state['problems'] += random.randint(1, 2)
        self.blackboard.common_state['suggestions'] += random.randint(10, 20)
        self.blackboard.common_state['contributions'] += [self.__class__.__name__]
        self.blackboard.common_state['progress'] += random.randint(10, 100)
    
    
class Suspect(OutOfService):
    def __init__(self, HierachicalStateMachine):
        self._hsm = HierachicalStateMachine