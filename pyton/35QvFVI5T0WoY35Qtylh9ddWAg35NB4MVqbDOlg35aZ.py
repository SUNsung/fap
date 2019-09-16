
        
            :param filepath: Optional filepath the the blns.txt file
    :returns: The list of naughty strings
    '''
    
            # copy part of the graph below current checkpoint node, stopping at
        # other checkpoints nodes
        ops_to_copy = fast_backward_ops(within_ops=fwd_ops,
                                        seed_ops=[r.op for r in ts],
                                        stop_at_ts=checkpoints_other)
        debug_print('Found {} ops to copy within {}, seed {}, stop_at {}'.format(
            len(ops_to_copy), fwd_ops, [r.op for r in ts], checkpoints_other))
        debug_print('ops_to_copy = {}'.format(ops_to_copy))
        if not ops_to_copy:  # we're done!
            break
        _, info = ge.copy_with_input_replacements(ge.sgv(ops_to_copy), {})
        for origin_op, op in info._transformed_ops.items():
            op._set_device(origin_op.node_def.device)
        copied_ops = info._transformed_ops.values()
        debug_print('Copied {} to {}'.format(ops_to_copy, copied_ops))
        ge.reroute_ts(checkpoints_disconnected_other, checkpoints_other, can_modify=copied_ops)
        debug_print('Rewired %s in place of %s restricted to %s',
                    checkpoints_disconnected_other, checkpoints_other, copied_ops)
    
        @staticmethod
    def process(old_face, new_face, raw_mask):
        height, width, _ = old_face.shape
        height = height // 2
        width = width // 2
    
    
def get_serializer_from_ext(ext):
    ''' Get the sertializer from filename extension '''
    if ext == '.json':
        return JSONSerializer
    if ext == '.p':
        return PickleSerializer
    if ext in ('.yaml', '.yml') and yaml is not None:
        return YAMLSerializer
    if ext in ('.yaml', '.yml') and yaml is None:
        logger.warning('You must have PyYAML installed to use YAML as the serializer.\n'
                       'Switching to JSON as the serializer.')
    return JSONSerializer

    
    
def _ListOf( config_entry ):
  if isinstance( config_entry, list ):
    return config_entry
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def FormatDebugInfoResponse_Completer_ServerNotRunningWithNoLogfiles_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'completer' ][ 'servers' ][ 0 ].update( {
    'is_running': False,
    'logfiles': []
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Completer name completer debug information:\n'
      '  Server name not running\n'
      '  Server name executable: /path/to/executable\n'
      '  No logfiles available\n'
      '  Server name key: value\n'
      '  Key: value\n'
    )
  )

    
    
def ExtractKeywordsFromGroup_KeywordAssignAndMiddle_test():
  assert_that( syntax_parse._ExtractKeywordsFromGroup(
                 syntax_parse.SyntaxGroup( '', [
                   'nextgroup=zoo foo skipnl bar',
                   'zoo goo',
                 ] ) ),
               contains_inanyorder( 'foo', 'skipnl', 'bar', 'zoo', 'goo' ) )