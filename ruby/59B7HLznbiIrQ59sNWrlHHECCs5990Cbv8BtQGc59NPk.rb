
        
        desc 'Open an irb session preloaded with this library'
task :console do
  sh 'irb -rubygems -r ./lib/#{name}.rb'
end

    
    def local_require
  require 'json'
  JSON.pretty_generate(DATA)
end
    
                add_build_options(c)
    
            def scaffold_path
          '_posts/0000-00-00-welcome-to-jekyll.markdown.erb'
        end
    
                  EM.start_server(
                opts['host'],
                opts['livereload_port'],
                HttpAwareConnection,
                opts
              ) do |ws|
                handle_websockets_event(ws)
              end
    
      def devise_i18n_options(options)
    options
  end
    
                bypass_sign_in(user)
          DEPRECATION
          warden.session_serializer.store(resource, scope)
        elsif warden.user(scope) == resource && !options.delete(:force)
          # Do nothing. User already signed in and we are not forcing it.
          true
        else
          warden.set_user(resource, options.merge!(scope: scope))
        end
      end
    
            routes.each do |module_name, actions|
          [:path, :url].each do |path_or_url|
            actions.each do |action|
              action = action ? '#{action}_' : ''
              method = :'#{action}#{module_name}_#{path_or_url}'
    
            it 'does not use two's complement form for negative numbers for formats bBoxX' do
          format('%+b', -10).should == '-1010'
          format('%+B', -10).should == '-1010'
          format('%+o', -87).should == '-127'
          format('%+x', -196).should == '-c4'
          format('%+X', -196).should == '-C4'
        end
      end
    end
    
    describe 'Kernel.system' do
  it_behaves_like :kernel_system, :system, Kernel
end

    
      it 'returns true when passed ?R if the argument is readable by the real uid' do
    Kernel.test(?R, @file).should be_true
  end
    
            -> { w.f4(0.1) }.should output(nil, %r|classes.rb:#{w.warn_call_lineno}:|)
        -> { w.f4(Rational(1, 2)) }.should output(nil, %r|classes.rb:#{w.warn_call_lineno}:|)
      end
    
          def report
        <<-EOS
    
    desc 'Generate RDoc under doc/api'
task 'doc'     => ['doc:api']
task('doc:api') { sh 'yardoc -o doc/api' }
CLEAN.include 'doc/api'
    
    @@ chat
<pre id='chat'></pre>
<form>
  <input id='msg' placeholder='type message here...' />
</form>
    
    
    {    if (pre.style.display == 'block') {
      pre.style.display = 'none';
      post.style.display = 'none';
      context.style.background = 'none';
    } else {
      pre.style.display = 'block';
      post.style.display = 'block';
      context.style.background = '#fffed9';
    }
  }