
        
        for shape in successive_shapes:
    print('Processing image shape', shape)
    img = resize_img(img, shape)
    img = gradient_ascent(img,
                          iterations=iterations,
                          step=step,
                          max_loss=max_loss)
    upscaled_shrunk_original_img = resize_img(shrunk_original_img, shape)
    same_size_original = resize_img(original_img, shape)
    lost_detail = same_size_original - upscaled_shrunk_original_img
    
    print('Loading data...')
(x_train, y_train), (x_test, y_test) = imdb.load_data(num_words=max_features)
print(len(x_train), 'train sequences')
print(len(x_test), 'test sequences')
    
        assert np.array_equal(before, after)
    
        def compute_output_shape(self, input_shape):
        return None, self.num_capsule, self.dim_capsule
    
        with pytest.raises(ValueError):
        conv_utils.normalize_tuple(None, 2, 'kernel_size')
    with pytest.raises(ValueError):
        conv_utils.normalize_tuple([2, 3, 4], 2, 'kernel_size')
    with pytest.raises(ValueError):
        conv_utils.normalize_tuple(['str', 'impossible'], 2, 'kernel_size')
    
    __version__ = '${version}'
    
            if matching_issue_list_len == 0:
            # The issue does not exist in the project
            if state == 'present':
                # This implies a change
                changed = True
                if not check_mode:
                    # Create the issue
                    new_issue = project.add_issue(issue_subject, priority_id, status_id, type_id, severity_id, tags=issue_tags, description=issue_description)
                    if issue_attachment:
                        new_issue.attach(issue_attachment, description=issue_attachment_description)
                        issue['attachment'] = issue_attachment
                        issue['attachment_description'] = issue_attachment_description
                return (True, changed, 'Issue created', issue)
    
        def __init__(self, additional_arg_spec=None, validate_etag_support=False):
        '''
        OneViewModuleBase constructor.
    
    
def main():
    module = AnsibleModule(
        argument_spec=gen_specs(passwd=dict(no_log=True)),
        supports_check_mode=True,
    )
    
        def appid_exist(self, appids):
        for appid in appids.split('|'):
            if appid == '':
                continue
            if appid in self.config.GAE_APPIDS:
                return True
        return False
    
    
class CheckIp(front_base.check_ip.CheckIp):
    def check_response(self, response):
        server_type = response.headers.get('Server', '')
        self.logger.debug('status:%d', response.status)
        self.logger.debug('Server type:%s', server_type)
    
        def getUnexpectedToken(self):
        return self.token
    
            stat => ID '=' expr ';'
             => ID '=' atom ('+' atom)* ';'
             => ID '=' '(' expr ')' ('+' atom)* ';'
             => ID '=' '(' atom ')' ('+' atom)* ';'
             => ID '=' '(' INT ')' ('+' atom)* ';'
             => ID '=' '(' INT ')' ';'
    
                    # throw exception unless disjoint or identical
                disjoint = (prevRop.lastIndex < rop.index
                            or prevRop.index > rop.lastIndex)
                same = (prevRop.index == rop.index
                        and prevRop.lastIndex == rop.lastIndex)
                if not disjoint and not same:
                    raise ValueError(
                        'replace op boundaries of %s overlap with previous %s'
                        % (rop, prevRop))
    
    '''
http://code.activestate.com/recipes/131499-observer-pattern/
    
        root_specification = UserSpecification().and_specification(SuperUserSpecification())
    
        def scan(self):
        '''Scan the dial to the next station'''
        self.pos += 1
        if self.pos == len(self.stations):
            self.pos = 0
        print(u'Scanning... Station is %s %s' % (self.stations[self.pos], self.name))
    
        print('rm1: {0}'.format(rm1))
    print('rm2: {0}'.format(rm2))
    print('rm3: {0}'.format(rm3))
    
            def wrapper(*args, **kwargs):
            return attr(*args, **kwargs)
        return wrapper
    
        products = {
        'milk': {'price': 1.50, 'quantity': 10},
        'eggs': {'price': 0.20, 'quantity': 100},
        'cheese': {'price': 2.00, 'quantity': 10},
    }
    
    
# Refined Abstraction
class CircleShape(object):
    def __init__(self, x, y, radius, drawing_api):
        self._x = x
        self._y = y
        self._radius = radius
        self._drawing_api = drawing_api