
        
        
def findProject(gitlab_instance, identifier):
    try:
        project = gitlab_instance.projects.get(identifier)
    except Exception as e:
        current_user = gitlab_instance.user
        try:
            project = gitlab_instance.projects.get(current_user.username + '/' + identifier)
        except Exception as e:
            return None
    
        def _delete_policy(self, p):
        '''
        Delete an Anti Affinity Policy using the CLC API.
        :param p: datacenter to delete a policy from
        :return: none
        '''
        try:
            policy = self.policy_dict[p['name']]
            policy.Delete()
        except CLCException as ex:
            self.module.fail_json(msg='Failed to delete anti affinity policy : {0}. {1}'.format(
                p['name'], ex.response_text
            ))
    
    #
#  Requires the clc-python-sdk.
#  sudo pip install clc-sdk
#
CLC_IMP_ERR = None
try:
    import clc as clc_sdk
    from clc import APIFailedResponse
except ImportError:
    CLC_IMP_ERR = traceback.format_exc()
    CLC_FOUND = False
    clc_sdk = None
else:
    CLC_FOUND = True
    
            if firewall_policy_id is None:
            if not self.module.check_mode:
                response = self._create_firewall_policy(
                    source_account_alias,
                    location,
                    firewall_dict)
                firewall_policy_id = self._get_policy_id_from_response(
                    response)
            changed = True
        else:
            firewall_policy = self._get_firewall_policy(
                source_account_alias, location, firewall_policy_id)
            if not firewall_policy:
                return self.module.fail_json(
                    msg='Unable to find the firewall policy id : {0}'.format(
                        firewall_policy_id))
            changed = self._compare_get_request_with_dict(
                firewall_policy,
                firewall_dict)
            if not self.module.check_mode and changed:
                self._update_firewall_policy(
                    source_account_alias,
                    location,
                    firewall_policy_id,
                    firewall_dict)
        if changed and firewall_policy_id:
            firewall_policy = self._wait_for_requests_to_complete(
                source_account_alias,
                location,
                firewall_policy_id)
        return changed, firewall_policy_id, firewall_policy
    
    
def main():
    '''
    The main function.  Instantiates the module and calls process_request.
    :return: none
    '''
    module = AnsibleModule(argument_spec=ClcLoadBalancer.define_argument_spec(),
                           supports_check_mode=True)
    clc_loadbalancer = ClcLoadBalancer(module)
    clc_loadbalancer.process_request()
    
        elif module.params['state'] == 'present' and instance is None:
        instance_json = create_linode(
            module, client,
            authorized_keys=module.params['authorized_keys'],
            group=module.params['group'],
            image=module.params['image'],
            label=module.params['label'],
            region=module.params['region'],
            root_pass=module.params['root_pass'],
            tags=module.params['tags'],
            ltype=module.params['type'],
        )
        module.exit_json(changed=True, instance=instance_json)
    
    
def main():
    # define module
    module = AnsibleModule(
        argument_spec=dict(
            name=dict(required=True),
            list_url=dict(aliases=['url']),
            state=dict(default='present', choices=['present', 'absent', 'updated']),
            validate_certs=dict(required=False, default=True, type='bool'),
        ),
        supports_check_mode=True
    )
    
        name = module.params['name']
    port = module.params['port']
    user = module.params['user']
    password = module.params['password']
    state = module.params['state']
    bootdev = module.params['bootdev']
    persistent = module.params['persistent']
    uefiboot = module.params['uefiboot']
    request = dict()
    
        def show(self):
        ''' Show the tooltip '''
        def tip_pos_calculator(widget, label,
                               *,
                               tip_delta=(10, 5), pad=(5, 3, 5, 3)):
            ''' Calculate the tooltip position '''
    
            sorted_similarity transforms a distance matrix into a sorted distance matrix according to
        the order implied by the hierarchical tree (dendrogram)
        '''
        logger.info('Sorting face distances. Depending on your dataset this may take some time...')
        num_predictions = predictions.shape[0]
        result_linkage = linkage(predictions, method=method, preserve_input=False)
        result_order = self.seriation(result_linkage,
                                      num_predictions,
                                      num_predictions + num_predictions - 2)
    
        def __init__(self, parent):
        logger.debug('Initializing %s', self.__class__.__name__)
        ttk.Notebook.__init__(self, parent, width=780)
        parent.add(self)
        tk_vars = get_config().tk_vars
        self.wrapper_var = tk_vars['display']
        self.runningtask = tk_vars['runningtask']
    
    
_DEFAULTS = {
    'threshold': {
        'default': 99.0,
        'info': 'Adjust the threshold for histogram matching. Can reduce extreme colors '
                'leaking in by filtering out colors at the extreme ends of the histogram '
                'spectrum.',
        'datatype': float,
        'rounding': 1,
        'min_max': (90.0, 100.0),
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    }
}

    
            logger.trace('Blending box')
        mask = np.expand_dims(self.mask, axis=-1)
        new_face = np.clip(np.concatenate((new_face, mask), axis=-1), 0.0, 1.0)
        logger.trace('Blended box')
        return new_face

    
    
_DEFAULTS = {
    'type': {
        'default': 'normalized',
        'info': 'The type of blending to use:'
                '\n\t gaussian: Blend with Gaussian filter. Slower, but often better than '
                'Normalized'
                '\n\t normalized: Blend with Normalized box filter. Faster than Gaussian'
                '\n\t none: Don't perform blending',
        'datatype': str,
        'rounding': None,
        'min_max': None,
        'choices': ['gaussian', 'normalized', 'none'],
        'gui_radio': True,
        'fixed': True,
    },
    'radius': {
        'default': 3.0,
        'info': 'Radius dictates how much blending should occur.\nThis figure is set as a '
                'percentage of the mask diameter to give the radius in pixels. Eg: for a mask '
                'with diameter 200px, a percentage of 6% would give a final radius of 3px.\n'
                'Higher percentage means more blending.',
        'datatype': float,
        'rounding': 1,
        'min_max': (0.1, 25.0),
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    },
    'passes': {
        'default': 4,
        'info': 'The number of passes to perform. Additional passes of the blending algorithm '
                'can improve smoothing at a time cost. This is more useful for 'box' type '
                'blending.\nAdditional passes have exponentially less effect so it's not '
                'worth setting this too high.',
        'datatype': int,
        'rounding': 1,
        'min_max': (1, 8),
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    },
    'erosion': {
        'default': 0.0,
        'info': 'Erosion kernel size as a percentage of the mask radius area.\nPositive '
                'values apply erosion which reduces the size of the swapped area.\nNegative '
                'values apply dilation which increases the swapped area.',
        'datatype': float,
        'rounding': 1,
        'min_max': (-100.0, 100.0),
        'choices': [],
        'gui_radio': False,
        'fixed': True,
    },
}

    
        def run(self, new_face):
        ''' Perform selected adjustment on face '''
        logger.trace('Performing scaling adjustment')
        # Remove Mask for processing
        reinsert_mask = False
        if new_face.shape[2] == 4:
            reinsert_mask = True
            final_mask = new_face[:, :, -1]
            new_face = new_face[:, :, :3]
        new_face = self.process(new_face)
        new_face = np.clip(new_face, 0.0, 1.0)
        if reinsert_mask and new_face.shape[2] != 4:
            # Reinsert Mask
            new_face = np.concatenate((new_face, np.expand_dims(final_mask, axis=-1)), -1)
        logger.trace('Performed scaling adjustment')
        return new_face

    
    
_HELPTEXT = (
    'Options for outputting converted frames to a series of images using OpenCV\n'
    'OpenCV can be faster than other image writers, but lacks some configuration '
    'options and formats.'
)
    
        # If we have user_data in completions (8.0.1493 or later), then we would
    # only ever return max. 1 completion here. However, if we had to guess, it
    # is possible that we matched multiple completion items (e.g. for overloads,
    # or similar classes in multiple packages). In any case, rather than
    # prompting the user and disturbing her workflow, we just apply the first
    # one. This might be wrong, but the solution is to use a (very) new version
    # of Vim which supports user_data on completion items
    fixit_completion = fixit_completions[ 0 ]
    
      with MockVimBuffers( [ current_buffer ], [ current_buffer ], ( 1, 6 ) ):
    ycm.SendCompletionRequest()
    # Actual result is that the results are not filtered, as we expect the
    # omnifunc or vim itself to do this filtering.
    assert_that(
      ycm.GetCompletionResponse(),
      has_entries( {
        'completions': ToBytesOnPY2( [
          { 'word': 'a',    'equal': 1 },
          { 'word': 'b',    'equal': 1 },
          { 'word': 'cdef', 'equal': 1 }
        ] ),
        'completion_start_column': 1
      } )
    )
    
    
  def OnCursorMoved( self ):
    if self._user_options[ 'echo_current_diagnostic' ]:
      line, _ = vimsupport.CurrentLineAndColumn()
      line += 1  # Convert to 1-based
      if line != self._previous_diag_line_number:
        self._EchoDiagnosticForLine( line )
    
    from future.utils import itervalues
import re
from ycm import vimsupport
    
    from hamcrest import assert_that, equal_to
from mock import patch, call
    
      _assert_rejects( f, 'This is a Taco' )
  _assert_accepts( f, 'This is a Burrito' )

    
    
  def done( self ):
    return self._done
    
          self._work_queue.put( w )
      self._adjust_thread_count()
      return f
  submit.__doc__ = _base.Executor.submit.__doc__
    
    # Logger for internal use by the futures package.
LOGGER = logging.getLogger('concurrent.futures')
    
        >>> Point = namedtuple('Point', 'x y')
    >>> Point.__doc__                   # docstring for the new class
    'Point(x, y)'
    >>> p = Point(11, y=22)             # instantiate with positional args or keywords
    >>> p[0] + p[1]                     # indexable like a plain tuple
    33
    >>> x, y = p                        # unpack like a regular tuple
    >>> x, y
    (11, 22)
    >>> p.x + p.y                       # fields also accessable by name
    33
    >>> d = p._asdict()                 # convert to a dictionary
    >>> d['x']
    11
    >>> Point(**d)                      # convert from a dictionary
    Point(x=11, y=22)
    >>> p._replace(x=100)               # _replace() is like str.replace() but targets named fields
    Point(x=100, y=22)
    
        Args:
        pending_work_items: A dict mapping work ids to _WorkItems e.g.
            {5: <_WorkItem...>, 6: <_WorkItem...>, ...}
        work_ids: A queue.Queue of work ids e.g. Queue([5, 6, ...]). Work ids
            are consumed and the corresponding _WorkItems from
            pending_work_items are transformed into _CallItems and put in
            call_queue.
        call_queue: A multiprocessing.Queue that will be filled with _CallItems
            derived from _WorkItems.
    '''
    while True:
        if call_queue.full():
            return
        try:
            work_id = work_ids.get(block=False)
        except queue.Empty:
            return
        else:
            work_item = pending_work_items[work_id]