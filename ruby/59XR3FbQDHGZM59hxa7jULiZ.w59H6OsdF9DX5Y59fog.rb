
        
            assert_equal 'smth', AllHelpersController.helpers.config.my_var
  end
    
      def setup
    @controller = TestController.new
    @integration_session = nil
  end
    
            def read_fixture(action)
          IO.readlines(File.join(Rails.root, 'test', 'fixtures', self.class.mailer_class.name.underscore, action))
        end
    end
    
    MODE = ARGV.first || 'cpu'
PROF_OUTPUT_FILE = File.expand_path('../tmp/stackprof-#{MODE}-#{Time.now.strftime('%Y%m%d%H%M')}.dump', __dir__)
    
        # rubocop:disable Metrics/AbcSize
    def process(args, opts)
      if !args || args.empty?
        raise Jekyll::Errors::InvalidThemeName, 'You must specify a theme name.'
      end
    
        def defaults_deprecate_type(old, current)
      Jekyll.logger.warn 'Defaults:', 'The '#{old}' type has become '#{current}'.'
      Jekyll.logger.warn 'Defaults:', 'Please update your front-matter defaults to use \
                        'type: #{current}'.'
    end
  end
end

    
          #
      # The version constraint required to activate a given gem.
      # Usually the gem version requirement is '> 0,' because any version
      # will do. In the case of jekyll-docs, however, we require the exact
      # same version as Jekyll.
      #
      # Returns a String version constraint in a parseable form for
      # RubyGems.
      def version_constraint(gem_name)
        return '= #{Jekyll::VERSION}' if gem_name.to_s.eql?('jekyll-docs')
        '> 0'
      end
    
    # A logger that delays messages until they're explicitly flushed to an inner
# logger.
#
# This can be installed around the current logger by calling \{#install!}, and
# the original logger can be replaced by calling \{#uninstall!}. The log
# messages can be flushed by calling \{#flush}.
class Sass::Logger::Delayed < Sass::Logger::Base
  # Installs a new delayed logger as the current Sass logger, wrapping the
  # original logger.
  #
  # This can be undone by calling \{#uninstall!}.
  #
  # @return [Sass::Logger::Delayed] The newly-created logger.
  def self.install!
    logger = Sass::Logger::Delayed.new(Sass.logger)
    Sass.logger = logger
    logger
  end
    
            def log_level(name, options = {})
          if options[:prepend]
            level = log_levels.values.min
            level = level.nil? ? 0 : level - 1
          else
            level = log_levels.values.max
            level = level.nil? ? 0 : level + 1
          end
          log_levels.update(name => level)
          define_logger(name)
        end
    
            def autocorrect(node)
          redundant_regex?(node) do |receiver, regex_str|
            receiver, regex_str = regex_str, receiver if receiver.is_a?(String)
            regex_str = regex_str[2..-1] # drop \A anchor
            regex_str = interpret_string_escapes(regex_str)
    
      context 'called with null values' do
    it 'writes rules for other three' do
      ruleset = 'border-top-width: 11px; ' +
                'border-right-width: 12px; ' +
                'border-left-width: 13px;'
      bad_rule = 'border-bottom-width: null;'
    
          expect('.all-buttons-active').to have_ruleset(ruleset)
    end
  end
    
      context 'called with one size' do
    it 'applies same width to all sides' do
      rule = 'padding: 1px'
    
          expect('.prefix--webkit').to have_ruleset(rule)
    end
  end