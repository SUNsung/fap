
        
          </body>
</html>
HTML
CONTENT_NOT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
          def step_name(_keyword, _step_match, status, _source_indent, _background, _file_colon_line)
        @io.print CHARS[status]
        @io.print ' '
      end
      # rubocop:enable Metrics/ParameterLists
    
              reload_file = File.join(Serve.singleton_class::LIVERELOAD_DIR, 'livereload.js')
    
        def defaults_deprecate_type(old, current)
      Jekyll.logger.warn 'Defaults:', 'The '#{old}' type has become '#{current}'.'
      Jekyll.logger.warn 'Defaults:', 'Please update your front-matter defaults to use \
                        'type: #{current}'.'
    end
  end
end

    
        You can read more about this change at:
      https://www.playframework.com/documentation/2.3.x/Migration23
      https://www.playframework.com/documentation/2.3.x/Highlights23
    EOS
  when 'haskell-platform' then <<-EOS.undent
    We no longer package haskell-platform. Consider installing ghc
    and cabal-install instead:
      brew install ghc cabal-install
    
      def post_superenv_hacks
    # Only allow Homebrew-approved directories into the PATH, unless
    # a formula opts-in to allowing the user's path.
    if formula.env.userpaths? || reqs.any? { |rq| rq.env.userpaths? }
      ENV.userpaths!
    end
  end
    
        dirs.each do |d|
      files = []
      d.find { |pn| files << pn unless pn.directory? }
      print_remaining_files files, d
    end
    
      def python(_options = {}, &block)
    opoo 'Formula#python is deprecated and will go away shortly.'
    block.call if block_given?
    PythonRequirement.new
  end
  alias_method :python2, :python
  alias_method :python3, :python
end

    
      # PUT /resource/password
  def update
    self.resource = resource_class.reset_password_by_token(resource_params)
    yield resource if block_given?
    
          def remember_cookie_values(resource)
        options = { httponly: true }
        options.merge!(forget_cookie_values(resource))
        options.merge!(
          value: resource.class.serialize_into_cookie(resource),
          expires: resource.remember_expires_at
        )
      end
    
        # Choose whether we should respond in an HTTP authentication fashion,
    # including 401 and optional headers.
    #
    # This method allows the user to explicitly disable HTTP authentication
    # on AJAX requests in case they want to redirect on failures instead of
    # handling the errors on their own. This is useful in case your AJAX API
    # is the same as your public API and uses a format like JSON (so you
    # cannot mark JSON as a navigational format).
    def http_auth?
      if request.xhr?
        Devise.http_authenticatable_on_xhr
      else
        !(request_format && is_navigational_format?)
      end
    end
    
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
    
            # Allows setting options from a hash. By default this simply calls
        # the `#{key}=` method on the config class with the value, which is
        # the expected behavior most of the time.
        #
        # This is expected to mutate itself.
        #
        # @param [Hash] options A hash of options to set on this configuration
        #   key.
        def set_options(options)
          options.each do |key, value|
            send('#{key}=', value)
          end
        end
    
            # Mounts a shared folder.
        #
        # This method should create, mount, and properly set permissions
        # on the shared folder. This method should also properly
        # adhere to any configuration values such as `shared_folder_uid`
        # on `config.vm`.
        #
        # @param [String] name The name of the shared folder.
        # @param [String] guestpath The path on the machine which the user
        #   wants the folder mounted.
        # @param [Hash] options Additional options for the shared folder
        #   which can be honored.
        def mount_shared_folder(name, guestpath, options)
          raise BaseError, _key: :unsupported_shared_folder
        end
    
            # This is the method called to 'prepare' the provisioner. This is called
        # before any actions are run by the action runner (see {Vagrant::Actions::Runner}).
        # This can be used to setup shared folders, forward ports, etc. Whatever is
        # necessary on a 'meta' level.
        #
        # No return value is expected.
        def prepare
        end
    
                    @env.machine_names.each do |machine_name|
                  if machine_name =~ regex
                    machines << get_machine.call(machine_name)
                  end
                end
    
            # This registers a plugin. This should _NEVER_ be called by the public
        # and should only be called from within Vagrant. Vagrant will
        # automatically register V2 plugins when a name is set on the
        # plugin.
        def register(plugin)
          if !@registered.include?(plugin)
            @logger.info('Registered plugin: #{plugin.name}')
            @registered << plugin
          end
        end
    
            # Sentinel value denoting that a value has not been set.
        UNSET_VALUE = Object.new
    
      def generate_cmd_manpages(glob)
    cmd_paths = Pathname.glob(glob).sort
    man_page_lines = []
    man_args = Homebrew.args
    cmd_paths.each do |cmd_path|
      begin
        cmd_parser = Homebrew.send(cmd_arg_parser(cmd_path))
        man_page_lines << cmd_manpage_lines(cmd_parser).join
      rescue NoMethodError
        man_page_lines << path_glob_commands(cmd_path.to_s).first
      end
    end
    Homebrew.args = man_args
    man_page_lines
  end
    
    RSpec.configure do |config|
  config.order = :random
    
        it 'with options' do
      expect_offense(<<~RUBY, '/homebrew-core/')
        class Foo < Formula
          url 'https://example.com/foo-1.0.tgz'
          option 'with-examples'
          ^^^^^^^^^^^^^^^^^^^^^^ Formulae should not have an `option`
        end
      RUBY
    end
  end
end

    
      def initialize(repo: 'twbs/bootstrap', branch: 'master', save_to: {}, cache_path: 'tmp/converter-cache-bootstrap')
    @logger     = Logger.new
    @repo       = repo
    @branch     = branch || 'master'
    @branch_sha = get_branch_sha
    @cache_path = cache_path
    @repo_url   = 'https://github.com/#@repo'
    @save_to    = {
        js:    'assets/javascripts/bootstrap',
        scss:  'assets/stylesheets/bootstrap',
        fonts: 'assets/fonts/bootstrap'}.merge(save_to)
  end
    
    
    # replace first level properties in the css with yields
    # replace_properties('a { color: white }') { |props| props.gsub 'white', 'red' }
    def replace_properties(css, &block)
      s = CharStringScanner.new(css)
      s.skip_until /#{RULE_OPEN_BRACE_RE}\n?/
      from = s.pos
      m = s.scan_next(/\s*#{SELECTOR_RE}#{RULE_OPEN_BRACE_RE}/) || s.scan_next(/\s*#{RULE_CLOSE_BRACE_RE}/)
      to = s.pos - m.length - 1
      replace_substrings_at css, [(from .. to)], &block
    end
    
      def symlinked?(symlink_path, target_path)
    '[ #{symlink_path} -ef #{target_path} ]'
  end
    
          class Properties
        def initialize
          @properties = {}
        end
    
          # Given a callable that provides a value, wrap the callable with another
      # object that responds to `call`. This new object will perform validation
      # and then return the original callable's value.
      #
      # If the callable is a `Question`, the object returned by this method will
      # also be a `Question` (a `ValidatedQuestion`, to be precise). This
      # ensures that `is_a?(Question)` remains true even after the validation
      # wrapper is applied. This is needed so that `Configuration#is_question?`
      # works as expected.
      #
      def assert_valid_later(key, callable)
        validation_callback = lambda do
          value = callable.call
          assert_valid_now(key, value)
          value
        end