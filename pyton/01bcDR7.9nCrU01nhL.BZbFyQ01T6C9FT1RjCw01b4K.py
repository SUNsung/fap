
        
        def get_parallel_rotations():
    mult90 = [0, np.pi/2, -np.pi/2, np.pi]
    parallel_rotations = []
    for euler in itertools.product(mult90, repeat=3):
        canonical = mat2euler(euler2mat(euler))
        canonical = np.round(canonical / (np.pi / 2))
        if canonical[0] == -2:
            canonical[0] = 2
        if canonical[2] == -2:
            canonical[2] = 2
        canonical *= np.pi / 2
        if all([(canonical != rot).any() for rot in parallel_rotations]):
            parallel_rotations += [canonical]
    assert len(parallel_rotations) == 24
    return parallel_rotations

    
    
def robot_get_obs(sim):
    '''Returns all joint positions and velocities associated with
    a robot.
    '''
    if sim.data.qpos is not None and sim.model.joint_names:
        names = [n for n in sim.model.joint_names if n.startswith('robot')]
        return (
            np.array([sim.data.get_joint_qpos(name) for name in names]),
            np.array([sim.data.get_joint_qvel(name) for name in names]),
        )
    return np.zeros(0), np.zeros(0)
    
    # http://stackoverflow.com/a/13653312
def full_class_name(o):
    module = o.__class__.__module__
    if module is None or module == str.__class__.__module__:
        return o.__class__.__name__
    return module + '.' + o.__class__.__name__
    
    if __name__ == '__main__':
    setup(name='wtfpython',
          version='0.2',
          description='What the f*ck Python!',
          author='Satwik Kansal',
          maintainer='Satwik Kansal',
          maintainer_email='satwikkansal@gmail.com',
          url='https://github.com/satwikkansal/wtfpython',
          platforms='any',
          license='WTFPL 2.0',
          long_description='An interesting collection of subtle & tricky Python Snippets'
                           ' and features.',
          keywords='wtfpython gotchas snippets tricky',
          packages=find_packages(),
          entry_points = {
              'console_scripts': ['wtfpython = wtf_python.main:load_and_read']
          },
          classifiers=[
              'Development Status :: 4 - Beta',