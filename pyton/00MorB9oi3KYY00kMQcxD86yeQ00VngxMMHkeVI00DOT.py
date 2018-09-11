
        
            def get_condition_by_name(self, name):
        all_conditions = [d for d in self.list_conditions() if d['Name'] == name]
        if all_conditions:
            return all_conditions[0][self.conditionsetid]
    
        removed_indexes, added_indexes, index_throughput_changes = get_changed_global_indexes(table, global_indexes)
    if removed_indexes:
        if not check_mode:
            for name, index in removed_indexes.items():
                global_indexes_changed = table.delete_global_secondary_index(name) or global_indexes_changed
        else:
            global_indexes_changed = True
    
    
def main():
    argument_spec = ec2_argument_spec()
    argument_spec.update(
        dict(
            bgp_asn=dict(required=False, type='int'),
            ip_address=dict(required=True),
            name=dict(required=True),
            routing=dict(default='dynamic', choices=['dynamic', 'static']),
            state=dict(default='present', choices=['present', 'absent']),
        )
    )
    
        try:
        connection.create_placement_group(
            GroupName=name, Strategy=strategy, DryRun=module.check_mode)
    except (BotoCoreError, ClientError) as e:
        if e.response['Error']['Code'] == 'DryRunOperation':
            module.exit_json(changed=True, placement_group={
                'name': name,
                'state': 'DryRun',
                'strategy': strategy,
            })
        module.fail_json_aws(
            e,
            msg='Couldn't create placement group [%s]' % name)
    
            pydoc.getpager = getpager_new
        try:
            with captured_output('stdout') as output, \
                 captured_output('stderr') as err:
                helper.help(module)
                result = buf.getvalue().strip()
                expected_text = expected_help_pattern % (
                                (doc_loc,) +
                                expected_text_data_docstrings +
                                (inspect.getabsfile(pydoc_mod),))
                self.assertEqual('', output.getvalue())
                self.assertEqual('', err.getvalue())
                self.assertEqual(expected_text, result)
        finally:
            pydoc.getpager = getpager_old
    
    # Additional templates that should be rendered to pages.
html_additional_pages = {
    'download': 'download.html',
    'index': 'indexcontent.html',
}
    
            try:
            print(pool.apply(f, (5,)))
        except ZeroDivisionError:
            print('\tGot ZeroDivisionError as expected from pool.apply()')
        else:
            raise AssertionError('expected ZeroDivisionError')
    
    PY_MAJOR, PY_MINOR, PY_PATCH = sys.version_info[ 0 : 3 ]
if not ( ( PY_MAJOR == 2 and PY_MINOR == 7 and PY_PATCH >= 1 ) or
         ( PY_MAJOR == 3 and PY_MINOR >= 4 ) or
         PY_MAJOR > 3 ):
  sys.exit( 'YouCompleteMe requires Python >= 2.7.1 or >= 3.4; '
            'your version of Python is ' + sys.version )
    
      for path in python_paths:
    yield EndsWithPython_Good, path
    
    
@patch( 'ycm.vimsupport.GetVariableValue',
        GetVariableValue_CompleteItemIs( 'Test' ) )
@patch( 'ycm.vimsupport.ReplaceChunks' )
def PostCompleteFixIt_ApplyFixIt_NoFixIts_test( replace_chunks, *args ):
  completions = [
    BuildCompletionFixIt( [] )
  ]
  with _SetUpCompleteDone( completions ) as request:
    request._OnCompleteDone_FixIt()
    replace_chunks.assert_not_called()
    
    import os
from hamcrest import assert_that, contains_inanyorder, has_item, has_items
from ycm import syntax_parse
from ycmd.utils import ReadFile
    
    if __name__ == '__main__':
    
    '''
http://ginstrom.com/scribbles/2007/10/08/design-patterns-python-style/
Implementation of the iterator pattern with a generator
    
        def setProblem(self, value):
        self._bProblem = value
    
    
class Visitor(object):
    
    '''
*What is this pattern about?
This patterns aims to reduce the number of classes required by an
application. Instead of relying on subclasses it creates objects by
copying a prototypical instance at run-time.
    
        def now(self):
        current_time_is_always_midnight = '24:01'
        return current_time_is_always_midnight

    
    '''
Reference: https://en.wikipedia.org/wiki/Delegation_pattern
Author: https://github.com/IuryAlves
    
    '''
@author: Eugene Duboviy <eugene.dubovoy@gmail.com> | github.com/duboviy
    
    *What does this example do?
    
        def draw_circle(self, x, y, radius):
        print('API2.circle at {}:{} radius {}'.format(x, y, radius))
    
    from homeassistant.core import callback
from homeassistant.const import CONF_PLATFORM
import homeassistant.helpers.config_validation as cv
import homeassistant.util.dt as dt_util
from homeassistant.helpers.event import track_point_in_utc_time
    
    from homeassistant.components.http import HomeAssistantView
from homeassistant.config import async_check_ha_config_file
    
            statsd.event(
            title='Home Assistant',
            text='%%% \n **{}** {} \n %%%'.format(name, message),
            tags=[
                'entity:{}'.format(event.data.get('entity_id')),
                'domain:{}'.format(event.data.get('domain'))
            ]
        )
    
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