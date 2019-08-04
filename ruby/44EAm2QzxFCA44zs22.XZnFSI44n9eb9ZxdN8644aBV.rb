
        
        def remove_head_from_history(markdown)
  index = markdown =~ %r!^##\s+\d+\.\d+\.\d+!
  markdown[index..-1]
end
    
    require 'benchmark/ips'
require 'jekyll'
require 'json'
    
      p.action do |args, _|
    if args.empty?
      Jekyll.logger.error 'A subcommand is required.'
      puts p
      abort
    else
      subcommand = args.first
      unless p.has_command? subcommand
        Jekyll.logger.abort_with 'fatal: 'jekyll #{args.first}' could not' \
          ' be found. You may need to install the jekyll-#{args.first} gem' \
          ' or a related gem to be able to use this subcommand.'
      end
    end
  end
end

    
      def sign_in_params
    devise_parameter_sanitizer.sanitize(:sign_in)
  end
    
    class TestApp < Rails::Application
  config.root = File.dirname(__FILE__)
  config.session_store :cookie_store, key: 'cookie_store_key'
  secrets.secret_token    = 'secret_token'
  secrets.secret_key_base = 'secret_key_base'
  config.eager_load = false
    
            !!user
      end
    
        # Include the chosen devise modules in your model:
    #
    #   devise :database_authenticatable, :confirmable, :recoverable
    #
    # You can also give any of the devise configuration values in form of a hash,
    # with specific values for this model. Please check your Devise initializer
    # for a complete description on those values.
    #
    def devise(*modules)
      options = modules.extract_options!.dup
    
          def remember_me?(token, generated_at)
        # TODO: Normalize the JSON type coercion along with the Timeoutable hook
        # in a single place https://github.com/plataformatec/devise/blob/ffe9d6d406e79108cf32a2c6a1d0b3828849c40b/lib/devise/hooks/timeoutable.rb#L14-L18
        if generated_at.is_a?(String)
          generated_at = time_from_json(generated_at)
        end
    
    module Devise
  module Models
    # Timeoutable takes care of verifying whether a user session has already
    # expired or not. When a session expires after the configured time, the user
    # will be asked for credentials again, it means, they will be redirected
    # to the sign in page.
    #
    # == Options
    #
    # Timeoutable adds the following options to devise_for:
    #
    #   * +timeout_in+: the interval to timeout the user session without activity.
    #
    # == Examples
    #
    #   user.timedout?(30.minutes.ago)
    #
    module Timeoutable
      extend ActiveSupport::Concern
    
        it 'uses older tags when needed', :needs_macos do
      subject[:mavericks] = 'foo'
      expect(subject.send(:find_matching_tag, :mavericks)).to eq(:mavericks)
      expect(subject.send(:find_matching_tag, :yosemite)).to eq(:mavericks)
    end
    
      it 'unnecessary build.without? conditional' do
    expect_offense(<<~RUBY)
      class Foo < Formula
        desc 'foo'
        url 'https://brew.sh/foo-1.0.tgz'
        def post_install
          return if build.without? '--without-bar'
                                    ^^^^^^^^^^^^^ Don't duplicate 'without': Use `build.without? \'bar\'` to check for \'--without-bar\'
        end
      end
    RUBY
  end
    
    describe Formula do
  describe '#uses_from_macos' do
    before do
      allow(OS).to receive(:mac?).and_return(false)
    end
    
        it 'allows specifying deprecated options as a Hash from an Array/String to an Array/String' do
      subject.deprecated_option(['foo1', 'foo2'] => 'bar1', 'foo3' => ['bar2', 'bar3'])
      expect(subject.deprecated_options).to include(DeprecatedOption.new('foo1', 'bar1'))
      expect(subject.deprecated_options).to include(DeprecatedOption.new('foo2', 'bar1'))
      expect(subject.deprecated_options).to include(DeprecatedOption.new('foo3', 'bar2'))
      expect(subject.deprecated_options).to include(DeprecatedOption.new('foo3', 'bar3'))
    end
    
          its(:suggestion) { is_expected.to match(%r{brew cask install homebrew/cask-versions/adoptopenjdk8}) }
      its(:cask) { is_expected.to eq('homebrew/cask-versions/adoptopenjdk8') }
    end
    
          it 'adds the appropriate curl args' do
        expect(subject).to receive(:system_command!) { |*, args:, **|
          expect(args.each_cons(2)).to include(['-e', 'https://somehost/also'])
        }
    
    require 'cask/cmd/abstract_command'
require 'cask/cmd/--cache'
require 'cask/cmd/audit'
require 'cask/cmd/automerge'
require 'cask/cmd/cat'
require 'cask/cmd/create'
require 'cask/cmd/doctor'
require 'cask/cmd/edit'
require 'cask/cmd/fetch'
require 'cask/cmd/home'
require 'cask/cmd/info'
require 'cask/cmd/install'
require 'cask/cmd/list'
require 'cask/cmd/outdated'
require 'cask/cmd/reinstall'
require 'cask/cmd/style'
require 'cask/cmd/uninstall'
require 'cask/cmd/upgrade'
require 'cask/cmd/zap'
    
            it 'does not notify' do
          is_expected.to_not change(Notification, :count)
        end
      end
    
      def vagrant_cli_command(command)
    puts '[vagrant] #{command}'
    stdout, stderr, status = Dir.chdir(VAGRANT_ROOT) do
      Open3.capture3('#{VAGRANT_BIN} #{command}')
    end
    
          OptionParser.new do |opts|
        opts.banner = 'See full documentation at http://capistranorb.com/.'
        opts.separator ''
        opts.separator 'Install capistrano in a project:'
        opts.separator '    bundle exec cap install [STAGES=qa,staging,production,...]'
        opts.separator ''
        opts.separator 'Show available tasks:'
        opts.separator '    bundle exec cap -T'
        opts.separator ''
        opts.separator 'Invoke (or simulate invoking) a task:'
        opts.separator '    bundle exec cap [--dry-run] STAGE TASK'
        opts.separator ''
        opts.separator 'Advanced options:'
    
        def configure_scm
      Capistrano::Configuration::SCMResolver.new.resolve
    end
    
          def trusted_keys
        @trusted_keys.dup
      end
    
            def correct(processed_source, node)
          return if %i[kwarg kwoptarg].include?(node.type)
    
    module RuboCop
  module Cop
    module Style
      # This cop checks for trailing comma in argument lists.
      #
      # @example EnforcedStyleForMultiline: consistent_comma
      #   # bad
      #   method(1, 2,)
      #
      #   # good
      #   method(1, 2)
      #
      #   # good
      #   method(
      #     1, 2,
      #     3,
      #   )
      #
      #   # good
      #   method(
      #     1,
      #     2,
      #   )
      #
      # @example EnforcedStyleForMultiline: comma
      #   # bad
      #   method(1, 2,)
      #
      #   # good
      #   method(1, 2)
      #
      #   # good
      #   method(
      #     1,
      #     2,
      #   )
      #
      # @example EnforcedStyleForMultiline: no_comma (default)
      #   # bad
      #   method(1, 2,)
      #
      #   # good
      #   method(1, 2)
      #
      #   # good
      #   method(
      #     1,
      #     2
      #   )
      class TrailingCommaInArguments < Cop
        include TrailingComma
    
        it 'registers an offense if no method is defined' do
      src = <<~RUBY
        A.instance_eval do
          #{modifier}
        end
      RUBY
      inspect_source(src)
      expect(cop.offenses.size).to eq(1)
    end
    
          # Checks whether this `block` literal belongs to a lambda.
      #
      # @return [Boolean] whether the `block` literal belongs to a lambda
      def lambda?
        send_node.method?(:lambda)
      end
    
      def send_sinatra_file(path, &missing_file_block)
    file_path = File.join(File.dirname(__FILE__), 'public',  path)
    file_path = File.join(file_path, 'index.html') unless file_path =~ /\.[a-z]+$/i
    File.exist?(file_path) ? send_file(file_path) : missing_file_block.call
  end
    
        def render(context)
      quote = paragraphize(super)
      author = '<strong>#{@by.strip}</strong>' if @by
      if @source
        url = @source.match(/https?:\/\/(.+)/)[1].split('/')
        parts = []
        url.each do |part|
          if (parts + [part]).join('/').length < 32
            parts << part
          end
        end
        source = parts.join('/')
        source << '/&hellip;' unless source == @source
      end
      if !@source.nil?
        cite = ' <cite><a href='#{@source}'>#{(@title || source)}</a></cite>'
      elsif !@title.nil?
        cite = ' <cite>#{@title}</cite>'
      end
      blockquote = if @by.nil?
        quote
      elsif cite
        '#{quote}<footer>#{author + cite}</footer>'
      else
        '#{quote}<footer>#{author}</footer>'
      end
      '<blockquote>#{blockquote}</blockquote>'
    end
    
    def config_tag(config, key, tag=nil, classname=nil)
  options     = key.split('.').map { |k| config[k] }.last #reference objects with dot notation
  tag       ||= 'div'
  classname ||= key.sub(/_/, '-').sub(/\./, '-')
  output      = '<#{tag} class='#{classname}''