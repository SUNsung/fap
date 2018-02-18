
        
                def boolean_tag_option(key)
          %(#{key}='#{key}')
        end
    
      def test_redirect_to_params
    error = assert_raise(ActionController::UnfilteredParameters) do
      get :redirect_to_params
    end
    assert_equal 'unable to convert unpermitted parameters to hash', error.message
  end
    
            def spec(spec, config = {})
          Resolver.new(config).spec(spec)
        end
    
              # Returns fully resolved connection, accepts hash, string or symbol.
          # Always returns a hash.
          #
          # == Examples
          #
          # Symbol representing current environment.
          #
          #   Resolver.new('production' => {}).resolve_connection(:production)
          #   # => {}
          #
          # One layer deep hash of connection values.
          #
          #   Resolver.new({}).resolve_connection('adapter' => 'sqlite3')
          #   # => { 'adapter' => 'sqlite3' }
          #
          # Connection URL.
          #
          #   Resolver.new({}).resolve_connection('postgresql://localhost/foo')
          #   # => { 'host' => 'localhost', 'database' => 'foo', 'adapter' => 'postgresql' }
          #
          def resolve_connection(spec)
            case spec
            when Symbol
              resolve_symbol_connection spec
            when String
              resolve_url_connection spec
            when Hash
              resolve_hash_connection spec
            end
          end
    
        test 'response_body value is wrapped in an array when the value is a String' do
      controller = BareController.new
      controller.set_request!(ActionDispatch::Request.empty)
      controller.set_response!(BareController.make_response!(controller.request))
      controller.index
      assert_equal ['Hello world'], controller.response_body
    end
    
        # An email was generated.
    def process(event)
      debug do
        mailer = event.payload[:mailer]
        action = event.payload[:action]
        '#{mailer}##{action}: processed outbound mail in #{event.duration.round(1)}ms'
      end
    end
    
    FIXTURE_LOAD_PATH = File.expand_path('fixtures', __dir__)
ActionMailer::Base.view_paths = FIXTURE_LOAD_PATH
    
    def bottle_tag
  if MacOS.version >= :lion
    MacOS.cat
  elsif MacOS.version == :snow_leopard
    Hardware::CPU.is_64_bit? ? :snow_leopard : :snow_leopard_32
  else
    # Return, e.g., :tiger_g3, :leopard_g5_64, :leopard_64 (which is Intel)
    if Hardware::CPU.type == :ppc
      tag = '#{MacOS.cat}_#{Hardware::CPU.family}'.to_sym
    else
      tag = MacOS.cat
    end
    MacOS.prefer_64_bit? ? '#{tag}_64'.to_sym : tag
  end
end
    
      def <<(o)
    @settings << o
    self
  end
    
      def find_internal_commands(directory)
    directory.children.reduce([]) do |cmds, f|
      cmds << f.basename.to_s.sub(/\.(?:rb|sh)$/, '') if f.file?
      cmds
    end
  end
end

    
        first_warning = true
    methods.each do |method|
      unless checks.respond_to?(method)
        Homebrew.failed = true
        puts 'No check available by the name: #{method}'
        next
      end
    
    require 'formula_versions'
require 'migrator'
require 'formulary'
require 'descriptions'
    
          To export the needed variables, add them to your dotfiles.
       * On Bash, add them to `~/.bash_profile`.
       * On Zsh, add them to `~/.zprofile` instead.
    
      def process_bootstrap
    log_status 'Convert Bootstrap LESS to Sass'
    puts ' repo   : #@repo_url'
    puts ' branch : #@branch_sha #@repo_url/tree/#@branch'
    puts ' save to: #{@save_to.to_json}'
    puts ' twbs cache: #{@cache_path}'
    puts '-' * 60
    
        def read(file)
      if file.respond_to?(:read)
        file.read
      else
        open(file, 'rb') {|f| f.read}
      end
    end
  end
end

    
          # Prints a title in blue with surrounding newlines.
      def title(text)
        # Use $stdout directly to bypass the indentation that our `puts` does.
        $stdout.puts(color.colorize('\n#{text}\n', :blue))
      end
    
        describe 'when setting user and port' do
      subject { dsl.roles(:all).map { |server| '#{server.user}@#{server.hostname}:#{server.port}' }.first }
    
      it 'provides a --format option which enables the choice of output formatting'