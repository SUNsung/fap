
        
            def action_completed(completion_context: nil)
    end
    
            cmd << ['-am #{message.shellescape}']
        cmd << '--force' if options[:force]
        cmd << '-s' if options[:sign]
        cmd << tag.shellescape
        cmd << options[:commit].to_s if options[:commit]
    
            result = Fastlane::FastFile.new.parse('lane :test do
          add_git_tag ({
            tag: '#{tag}',
            message: '#{message}'
          })
        end').runner.execute(:test)
    
            expect(result.size).to eq(3)
        expect(result[0]).to eq('security create-keychain -p testpassword ~/Library/Keychains/test.keychain')
    
          it 'handles the exclude_dirs parameter with multiple  elements correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', exclude_dirs: ['.bundle', 'Packages/'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --exclude-dir .bundle --exclude-dir Packages/')
      end
    end
  end
end

    
            it 'executes the correct git command' do
          allow(Fastlane::Actions).to receive(:sh).with('git add #{path.shellescape}', anything).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add(path: '#{path}')
          end').runner.execute(:test)
        end
      end
    
            Fastlane::FastFile.new.parse('lane :test do
          import_certificate ({
            keychain_name: '#{keychain}',
            keychain_password: '#{password}',
            certificate_path: '#{cert_name}',
            certificate_password: '#{password}'
          })
        end').runner.execute(:test)
      end
    
          context 'when specify mode explicitly' do
        it 'uses lint mode as default' do
          result = Fastlane::FastFile.new.parse('lane :test do
            swiftlint
          end').runner.execute(:test)
    
          '`#{self.default_value}`'
    end
    
              it 'returns the default values' do
            @config = FastlaneCore::Configuration.create(@options, {}) # no user inputs
            values = @config.values
            expect(values[:cert_name]).to eq('production_default')
            expect(values[:output]).to eq('.')
            expect(values[:wait_processing_interval]).to eq(30)
          end
        end
    
        describe 'fill_environment' do
      it '#environment_variable_name uses the correct env variable' do
        result = Match::Utils.environment_variable_name(app_identifier: 'tools.fastlane.app', type: 'appstore')
        expect(result).to eq('sigh_tools.fastlane.app_appstore')
      end
    
        # advance scanner to pos after the next match of pattern and return the match
    def scan_next(pattern)
      return unless @s.scan_until(pattern)
      @s.matched
    end
    
      # Full error reports are disabled and caching is turned on.
  config.consider_all_requests_local       = false
  config.action_controller.perform_caching = true
    
    # Include LoggerSilence from ActiveSupport. This is needed to silent assets
# requests with `config.assets.quiet`, because the default silence method of
# the logging gem is no-op. See: https://github.com/TwP/logging/issues/11
Logging::Logger.send :alias_method, :local_level, :level
Logging::Logger.send :alias_method, :local_level=, :level=
Logging::Logger.send :include, LoggerSilence

    
      class Mention < ApplicationRecord
  end
    
        it 'generates the aspects_manage fixture', :fixture => true do
      get :index, params: {a_id: @aspect.id}
      save_fixture(html_for('body'), 'aspects_manage')
    end
    
        it 'generates a jasmine fixture', fixture: true do
      session[:mobile_view] = true
      get :new, format: :mobile
      save_fixture(html_for('body'), 'conversations_new_mobile')
    end
  end
end

    
    describe StatusMessagesController, :type => :controller do
  describe '#bookmarklet' do
    before do
      sign_in bob, scope: :user
    end
    
    LINE_SIZE = 80
DECORATION_CHAR = '#'
    
        # Create a {Sass::Selector::CommaSequence} containing only a single
    # {Sass::Selector::Sequence} which in turn contains only a single
    # {Sass::Selector::SimpleSequence}.
    #
    # @param subject [Boolean] Whether this is a subject selector
    # @param sseqs [Array<Sass::Selector::Sequence, String>]
    # @return [Sass::Selector::CommaSequence]
    def make_sseq(subject, *sseqs)
      make_seq(Sass::Selector::SimpleSequence.new(sseqs, subject))
    end
    
          options[:cache_store] ||= Sass::CacheStores::Chain.new(
        Sass::CacheStores::Memory.new, Sass::CacheStores::Filesystem.new(options[:cache_location]))
      # Support both, because the docs said one and the other actually worked
      # for quite a long time.
      options[:line_comments] ||= options[:line_numbers]
    
        # Same as `Kernel.puts`, but doesn't print anything if the `--quiet` option is set.
    #
    # @param args [Array] Passed on to `Kernel.puts`
    def puts(*args)
      return if @options[:for_engine][:quiet]
      Kernel.puts(*args)
    end
    
          # @see Base#watched_file?
      def watched_file?(filename)
        # Check against the root with symlinks resolved, since Listen
        # returns fully-resolved paths.
        filename =~ /\.s[ac]ss$/ && filename.start_with?(@real_root + File::SEPARATOR)
      end
    
      end
    
      # Summary is used on the Archive pages to return the first block of content from a post.
  def summary(input)
    if input.index(/\n\n/)
      input.split(/\n\n/)[0]
    else
      input
    end
  end