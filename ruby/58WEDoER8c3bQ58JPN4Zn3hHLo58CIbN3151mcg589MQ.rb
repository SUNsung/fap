
        
        begin
  require 'cucumber/rake/task'
  Cucumber::Rake::Task.new(:features) do |t|
    t.profile = 'travis'
  end
  Cucumber::Rake::Task.new(:'features:html', 'Run Cucumber features and produce HTML output') do |t|
    t.profile = 'html_report'
  end
rescue LoadError
  desc 'Cucumber rake task not available'
  task :features do
    abort 'Cucumber rake task is not available. Be sure to install cucumber as a gem or plugin'
  end
end
    
    $LOAD_PATH.unshift File.expand_path('../lib', __dir__)
    
          #
    
    module Jekyll
  module Drops
    class UnifiedPayloadDrop < Drop
      mutable true
    
        def action_launched(launch_context: nil)
      unless did_show_message?
        show_message
      end
    
    module Commander
  # This class override the run method with our custom stack trace handling
  # In particular we want to distinguish between user_error! and crash! (one with, one without stack trace)
  class Runner
    # Code taken from https://github.com/commander-rb/commander/blob/master/lib/commander/runner.rb#L50
    
        # it's preferred to use self.string? In most cases, except in commander_generator.rb, cause... reasons
    def is_string
      return @is_string
    end
    
    module CrossplatformShellwords
  # handle switching between implementations of shellescape
  def shellescape(str)
    if FastlaneCore::Helper.windows?
      WindowsShellwords.shellescape(str)
    else
      # using `escape` instead of expected `shellescape` here
      # which corresponds to Shellword's `String.shellescape` implementation
      # https://github.com/ruby/ruby/blob/1cf2bb4b2085758112503e7da7414d1ef52d4f48/lib/shellwords.rb#L216
      Shellwords.escape(str)
    end
  end
  module_function :shellescape
    
    full_params = ARGV.shelljoin
    
            if value.present?
          # We refresh the expiration time so frequently used keys stick
          # around, removing the need for querying the database as much as
          # possible.
          #
          # A key may be empty when we looked up a GitHub user (for example) but
          # did not find a matching GitLab user. In that case we _don't_ want to
          # refresh the TTL so we automatically pick up the right data when said
          # user were to register themselves on the GitLab instance.
          Redis::Cache.with { |redis| redis.expire(key, timeout) }
        end
    
          def request_count_counter
        @request_counter ||= Gitlab::Metrics.counter(
          :github_importer_request_count,
          'The number of GitHub API calls performed when importing projects'
        )
      end
    end
  end
end

    
    module Gitlab
  module GithubImport
    module Importer
      class LfsObjectsImporter
        include ParallelScheduling
    
              new(hash)
        end
    
        def data_url_string?(str)
      str.start_with?(DATA_URL)
    end
    
        def document?
      @content =~ DOCUMENT_RGX
    end
    
    require 'active_support/subscriber'
    
            title = at_css('h1').content.strip
        if root_page?
          at_css('h1').content = 'Angular 2 Documentation'
        elsif title == 'Index'
          at_css('h1').content = result[:entries].first.name
        elsif title == 'Angular'
          at_css('h1').content = slug.split('/').last.gsub('-', ' ')
        elsif at_css('.breadcrumbs') && title != result[:entries].first.name
          at_css('h1').content = result[:entries].first.name
        end
    
        if successfully_sent?(resource)
      respond_with({}, location: after_resending_confirmation_instructions_path_for(resource_name))
    else
      respond_with(resource)
    end
  end
    
      def failed_strategy
    request.respond_to?(:get_header) ? request.get_header('omniauth.error.strategy') : request.env['omniauth.error.strategy']
  end
    
    class TestApp < Rails::Application
  config.root = File.dirname(__FILE__)
  config.session_store :cookie_store, key: 'cookie_store_key'
  secrets.secret_token    = 'secret_token'
  secrets.secret_key_base = 'secret_key_base'
  config.eager_load = false
    
          def remove_domain_from_uri(uri)
        [uri.path.sub(/\A\/+/, '/'), uri.query].compact.join('?')
      end
    
      if record && record.respond_to?(:timedout?) && warden.authenticated?(scope) &&
     options[:store] != false && !env['devise.skip_timeoutable']
    last_request_at = warden.session(scope)['last_request_at']
    
          @class_name = (options[:class_name] || name.to_s.classify).to_s
      @klass = Devise.ref(@class_name)
    
        def new
      authorize :email_domain_block, :create?
      @email_domain_block = EmailDomainBlock.new
    end
    
    class Api::OEmbedController < Api::BaseController
  respond_to :json
    
      def future_expires
    Time.now.utc + lease_seconds_or_default
  end
    
          def has_header
        @header = (@page.header || false) if @header.nil? && @page
        !!@header
      end
    
          def previous_link
      end
    
          def header_content
        has_header && @header.formatted_data
      end
    
        get '/pages'
    
      test 'extract destination file name in case of path renaming' do
    view = Precious::Views::LatestChanges.new
    assert_equal 'newname.md', view.extract_renamed_path_destination('oldname.md => newname.md')
    assert_equal 'newDirectoryName/fileName.md', view.extract_renamed_path_destination('{oldDirectoryName => newDirectoryName}/fileName.md')
  end
    
      s.name              = 'gollum'
  s.version           = '4.1.4'
  s.date              = '2018-10-01'
  s.rubyforge_project = 'gollum'
  s.license           = 'MIT'
    
      # Execute this command. See Clamp::Command#execute and Clamp's documentation
  def execute
    logger.level = :warn
    logger.level = :info if verbose? # --verbose
    logger.level = :debug if debug? # --debug
    if log_level
      logger.level = log_level.to_sym
    end
    
      option '--identifier-prefix', 'IDENTIFIER_PREFIX',
    'Reverse domain prefix prepended to package identifier, ' \
    'ie. 'org.great.my'. If this is omitted, the identifer ' \
    'will be the package name.'
  option '--payload-free', :flag, 'Define no payload, assumes use of script options.',
    :default => false
  option '--ownership', 'OWNERSHIP',
    '--ownership option passed to pkgbuild. Defaults to 'recommended'. ' \
    'See pkgbuild(1).', :default => 'recommended' do |value|
    if !OWNERSHIP_OPTIONS.include?(value)
      raise ArgumentError, 'osxpkg-ownership value of '#{value}' is invalid. ' \
        'Must be one of #{OWNERSHIP_OPTIONS.join(', ')}'
    end
    value
  end
    
          # Capture the output, which will be JSON metadata describing this python
      # package. See fpm/lib/fpm/package/pyfpm/get_metadata.py for more
      # details.
      logger.info('fetching package metadata', :setup_cmd => setup_cmd)
    
      def architecture
    case @architecture
    when nil, 'native'
      @architecture = %x{uname -p}.chomp
    end
    # 'all' is a valid arch according to
    # http://www.bolthole.com/solaris/makeapackage.html
    
      # Input a tarball. Compressed tarballs should be OK.
  def input(input_path)
    # use part of the filename as the package name
    self.name = File.basename(input_path).split('.').first
    
        desc 'Package #{@name}' unless ::Rake.application.last_description
    
      # Return whether the command returned by ar_cmd can create deterministic archives
  def ar_cmd_deterministic?
    ar_cmd if not defined? @@ar_cmd_deterministic
    return @@ar_cmd_deterministic
  end