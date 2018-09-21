
        
          at_exit do
    if ENV['KEEP_RUNNING']
      puts 'Vagrant vm will be left up because KEEP_RUNNING is set.'
      puts 'Rerun without KEEP_RUNNING set to cleanup the vm.'
    else
      vagrant_cli_command('destroy -f')
    end
  end
    
        def display_error_message(ex)
      unless options.backtrace
        Rake.application.options.suppress_backtrace_pattern = backtrace_pattern if backtrace_pattern
        trace '(Backtrace restricted to imported tasks)'
      end
    
          def add_roles(roles)
        Array(roles).each { |role| add_role(role) }
        self
      end
      alias roles= add_roles
    
    module Sinatra
  class Application < Base
    
          TEMPLATE.result(binding)
    end
    
    desc 'generate documentation'
task :doc => 'doc:all'
    
          DIRECTIVES = %i(base_uri child_src connect_src default_src
                      font_src form_action frame_ancestors frame_src
                      img_src manifest_src media_src object_src
                      plugin_types referrer reflected_xss report_to
                      report_uri require_sri_for sandbox script_src
                      style_src worker_src).freeze
    
      def plugins_args_human
    plugins_arg.join(', ')
  end
end # class Logstash::PluginManager

    
      def filtered_specs
    @filtered_specs ||= begin
                          # start with all locally installed plugin gems regardless of the Gemfile content
                          specs = LogStash::PluginManager.find_plugins_gem_specs
    
        desc 'Generate a valid ssh-config'
    task :ssh_config do
      require 'json'
      # Loop until the Vagrant box finishes SSH bootstrap
      raw_ssh_config = Stud.try(50.times, LogStash::CommandExecutor::CommandError) do
          LogStash::VagrantHelpers.fetch_config.stdout.split('\n');
      end
      parsed_ssh_config = LogStash::VagrantHelpers.parse(raw_ssh_config)
      File.write('.vm_ssh_config', parsed_ssh_config.to_json)
    end
    
            def load_order(lock = false)
          @order = Spree::Order.lock(lock).find_by!(number: params[:id])
          raise_insufficient_quantity and return if @order.insufficient_stock_lines.present?
          @order.state = params[:state] if params[:state]
          state_callback(:before)
        end
    
              can_event = 'can_#{@event}?'
    
            def create
          authorize! :create, Property
          @property = Spree::Property.new(property_params)
          if @property.save
            respond_with(@property, status: 201, default_template: :show)
          else
            invalid_resource!(@property)
          end
        end
    
            def destroy
          @stock_item = StockItem.accessible_by(current_ability, :destroy).find(params[:id])
          @stock_item.destroy
          respond_with(@stock_item, status: 204)
        end
    
            private
    
            def create
          authorize! :create, StockMovement
          @stock_movement = scope.new(stock_movement_params)
          if @stock_movement.save
            respond_with(@stock_movement, status: 201, default_template: :show)
          else
            invalid_resource!(@stock_movement)
          end
        end