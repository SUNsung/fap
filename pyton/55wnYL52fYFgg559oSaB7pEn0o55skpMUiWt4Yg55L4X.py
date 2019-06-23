
        
        from enum import Enum
    
            (foo, p1), 2
        (bar, p1), 2
        (bar, p1), 1
        (foo, p2), 3
        (bar, p3), 10
        (foo, p4), 1
        '''
        timestamp, product_id, category, quantity = line.split('\t')
        if self.within_past_week(timestamp):
            yield (category, product_id), quantity
    
    
class Graph(object):
    
            network_ok = False
        for url in self.urls:
            if self._test_host(url):
                network_ok = True
                break
            else:
                if __name__ == '__main__':
                    xlog.warn('test %s fail', url)
                time.sleep(1)
    
        files = [x for x in root.xpath('//a/text()')
             if x.startswith('pandas-{}'.format(version))
             and not dest.joinpath(x).exists()]
    
    '''
from .casting import BaseCastingTests  # noqa
from .constructors import BaseConstructorsTests  # noqa
from .dtype import BaseDtypeTests  # noqa
from .getitem import BaseGetitemTests  # noqa
from .groupby import BaseGroupbyTests  # noqa
from .interface import BaseInterfaceTests  # noqa
from .methods import BaseMethodsTests  # noqa
from .ops import BaseArithmeticOpsTests, BaseComparisonOpsTests, BaseOpsUtil  # noqa
from .printing import BasePrintingTests  # noqa
from .reduce import BaseNoReduceTests, BaseNumericReduceTests, BaseBooleanReduceTests  # noqa
from .missing import BaseMissingTests  # noqa
from .reshaping import BaseReshapingTests  # noqa
from .setitem import BaseSetitemTests  # noqa
from .io import BaseParsingTests  # noqa

    
    
def test_bin32():
    header = b'\xc6'
    data = b'x' * 65536
    b = packb(data, use_bin_type=True)
    assert len(b) == len(data) + 5
    assert b[0:1] == header
    assert b[1:5] == b'\x00\x01\x00\x00'
    assert b[5:] == data
    assert unpackb(b) == data
    
    
class MyTuple(tuple):
    pass
    
    try:
    xrange
except NameError:
    xrange = range
    
    from tornado import gen
from tornado.options import options, define, parse_command_line
    
    
def render():
    tmpl.generate(**context)
    
        def test_json_encode(self):
        # json deals with strings, not bytes.  On python 2 byte strings will
        # convert automatically if they are utf8; on python 3 byte strings
        # are not allowed.
        self.assertEqual(json_decode(json_encode(u'\u00e9')), u'\u00e9')
        if bytes is str:
            self.assertEqual(json_decode(json_encode(utf8(u'\u00e9'))), u'\u00e9')
            self.assertRaises(UnicodeDecodeError, json_encode, b'\xe9')
    
    def update_rollout_dict(spec, rollout_dict):
    '''
    Takes as input the environment spec for which the rollout is to be generated,
    and the existing dictionary of rollouts. Returns True iff the dictionary was
    modified.
    '''
    # Skip platform-dependent
    if should_skip_env_spec_for_tests(spec):
        logger.info('Skipping tests for {}'.format(spec.id))
        return False
    
            obser, r, done, info = env.step(a)
        if r != 0:
            print('reward %0.3f' % r)
        total_reward += r
        window_still_open = env.render()
        if window_still_open==False: return False
        if done: break
        if human_wants_restart: break
        while human_sets_pause:
            env.render()
            time.sleep(0.1)
        time.sleep(0.1)
    print('timesteps %i reward %0.2f' % (total_timesteps, total_reward))
    
    class RandomAgent(object):
    '''The world's simplest agent!'''
    def __init__(self, action_space):
        self.action_space = action_space
    
    class TestInputGeneration(unittest.TestCase):
    '''Test random input generation.
    '''
    def test_tape_inputs(self):
        for env_kls in ALL_TAPE_ENVS:
            env = env_kls()
            for size in range(2,5):
                input_tape = env.generate_input_data(size)
                self.assertTrue(all(0<=x<=env.base for x in input_tape),
                'Invalid input tape from env {}: {}'.format(env_kls, input_tape))
                # DuplicatedInput needs to generate inputs with even length,
                # so it may be short one
                self.assertLessEqual(len(input_tape), size)