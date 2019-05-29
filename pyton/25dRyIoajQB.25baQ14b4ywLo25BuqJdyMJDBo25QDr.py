
        
                pos_delta = action[:, :3]
        quat_delta = action[:, 3:]
    
    def test_text_envs():
    env = gym.make('FrozenLake-v0')
    video = VideoRecorder(env)
    try:
        env.reset()
        video.capture_frame()
        video.close()
    finally:
        os.remove(video.path)

    
    # All concrete subclasses of AlgorithmicEnv
ALL_ENVS = [
    alg.copy_.CopyEnv, 
    alg.duplicated_input.DuplicatedInputEnv,
    alg.repeat_copy.RepeatCopyEnv,
    alg.reverse.ReverseEnv,
    alg.reversed_addition.ReversedAdditionEnv,
]
ALL_TAPE_ENVS = [env for env in ALL_ENVS 
    if issubclass(env, alg.algorithmic_env.TapeAlgorithmicEnv)]
ALL_GRID_ENVS = [env for env in ALL_ENVS 
    if issubclass(env, alg.algorithmic_env.GridAlgorithmicEnv)]