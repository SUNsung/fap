
        
        def graceful_require
  Jekyll::External.require_with_graceful_fail('json')
  JSON.pretty_generate(DATA)
end
    
          def scenario_name(keyword, name, source_line, indent)
        print_feature_element_name(
          keyword, name, source_line, indent
        )
      end
    
    module Jekyll
  module Commands
    class NewTheme < Jekyll::Command
      class << self
        def init_with_program(prog)
          prog.command(:'new-theme') do |c|
            c.syntax 'new-theme NAME'
            c.description 'Creates a new Jekyll theme scaffold'
            c.option 'code_of_conduct', \
                     '-c', '--code-of-conduct', \
                     'Include a Code of Conduct. (defaults to false)'
    
    module Jekyll
  module Commands
    class Serve
      # The LiveReload protocol requires the server to serve livereload.js over HTTP
      # despite the fact that the protocol itself uses WebSockets.  This custom connection
      # class addresses the dual protocols that the server needs to understand.
      class HttpAwareConnection < EventMachine::WebSocket::Connection
        attr_reader :reload_body, :reload_size
    
        # See {CapabilityHost#capability}
    def capability(*args)
      super
    rescue Errors::CapabilityNotFound => e
      raise Errors::GuestCapabilityNotFound,
        cap: e.extra_data[:cap],
        guest: name
    rescue Errors::CapabilityInvalid => e
      raise Errors::GuestCapabilityInvalid,
        cap: e.extra_data[:cap],
        guest: name
    end
    
            # This is what is called on the class to actually execute it. Any
        # subclasses should implement this method and do any option parsing
        # and validation here.
        def execute
        end
    
            # Called after the configuration is finalized and loaded to validate
        # this object.
        #
        # @param [Environment] env Vagrant::Environment object of the
        #   environment that this configuration has been loaded into. This
        #   gives you convenient access to things like the the root path
        #   and so on.
        # @param [ErrorRecorder] errors
        def validate(env, errors)
        end
      end
    end
  end
end

    
            # This is the method called to 'prepare' the provisioner. This is called
        # before any actions are run by the action runner (see {Vagrant::Actions::Runner}).
        # This can be used to setup shared folders, forward ports, etc. Whatever is
        # necessary on a 'meta' level.
        #
        # No return value is expected.
        def prepare
        end
    
            # This contains all the push implementations by name.
        #
        # @return [Registry<Symbol, Array<Class, Hash>>]
        attr_reader :pushes
    
            # This returns all the config classes for the various providers.
        #
        # @return [Hash]
        def provider_configs
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.configs[:provider])
            end
          end
        end
    
            # This is called early, before a machine is instantiated, to check
        # if this provider is installed. This should return true or false.
        #
        # If the provider is not installed and Vagrant determines it is
        # able to install this provider, then it will do so. Installation
        # is done by calling Environment.install_provider.
        #
        # If Environment.can_install_provider? returns false, then an error
        # will be shown to the user.
        def self.installed?
          # By default return true for backwards compat so all providers
          # continue to work.
          true
        end
    
        it 'returns false if the environment does not contain :userpaths' do
      expect(env).not_to use_userpaths
    end
  end
    
      auto_updates true
  depends_on cask: 'homebrew/cask-versions/adobe-photoshop-lightroom600'
    
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

    
          def has_footer
        @footer = (@page.footer || false) if @footer.nil? && @page
        !!@footer
      end
    
          def header
        if @header.nil?
          if page = @page.header
            @header = page.text_data
          else
            @header = false
          end
        end
        @header
      end
    
          def next_link
        label = 'Next &raquo;'
        if @versions.size == Gollum::Page.per_page
          link = '/history/#{@page.name}?page=#{@page_num+1}'
          %(<a href='#{link}' hotkey='l'>#{label}</a>)
        else
          %(<span class='disabled'>#{label}</span>)
        end
      end
    end
  end
end

    
          # http://stackoverflow.com/questions/9445760/bit-shifting-in-ruby
      def left_shift(int, shift)
        r = ((int & 0xFF) << (shift & 0x1F)) & 0xFFFFFFFF
        # 1>>31, 2**32
        (r & 2147483648) == 0 ? r : r - 4294967296
      end
    
    module Precious
  module Views
    class Layout < Mustache
      include Rack::Utils
      alias_method :h, :escape_html
    
    context 'Precious::Views::Page' do
  setup do
    examples = testpath 'examples'
    @path    = File.join(examples, 'test.git')
    FileUtils.cp_r File.join(examples, 'empty.git'), @path, :remove_destination => true
    @wiki = Gollum::Wiki.new(@path)
  end