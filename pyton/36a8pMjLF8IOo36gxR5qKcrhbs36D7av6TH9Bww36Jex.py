
        
        
class ParkingSpot(object):
    
        def __init__(self, categorizer):
        self.categorizer = categorizer
        ...
    
    
seller_category_map = {}
seller_category_map['Exxon'] = DefaultCategories.GAS
seller_category_map['Target'] = DefaultCategories.SHOPPING
    
            Transform key and value to the form:
    
        def crawled_similar(self, signature):
        '''Determine if we've already crawled a page matching the given signature'''
        pass
    
        youngest_snapshot = max(snapshots, key=_get_snapshot_starttime)
    
            # return
        self.exit()
    
    
if __name__ == '__main__':
    main()

    
        # Send the data to bigpanda
    data = json.dumps(body)
    headers = {'Authorization': 'Bearer %s' % token, 'Content-Type': 'application/json'}
    try:
        response, info = fetch_url(module, request_url, data=data, headers=headers)
        if info['status'] == 200:
            module.exit_json(changed=True, **deployment)
        else:
            module.fail_json(msg=json.dumps(info))
    except Exception as e:
        module.fail_json(msg=to_native(e), exception=traceback.format_exc())
    
        # Using a for loop in case of error, we can report the package that failed
    for log in logs:
        # Query the log first, to see if we even need to remove.
        if not query_log_status(module, le_path, log):
            continue
    
        ai, aj, ak = -euler[..., 2], -euler[..., 1], -euler[..., 0]
    si, sj, sk = np.sin(ai), np.sin(aj), np.sin(ak)
    ci, cj, ck = np.cos(ai), np.cos(aj), np.cos(ak)
    cc, cs = ci * ck, ci * sk
    sc, ss = si * ck, si * sk
    
        The last action (38) stops the rollout for a return of 0 (walking away)
    '''
    def __init__(self, spots=37):
        self.n = spots + 1
        self.action_space = spaces.Discrete(self.n)
        self.observation_space = spaces.Discrete(1)
        self.seed()
    
            if http_body and hasattr(http_body, 'decode'):
            try:
                http_body = http_body.decode('utf-8')
            except:
                http_body = ('<Could not decode body as utf-8. '
                             'Please report to gym@openai.com>')
    
        def test_levelup(self):
        obs = self.env.reset()
        # Kind of a hack
        alg.algorithmic_env.AlgorithmicEnv.reward_shortfalls = []
        min_length = self.env.min_length
        for i in range(self.env.last):
            obs, reward, done, _ = self.env.step([self.RIGHT, 1, 0])
            self.assertFalse(done)
            obs, reward, done, _ = self.env.step([self.RIGHT, 1, 1])
            self.assertTrue(done)
            self.env.reset()
            if i < self.env.last-1:
                self.assertEqual(len(alg.algorithmic_env.AlgorithmicEnv.reward_shortfalls), i+1)
            else:
                # Should have leveled up on the last iteration
                self.assertEqual(self.env.min_length, min_length+1)
                self.assertEqual(len(alg.algorithmic_env.AlgorithmicEnv.reward_shortfalls), 0)
    
    class Car:
    def __init__(self, world, init_angle, init_x, init_y):
        self.world = world
        self.hull = self.world.CreateDynamicBody(
            position = (init_x, init_y),
            angle = init_angle,
            fixtures = [
                fixtureDef(shape = polygonShape(vertices=[ (x*SIZE,y*SIZE) for x,y in HULL_POLY1 ]), density=1.0),
                fixtureDef(shape = polygonShape(vertices=[ (x*SIZE,y*SIZE) for x,y in HULL_POLY2 ]), density=1.0),
                fixtureDef(shape = polygonShape(vertices=[ (x*SIZE,y*SIZE) for x,y in HULL_POLY3 ]), density=1.0),
                fixtureDef(shape = polygonShape(vertices=[ (x*SIZE,y*SIZE) for x,y in HULL_POLY4 ]), density=1.0)
                ]
            )
        self.hull.color = (0.8,0.0,0.0)
        self.wheels = []
        self.fuel_spent = 0.0
        WHEEL_POLY = [
            (-WHEEL_W,+WHEEL_R), (+WHEEL_W,+WHEEL_R),
            (+WHEEL_W,-WHEEL_R), (-WHEEL_W,-WHEEL_R)
            ]
        for wx,wy in WHEELPOS:
            front_k = 1.0 if wy > 0 else 1.0
            w = self.world.CreateDynamicBody(
                position = (init_x+wx*SIZE, init_y+wy*SIZE),
                angle = init_angle,
                fixtures = fixtureDef(
                    shape=polygonShape(vertices=[ (x*front_k*SIZE,y*front_k*SIZE) for x,y in WHEEL_POLY ]),
                    density=0.1,
                    categoryBits=0x0020,
                    maskBits=0x001,
                    restitution=0.0)
                    )
            w.wheel_rad = front_k*WHEEL_R*SIZE
            w.color = WHEEL_COLOR
            w.gas   = 0.0
            w.brake = 0.0
            w.steer = 0.0
            w.phase = 0.0  # wheel angle
            w.omega = 0.0  # angular velocity
            w.skid_start = None
            w.skid_particle = None
            rjd = revoluteJointDef(
                bodyA=self.hull,
                bodyB=w,
                localAnchorA=(wx*SIZE,wy*SIZE),
                localAnchorB=(0,0),
                enableMotor=True,
                enableLimit=True,
                maxMotorTorque=180*900*SIZE*SIZE,
                motorSpeed = 0,
                lowerAngle = -0.4,
                upperAngle = +0.4,
                )
            w.joint = self.world.CreateJoint(rjd)
            w.tiles = set()
            w.userData = w
            self.wheels.append(w)
        self.drawlist =  self.wheels + [self.hull]
        self.particles = []