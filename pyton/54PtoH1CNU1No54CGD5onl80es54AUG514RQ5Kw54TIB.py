
        
        def dedent(line, indent_depth):
    if line.startswith(' ' * indent_depth):
        return line[indent_depth:]
    if line.startswith('\t'):
        return line[1:]
    return line
    
        # GoalEnv methods
    # ----------------------------
    
            elif action > self.number:
            self.observation = 3
    
    
@unittest.skipIf(skip_mujoco, 'Cannot run mujoco key ' +
                              '(either license key not found or ' +
                              'mujoco not installed properly')
class Mujocov2Tov2ConverstionTest(unittest.TestCase):
    def test_environments_match(self):
        test_cases = (
            {
                'old_id': 'Swimmer-v2',
                'new_id': 'Swimmer-v3'
             },
            {
                'old_id': 'Hopper-v2',
                'new_id': 'Hopper-v3'
             },
            {
                'old_id': 'Walker2d-v2',
                'new_id': 'Walker2d-v3'
             },
            {
                'old_id': 'HalfCheetah-v2',
                'new_id': 'HalfCheetah-v3'
             },
            {
                'old_id': 'Ant-v2',
                'new_id': 'Ant-v3'
             },
            {
                'old_id': 'Humanoid-v2',
                'new_id': 'Humanoid-v3'
             },
        )
    
            # Find closed loop range i1..i2, first loop should be ignored, second is OK
        i1, i2 = -1, -1
        i = len(track)
        while True:
            i -= 1
            if i==0:
                return False  # Failed
            pass_through_start = track[i][0] > self.start_alpha and track[i-1][0] <= self.start_alpha
            if pass_through_start and i2==-1:
                i2 = i
            elif pass_through_start and i1==-1:
                i1 = i
                break
        if self.verbose == 1:
            print('Track generation: %i..%i -> %i-tiles track' % (i1, i2, i2-i1))
        assert i1!=-1
        assert i2!=-1