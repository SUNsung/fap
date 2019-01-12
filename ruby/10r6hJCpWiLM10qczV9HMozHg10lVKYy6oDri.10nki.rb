
        
              def _find_all(path, prefixes, args, outside_app)
        prefixes = [prefixes] if String === prefixes
        prefixes.each do |prefix|
          paths.each do |resolver|
            if outside_app
              templates = resolver.find_all_anywhere(path, prefix, *args)
            else
              templates = resolver.find_all(path, prefix, *args)
            end
            return templates unless templates.empty?
          end
        end
        []
      end
    
    class BuildEnvironment
  def initialize(*settings)
    @settings = Set.new(*settings)
  end
    
        s = 'This formula is keg-only, which means it was not symlinked into #{HOMEBREW_PREFIX}.'
    s << '\n\n#{f.keg_only_reason}'
    if f.lib.directory? || f.include.directory?
      s <<
        <<-EOS.undent_________________________________________________________72
    
      # Removes any empty directories in the formula's prefix subtree
  # Keeps any empty directions projected by skip_clean
  # Removes any unresolved symlinks
  def prune
    dirs = []
    symlinks = []
    @f.prefix.find do |path|
      if path == @f.libexec || @f.skip_clean?(path)
        Find.prune
      elsif path.symlink?
        symlinks << path
      elsif path.directory?
        dirs << path
      end
    end
    
        # Exclude cache, logs, and repository, if they are located under the prefix.
    [HOMEBREW_CACHE, HOMEBREW_LOGS, HOMEBREW_REPOSITORY].each do |dir|
      dirs.delete dir.relative_path_from(HOMEBREW_PREFIX).to_s
    end
    dirs.delete 'etc'
    dirs.delete 'var'
    
    # This formula serves as the base class for several very similar
# formulae for Amazon Web Services related tools.
class AmazonWebServicesFormula < Formula
  # Use this method to peform a standard install for Java-based tools,
  # keeping the .jars out of HOMEBREW_PREFIX/lib
  def install
    rm Dir['bin/*.cmd'] # Remove Windows versions
    libexec.install Dir['*']
    bin.install_symlink Dir['#{libexec}/bin/*'] - ['#{libexec}/bin/service']
  end
  alias_method :standard_install, :install
    
        def initialize(analytics_ingester_client: AnalyticsIngesterClient.new(GA_TRACKING))
      require 'securerandom'
      @session_id = SecureRandom.uuid
      @client = analytics_ingester_client
      @threads = []
      @launch_event_sent = false
    end
    
        def suggest_ruby_reinstall(e)
      ui = FastlaneCore::UI
      ui.error('-----------------------------------------------------------------------')
      ui.error(e.to_s)
      ui.error('')
      ui.error('SSL errors can be caused by various components on your local machine.')
      if Gem::Version.new(RUBY_VERSION) < Gem::Version.new('2.1')
        ui.error('Apple has recently changed their servers to require TLS 1.2, which may')
        ui.error('not be available to your system installed Ruby (#{RUBY_VERSION})')
      end
      ui.error('')
      ui.error('The best solution is to use the self-contained fastlane version.')
      ui.error('Which ships with a bundled OpenSSL,ruby and all gems - so you don't depend on system libraries')
      ui.error(' - Use Homebrew')
      ui.error('    - update brew with `brew update`')
      ui.error('    - install fastlane using:')
      ui.error('      - `brew cask install fastlane`')
      ui.error(' - Use One-Click-Installer:')
      ui.error('    - download fastlane at https://download.fastlane.tools')
      ui.error('    - extract the archive and double click the `install`')
      ui.error('-----------------------------------------------------------')
      ui.error('for more details on ways to install fastlane please refer the documentation:')
      ui.error('-----------------------------------------------------------')
      ui.error('        🚀       https://docs.fastlane.tools          🚀   ')
      ui.error('-----------------------------------------------------------')
      ui.error('')
      ui.error('You can also install a new version of Ruby')
      ui.error('')
      ui.error('- Make sure OpenSSL is installed with Homebrew: `brew update && brew upgrade openssl`')
      ui.error('- If you use system Ruby:')
      ui.error('  - Run `brew update && brew install ruby`')
      ui.error('- If you use rbenv with ruby-build:')
      ui.error('  - Run `brew update && brew upgrade ruby-build && rbenv install 2.3.1`')
      ui.error('  - Run `rbenv global 2.3.1` to make it the new global default Ruby version')
      ui.error('- If you use rvm:')
      ui.error('  - First run `rvm osx-ssl-certs update all`')
      ui.error('  - Then run `rvm reinstall ruby-2.3.1 --with-openssl-dir=/usr/local`')
      ui.error('')
      ui.error('If that doesn't fix your issue, please google for the following error message:')
      ui.error('  '#{e}'')
      ui.error('-----------------------------------------------------------------------')
    end
    
            UI.message('Adding git tag '#{tag}' 🎯.')
        Actions.sh(cmd.join(' '))
      end
    
            context 'when command is archive' do
          it 'adds one framework' do
            result = Fastlane::FastFile.new.parse('lane :test do
                carthage(command: '#{command}', frameworks: ['myframework'])
              end').runner.execute(:test)
            expect(result).to eq('carthage archive myframework')
          end
    
          it 'passes the deprecated pathspec parameter to path parameter' do
        with_verbose(true) do
          allow(Fastlane::Actions).to receive(:sh).with(anything, { log: true }).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add(pathspec: 'myfile.txt')
          end').runner.execute(:test)
        end
      end
    
        # wrap in double quotes if contains space
    if str =~ /\s/
      # double quotes have to be doubled if will be quoted
      str.gsub!(''', '''')
      return ''' + str + '''
    else
      return str
    end
  end
  module_function :shellescape
end

    
            it 'auto converts Hash values to Strings if allowed' do
          config_item = FastlaneCore::ConfigItem.new(key: :xcargs,
                                                     description: 'xcargs',
                                                     type: :shell_string)
    
              # Set all of our instance variables on the new class
          [self, other].each do |obj|
            obj.instance_variables.each do |key|
              # Ignore keys that start with a double underscore. This allows
              # configuration classes to still hold around internal state
              # that isn't propagated.
              if !key.to_s.start_with?('@__')
                result.instance_variable_set(key, obj.instance_variable_get(key))
              end
            end
          end
    
            # This registers a plugin. This should _NEVER_ be called by the public
        # and should only be called from within Vagrant. Vagrant will
        # automatically register V1 plugins when a name is set on the
        # plugin.
        def register(plugin)
          if !@registered.include?(plugin)
            @logger.info('Registered plugin: #{plugin.name}')
            @registered << plugin
          end
        end
    
              # We split the arguments into two: One set containing any
          # flags before a word, and then the rest. The rest are what
          # get actually sent on to the subcommand.
          argv.each_index do |i|
            if !argv[i].start_with?('-')
              # We found the beginning of the sub command. Split the
              # args up.
              main_args   = argv[0, i]
              sub_command = argv[i]
              sub_args    = argv[i + 1, argv.length - i + 1]
    
            # This contains all the synced folder implementations by name.
        #
        # @return [Registry<Symbol, Array<Class, Integer>>]
        attr_reader :synced_folders
    
    module Vagrant
  module Plugin
    module V2
      # This class maintains a list of all the registered plugins as well
      # as provides methods that allow querying all registered components of
      # those plugins as a single unit.
      class Manager
        attr_reader :registered
    
            # Registers additional pushes to be available.
        #
        # @param [String] name Name of the push.
        # @param [Hash] options List of options for the push.
        def self.push(name, options=nil, &block)
          components.pushes.register(name.to_sym) do
            [block.call, options]
          end
    
        # Iterate over the keyspace.
    def each(&block)
      @items.each do |key, _|
        yield key, get(key)
      end
    end
    
    require 'commands'
    
            if rest.empty?
          current_rule.children += child.children
        else
          rest.unshift Sass::Selector::Parent.new
          child.parsed_rules = make_sseq(sseq.subject?, *rest)
          current_rule << child
        end
    
          opts.on('-F', '--from FORMAT',
        'The format to convert from. Can be css, scss, sass.',
        'By default, this is inferred from the input filename.',
        'If there is none, defaults to css.') do |name|
        @options[:from] = name.downcase.to_sym
        raise 'sass-convert no longer supports LessCSS.' if @options[:from] == :less
        unless [:css, :scss, :sass].include?(@options[:from])
          raise 'Unknown format for sass-convert --from: #{name}'
        end
      end
    
    def source_version
  @source_version ||= File.read(File.expand_path('../VERSION', __FILE__)).strip
end
    
          def random_string(secure = defined? SecureRandom)
        secure ? SecureRandom.hex(16) : '%032x' % rand(2**128-1)
      rescue NotImplementedError
        random_string false
      end
    
            DIRECTIVES.each do |d|
          if options.key?(d)
            directives << '#{d.to_s.sub(/_/, '-')} #{options[d]}'
          end
        end
    
          def initialize(*)
        super