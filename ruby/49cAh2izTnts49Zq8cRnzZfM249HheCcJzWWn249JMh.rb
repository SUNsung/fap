
        
        # Test if processing content string without any Liquid constructs, via Liquid,
# is slower than checking whether constructs exist ( using `String#include?` )
# and return-ing the 'plaintext' content string as is..
#
# Ref: https://github.com/jekyll/jekyll/pull/6735
    
    Before do
  FileUtils.rm_rf(Paths.test_dir) if Paths.test_dir.exist?
  FileUtils.mkdir_p(Paths.test_dir) unless Paths.test_dir.directory?
  Dir.chdir(Paths.test_dir)
  @timezone_before_scenario = ENV['TZ']
end
    
      s.summary       = 'A simple, blog aware, static site generator.'
  s.description   = 'Jekyll is a simple, blog aware, static site generator.'
    
            def url_valid?(url)
          Addressable::URI.parse(url)
          true
        # Addressable::URI#parse only raises a TypeError
        # https://git.io/vFfbx
        rescue TypeError
          Jekyll.logger.warn 'Warning:', 'The site URL does not seem to be valid, '\
              'check the value of `url` in your config file.'
          false
        end
    
    def check_link(uri)
  HTTParty.head(uri, :verify => false).code.to_i.tap do |status|
    if (400..422).include?(status)
      if status != 403 && !uri.exclude?('udemy.com')
        raise 'Request had status #{status}'
      else
        putc('S')
      end
    end
  end
end
    
    Then /^I should see an image in the publisher$/ do
  photo_in_publisher.should be_present
end
    
    Before do |scenario|
  Devise.mailer.deliveries = []
  page.driver.headers = if scenario.source_tag_names.include? '@mobile'
                          {'User-Agent' => 'Mozilla/5.0 (Mobile; rv:18.0) Gecko/18.0 Firefox/18.0'}
                        else
                          {}
                        end
    
      def navigate_to(page_name)
    path = path_to(page_name)
    if path.is_a?(Hash)
      visit(path[:path])
      await_elem = path[:special_elem]
      find(await_elem.delete(:selector), await_elem)
    else
      visit(path)
    end
  end
    
        def render(context)
      if parts = @text.match(/([a-zA-Z\d]*) (.*)/)
        gist, file = parts[1].strip, parts[2].strip
      else
        gist, file = @text.strip, ''
      end
      if gist.empty?
        ''
      else
        script_url = script_url_for gist, file
        code       = get_cached_gist(gist, file) || get_gist_from_web(gist, file)
        html_output_for script_url, code
      end
    end
    
    require 'pathname'
require './plugins/octopress_filters'
    
          install_list.concat(dependencies)
    end
  end
    
        private
    def uncompress(source)
      temporary_directory = Stud::Temporary.pathname
      LogStash::Util::Zip.extract(source, temporary_directory, LOGSTASH_PATTERN_RE)
      temporary_directory
    rescue Zip::Error => e
      # OK Zip's handling of file is bit weird, if the file exist but is not a valid zip, it will raise
      # a `Zip::Error` exception with a file not found message...
      raise InvalidPackError, 'Cannot uncompress the zip: #{source}'
    end
    
            it 'should raise a configuration error' do
          expect do
            plugin_class.new('oneString' => '${NoSuchVariable}')
          end.to raise_error(LogStash::ConfigurationError)
        end
      end
    
              it 'allow to install a specific version' do
            command = logstash.run_command_in_path('bin/logstash-plugin install --no-verify --version 0.1.0 logstash-filter-qatest')
            expect(command).to install_successfully
            expect(logstash).to have_installed?('logstash-filter-qatest', '0.1.0')
          end
        end
      end
    
        autoload :Cookies
    autoload :Validations
    autoload :ErrorFormatter
    autoload :Formatter
    autoload :Parser
    autoload :Request
    autoload :Env, 'grape/util/env'
    autoload :Json, 'grape/util/json'
    autoload :Xml, 'grape/util/xml'
  end
    
          # (see #cascade?)
      def cascade(value = nil)
        if value.nil?
          inheritable_setting.namespace_inheritable.keys.include?(:cascade) ? !namespace_inheritable(:cascade).nil? : true
        else
          namespace_inheritable(:cascade, value)
        end
      end
    
            # Execute the given block after validations and coercions, but before
        # any endpoint code.
        def after_validation(&block)
          namespace_stackable(:after_validations, block)
        end
    
              def config_context.success(*args)
            entity(*args)
          end
    
                  in_setting = app.top_level_setting
    
            # Opens a root-level ParamsScope, defining parameter coercions and
        # validations for the endpoint.
        # @yield instance context of the new scope
        def params(&block)
          Grape::Validations::ParamsScope.new(api: self, type: Hash, &block)
        end
    
          validators = validator_factories.map(&:create_validator)