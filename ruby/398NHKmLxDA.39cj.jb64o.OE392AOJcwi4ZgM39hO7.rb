
        
                it 'prevents converting negative argument to two's complement form' do
          format('% b', -10).should == '-1010'
          format('% B', -10).should == '-1010'
          format('% o', -87).should == '-127'
          format('% x', -196).should == '-c4'
          format('% X', -196).should == '-C4'
        end
    
      it 'raises an ArgumentError when passed a negative duration' do
    lambda { sleep(-0.1) }.should raise_error(ArgumentError)
    lambda { sleep(-1) }.should raise_error(ArgumentError)
  end
    
      it 'raises a TypeError when passed nil' do
    lambda { srand(nil) }.should raise_error(TypeError)
  end
    
    if defined?(Gem)
  GEMS_AND_ROOT_DIRECTORIES = {
    'sinatra' => '.',
    'sinatra-contrib' => './sinatra-contrib',
    'rack-protection' => './rack-protection'
  }
    
          # This double assignment is to prevent an 'unused variable' warning on
      # Ruby 1.9.3.  Yes, it is dumb, but I don't like Ruby yelling at me.
      path = path = (req.script_name + req.path_info).squeeze('/')
    
          default_options :authenticity_param => 'authenticity_token',
                      :allow_if => nil
    
          def call(env)
        request               = Request.new(env)
        status, headers, body = app.call(env)
    
        it 'Returns nil when Referer header is invalid' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/bad|uri'}
      expect(subject.referrer(env)).to be_nil
    end
  end
end
