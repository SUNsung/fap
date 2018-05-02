
        
            groups << @user.authorized_groups.visible_to_user(current_user) if current_user
    groups << @user.authorized_groups.public_to_user(current_user)
    
          def get_type
        name
      end
    
            doc
      end
    end
  end
end

    
      def test_marshal_zone_gc
    assert_separately(%w(--disable-gems), <<-'end;', timeout: 30)
      ENV['TZ'] = 'JST-9'
      s = Marshal.dump(Time.now)
      t = Marshal.load(s)
      n = 0
      done = 100000
      while t.zone.dup == 'JST' && n < done
        n += 1
      end
      assert_equal done, n, 'Bug #9652'
      assert_equal 'JST', t.zone, 'Bug #9652'
    end;
  end
    
        run.should be_true
  end
    
        uninstall login_item: 'login item name'
    
      def_delegators :@logger, :log, :log_status, :log_processing, :log_transform, :log_file_info, :log_processed, :log_http_get_file, :log_http_get_files, :silence_log
    
        def shared_mixins
      @shared_mixins ||= begin
        log_status '  Reading shared mixins from mixins.less'
        CLASSES_TO_MIXINS + read_mixins(read_files('less', bootstrap_less_files.grep(/mixins\//)).values.join('\n'),
                                        nested: NESTED_MIXINS)
      end
    end
    
        def log_processing(name)
      puts yellow '  #{File.basename(name)}'
    end
    
    msfenv_real_pathname = Pathname.new(__FILE__).realpath
root = msfenv_real_pathname.parent.parent
    
            def run
          UI.puts('$CACHE_ROOT: #{@cache.root}') if @short_output
          if @pod_name.nil? # Print all
            @cache.cache_descriptors_per_pod.each do |pod_name, cache_descriptors|
              print_pod_cache_infos(pod_name, cache_descriptors)
            end
          else # Print only for the requested pod
            cache_descriptors = @cache.cache_descriptors_per_pod[@pod_name]
            if cache_descriptors.nil?
              UI.notice('No cache for pod named #{@pod_name} found')
            else
              print_pod_cache_infos(@pod_name, cache_descriptors)
            end
          end
        end
    
          # @param  [[Xcodeproj::PBXTarget]] targets
      #         An array which always has a target as its first item
      #         and may optionally contain related test targets
      #
      # @return [String] the text for the target module
      #
      def target_module(app, tests)
        target_module = '\ntarget '#{app.name.gsub(/'/, '\\\\\'')}' do\n'
    
        it 'redirects requests with sneaky encoded session cookies' do
      get '/path', {}, 'HTTP_COOKIE' => 'rack.%73ession=EVIL_SESSION_TOKEN; rack.session=SESSION_TOKEN'
      expect(last_response).to be_redirect
      expect(last_response.location).to eq('/path')
    end
  end
    
      it 'should not set the X-Frame-Options for other content types' do
    expect(get('/', {}, 'wants' => 'text/foo').headers['X-Frame-Options']).to be_nil
  end
    
      if ''.respond_to?(:encoding)  # Ruby 1.9+ M17N
    context 'PATH_INFO's encoding' do
      before do
        @app = Rack::Protection::PathTraversal.new(proc { |e| [200, {'Content-Type' => 'text/plain'}, [e['PATH_INFO'].encoding.to_s]] })
      end
    
      it 'denies requests with a changing User-Agent header' do
    session = {:foo => :bar}
    get '/', {}, 'rack.session' => session, 'HTTP_USER_AGENT' => 'a'
    get '/', {}, 'rack.session' => session, 'HTTP_USER_AGENT' => 'b'
    expect(session).to be_empty
  end
    
            attr_reader :node, :variable, :referenced, :references
        alias referenced? referenced
    
            def_node_matcher :multiple_compare?, <<-PATTERN
          (send (send _ {:< :> :<= :>=} $_) {:< :> :<= :>=} _)
        PATTERN
    
    module RuboCop
  module Cop
    module Style
      # This cop checks for optional arguments to methods
      # that do not come at the end of the argument list
      #
      # @example
      #   # bad
      #   def foo(a = 1, b, c)
      #   end
      #
      #   # good
      #   def baz(a, b, c = 1)
      #   end
      #
      #   def foobar(a = 1, b = 2, c = 3)
      #   end
      class OptionalArguments < Cop
        MSG = 'Optional arguments should appear at the end ' \
              'of the argument list.'.freeze
    
      let(:source) { ''something'.intern' }
  let(:corrected) { autocorrect_source(source) }