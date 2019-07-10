
        
        module Scheduler
    
        if env['REQUEST_METHOD'] == ('OPTIONS') && env['HTTP_ACCESS_CONTROL_REQUEST_METHOD']
      return [200, Discourse::Cors.apply_headers(cors_origins, env, {}), []]
    end
    
      def create
    raise Discourse::NotFound unless report_collection_enabled?
    
    class ContentSecurityPolicy
  class Default
    attr_reader :directives
    
    module HighlightJs
  HIGHLIGHTJS_DIR ||= '#{Rails.root}/vendor/assets/javascripts/highlightjs/'
    
          current_user = lookup_user_api_user_and_update_key(user_api_key, @env[USER_API_CLIENT_ID])
      raise Discourse::InvalidAccess unless current_user
      raise Discourse::InvalidAccess if current_user.suspended? || !current_user.active
    
      def self.provides_callback_for(provider)
    provider_id = provider.to_s.chomp '_oauth2'
    
      def preferred_locale
    http_accept_language.preferred_language_from(available_locales)
  end
    
    module SessionTrackingConcern
  extend ActiveSupport::Concern
    
      def test_lparen
    assert_equal [],
                 scan('lparen', '')
    assert_equal ['('],
                 scan('lparen', '()')
    assert_equal ['('],
                 scan('lparen', 'm()')
    assert_equal ['('],
                 scan('lparen', 'm (a)')
    assert_equal [],
                 scan('lparen', ''()'')
    assert_equal [],
                 scan('lparen', ''%w()'')
  end
    
      def test_bind_key_with_octal_number
    input = %w{i n p u t}.map(&:ord)
    assert_equal [input, '\1'.bytes], @config.bind_key(''input'', ''\1'')
    assert_equal [input, '\12'.bytes], @config.bind_key(''input'', ''\12'')
    assert_equal [input, '\123'.bytes], @config.bind_key(''input'', ''\123'')
    assert_equal [input, '\123'.bytes + '4'.bytes], @config.bind_key(''input'', ''\1234'')
  end
    
      def test_duplicated_rest_kw
    assert_syntax_error('def foo(*a, a: 1) end', /duplicated argument name/)
    assert_nothing_raised {def foo(*_, _: 1) end}
    (obj = Object.new).instance_eval('def foo(*_, x: 42, _: 1) x end')
    assert_equal(42, obj.foo(42))
    assert_equal(42, obj.foo(2, _: 0))
    assert_equal(2, obj.foo(x: 2, _: 0))
  end
    
        def test_memory_leak_select
      bug9978 = '[ruby-dev:48325] [Bug #9978]'
      assert_no_memory_leak([], <<-'end;', '5_000.times(&doit)', bug9978, limit: 2.0)
        ENV.clear
        k = 'FOO'
        (ENV[k] = 'bar'*5000 rescue 'bar'*1500)
        doit = proc {ENV.select {break}}
        500.times(&doit)
      end;
    end
    
      def test_dynamic_method
    @assertion_count = 2
    
    ENV['GEM_SKIP'] = ENV['GEM_HOME'] = ENV['GEM_PATH'] = ''.freeze
    
    #require_relative 'x'; exit(1)

    
          PROCESS_MEMORY_COUNTERS = struct [
        'DWORD  cb',
        'DWORD  PageFaultCount',
        'SIZE_T PeakWorkingSetSize',
        'SIZE_T WorkingSetSize',
        'SIZE_T QuotaPeakPagedPoolUsage',
        'SIZE_T QuotaPagedPoolUsage',
        'SIZE_T QuotaPeakNonPagedPoolUsage',
        'SIZE_T QuotaNonPagedPoolUsage',
        'SIZE_T PagefileUsage',
        'SIZE_T PeakPagefileUsage',
      ]
    
        ##
    # Runs the given +work+, gathering the times of each run. Range
    # and times are then passed to a given +validation+ proc. Outputs
    # the benchmark name and times in tab-separated format, making it
    # easy to paste into a spreadsheet for graphing or further
    # analysis.
    #
    # Ranges are specified by ::bench_range.
    #
    # Eg:
    #
    #   def bench_algorithm
    #     validation = proc { |x, y| ... }
    #     assert_performance validation do |n|
    #       @obj.algorithm(n)
    #     end
    #   end
    
    (allow file-write*
  (literal
    '/dev/dtracehelper'
    '/dev/null'
  )
  (regex
    #'^<%= Pod::Config.instance.project_root %>'
    #'^<%= Pod::Config.instance.repos_dir %>'
    #'^/Users/[^.]+/Library/Caches/CocoaPods/*'
    #'^/dev/tty'
    #'^/private/var'
  )
)
    
            # Prints the list of specs & pod cache dirs for a single pod name.
        #
        # This output is valid YAML so it can be parsed with 3rd party tools
        #
        # @param [Array<Hash>] cache_descriptors
        #        The various infos about a pod cache. Keys are
        #        :spec_file, :version, :release and :slug
        #
        def print_pod_cache_infos(pod_name, cache_descriptors)
          UI.puts '#{pod_name}:'
          cache_descriptors.each do |desc|
            if @short_output
              [:spec_file, :slug].each { |k| desc[k] = desc[k].relative_path_from(@cache.root) }
            end
            UI.puts('  - Version: #{desc[:version]}')
            UI.puts('    Type:    #{pod_type(desc)}')
            UI.puts('    Spec:    #{desc[:spec_file]}')
            UI.puts('    Pod:     #{desc[:slug]}')
          end
        end
      end
    end
  end
end

    
            def run
          print_version
          signal_end_of_output
          listen
        end
    
            @report.stubs(:actual_path).returns('/usr/bin/command')
        report.should == expected
      end
    end
  end
end

    
      it 'denies post requests without any token' do
    expect(post('/')).not_to be_ok
  end
    
    ::Bundler.with_friendly_errors do
  ::Bundler::CLI.start(ARGV, :debug => true)
end

    
      # We compare the before the update and after the update
  def display_updated_plugins(previous_gem_specs_map)
    update_count = 0
    find_latest_gem_specs.values.each do |spec|
      name = spec.name.downcase
      if previous_gem_specs_map.has_key?(name)
        if spec.version != previous_gem_specs_map[name].version
          puts('Updated #{spec.name} #{previous_gem_specs_map[name].version.to_s} to #{spec.version.to_s}')
          update_count += 1
        end
      else
        puts('Installed #{spec.name} #{spec.version.to_s}')
        update_count += 1
      end
    end
    
      it 'returns the merged `ConfigPart#config_string`' do
    expect(subject.config_string).to eq(ordered_config_parts.collect(&:text).join('\n'))
  end
    
              it 'successfully install the plugin' do
            command = logstash.run_command_in_path('bin/logstash-plugin install #{gem_path_on_vagrant}')
            expect(command).to install_successfully
            expect(logstash).to have_installed?('logstash-filter-dns')
          end
        end
    
    context 'Precious::Views::Page' do
  setup do
    examples = testpath 'examples'
    @path    = File.join(examples, 'test.git')
    FileUtils.cp_r File.join(examples, 'empty.git'), @path, :remove_destination => true
    @wiki = Gollum::Wiki.new(@path)
  end
    
    # internal
require File.expand_path('../gollum/uri_encode_component', __FILE__)
    
          @@user_attributes = [:id, :email, :created_at, :updated_at]
    
        # Change directory to the source path, and glob files
    # This is done so that we end up with a 'flat' archive, that doesn't
    # have any path artifacts from the packager's absolute path.
    ::Dir::chdir(path) do
      entries = ::Dir::glob('**', File::FNM_DOTMATCH)
    
      def compression_option
    case self.attributes[:pacman_compression]
      when nil, 'xz'
        return '--xz'
      when 'none'
        return ''
      when 'gz'
        return '-z'
      when 'bzip2'
        return '-j'
      else
        return '--xz'
      end
  end
    
        if !File.exist?(setup_py)
      logger.error('Could not find 'setup.py'', :path => setup_py)
      raise 'Unable to find python package; tried #{setup_py}'
    end
    
    module FPM
  module Issues
    module TarWriter
      # See https://github.com/rubygems/rubygems/issues/1608
      def self.has_issue_1608?
        name, prefix = nil,nil
        io = StringIO.new
        ::Gem::Package::TarWriter.new(io) do |tw|
          name, prefix = tw.split_name('/123456789'*9 + '/1234567890') # abs name 101 chars long
        end
        return prefix.empty?
      end