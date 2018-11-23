
        
              def extract_details(options) # :doc:
        @lookup_context.registered_details.each_with_object({}) do |key, details|
          value = options[key]
    
            # Stub out calls related to the execution environment
        client = double('ingester_client')
        session = FastlaneCore::AnalyticsSession.new(analytics_ingester_client: client)
        expect(client).to receive(:post_event).with({
            client_id: p_hash,
            category: 'fastlane Client Langauge - ruby',
            action: :launch,
            label: nil,
            value: nil
        })
    
          it 'sets the project directory to other' do
        result = Fastlane::FastFile.new.parse('lane :test do
          carthage(project_directory: 'other')
        end').runner.execute(:test)
    
            expect(result[2]).to start_with('security set-keychain-settings')
        expect(result[2]).to include('-t 300')
        expect(result[2]).to_not(include('-l'))
        expect(result[2]).to_not(include('-u'))
        expect(result[2]).to include('~/Library/Keychains/test.keychain')
      end
    
          it 'handles no extension or extensions parameters' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.')
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}'')
      end
    
          context 'when specify mode explicitly' do
        it 'uses lint mode as default' do
          result = Fastlane::FastFile.new.parse('lane :test do
            swiftlint
          end').runner.execute(:test)
    
            it 'supports modifying the value after taken from the environment' do
          c = FastlaneCore::ConfigItem.new(key: :test,
                                      env_name: 'FL_TEST')
          config = FastlaneCore::Configuration.create([c], {})
          ENV['FL_TEST'] = '123value'
          config.values[:test].gsub!('123', '456')
          expect(config.values[:test]).to eq('456value')
          ENV.delete('FL_TEST')
        end
    
    # test monkey patched method on both (simulated) OSes
describe 'monkey patch of String.shellescape (via CrossplatformShellwords)' do
  describe 'on Windows' do
    before(:each) do
      allow(FastlaneCore::Helper).to receive(:windows?).and_return(true)
    end
    
          def store_page?(page)
        page[:entries].present?
      end
    
        def initialize
      @pages = {}
    end
    
        def url
      @url ||= URL.parse request.base_url
    end
    
        def format_path(path)
      path.to_s.remove File.join(File.expand_path('.'), '')
    end
    
        def origin
      if scheme && host
        origin = '#{scheme}://#{host}'
        origin.downcase!
        origin << ':#{port}' if port
        origin
      else
        nil
      end
    end
    
              # If we asked for reversed ordering, then reverse it
          vms.reverse! if options[:reverse]
    
              # Register a new provider class only if a name was given
          data[:providers].register(name.to_sym, &block) if name != UNSET_VALUE
    
            # This is the method called to provision the system. This method
        # is expected to do whatever necessary to provision the system (create files,
        # SSH, etc.)
        def provision!
        end
    
                    raise Errors::VMNoMatchError if machines.empty?
              else
                # String name, just look for a specific VM
                @logger.debug('Finding machine that match name: #{name}')
                machines << get_machine.call(name.to_sym)
                raise Errors::VMNotFoundError, name: name if !machines[0]
              end
            end
          else
            # No name was given, so we return every VM in the order
            # configured.
            @logger.debug('Loading all machines...')
            machines = @env.machine_names.map do |machine_name|
              get_machine.call(machine_name)
            end
          end
    
            # This is called early, before a machine is instantiated, to check
        # if this provider is usable. This should return true or false.
        #
        # If raise_error is true, then instead of returning false, this
        # should raise an error with a helpful message about why this
        # provider cannot be used.
        #
        # @param [Boolean] raise_error If true, raise exception if not usable.
        # @return [Boolean]
        def self.usable?(raise_error=false)
          # Return true by default for backwards compat since this was
          # introduced long after providers were being written.
          true
        end
    
        # Description formatted to work well as page title when viewing gist
    if f.core_formula?
      descr = '#{f.name} on #{OS_VERSION} - Homebrew build logs'
    else
      descr = '#{f.name} (#{f.full_name}) on #{OS_VERSION} - Homebrew build logs'
    end
    url = create_gist(files, descr)
    
          def has_sidebar
        @sidebar = (@page.sidebar || false) if @sidebar.nil? && @page
        !!@sidebar
      end
    
          def has_path
        !@path.nil?
      end
    
        body = last_response.body
    
      test 'remove page extentions' do
    view = Precious::Views::LatestChanges.new
    assert_equal 'page', view.remove_page_extentions('page.wiki')
    assert_equal 'page-wiki', view.remove_page_extentions('page-wiki.md')
    assert_equal 'file.any_extention', view.remove_page_extentions('file.any_extention')
  end
    
        def emoji(name)
      if emoji = Gemojione.index.find_by_name(name)
        IO.read(EMOJI_PATHNAME.join('#{emoji['unicode']}.png'))
      else
        fail ArgumentError, 'emoji `#{name}' not found'
      end
    end
    
        def initialize(dir, existing, attempted, message = nil)
      @dir            = dir
      @existing_path  = existing
      @attempted_path = attempted
      super(message || 'Cannot write #{@dir}/#{@attempted_path}, found #{@dir}/#{@existing_path}.')
    end
  end
end