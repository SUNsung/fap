
        
        # Output file base name for HTML help builder.
htmlhelp_basename = 'acme-pythondoc'
    
            try:
            request = changes.create(project=self.project_id, managedZone=zone_id, body=data)
            response = request.execute()
    
            self.rfc2136_client.del_txt_record('bar', 'baz')
    
        def __init__(self):
        self.viewer = None
        high = np.array([1.0, 1.0, 1.0, 1.0, self.MAX_VEL_1, self.MAX_VEL_2])
        low = -high
        self.observation_space = spaces.Box(low=low, high=high, dtype=np.float32)
        self.action_space = spaces.Discrete(3)
        self.state = None
        self.seed()