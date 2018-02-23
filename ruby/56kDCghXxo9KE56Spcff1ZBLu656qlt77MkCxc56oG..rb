
        
        describe 'String#swapcase' do
  it 'returns a new string with all uppercase chars from self converted to lowercase and vice versa' do
   'Hello'.swapcase.should == 'hELLO'
   'cYbEr_PuNk11'.swapcase.should == 'CyBeR_pUnK11'
   '+++---111222???'.swapcase.should == '+++---111222???'
  end
    
      it 'understands integers' do
    '20'.to_c.should == Complex(20)
  end
    
      it 'raises a #{frozen_error_class} if self is frozen' do
    s = 'abcdefghijklmnopqR'.freeze
    lambda { s.tr!('cdefg', '12') }.should raise_error(frozen_error_class)
    lambda { s.tr!('R', 'S')      }.should raise_error(frozen_error_class)
    lambda { s.tr!('', '')        }.should raise_error(frozen_error_class)
  end
end

    
      it 'sends #to_str to the argument and returns the result if it's a String' do
    x = String.new
    obj = mock('to_str')
    obj.should_receive(:to_str).and_return(x)
    String.try_convert(obj).should equal(x)
  end
    
        ruby_version_is '2.5' do
      it 'returns the same object for equal unfrozen strings' do
        origin = 'this is a string'
        dynamic = %w(this is a string).join(' ')
    
        private
    
        # apply general less to scss conversion
    def convert_to_scss(file)
      # get local mixin names before converting the definitions
      mixins = shared_mixins + read_mixins(file)
      file   = replace_vars(file)
      file   = replace_mixin_definitions(file)
      file   = replace_mixins(file, mixins)
      file   = extract_mixins_from_selectors(file, CLASSES_TO_MIXINS.inject({}) { |h, cl| h.update('.#{cl}' => cl) })
      file   = replace_spin(file)
      file   = replace_fadein(file)
      file   = replace_image_urls(file)
      file   = replace_escaping(file)
      file   = convert_less_ampersand(file)
      file   = deinterpolate_vararg_mixins(file)
      file   = replace_calculation_semantics(file)
      file   = replace_file_imports(file)
      file   = wrap_at_groups_with_at_root(file)
      file
    end
    
    desc 'Start a dummy (test) Rails app server'
task :dummy_rails do
  require 'rack'
  require 'term/ansicolor'
  port = ENV['PORT'] || 9292
  puts %Q(Starting on #{Term::ANSIColor.cyan 'http://localhost:#{port}'})
  Rack::Server.start(
    config: 'test/dummy_rails/config.ru',
    Port: port)
end
    
        def index
      pods_json = PodPresenter.as_collection(Pod.all)
    
        def any_searchfield_present?
      if %w(username email guid under13).all? { |attr| public_send(attr).blank? }
        errors.add :base, 'no fields for search set'
      end
    end
    
    get '/stream', :provides => 'text/event-stream' do
  stream :keep_open do |out|
    connections << out
    out.callback { connections.delete(out) }
  end
end
    
    # include would include the module in Object
# extend only extends the `main` object
extend Sinatra::Delegator
    
          def remove_bad_cookies(request, response)
        return if bad_cookies.empty?
        paths = cookie_paths(request.path)
        bad_cookies.each do |name|
          paths.each { |path| response.set_cookie name, empty_cookie(request.host, path) }
        end
      end
    
          session = {:foo => :bar}
      get '/', {}, 'rack.session' => session, 'HTTP_USER_AGENT' => 'a'
      get '/', {}, 'rack.session' => session, 'HTTP_USER_AGENT' => 'b'
      expect(session[:foo]).to eq :bar
    end
    
    class LogStash::PluginManager::Generate < LogStash::PluginManager::Command