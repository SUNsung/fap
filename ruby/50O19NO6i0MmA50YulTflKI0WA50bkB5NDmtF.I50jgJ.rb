
        
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

    
      # True if a {Formula} is being built with a specific option
  # (which isn't named `with-*` or `without-*`).
  # @deprecated
  def include?(name)
    @args.include?('--#{name}')
  end
    
    module Homebrew
  def list
    # Use of exec means we don't explicitly exit
    list_unbrewed if ARGV.flag? '--unbrewed'
    
        results.map do |name|
      begin
        formula = Formulary.factory(name)
        canonical_name = formula.name
        canonical_full_name = formula.full_name
      rescue
        canonical_name = canonical_full_name = name
      end
      # Ignore aliases from results when the full name was also found
      if aliases.include?(name) && results.include?(canonical_full_name)
        next
      elsif (HOMEBREW_CELLAR/canonical_name).directory?
        pretty_installed(name)
      else
        name
      end
    end.compact
  end
end

    
      def report
    return @report if @report
    
      def self.require_universal_deps
    define_method(:require_universal_deps?) { true }
  end
    
      # GET /resource/unlock/new
  def new
    self.resource = resource_class.new
  end
    
      module Controllers
    autoload :Helpers,        'devise/controllers/helpers'
    autoload :Rememberable,   'devise/controllers/rememberable'
    autoload :ScopedViews,    'devise/controllers/scoped_views'
    autoload :SignInOut,      'devise/controllers/sign_in_out'
    autoload :StoreLocation,  'devise/controllers/store_location'
    autoload :UrlHelpers,     'devise/controllers/url_helpers'
  end
    
            warden.logout
        expire_data_after_sign_out!
        warden.clear_strategies_cache!
        warden.lock! if lock
    
          # Initialize script_name with nil to prevent infinite loops in
      # authenticated mounted engines in rails 4.2 and 5.0
      opts[:script_name] = nil
    
      private
    
      def set_size
    case params[:id]
    when 'featured'
      @account.pinned_statuses.count
    else
      raise ActiveRecord::NotFound
    end
  end
    
        def new
      authorize :email_domain_block, :create?
      @email_domain_block = EmailDomainBlock.new
    end
    
      private
    
      def account_feed_path?
    hub_topic_params[:controller] == 'accounts' && hub_topic_params[:action] == 'show' && hub_topic_params[:format] == 'atom'
  end
end

    
    lib = File.expand_path('../lib', __FILE__)
$LOAD_PATH.unshift(lib) unless $LOAD_PATH.include?(lib)
require 'capistrano/version'
    
      def vagrant_cli_command(command)
    puts '[vagrant] #{command}'
    stdout, stderr, status = Dir.chdir(VAGRANT_ROOT) do
      Open3.capture3('#{VAGRANT_BIN} #{command}')
    end
    
        def display_error_message(ex)
      unless options.backtrace
        Rake.application.options.suppress_backtrace_pattern = backtrace_pattern if backtrace_pattern
        trace '(Backtrace restricted to imported tasks)'
      end
    
          attr_reader :locations, :values, :fetched_keys
    
          def get_installer_for(plugin_name)
        uri = pack_uri(plugin_name)
    
          PluginManager.ui.info('Installing file: #{local_file}')
      uncompressed_path = uncompress(local_file)
      PluginManager.ui.debug('Pack uncompressed to #{uncompressed_path}')
      pack = LogStash::PluginManager::PackInstaller::Pack.new(uncompressed_path)
      raise PluginManager::InvalidPackError, 'The pack must contains at least one plugin' unless pack.valid?
    
    module RuboCop
  module Cop
    module Style
      # This cop checks for braces around the last parameter in a method call
      # if the last parameter is a hash.
      # It supports `braces`, `no_braces` and `context_dependent` styles.
      #
      # @example EnforcedStyle: braces
      #   # The `braces` style enforces braces around all method
      #   # parameters that are hashes.
      #
      #   # bad
      #   some_method(x, y, a: 1, b: 2)
      #
      #   # good
      #   some_method(x, y, {a: 1, b: 2})
      #
      # @example EnforcedStyle: no_braces (default)
      #   # The `no_braces` style checks that the last parameter doesn't
      #   # have braces around it.
      #
      #   # bad
      #   some_method(x, y, {a: 1, b: 2})
      #
      #   # good
      #   some_method(x, y, a: 1, b: 2)
      #
      # @example EnforcedStyle: context_dependent
      #   # The `context_dependent` style checks that the last parameter
      #   # doesn't have braces around it, but requires braces if the
      #   # second to last parameter is also a hash literal.
      #
      #   # bad
      #   some_method(x, y, {a: 1, b: 2})
      #   some_method(x, y, {a: 1, b: 2}, a: 1, b: 2)
      #
      #   # good
      #   some_method(x, y, a: 1, b: 2)
      #   some_method(x, y, {a: 1, b: 2}, {a: 1, b: 2})
      class BracesAroundHashParameters < Cop
        include ConfigurableEnforcedStyle
        include RangeHelp
    
    module RuboCop
  module AST
    # A node extension for `for` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `for` nodes within RuboCop.
    class ForNode < Node
      # Returns the keyword of the `for` statement as a string.
      #
      # @return [String] the keyword of the `until` statement
      def keyword
        'for'
      end