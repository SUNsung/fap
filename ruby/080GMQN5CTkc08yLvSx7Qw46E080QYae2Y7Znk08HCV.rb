
        
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

    
              new_theme_name = args.join('_')
          theme = Jekyll::ThemeBuilder.new(new_theme_name, opts)
          Jekyll.logger.abort_with 'Conflict:', '#{theme.path} already exists.' if theme.path.exist?
    
              # This is too noisy even for --verbose, but uncomment if you need it for
          # a specific WebSockets issue.  Adding ?LR-verbose=true onto the URL will
          # enable logging on the client side.
          # em_opts[:debug] = true
    
    module Docs
  class Entry
    class Invalid < StandardError; end
    
        def as_json
      @pages
    end
    
        def load_capybara_selenium
      require 'capybara/dsl'
      require 'selenium/webdriver'
      Capybara.register_driver :chrome do |app|
        options = Selenium::WebDriver::Chrome::Options.new(args: %w[headless disable-gpu])
        Capybara::Selenium::Driver.new(app, browser: :chrome, options: options)
      end
      Capybara.javascript_driver = :chrome
      Capybara.current_driver = :chrome
      Capybara.run_server = false
      Capybara
    end
    
        def self.subscribe_to(notifier)
      attach_to(namespace, new, notifier)
    end
    
            if mod
          if name == 'Index'
            return slug.split('/')[1..-2].join('/')
          elsif name == 'Angular'
            return slug.split('/').last.split('-').first
          end
        end
    
            # Remove ng-* attributes
        css('*').each do |node|
          node.attributes.each_key do |attribute|
            node.remove_attribute(attribute) if attribute.start_with? 'ng-'
          end
        end
    
    module Vagrant
  # MachineIndex is able to manage the index of created Vagrant environments
  # in a central location.
  #
  # The MachineIndex stores a mapping of UUIDs to basic information about
  # a machine. The UUIDs are stored with the Vagrant environment and are
  # looked up in the machine index.
  #
  # The MachineIndex stores information such as the name of a machine,
  # the directory it was last seen at, its last known state, etc. Using
  # this information, we can load the entire {Machine} object for a machine,
  # or we can just display metadata if needed.
  #
  # The internal format of the data file is currently JSON in the following
  # structure:
  #
  #   {
  #     'version': 1,
  #     'machines': {
  #       'uuid': {
  #         'name': 'foo',
  #         'provider': 'vmware_fusion',
  #         'data_path': '/path/to/data/dir',
  #         'vagrantfile_path': '/path/to/Vagrantfile',
  #         'state': 'running',
  #         'updated_at': '2014-03-02 11:11:44 +0100'
  #       }
  #     }
  #   }
  #
  class MachineIndex
    include Enumerable
    
            # Executes a command on the remote machine with administrative
        # privileges. See {#execute} for documentation, as the API is the
        # same.
        #
        # @see #execute
        def sudo(command, opts=nil)
        end
    
            # Registers additional providers to be available.
        #
        # @param [Symbol] name Name of the provider.
        def self.provider(name=UNSET_VALUE, &block)
          data[:providers] ||= Registry.new
    
            # This is the method called to provision the system. This method
        # is expected to do whatever necessary to provision the system (create files,
        # SSH, etc.)
        def provision!
        end
    
      def symlinked?(symlink_path, target_path)
    '[ #{symlink_path} -ef #{target_path} ]'
  end
    
            if callable_without_parameters?(value_to_evaluate)
          super(key, assert_valid_later(key, value_to_evaluate), &nil)
        else
          assert_valid_now(key, value_to_evaluate)
          super
        end
      end
    
            private
    
            private
    
            def create
          authorize! :create, Taxon
          @taxon = Spree::Taxon.new(taxon_params)
          @taxon.taxonomy_id = params[:taxonomy_id]
          taxonomy = Spree::Taxonomy.find_by(id: params[:taxonomy_id])