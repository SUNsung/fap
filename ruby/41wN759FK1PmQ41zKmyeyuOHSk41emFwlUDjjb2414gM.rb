
        
                  enabled_services = services.select { |_k, v| v == true || (v != false && v.to_s != 'off') }.map { |k, v| [k, v == true || v.to_s == 'on' ? 'on' : v] }.to_h
          disabled_services = services.select { |_k, v| v == false || v.to_s == 'off' }.map { |k, v| [k, 'off'] }.to_h
    
            # Maps nice developer param names to Shenzhen's `ipa build` arguments
        params.collect do |k, v|
          v ||= ''
          if ARGS_MAP[k]
            if k == :clean
              v == true ? '--clean' : '--no-clean'
            elsif k == :archive
              v == true ? '--archive' : '--no-archive'
            else
              value = (v.to_s.length > 0 ? '\'#{v}\'' : '')
              '#{ARGS_MAP[k]} #{value}'.strip
            end
          end
        end.compact
      end
    
          def self.example_code
        [
          'make_changelog_from_jenkins(
            # Optional, lets you set a changelog in the case is not generated on Jenkins or if ran outside of Jenkins
            fallback_changelog: 'Bug fixes and performance enhancements'
          )'
        ]
      end
    
          def self.is_supported?(platform)
        [:ios, :mac].include?(platform)
      end
    
        describe 'when external tester is removed' do
      it 'removes the tester without error' do
        allow(tester_manager).to receive(:find_app_tester).and_return(fake_tester)
        allow(fake_app).to receive(:get_beta_groups).and_return([custom_tester_group])
    
        depends_on(deps) if add_mac_dependency?(args)
  end
    
      def initialize
    @resource = Resource.new
    @resources = {}
    @dependency_collector = DependencyCollector.new
    @bottle_specification = BottleSpecification.new
    @patches = []
    @options = Options.new
    @flags = ARGV.flags_only
    @deprecated_flags = []
    @deprecated_options = []
    @build = BuildOptions.new(Options.create(@flags), options)
    @compiler_failures = []
    @bottle_disable_reason = nil
  end
    
        it 'acts like #depends_on' do
      f = formula 'foo' do
        url 'foo-1.0'
    
          sdk_path(v)
    end
    
                if dir.empty? || dir == CLT::PKG_PATH || !File.directory?(dir)
              path = bundle_path
              path/'Contents/Developer' if path
            else
              # Use cleanpath to avoid pathological trailing slash
              Pathname.new(dir).cleanpath
            end
          end
      end
    
      it 'properly handles Casks that are not present' do
    expect {
      described_class.run('notacask')
    }.to raise_error(Cask::CaskUnavailableError)
  end
end

    
    module LogStash
  module PluginManager
    class Error < StandardError; end
    
            PluginManager.ui.debug('Looking if package named: #{plugin_name} exists at #{uri}')
    
              it 'successfully install the plugin' do
            command = logstash.run_command_in_path('bin/logstash-plugin install #{gem_path_on_vagrant}')
            expect(command).to install_successfully
            expect(logstash).to have_installed?('logstash-filter-dns')
          end
        end
    
    
# This is a non obvious hack,
# EllipticalCurve are not completely implemented in JRuby 9k and the new version of SSH from the standard library
# use them.
#
# Details: https://github.com/jruby/jruby-openssl/issues/105
Net::SSH::Transport::Algorithms::ALGORITHMS.values.each { |algs| algs.reject! { |a| a =~ /^ecd(sa|h)-sha2/ } }
Net::SSH::KnownHosts::SUPPORTED_TYPE.reject! { |t| t =~ /^ecd(sa|h)-sha2/ }
    
        it_behaves_like 'non literal', '(x && false)'
    it_behaves_like 'non literal', '(x == false)'
    it_behaves_like 'non literal', '(x or false)'
    it_behaves_like 'non literal', '[some_method_call]'
    it_behaves_like 'non literal', '{ :sym => some_method_call }'
    it_behaves_like 'non literal', '{ some_method_call => :sym }'
    it_behaves_like 'non literal', '/.#{some_method_call}/'
    it_behaves_like 'non literal', '%r{abx#{foo}}ixo'
    it_behaves_like 'non literal', 'some_method_call'
    it_behaves_like 'non literal', 'some_method_call(x, y)'
  end
    
          it { expect(self_class_node.body.begin_type?).to be(true) }
    end
    
          def all_on_same_line?(nodes)
        return true if nodes.empty?
    
          it 'registers an offense even if a non-singleton-class method is ' \
        'defined' do
        src = <<~RUBY
          #{keyword} A
            def method1
            end
            class << self
              #{modifier}
            end
          end
        RUBY
        inspect_source(src)
        expect(cop.offenses.size).to eq(1)
      end
    end
    
                return if next_line_empty?(heredoc_line(node, heredoc_node))
    
      it 'does not register offense when guard clause is after single line ' \
     'heredoc' do
    expect_no_offenses(<<~RUBY)
      def foo
        raise ArgumentError, <<-MSG unless path
          Must be called with mount point
        MSG
    
        it 'can schedule' do
      ss = Sidekiq::ScheduledSet.new
      q = Sidekiq::Queue.new
    
      it 'stubs the async call when in testing mode' do
    assert InlineWorker.perform_async(true)
    
        def read(request)
      request.cookies.each do |name, value|
        @cookies[name.to_s] = value
      end
    end
    
              namespace_stackable(:error_formatters, format.to_sym => formatter)
        end