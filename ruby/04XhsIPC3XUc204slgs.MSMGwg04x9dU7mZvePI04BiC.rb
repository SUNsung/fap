
        
        module ActionCable
  module Server
    # An instance of this configuration object is available via ActionCable.server.config, which allows you to tweak Action Cable configuration
    # in a Rails config initializer.
    class Configuration
      attr_accessor :logger, :log_tags
      attr_accessor :connection_class, :worker_pool_size
      attr_accessor :disable_request_forgery_protection, :allowed_request_origins, :allow_same_origin_as_host
      attr_accessor :cable, :url, :mount_path
    
            def test_url_host_db
          spec = resolve 'abstract://foo/bar?encoding=utf8'
          assert_equal({
            'adapter'  => 'abstract',
            'database' => 'bar',
            'host'     => 'foo',
            'encoding' => 'utf8' }, spec)
        end
    
        def initialize(table)
      @table = table
      @handlers = []
    
                  if node.reflection.scope &&
                  node.reflection.scope_for(node.base_klass.unscoped).readonly_value
                model.readonly!
              end
    
            case ids.size
        when 0
          error_message = 'Couldn't find #{model_name} without an ID'
          raise RecordNotFound.new(error_message, model_name, primary_key)
        when 1
          result = find_one(ids.first)
          expects_array ? [ result ] : result
        else
          find_some(ids)
        end
      rescue ::RangeError
        error_message = 'Couldn't find #{model_name} with an out of range ID'
        raise RecordNotFound.new(error_message, model_name, primary_key, ids)
      end
    
      def test_should_order_by_grouped_field
    c = Account.group(:firm_id).order('firm_id').sum(:credit_limit)
    assert_equal [1, 2, 6, 9], c.keys.compact
  end
    
        def secret_action
    end
  end
    
            channel = ChatChannel.new connection, 'test_channel'
        channel.send_confirmation
        channel.send_confirmation
    
          # move bootstrap/_bootstrap.scss to _bootstrap.scss adjusting import paths
      main_from = '#{save_to}/_bootstrap.scss'
      main_to   = File.expand_path('#{save_to}/../_bootstrap.scss')
      save_file main_to, File.read(main_from).gsub(/ '/, ' 'bootstrap/')
      File.delete(main_from)
    
      def setup
    tmp_dir = File.join GEM_PATH, 'tmp/node-mincer'
    success = Dir.chdir DUMMY_PATH do
      silence_stdout_if !ENV['VERBOSE'] do
        system 'node', 'manifest.js', tmp_dir
      end
    end
    assert success, 'Node.js Mincer compilation failed'
    manifest = JSON.parse(File.read('#{tmp_dir}/manifest.json'))
    css_name = manifest['assets']['application.css']
    @css = File.read('#{tmp_dir}/#{css_name}')
  end
end

    
          File.open('bower.json', 'w') do |f|
        f.puts JSON.pretty_generate(spec)
      end
    end
  end
end

    
        # Many formulae include 'lib/charset.alias', but it is not strictly needed
    # and will conflict if more than one formula provides it
    observe_file_removal @f.lib/'charset.alias'
    
      def self.normalize_legacy_patches(list)
    patches = []
    
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
    
        # we assume that the first file that requires 'sinatra' is the
    # app_file. all other path related options are calculated based
    # on this path by default.
    set :app_file, caller_files.first || $0
    
      before(:each) do
    mock_app do
      use Rack::Protection::HttpOrigin
      run DummyApp
    end
  end
    
        mock_app do
      use Rack::Head
      use(Rack::Config) { |e| e['rack.session'] ||= {}}
      use changer
      use klass
      use detector
      run DummyApp
    end
    
        i0 = index
    i1, s1 = index, []
    if has_terminal?('(', false, index)
      r2 = instantiate_node(SyntaxNode,input, index...(index + 1))
      @index += 1
    else
      terminal_parse_failure('(')
      r2 = nil
    end
    s1 << r2
    if r2
      r3 = _nt__
      s1 << r3
      if r3
        r4 = _nt_condition
        s1 << r4
        if r4
          r5 = _nt__
          s1 << r5
          if r5
            if has_terminal?(')', false, index)
              r6 = instantiate_node(SyntaxNode,input, index...(index + 1))
              @index += 1
            else
              terminal_parse_failure(')')
              r6 = nil
            end
            s1 << r6
          end
        end
      end
    end
    if s1.last
      r1 = instantiate_node(SyntaxNode,input, i1...index, s1)
      r1.extend(Expression0)
    else
      @index = i1
      r1 = nil
    end
    if r1
      r0 = r1
      r0.extend(LogStash::Config::AST::Expression)
    else
      r7 = _nt_negative_expression
      if r7
        r0 = r7
        r0.extend(LogStash::Config::AST::Expression)
      else
        r8 = _nt_in_expression
        if r8
          r0 = r8
          r0.extend(LogStash::Config::AST::Expression)
        else
          r9 = _nt_not_in_expression
          if r9
            r0 = r9
            r0.extend(LogStash::Config::AST::Expression)
          else
            r10 = _nt_compare_expression
            if r10
              r0 = r10
              r0.extend(LogStash::Config::AST::Expression)
            else
              r11 = _nt_regexp_expression
              if r11
                r0 = r11
                r0.extend(LogStash::Config::AST::Expression)
              else
                r12 = _nt_rvalue
                if r12
                  r0 = r12
                  r0.extend(LogStash::Config::AST::Expression)
                else
                  @index = i0
                  r0 = nil
                end
              end
            end
          end
        end
      end
    end