
        
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
    
            # Configures the given list of networks on the virtual machine.
        #
        # The networks parameter will be an array of hashes where the hashes
        # represent the configuration of a network interface. The structure
        # of the hash will be roughly the following:
        #
        # {
        #   type:      :static,
        #   ip:        '192.168.33.10',
        #   netmask:   '255.255.255.0',
        #   interface: 1
        # }
        #
        def configure_networks(networks)
          raise BaseError, _key: :unsupported_configure_networks
        end
    
      before_action :set_filters, only: :index
  before_action :set_filter, only: [:edit, :update, :destroy]
    
          if @custom_emoji.update(resource_params)
        log_action :update, @custom_emoji
        flash[:notice] = I18n.t('admin.custom_emojis.updated_msg')
      else
        flash[:alert] =  I18n.t('admin.custom_emojis.update_failed_msg')
      end
      redirect_to admin_custom_emojis_path(page: params[:page], **@filter_params)
    end
    
    module Admin
  class DomainBlocksController < BaseController
    before_action :set_domain_block, only: [:show, :destroy]
    
        def destroy
      authorize @email_domain_block, :destroy?
      @email_domain_block.destroy!
      log_action :destroy, @email_domain_block
      redirect_to admin_email_domain_blocks_path, notice: I18n.t('admin.email_domain_blocks.destroyed_msg')
    end
    
      def hub_secret
    params['hub.secret']
  end
    
    desc 'Start a dummy (test) Rails app server'
task :dummy_rails do
  require 'rack'
  require 'term/ansicolor'
  port = ENV['PORT'] || 9292
  puts %Q(Starting on #{Term::ANSIColor.cyan 'http://localhost:#{port}'})
  Rack::Server.start(
    config: 'test/dummy_rails/config.ru',
    Port: port)
end
    
      # Precompile additional assets.
  # application.js, application.css, and all non-JS/CSS in app/assets folder are already added.
  # config.assets.precompile += %w( search.js )
    
            # JRuby chokes when trying to import files from JARs when the path starts with './'.
        ret.map {|f, s| [f.sub(%r{^\./}, ''), s]}
      end
    
    # This is the version that ships with OS X 10.10, so be sure we test against it.
# At the same time, the 1.7.7 version won't install cleanly on Ruby > 2.2,
# so we use a fork that makes a trivial change to a macro invocation.
gem 'json', :git => 'https://github.com/segiddins/json.git', :branch => 'seg-1.7.7-ruby-2.2'
    
        %w[iOS macOS].each do |platform|
        abstract_target '#{platform} Pods' do
            project '#{platform} Modules.xcodeproj'
    
            def update
          @option_type = Spree::OptionType.accessible_by(current_ability, :update).find(params[:id])
          if @option_type.update_attributes(option_type_params)
            render :show
          else
            invalid_resource!(@option_type)
          end
        end
    
            def create
          authorize! :create, Spree::OptionValue
          @option_value = scope.new(option_value_params)
          if @option_value.save
            render :show, status: 201
          else
            invalid_resource!(@option_value)
          end
        end
    
            def authorize
          perform_payment_action(:authorize)
        end
    
              Spree::Cart::AddItem.call(order: @shipment.order,
                                    variant: variant,
                                    quantity: quantity,
                                    options: { shipment: @shipment })
    
            def destroy
          authorize! :destroy, stock_location
          stock_location.destroy
          respond_with(stock_location, status: 204)
        end
    
          arguments.flatten
    end
    
        def prepare_package(explicit_plugins, temp_path)
      FileUtils.mkdir_p(::File.join(temp_path, LOGSTASH_DIR))
      FileUtils.mkdir_p(::File.join(temp_path, DEPENDENCIES_DIR))
    
      def execute
    signal_deprecation_warning_for_pack
    
    project_versions_yaml_path = File.expand_path('../versions.yml', File.dirname(__FILE__))
if File.exist?(project_versions_yaml_path)
  # we need to copy the project level versions.yml into the gem root
  # to be able to package it into the gems file structure
  # as the require 'logstash-core-plugin-api/version' loads the yaml file from within the gem root.
  #
  # we ignore the copy in git and we overwrite an existing file
  # each time we build the logstash-core gem
  original_lines = IO.readlines(project_versions_yaml_path)
  original_lines << ''
  original_lines << '# This is a copy the project level versions.yml into this gem's root and it is created when the gemspec is evaluated.'
  gem_versions_yaml_path = File.expand_path('./versions-gem-copy.yml', File.dirname(__FILE__))
  File.open(gem_versions_yaml_path, 'w') do |new_file|
    # create or overwrite
    new_file.puts(original_lines)
  end
end
    
          options = {:debug => ENV['LS_QA_DEBUG']}
      puts 'Destroying #{machines}'
      LogStash::VagrantHelpers.destroy(machines, options)
      puts 'Bootstrapping #{machines}'
      LogStash::VagrantHelpers.bootstrap(machines, options)
    end
    
          it 'list the plugin with his version' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --verbose #{plugin_name}')
        expect(result).to run_successfully_and_output(/^#{plugin_name} \(\d+\.\d+.\d+\)/)
      end
    end
  end
end
