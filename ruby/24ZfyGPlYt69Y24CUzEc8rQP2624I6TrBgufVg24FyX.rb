
        
        module ActionView #:nodoc:
  # = Action View Raw Output Helper
  module Helpers #:nodoc:
    module OutputSafetyHelper
      # This method outputs without escaping a string. Since escaping tags is
      # now default, this can be used when you don't want Rails to automatically
      # escape tags. This is not recommended if the data is coming from the user's
      # input.
      #
      # For example:
      #
      #  raw @user.name
      #  # => 'Jimmy <alert>Tables</alert>'
      def raw(stringish)
        stringish.to_s.html_safe
      end
    
              def render_collection_for(builder_class, &block)
            options = @options.stringify_keys
            rendered_collection = render_collection do |item, value, text, default_html_options|
              builder = instantiate_builder(builder_class, item, value, text, default_html_options)
    
    module ActionView
  module Helpers
    module Tags # :nodoc:
      class DateSelect < Base # :nodoc:
        def initialize(object_name, method_name, template_object, options, html_options)
          @html_options = html_options
    
              content_is_options = content_or_options.is_a?(Hash)
          if content_is_options
            options.merge! content_or_options
            @content = nil
          else
            @content = content_or_options
          end
    
        initializer 'action_view.setup_action_pack' do |app|
      ActiveSupport.on_load(:action_controller) do
        ActionView::RoutingUrlFor.include(ActionDispatch::Routing::UrlFor)
      end
    end
    
    # Test https://github.com/jekyll/jekyll/pull/6735#discussion_r165499868
# ------------------------------------------------------------------------
def check_with_regex(content)
  !content.to_s.match?(%r!{[{%]!)
end
    }
    }
    
    #
    
            def bundle_install(path)
          Jekyll.logger.info 'Running bundle install in #{path.cyan}...'
          Dir.chdir(path) do
            exe = Gem.bin_path('bundler', 'bundle')
            process, output = Jekyll::Utils::Exec.run('ruby', exe, 'install')
    
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
    
            def self.disabled_via_active_directory?(dn, adapter)
          adapter.dn_matches_filter?(dn, AD_USER_DISABLED)
        end
    
          def user
        find_sessionless_user || find_user_from_warden
      end
    
            def value_width
          @status ? 54 : 58
        end
    
            def initialize(project, ref)
          @project = project
          @ref = ref
    
          # Install the gems to make them available locally when bundler does his local resolution
      post_install_messages = []
      pack.gems.each do |packed_gem|
        PluginManager.ui.debug('Installing, #{packed_gem.name}, version: #{packed_gem.version} file: #{packed_gem.file}')
        post_install_messages << LogStash::PluginManager::GemInstaller::install(packed_gem.file, packed_gem.plugin?)
      end
    
      gem.files         = Dir.glob(['logstash-core-plugin-api.gemspec', 'lib/**/*.rb', 'spec/**/*.rb'])
  gem.test_files    = gem.files.grep(%r{^(test|spec|features)/})
  gem.name          = 'logstash-core-plugin-api'
  gem.require_paths = ['lib']
  gem.version       = LOGSTASH_CORE_PLUGIN_API
    
        desc 'Bootstrap all the VM's used for this tests'
    task :setup, :platform do |t, args|
      config   = PlatformConfig.new
      experimental = (ENV['LS_QA_EXPERIMENTAL_OS'].to_s.downcase || 'false') == 'true'
      machines = config.select_names_for(args[:platform], {'experimental' => experimental})
    
              it 'allow to install a specific version' do
            command = logstash.run_command_in_path('bin/logstash-plugin install --no-verify --version 0.1.0 logstash-filter-qatest')
            expect(command).to install_successfully
            expect(logstash).to have_installed?('logstash-filter-qatest', '0.1.0')
          end
        end
      end