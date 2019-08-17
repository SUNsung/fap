
        
            def set(self, results, query):
        '''Set the result for the given query key in the cache.
    
    
class AddRequest(object):
    
        def __init__(self, vehicle_size, license_plate, spot_size):
        self.vehicle_size = vehicle_size
        self.license_plate = license_plate
        self.spot_size
        self.spots_taken = []
    
            (2016-01, shopping), 25
        (2016-01, shopping), 100
        (2016-01, gas), 50
        '''
        timestamp, category, amount = line.split('\t')
        period = self. extract_year_month(timestamp)
        if period == self.current_year_month():
            yield (period, category), amount
    
            Emit key value pairs of the form:
    
        def get_people(self, ids):
        results = []
        for id in ids:
            if id in self.people:
                results.append(self.people[id])
        return results
    
            def to_s(row, col):
            return row*ncol + col
    
        def __init__(self):
        mujoco_env.MujocoEnv.__init__(self, 'walker2d.xml', 4)
        utils.EzPickle.__init__(self)
    
            # Calculate initial state distribution
        # We always start in state (3, 0)
        isd = np.zeros(nS)
        isd[self.start_state_index] = 1.0
    
            if self.viewer is None:
            self.viewer = rendering.Viewer(500,500)
            bound = self.LINK_LENGTH_1 + self.LINK_LENGTH_2 + 0.2  # 2.2 for default
            self.viewer.set_bounds(-bound,bound,-bound,bound)