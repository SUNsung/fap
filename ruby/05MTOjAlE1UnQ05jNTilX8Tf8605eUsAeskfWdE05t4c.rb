
        
              def feature_element_timing_key(feature_element)
        '\'#{feature_element.name}\' (#{feature_element.location})'
      end
    
              theme.create!
          Jekyll.logger.info 'Your new Jekyll theme, #{theme.name.cyan},' \
                             ' is ready for you in #{theme.path.to_s.cyan}!'
          Jekyll.logger.info 'For help getting started, read #{theme.path}/README.md.'
        end
        # rubocop:enable Metrics/AbcSize
      end
    end
  end
end

    
            def start(opts)
          @thread = Thread.new do
            # Use epoll if the kernel supports it
            EM.epoll
            EM.run do
              EM.error_handler { |e| log_error(e) }
    
    module Jekyll
  module Commands
    class Serve
      # The LiveReload protocol requires the server to serve livereload.js over HTTP
      # despite the fact that the protocol itself uses WebSockets.  This custom connection
      # class addresses the dual protocols that the server needs to understand.
      class HttpAwareConnection < EventMachine::WebSocket::Connection
        attr_reader :reload_body, :reload_size
    
        def lanes
      @lanes ||= {}
    end
    
          context 'when specify log_path' do
        context 'when command is archive' do
          let(:command) { 'archive' }
          it '--log-path option is not present' do
            expect do
              Fastlane::FastFile.new.parse('lane :test do
                carthage(command: '#{command}', log_path: 'bla.log')
              end').runner.execute(:test)
            end.to raise_error('Log path option is available only for 'build', 'bootstrap', and 'update' command.')
          end
        end
    
          it 'Does not include merge commits in the list of commits' do
        result = Fastlane::FastFile.new.parse('lane :test do
          changelog_from_git_commits(include_merges: false)
        end').runner.execute(:test)
    
          context 'as string with wildcards' do
        it 'executes the correct git command' do
          allow(Fastlane::Actions).to receive(:sh).with('git add *.txt', anything).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add(path: '*.txt', shell_escape: false)
          end').runner.execute(:test)
        end
      end
    
              # Override the already overridden swiftlint_version method to check
          # that the correct exectuable is being passed in as a parameter.
          allow(Fastlane::Actions::SwiftlintAction).to receive(:swiftlint_version) { |params|
            expect(params[:executable]).to eq(CUSTOM_EXECUTABLE_NAME)
            swiftlint_gem_version
          }
    
    if git.modified_files.include?('snapshot/lib/assets/SnapshotHelper.swift')
  warn('You modified `SnapshotHelper.swift`, make sure to update the version number at the bottom of the file to notify users about the new helper file.')
end
    
          def check
        create_event :payload => {}
      end
    end
    
          expect(data[:agents][guid_order(agent_list, :jane_weather_agent)]).not_to have_key(:propagate_immediately) # can't receive events
      expect(data[:agents][guid_order(agent_list, :jane_rain_notifier_agent)]).not_to have_key(:schedule) # can't be scheduled
    end
    
        def length
      @entries.length
    end
    
        def add(path, content)
      @pages[path] = content
    end
    
        def blank?
      body.blank?
    end
    
            doc
      end
    end
  end
end

    
              node.before(node.children).remove
        end
    
            css('h2:not([id]) a[id]:not([href])').each do |node|
          node.parent['id'] = node['id']
          node.before(node.children).remove
        end
    
          def instrument(env)
        return unless i = options[:instrumenter]
        env['rack.protection.attack'] = self.class.name.split('::').last.downcase
        i.instrument('rack.protection', env)
      end
    
            directives.compact.sort.join('; ')
      end
    
          def cookie_paths(path)
        path = '/' if path.to_s.empty?
        paths = []
        Pathname.new(path).descend { |p| paths << p.to_s }
        paths
      end
    
      def execute
    signal_deprecation_warning_for_pack
    
          # Install the gems to make them available locally when bundler does his local resolution
      post_install_messages = []
      pack.gems.each do |packed_gem|
        PluginManager.ui.debug('Installing, #{packed_gem.name}, version: #{packed_gem.version} file: #{packed_gem.file}')
        post_install_messages << LogStash::PluginManager::GemInstaller::install(packed_gem.file, packed_gem.plugin?)
      end
    
      it 'does object equality on config_hash and pipeline_id' do
    another_exact_pipeline = described_class.new(source, pipeline_id, ordered_config_parts, settings)
    expect(subject).to eq(another_exact_pipeline)
    
          # Returns the keyword of the `case` statement as a string.
      #
      # @return [String] the keyword of the `case` statement
      def keyword
        'case'
      end
    
    module RuboCop
  module AST
    # A node extension for `hash` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `hash` nodes within RuboCop.
    class HashNode < Node
      # Returns an array of all the key value pairs in the `hash` literal.
      #
      # @return [Array<PairNode>] an array of `pair` nodes
      def pairs
        each_pair.to_a
      end
    
          # Checks whether any argument of the node is a splat
      # argument, i.e. `*splat`.
      #
      # @return [Boolean] whether the node is a splat argument
      def splat_argument?
        arguments? &&
          (arguments.any?(&:splat_type?) || arguments.any?(&:restarg_type?))
      end
      alias rest_argument? splat_argument?