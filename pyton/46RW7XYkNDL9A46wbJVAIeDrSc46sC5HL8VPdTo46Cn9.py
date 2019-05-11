
        
            publicKey, privateKey = generateKey(keySize)
    print('\nWriting public key to file %s_pubkey.txt...' % name)
    with open('%s_pubkey.txt' % name, 'w') as fo:
        fo.write('%s,%s,%s' % (keySize, publicKey[0], publicKey[1]))
    
        def __init__(self, size_table, charge_factor=None, lim_charge=None):
        self.size_table = size_table
        self.values = [None] * self.size_table
        self.lim_charge = 0.75 if lim_charge is None else lim_charge
        self.charge_factor = 1 if charge_factor is None else charge_factor
        self.__aux_list = []
        self._keys = {}
    
        for i in range(1, n+1):
        dp[i][0] = True
    
        This game presents moves along a linear chain of states, with two actions:
     0) forward, which moves along the chain but returns no reward
     1) backward, which returns to the beginning and has a small reward
    
    def test_text_envs():
    env = gym.make('FrozenLake-v0')
    video = VideoRecorder(env)
    try:
        env.reset()
        video.capture_frame()
        video.close()
    finally:
        os.remove(video.path)

    
        env = gym.make(args.env_id)
    
    # Top-down car dynamics simulation.
#
# Some ideas are taken from this great tutorial http://www.iforce2d.net/b2dtut/top-down-car by Chris Campbell.
# This simulation is a bit more detailed, with wheels rotation.
#
# Created by Oleg Klimov. Licensed on the same terms as the rest of OpenAI Gym.
    
    
class VerboseProxy(object):
    '''Proxy all function calls to another class and log method name, arguments
    and return values for each call.
    '''
    
    
def main(args):
    logging.basicConfig(format='\033[33m%(levelname)s:\033[37m %(message)s\033[0m\n')
    
        def test_path_from_options(self):
        paths = ['one.yml', 'two.yml']
        opts = {'--file': paths}
        environment = Environment.from_env_file('.')
        assert get_config_path_from_options('.', opts, environment) == paths